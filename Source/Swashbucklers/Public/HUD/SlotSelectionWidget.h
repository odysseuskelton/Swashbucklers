// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SlotSelectionWidget.generated.h"

class UButton;
/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API USlotSelectionWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta=(BindWidget))
	UButton* Slot1Button;

	UPROPERTY(meta = (BindWidget))
	UButton* Slot2Button;

	UPROPERTY(meta = (BindWidget))
	UButton* Slot3Button;

	UPROPERTY(meta = (BindWidget))
	UButton* Slot4Button;
	
};
