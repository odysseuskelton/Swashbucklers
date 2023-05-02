// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerStates/Teams.h"
#include "PlayerKillAnnouncementSlot.generated.h"


class UTextBlock;
/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API UPlayerKillAnnouncementSlot : public UUserWidget
{
	GENERATED_BODY()
	
public:
	void SetKillAnnouncementText(FString SunkCapName, FString SinkingCapName, ETeam SunkCapTeam, ETeam SinkingCapTeam);

	void SetTextColor(UTextBlock* TextblockToSet, ETeam Team);

	UPROPERTY(EditAnywhere)
	FLinearColor PirateColor;

	UPROPERTY(EditAnywhere)
	FLinearColor PrivateerColor;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* PlayerInstigatorText;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* PlayerAffectedText;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* VerbText;


};
