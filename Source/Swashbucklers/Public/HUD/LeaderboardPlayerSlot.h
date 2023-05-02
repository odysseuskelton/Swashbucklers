// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LeaderboardPlayerSlot.generated.h"


class UTextBlock;
/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API ULeaderboardPlayerSlot : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta = (BindWidget))
	UTextBlock* PlayerNameText;
	
	UPROPERTY(meta = (BindWidget))
	UTextBlock* BountyText;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* CaptureText;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* TowerText;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* KillText;

};
