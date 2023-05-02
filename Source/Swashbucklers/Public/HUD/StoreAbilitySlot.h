// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameplayAbilities/AbilityTypes.h"
#include "StoreAbilitySlot.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPurchaseDelegate);

/**
 * 
 */
class UButton;
class UTextBlock;
class UImage;
class USBGameplayAbility;
class ICaptainStateInterface;
class USlotSelectionWidget;
class AStore;

UCLASS()
class SWASHBUCKLERS_API UStoreAbilitySlot : public UUserWidget
{
	GENERATED_BODY()

public:

	void InitializeAbilitySlot(TSubclassOf<USBGameplayAbility> AbilityClassToAddToSlot, ICaptainStateInterface* CaptainStateInterface);

	void SetNewBuyButtonText();

	UFUNCTION()
	void BuyButtonPressed();

	UFUNCTION()
	void Slot1Selected();

	UFUNCTION()
	void Slot2Selected();

	UFUNCTION()
	void Slot3Selected();

	UFUNCTION()
	void Slot4Selected();


	UPROPERTY(meta = (BindWidget))
	UImage* AbilityIcon;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* AbilityNameText;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* DescriptionText;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* AbilityCostText;

	UPROPERTY(meta = (BindWidget))
	UImage* AbilityCostImage;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* BuyButtonText;

	UPROPERTY(meta = (BindWidget))
	UButton* BuyButton;

	UPROPERTY(EditAnywhere)
	TSubclassOf<USlotSelectionWidget> SlotSelectionClass;
	USlotSelectionWidget* SlotSelectionWidget;

	bool bAbilityBought = false;

	UPROPERTY()
	TSubclassOf<USBGameplayAbility> AbilityInSlot;
	FGameplayAbilityInfo AbilityInfo;

	FOnPurchaseDelegate AbilityBought;
	
	ICaptainStateInterface* OwningInterface;
};
