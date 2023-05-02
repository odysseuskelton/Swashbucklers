// Fill out your copyright notice in the Description page of Project Settings.


#include "GameStates/SBGameState.h"
#include "Kismet/GameplayStatics.h"
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

void ASBGameState::BuildingDestroyed(EBuildingType BuildingType, ABuilding* BuildingDestroyed)
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
		MulticastBuildingDestroyed(BuildingType, BuildingDestroyed);
	}
}

void ASBGameState::MulticastBuildingDestroyed_Implementation(EBuildingType BuildingType, ABuilding* BuildingDestroyed)
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
