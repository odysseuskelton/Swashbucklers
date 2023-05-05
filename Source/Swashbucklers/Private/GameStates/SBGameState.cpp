// Fill out your copyright notice in the Description page of Project Settings.


#include "GameStates/SBGameState.h"
#include "GameplayAbilities/SBAttributeSet.h"
#include "Kismet/GameplayStatics.h"
#include "Interfaces/PlayerInterface.h"
#include "Interfaces/CaptainStateInterface.h"
#include "PlayerStates/CaptainState.h"
#include "HUD/CaptainHUD.h"
#include "Buildings/Building.h"
#include "PlayerControllers/CaptainController.h"
#include "Sound/AmbientSound.h"
#include "Components/AudioComponent.h"
#include "Weapons/Cannon.h"
#include "Net/UnrealNetwork.h"

void ASBGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ASBGameState, bIsInLobby);
	DOREPLIFETIME(ASBGameState, PirateTeam);
	DOREPLIFETIME(ASBGameState, PrivateerTeam);
	DOREPLIFETIME(ASBGameState, TeamCapturingTreasure);
	DOREPLIFETIME(ASBGameState, TreasuresCaptured);
	DOREPLIFETIME(ASBGameState, TreasureActiveTime);
	DOREPLIFETIME(ASBGameState, NewestCaptainState);
	DOREPLIFETIME(ASBGameState, CaptainStates);
	DOREPLIFETIME(ASBGameState, TreasureLocation);
}

void ASBGameState::BeginPlay()
{
	Super::BeginPlay();

}


void ASBGameState::UpdateTeams(TArray<FString> UpdatedPirateTeam, TArray<FString> UpdatedPrivateerTeam, ACaptainState* NewCaptainState)
{
	PirateTeam = UpdatedPirateTeam;
	PrivateerTeam = UpdatedPrivateerTeam;	

//	RegisterCaptainState(NewCaptainState);

}

void ASBGameState::OnRep_UpdateTeams()
{
	UWorld* World = GetWorld();
	if (World)
	{
		ACaptainController* CaptainController = World->GetFirstPlayerController<ACaptainController>();
		if (CaptainController)
		{
			CaptainController->UpdateTeamsOnClient(PirateTeam, PrivateerTeam);
		}
	}
}

void ASBGameState::RegisterCaptainState(ACaptainState* CaptainState)
{
	if (!CaptainState) return;
	NewestCaptainState = CaptainState;

	ACaptainHUD* CaptainHUD = GetWorld()->GetFirstPlayerController()->GetHUD<ACaptainHUD>();
	if (CaptainHUD)
	{
		CaptainHUD->AddPlayerToLeaderboard(CaptainState);
	}
	if (!CaptainStates.Contains(CaptainState))
	{
		CaptainStates.Add(CaptainState);
	}
}

void ASBGameState::OnRep_RegisterCaptainState(ACaptainState* CaptainState)
{
	ACaptainHUD* CaptainHUD = GetWorld()->GetFirstPlayerController()->GetHUD<ACaptainHUD>();
	if (CaptainHUD)
	{
		CaptainHUD->AddPlayerToLeaderboard(CaptainState);
	}
}

void ASBGameState::BuildingDestroyed(EBuildingType BuildingType, ABuilding* BuildingDestroyed, AActor* InstigatorActor)
{
	if (HasAuthority())
	{

		OnBuildingDestroyed.Broadcast(BuildingType);

		if ((BuildingType == EBuildingType::EBT_PirateHideout || BuildingType == EBuildingType::EBT_PrivateerHQ) && bGameOver == false)
		{
			TArray<AActor*> MusicActors;
			UGameplayStatics::GetAllActorsWithTag(this, FName("AmbientMusic"), MusicActors);
			for (AActor* MusicActor : MusicActors)
			{
				AAmbientSound* AmbientSound = Cast<AAmbientSound>(MusicActor);
				if (AmbientSound)
				{
					AmbientSound->GetAudioComponent()->SetPaused(true);
				}
			}
			bGameOver = true;
		}

		if (BuildingType == EBuildingType::EBT_Tower)
		{
			TArray<AActor*> OutActors;
			
			UGameplayStatics::GetAllActorsWithInterface(this, UCaptainStateInterface::StaticClass(), OutActors);

			for (AActor* Actor : OutActors)
			{
				ICaptainStateInterface* CaptainStateInterface = Cast<ICaptainStateInterface>(Actor);
				if (CaptainStateInterface->GetPlayerTeam() != BuildingDestroyed->GetBuildingTeam())
				{
					CaptainStateInterface->SendPlayerPOE(BuildingDestroyed->GetBuildingBounty());
				}
			}
		}
		MulticastBuildingDestroyed(BuildingType, BuildingDestroyed, InstigatorActor);
	}
}

void ASBGameState::MulticastBuildingDestroyed_Implementation(EBuildingType BuildingType, ABuilding* BuildingDestroyed, AActor* InstigatorActor)
{
	OnBuildingDestroyed.Broadcast(BuildingType);

	if (BuildingType == EBuildingType::EBT_PirateHideout || BuildingType == EBuildingType::EBT_PrivateerHQ)
	{
		TArray<AActor*> MusicActors;
		UGameplayStatics::GetAllActorsWithTag(this, FName("AmbientMusic"), MusicActors);
		for (AActor* MusicActor : MusicActors)
		{
			AAmbientSound* AmbientSound = Cast<AAmbientSound>(MusicActor);
			if (AmbientSound)
			{
				AmbientSound->GetAudioComponent()->SetPaused(true);
			}
		}
	}

	if (BuildingType == EBuildingType::EBT_Tower)
	{
		ACaptainState* CapState = Cast<ACaptainState>(InstigatorActor);
		if (CapState)
		{
			CapState->GetAttributeSet()->AwardTower();
		}
	}
	
}

void ASBGameState::PlayerKilled(ACaptainState* SunkCaptainState, ACaptainState* InstigatorCaptainState)
{
	if (HasAuthority())
	{

		ACaptainController* CapController = Cast<ACaptainController>(GetWorld()->GetFirstPlayerController());
		if (CapController)
		{
			ACaptainHUD* CapHUD = CapController->GetHUD<ACaptainHUD>();
			if (CapHUD)
			{
				CapHUD->SendDeathAnnouncementToHUD(SunkCaptainState->GetPlayerName(), InstigatorCaptainState->GetPlayerName(), SunkCaptainState->GetPlayerTeam(), InstigatorCaptainState->GetPlayerTeam());
			}
		}
	}
	else
	{
		ClientPlayerKilled(SunkCaptainState, InstigatorCaptainState);

	}
}

void ASBGameState::ClientPlayerKilled_Implementation(ACaptainState* SunkCaptainState, ACaptainState* InstigatorCaptainState)
{
	if (SunkCaptainState && InstigatorCaptainState)
	{
		ACaptainController* CapController = Cast<ACaptainController>(GetWorld()->GetFirstPlayerController());
		if (CapController)
		{
			ACaptainHUD* CapHUD = CapController->GetHUD<ACaptainHUD>();
			if (CapHUD)
			{
				CapHUD->SendDeathAnnouncementToHUD(SunkCaptainState->GetPlayerName(), InstigatorCaptainState->GetPlayerName(), SunkCaptainState->GetPlayerTeam(), InstigatorCaptainState->GetPlayerTeam());
			}
		}
	}
}

void ASBGameState::UpdatePlayerKills(ACaptainState* CaptainState, int32 PlayerKills)
{
	if (HasAuthority())
	{
		if (CaptainState)
		{
			ACaptainController* CapController = Cast<ACaptainController>(GetWorld()->GetFirstPlayerController());
			if (CapController)
			{
				ACaptainHUD* CapHUD = CapController->GetHUD<ACaptainHUD>();
				if (CapHUD)
				{
					CapHUD->UpdateHUDKills(CaptainState, PlayerKills);
				}
			}
		}
	}
	else
	{
		ClientUpdatePlayerKills(CaptainState, PlayerKills);
	}
}

void ASBGameState::UpdateTowerKills(ACaptainState* CaptainState, int32 TowerKills)
{
	if (HasAuthority())
	{
		if (CaptainState)
		{
			ACaptainController* CapController = Cast<ACaptainController>(GetWorld()->GetFirstPlayerController());
			if (CapController)
			{
				ACaptainHUD* CapHUD = CapController->GetHUD<ACaptainHUD>();
				if (CapHUD)
				{
					CapHUD->UpdateHUDTowers(CaptainState, TowerKills);
				}
			}
		}
	}
	else
	{
		ClientUpdateTowerKills(CaptainState, TowerKills);
	}
}

void ASBGameState::ClientUpdateTowerKills_Implementation(ACaptainState* CaptainState, int32 TowerKills)
{
	if (CaptainState)
	{
		ACaptainController* CapController = Cast<ACaptainController>(GetWorld()->GetFirstPlayerController());
		if (CapController)
		{
			ACaptainHUD* CapHUD = CapController->GetHUD<ACaptainHUD>();
			if (CapHUD)
			{
				CapHUD->UpdateHUDTowers(CaptainState, TowerKills);
			}
		}
	}
}

void ASBGameState::ClientUpdatePlayerKills_Implementation(ACaptainState* CaptainState, int32 PlayerKills)
{
	if (CaptainState)
	{
		ACaptainController* CapController = Cast<ACaptainController>(GetWorld()->GetFirstPlayerController());
		if (CapController)
		{
			ACaptainHUD* CapHUD = CapController->GetHUD<ACaptainHUD>();
			if (CapHUD)
			{
				CapHUD->UpdateHUDKills(CaptainState, PlayerKills);
			}
		}
	}
}

void ASBGameState::PlayerBountyChanged(ACaptainState* CapState, int32 Bounty)
{
	if (HasAuthority())
	{
		ACaptainController* CapController = Cast<ACaptainController>(GetWorld()->GetFirstPlayerController());
		if (CapController)
		{
			ACaptainHUD* CapHUD = CapController->GetHUD<ACaptainHUD>();
			if (CapHUD)
			{
				CapHUD->UpdatePlayerBountyOnLeaderboard(CapState, Bounty);
			}
		}
	}
	else
	{
		ClientPlayerBountyChanged(CapState, Bounty);

	}
}

void ASBGameState::ClientPlayerBountyChanged_Implementation(ACaptainState* CapState, int32 Bounty)
{
	ACaptainController* CapController = Cast<ACaptainController>(GetWorld()->GetFirstPlayerController());
	if (CapController)
	{
		ACaptainHUD* CapHUD = CapController->GetHUD<ACaptainHUD>();
		if (CapHUD)
		{
			CapHUD->UpdatePlayerBountyOnLeaderboard(CapState, Bounty);
		}
	}
}


void ASBGameState::ExtraHeartPiece()
{
	MulticastExtraHeartPiece();
}

void ASBGameState::MulticastExtraHeartPiece_Implementation()
{
	TArray<AActor*> CannonActors;

	UGameplayStatics::GetAllActorsOfClass(this, ACannon::StaticClass(), CannonActors);

	for (AActor* Cannon : CannonActors)
	{
		ACannon* CannonToModify = Cast<ACannon>(Cannon);
		if (CannonToModify)
		{
			CannonToModify->ExtraSoundsOnCannonball = true;
		}
	}
}

void ASBGameState::SetIsInLobby(bool bUpdateIsInLobby)
{
	bIsInLobby = bUpdateIsInLobby;
}

bool ASBGameState::GetIsInLobby()
{
	return bIsInLobby;
}

void ASBGameState::SetTreasuresCaptured(int32 NumberOfCaptures, float TimeTreasureActive)
{
	TreasureActiveTime = TimeTreasureActive;
	TreasuresCaptured = NumberOfCaptures;

	ACaptainController* CapController = Cast<ACaptainController>(GetWorld()->GetFirstPlayerController());

	if (CapController)
	{
		CapController->SetNumberOfCaptures(TreasuresCaptured);
		CapController->SetTreasureActiveTime(TreasureActiveTime);
	}

}

void ASBGameState::TreasureCaptureCredit(TArray<AActor*> ActorsOnPoint)
{
	for (AActor* CapturingActor : ActorsOnPoint)
	{
		IPlayerInterface* CapturingPlayerInterface = Cast<IPlayerInterface>(CapturingActor);
		if (CapturingPlayerInterface)
		{
			ACaptainState* CapState = CapturingPlayerInterface->GetPlayerCaptainState();
			if (CapState)
			{
				CapState->GetAttributeSet()->AwardCapture();
			}
		}
	}
	
}

void ASBGameState::UpdateCaptures(ACaptainState* CaptainState, int32 Captures)
{
	if (HasAuthority())
	{
		if (CaptainState)
		{
			ACaptainController* CapController = Cast<ACaptainController>(GetWorld()->GetFirstPlayerController());
			if (CapController)
			{
				ACaptainHUD* CapHUD = CapController->GetHUD<ACaptainHUD>();
				if (CapHUD)
				{
					CapHUD->UpdateHUDCaptures(CaptainState, Captures);
				}
			}
		}
	}
	else
	{
		ClientUpdateHUDCaptures(CaptainState, Captures);
	}
}

void ASBGameState::ClientUpdateHUDCaptures_Implementation(ACaptainState* CaptainState, int32 Captures)
{
	if (CaptainState)
	{
		ACaptainController* CapController = Cast<ACaptainController>(GetWorld()->GetFirstPlayerController());
		if (CapController)
		{
			ACaptainHUD* CapHUD = CapController->GetHUD<ACaptainHUD>();
			if (CapHUD)
			{
				CapHUD->UpdateHUDCaptures(CaptainState, Captures);
			}
		}
	}
}

void ASBGameState::OnRep_TreasureCapturesUpdate()
{
	ACaptainController* CapController = Cast<ACaptainController>(GetWorld()->GetFirstPlayerController());

	if (CapController)
	{
		CapController->SetNumberOfCaptures(TreasuresCaptured);
		CapController->SetTreasureActiveTime(TreasureActiveTime);
	}
}


void ASBGameState::OnRep_TeamCapturedTreasure()
{
	ACaptainController* CapController = Cast<ACaptainController>(GetWorld()->GetFirstPlayerController());
	if (CapController)
	{
		CapController->HandleTreasureCaptured();
	}
}
