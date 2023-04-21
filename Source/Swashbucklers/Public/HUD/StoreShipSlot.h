// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StoreShipSlot.generated.h"

class UImage;
class UTextBlock;
class UButton;
class AShip;
class ICaptainStateInterface;
/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API UStoreShipSlot : public UUserWidget
{
	GENERATED_BODY()
	
public:
	void InitializeShipSlot(TSubclassOf<AShip> ShipToSet, ICaptainStateInterface* CaptainStateInterface, APlayerController* PlayerController);

	UFUNCTION()
	void BuyShip();

private:
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UImage* ShipImage;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UTextBlock* ShipNameText;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UTextBlock* HPText;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UTextBlock* CannonText;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UTextBlock* SpeedText;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UTextBlock* AccelerationText;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UTextBlock* DescriptionText;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UImage* ShipCostImage;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UTextBlock* ShipCostText;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UTextBlock* BuyButtonText;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* BuyButton;

	TSubclassOf<AShip> ShipInSlot;

	ICaptainStateInterface* OwningCaptainStateInterface;

	APlayerController* OwningPlayerController;

};
