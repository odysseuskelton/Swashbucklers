// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Leaderboard.generated.h"

class ASBGameState;
class UScrollBox;
class ULeaderboardPlayerSlot;
class ACaptainState;
/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API ULeaderboard : public UUserWidget
{
	GENERATED_BODY()

public:
	void InitializeOverlay(APlayerController* Controller);

	void AddPlayer(ACaptainState* CaptainState);

	ASBGameState* GameState;

	TArray<ACaptainState*> CaptainStates;

	APlayerController* OwningPlayerController;

	UPROPERTY(meta = (BindWidget))
	UScrollBox* PrivateerScrollBox;

	UPROPERTY(meta = (BindWidget))
	UScrollBox* PirateScrollBox;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ULeaderboardPlayerSlot> PlayerSlotClass;

	TArray<ULeaderboardPlayerSlot*> PirateLeaderboardSlots;
	TArray<ULeaderboardPlayerSlot*> PrivateerLeaderboardSlots;


};
