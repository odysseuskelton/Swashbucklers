// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerNameplate.generated.h"


class UTextBlock;
class UHorizontalBox;
/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API UPlayerNameplate : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta = (BindWidget))
	UTextBlock* PlayerNameText;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* PlayerBountyText;

};
