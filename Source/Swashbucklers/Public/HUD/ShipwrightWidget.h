// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ShipwrightWidget.generated.h"

class UGridPanel;
/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API UShipwrightWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta = (BindWidget))
	UGridPanel* ShipSlotGridPanel;

	
};