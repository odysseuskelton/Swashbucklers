// Fill out your copyright notice in the Description page of Project Settings.


#include "GameModes/SBGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerStart.h"

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
		UE_LOG(LogTemp, Warning, TEXT("Controller valid..."))
        TArray<AActor*> PlayerStarts;
        UGameplayStatics::GetAllActorsOfClass(this, APlayerStart::StaticClass(), PlayerStarts);
        int32 Selection = FMath::RandRange(0, PlayerStarts.Num() - 1);
        RestartPlayerAtPlayerStart(ElimmedController, PlayerStarts[Selection]);
    }
}

void ASBGameMode::RestartPlayerAtPlayerStart(AController* NewPlayer, AActor* StartSpot)
{
	UE_LOG(LogTemp, Warning, TEXT("Made it to restartplayer..."))
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
		// Try to create a pawn to use of the default class for this player
		APawn* NewPawn = SpawnDefaultPawnFor(NewPlayer, StartSpot);
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