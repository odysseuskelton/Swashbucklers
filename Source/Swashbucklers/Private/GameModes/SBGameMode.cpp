// Fill out your copyright notice in the Description page of Project Settings.


#include "GameModes/SBGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "GameStates/SBGameState.h"
#include "GameFramework/PlayerStart.h"
#include "PlayerControllers/CaptainController.h"
#include "PlayerStates/CaptainState.h"
#include "GameInstance/SBGameInstance.h"

#include "CapturePoints/CapturePoint.h"
#include "Buildings/Tower.h"
#include "Ships/Ship.h"
#include "Ships/AIShip.h"
#include "GameFramework/FloatingPawnMovement.h"

#include "TimerManager.h"

namespace MatchState
{
	const FName WaitingForTreasureToSpawn = FName("WaitingForTreasureToSpawn");
	const FName TreasureSpawned = FName("TreasureSpawned");
	const FName TreasureCaptured = FName("TreasureCaptured");

}

ASBGameMode::ASBGameMode()
{
	bDelayedStart = true;

}

void ASBGameMode::BeginPlay()
{
	Super::BeginPlay();

	ASBGameState* SBGameState = GetGameState<ASBGameState>();
	if (SBGameState)
	{
		SBGameState->SetIsInLobby(false);
	}

	LevelStartingTime = GetWorld()->GetTimeSeconds();

	TArray<AActor*> PirateGoals;
	UGameplayStatics::GetAllActorsWithTag(this, FName("PirateGoal"), PirateGoals);
	if (!PirateGoals.IsEmpty())
	{
		PirateGoal = PirateGoals[0];
	}

	TArray<AActor*> PrivateerGoals;
	UGameplayStatics::GetAllActorsWithTag(this, FName("PrivateerGoal"), PrivateerGoals);
	if (!PrivateerGoals.IsEmpty())
	{
		PrivateerGoal = PrivateerGoals[0];
	}

}

void ASBGameMode::OnMatchStateSet()
{
	Super::OnMatchStateSet();

	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		ACaptainController* CaptainController = Cast<ACaptainController>(*It);
		if (CaptainController)
		{
			CaptainController->OnMatchStateSet(MatchState);
		}
	}
	
	if (MatchState == MatchState::InProgress && bDelayedStart == true)
	{
		SetMatchState(MatchState::WaitingForTreasureToSpawn);
	}
	else if (MatchState == MatchState::TreasureSpawned)
	{
		HandleTreasureSpawned();
	}
	else if (MatchState == MatchState::TreasureCaptured)
	{
		HandleTreasureCaptured();
	}

}

void ASBGameMode::HandleTreasureCaptured()
{
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(this, ACapturePoint::StaticClass(), FoundActors);
	ASBGameState* SBGameState = GetGameState<ASBGameState>();
	for (AActor* FoundActor : FoundActors)
	{
		ACapturePoint* CapturePoint = Cast<ACapturePoint>(FoundActor);
		if (CapturePoint)
		{
			CapturePoint->SetCapturePointVisibility(false);
			FActorSpawnParameters SpawnInfo;
			FTransform SpawnTransform = CapturePoint->GetCapturePointTransform();
			SpawnTransform.SetScale3D(FVector(1.5f));
			if (ActiveMerchantShip) return;
			ActiveMerchantShip = GetWorld()->SpawnActor<AAIShip>(MerchantShipClass, SpawnTransform, SpawnInfo);
			if (ActiveMerchantShip)
			{
				if (SBGameState->TeamCapturingTreasure == ETeam::ET_Pirate)
				{
					ActiveMerchantShip->SetTeam(ETeam::ET_Pirate);
					if (PirateGoal)
					{
						ActiveMerchantShip->MoveToTarget(PirateGoal);
					}
				}
				else if (SBGameState->TeamCapturingTreasure == ETeam::ET_Privateer)
				{

					ActiveMerchantShip->SetTeam(ETeam::ET_Privateer);
					if (PrivateerGoal)
					{
						ActiveMerchantShip->MoveToTarget(PrivateerGoal);
					}
				}
			}
		}
	}
}

void ASBGameMode::HandleTreasureSpawned()
{
	if (ActiveMerchantShip)
	{
		ActiveMerchantShip = nullptr;
	}

	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(this, ACapturePoint::StaticClass(), FoundActors);
	for (AActor* FoundActor : FoundActors)
	{
		ACapturePoint* CapturePoint = Cast<ACapturePoint>(FoundActor);
		if (CapturePoint)
		{
			CapturePoint->SetCapturePointVisibility(true);
		}
	}
}

void ASBGameMode::TreasureCaptured(ETeam CapturingTeam)
{
	ASBGameState* SBGameState = GetGameState<ASBGameState>();
	
	if (SBGameState)
	{
		SBGameState->TeamCapturingTreasure = CapturingTeam;		
	}
	SetMatchState(MatchState::TreasureCaptured);
}

void ASBGameMode::TreasureResolved()
{
	SetMatchState(MatchState::WaitingForTreasureToSpawn);
	ASBGameState* SBGameState = GetGameState<ASBGameState>();
	++NumberOfCaptures;
	if (SBGameState)
	{
		SBGameState->SetTreasuresCaptured(NumberOfCaptures, TimeTreasureActive);
	}
}

void ASBGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (MatchState == MatchState::WaitingToStart)
	{
		CountdownTime = WarmupTime - GetWorld()->GetTimeSeconds() + LevelStartingTime + TimeTreasureActive;
		if (CountdownTime <= 0.f)
		{
			StartMatch();
		}
	}
	else if (MatchState == MatchState::WaitingForTreasureToSpawn)
	{
		CountdownTime = WarmupTime + (TreasureSpawnTime * NumberOfCaptures) + TimeTreasureActive - GetWorld()->GetTimeSeconds() + LevelStartingTime;
		//UE_LOG(LogTemp, Warning, TEXT("Countdown TIme on Game Mode%f  , TimeTreasureActive %f, Warmup Time %f, TreasureSpawnTime, %f, GetWorld()->GetTimeSeconds() %f, LevelStartingTime %f"), CountdownTime, TimeTreasureActive, WarmupTime, TreasureSpawnTime, GetWorld()->GetTimeSeconds(), LevelStartingTime)
		if (CountdownTime <= 0.f)
		{
			SetMatchState(MatchState::TreasureSpawned);
		}
	}
	else if (MatchState == MatchState::TreasureSpawned)
	{
		TimeTreasureActive += DeltaTime;
	}
	else if (MatchState == MatchState::TreasureCaptured)
	{
		TimeTreasureActive += DeltaTime;
	}
}

void ASBGameMode::PostLogin(APlayerController* NewPlayer)
{
	UE_LOG(LogTemp, Warning, TEXT("Player name %s"), *NewPlayer->GetName())

	USBGameInstance* SBGameInstance = GetGameInstance<USBGameInstance>();
	if (SBGameInstance)
	{
		ACaptainState* CaptainState = NewPlayer->GetPlayerState<ACaptainState>();
		if (CaptainState && CaptainState->GetPlayerTeam() == ETeam::ET_NoTeam)
		{
			SBGameInstance->CheckTeams();
			if (SBGameInstance->PirateTeamNames.Contains(CaptainState->GetPlayerName()))
			{
				CaptainState->SetTeam(ETeam::ET_Pirate);
			}
			else if (SBGameInstance->PrivateerTeamNames.Contains(CaptainState->GetPlayerName()))
			{
				CaptainState->SetTeam(ETeam::ET_Privateer);
			}
		}
	}
	
	Super::PostLogin(NewPlayer);

		
}


AActor* ASBGameMode::ChoosePlayerStart_Implementation(AController* Player)
{
	Super::ChoosePlayerStart_Implementation(Player);
	return nullptr;
}


void ASBGameMode::RequestRespawn(APawn* ElimmedShip, AController* ElimmedController)
{
    if (ElimmedShip)
    {
        ElimmedShip->Reset();
        ElimmedShip->Destroy();
    }

    if (ElimmedController)
    {
        TArray<AActor*> PlayerStarts;
		ACaptainState* CaptainState = ElimmedController->GetPlayerState<ACaptainState>();

		if (CaptainState && CaptainState->GetPlayerTeam() == ETeam::ET_Pirate)
		{
			UGameplayStatics::GetAllActorsWithTag(this, FName("PirateStart"), PlayerStarts);
			int32 Selection = FMath::RandRange(0, PlayerStarts.Num() - 1);
			RestartPlayerAtPlayerStart(ElimmedController, PlayerStarts[Selection]);
		}
		else if (CaptainState && CaptainState->GetPlayerTeam() == ETeam::ET_Privateer)
		{
			UGameplayStatics::GetAllActorsWithTag(this, FName("PrivateerStart"), PlayerStarts);
			int32 Selection = FMath::RandRange(0, PlayerStarts.Num() - 1);
			RestartPlayerAtPlayerStart(ElimmedController, PlayerStarts[Selection]);
		}
		else
		{
			UGameplayStatics::GetAllActorsOfClass(this, APlayerStart::StaticClass(), PlayerStarts);
			int32 Selection = FMath::RandRange(0, PlayerStarts.Num() - 1);
			RestartPlayerAtPlayerStart(ElimmedController, PlayerStarts[Selection]);
		}
    }
}

void ASBGameMode::RestartPlayer(AController* NewPlayer)
{
	UE_LOG(LogTemp, Warning, TEXT("restart"))

	if (NewPlayer == nullptr || NewPlayer->IsPendingKillPending())
	{
		return;
	}

	ACaptainState* CaptainState = NewPlayer->GetPlayerState<ACaptainState>();
	TArray<AActor*> PlayerStarts;

	if (CaptainState && CaptainState->GetPlayerTeam() == ETeam::ET_Pirate)
	{
		UGameplayStatics::GetAllActorsWithTag(this, FName("PirateStart"), PlayerStarts);
		int32 Selection = FMath::RandRange(0, PlayerStarts.Num() - 1);
		RestartPlayerAtPlayerStart(NewPlayer, PlayerStarts[Selection]);
	}
	else if (CaptainState && CaptainState->GetPlayerTeam() == ETeam::ET_Privateer)
	{
		UGameplayStatics::GetAllActorsWithTag(this, FName("PrivateerStart"), PlayerStarts);
		int32 Selection = FMath::RandRange(0, PlayerStarts.Num() - 1);
		RestartPlayerAtPlayerStart(NewPlayer, PlayerStarts[Selection]);
	}
	else
	{
		UGameplayStatics::GetAllActorsOfClass(this, APlayerStart::StaticClass(), PlayerStarts);
		int32 Selection = FMath::RandRange(0, PlayerStarts.Num() - 1);
		RestartPlayerAtPlayerStart(NewPlayer, PlayerStarts[Selection]);
	}
}

	//AActor* StartSpot = FindPlayerStart(NewPlayer);

	// If a start spot wasn't found,
	//if (StartSpot == nullptr)
	//{
	//	// Check for a previously assigned spot
	//	if (NewPlayer->StartSpot != nullptr)
	//	{
	//		StartSpot = NewPlayer->StartSpot.Get();
	//		UE_LOG(LogGameMode, Warning, TEXT("RestartPlayer: Player start not found, using last start spot"));
	//	}
	//}


void ASBGameMode::RestartPlayerAtPlayerStart(AController* NewPlayer, AActor* StartSpot)
{
	if (NewPlayer == nullptr || NewPlayer->IsPendingKillPending())
	{
		return;
	}

	if (!StartSpot)
	{
		UE_LOG(LogGameMode, Warning, TEXT("RestartPlayerAtPlayerStart: Player start not found"));
		return;
	}

	FRotator SpawnRotation = StartSpot->GetActorRotation();


	if (MustSpectate(Cast<APlayerController>(NewPlayer)))
	{
		UE_LOG(LogGameMode, Verbose, TEXT("RestartPlayerAtPlayerStart: Tried to restart a spectator-only player!"));
		return;
	}

	if (NewPlayer->GetPawn() != nullptr)
	{
		// If we have an existing pawn, just use it's rotation
		SpawnRotation = NewPlayer->GetPawn()->GetActorRotation();
	}
	else if (GetDefaultPawnClassForController(NewPlayer) != nullptr)
	{
		APawn* NewPawn;

		ACaptainState* NewCaptainState = NewPlayer->GetPlayerState<ACaptainState>();
		if (NewCaptainState && NewCaptainState->DefaultShip)
		{
			NewPawn = SpawnDefaultShip(NewPlayer, StartSpot, NewCaptainState);
		}
		else
		{
			// Try to create a pawn to use of the default class for this player
			NewPawn = SpawnDefaultPawnFor(NewPlayer, StartSpot);

		}
		if (IsValid(NewPawn))
		{
			NewPlayer->SetPawn(NewPawn);
		}
	}

	if (!IsValid(NewPlayer->GetPawn()))
	{
		FailedToRestartPlayer(NewPlayer);
	}
	else
	{
		// Tell the start spot it was used
		InitStartSpot(StartSpot, NewPlayer);

		FinishRestartPlayer(NewPlayer, SpawnRotation);
	}
}

APawn* ASBGameMode::SpawnDefaultShip(AController* NewPlayer, AActor* StartSpot, ACaptainState* NewCaptainState)
{
	// Don't allow pawn to be spawned with any pitch or roll
	FRotator StartRotation(ForceInit);
	StartRotation.Yaw = StartSpot->GetActorRotation().Yaw;
	FVector StartLocation = StartSpot->GetActorLocation();

	FTransform Transform = FTransform(StartRotation, StartLocation);
	return SpawnDefaultShipAtTransform(NewPlayer, Transform, NewCaptainState);
}

APawn* ASBGameMode::SpawnDefaultShipAtTransform(AController* NewPlayer, const FTransform& SpawnTransform, ACaptainState* NewCaptainState)
{
	FActorSpawnParameters SpawnInfo;
	SpawnInfo.Instigator = GetInstigator();
	SpawnInfo.ObjectFlags |= RF_Transient;	// We never want to save default player pawns into a map
	UClass* PawnClass = GetDefaultPawnClassForController(NewPlayer);
	if (NewCaptainState && NewCaptainState->DefaultShip)
	{
		APawn* ResultPawn = GetWorld()->SpawnActor<APawn>(NewCaptainState->DefaultShip, SpawnTransform, SpawnInfo);

		return ResultPawn;
	
	}
	return nullptr;
}

void ASBGameMode::TakeTheirLadderPoints()
{
	TArray<AActor*> TowerActors;

	UGameplayStatics::GetAllActorsOfClass(this, ATower::StaticClass(), TowerActors);

	for (AActor* Tower : TowerActors)
	{
		ATower* TowerToModify = Cast<ATower>(Tower);
		if (TowerToModify)
		{
			TowerToModify->CannonFireRate = 0.1f;
			TowerToModify->TurretRotationSpeed = 30.f;
		}
	}
}

void ASBGameMode::DrRockso()
{
	TArray<AActor*> ShipActors;

	UGameplayStatics::GetAllActorsOfClass(this, AShip::StaticClass(), ShipActors);

	for (AActor* Ship : ShipActors)
	{
		AShip* ShipToModify = Cast<AShip>(Ship);
		if (ShipToModify)
		{
			ShipToModify->GetPawnMovement()->MaxSpeed = 20000.f;
			ShipToModify->GetPawnMovement()->Acceleration = 20000.f;
			ShipToModify->GetPawnMovement()->Deceleration = 20000.f;
			ShipToModify->GetPawnMovement()->TurningBoost = 100.f;
		}
	}
}



