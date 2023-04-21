// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ShipwrightWidget.generated.h"

class UGridPanel;
class UButton;
class UWidgetSwitcher;
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

	UPROPERTY(meta = (BindWidget))
	UGridPanel* AbilitySlotGridPanel;

	UPROPERTY(meta = (BindWidget))
	UButton* ShipwrightButton;

	UPROPERTY(meta = (BindWidget))
	UButton* CircleOfStormsButton;

	UPROPERTY(meta = (BindWidget))
	UWidgetSwitcher* StoreSwitcher;

	void InitializeStoreWidget();
	UFUNCTION()
	void SwitchToShipwright();
	UFUNCTION()
	void SwitchToCircleOfStorms();
};
