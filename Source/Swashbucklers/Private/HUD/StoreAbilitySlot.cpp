// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/StoreAbilitySlot.h"
#include "Interfaces/CaptainStateInterface.h"
#include "Components/Image.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "GameplayAbilities/SBGameplayAbility.h"
#include "HUD/SlotSelectionWidget.h"

void UStoreAbilitySlot::InitializeAbilitySlot(TSubclassOf<USBGameplayAbility> AbilityClassToAddToSlot, ICaptainStateInterface* CaptainStateInterface)
{

	if (!AbilityClassToAddToSlot || !CaptainStateInterface) return;

	OwningInterface = CaptainStateInterface;
	AbilityInSlot = AbilityClassToAddToSlot;
	AbilityInfo = AbilityClassToAddToSlot.GetDefaultObject()->GetAbilityInfo();

	if (AbilityIcon)
	{
		AbilityIcon->SetBrushFromMaterial(AbilityInfo.UIMat);
	}

	if (AbilityNameText)
	{
		AbilityNameText->SetText(FText::FromString(AbilityInfo.AbilityName));
	}

	if (DescriptionText)
	{
		DescriptionText->SetText(FText::FromString(AbilityInfo.AbilityDescription));
	}

	if (AbilityCostText)
	{
		const FString String = FString::Printf(TEXT("%d"), AbilityInfo.StoreCost);
		AbilityCostText->SetText(FText::FromString(String));
	}

	if (CaptainStateInterface->GetCurrentAbilities().Contains(AbilityClassToAddToSlot))
	{
		SetNewBuyButtonText();
	}

	if (CaptainStateInterface->GetPlayerPOE() < AbilityInfo.StoreCost && !CaptainStateInterface->GetCurrentAbilities().Contains(AbilityClassToAddToSlot))
	{
		if (BuyButton)
		{
			BuyButton->SetIsEnabled(false);
		}
	}

	if (BuyButton)
	{
		BuyButton->OnClicked.AddDynamic(this, &UStoreAbilitySlot::BuyButtonPressed);
	}

}

void UStoreAbilitySlot::SetNewBuyButtonText()
{
	if (BuyButtonText)
	{
		FString String = TEXT("Switch Abilities");
		BuyButtonText->SetText(FText::FromString(String));
	}
	if (AbilityCostText)
	{
		AbilityCostText->RemoveFromParent();
	}
	if (AbilityCostImage)
	{
		AbilityCostImage->RemoveFromParent();
	}
}


void UStoreAbilitySlot::BuyButtonPressed()
{
	if (!OwningInterface || SlotSelectionWidget) return;

	SlotSelectionWidget = CreateWidget<USlotSelectionWidget>(GetOwningPlayer(), SlotSelectionClass);
	if (SlotSelectionWidget)
	{
		SlotSelectionWidget->AddToViewport();
		SlotSelectionWidget->Slot1Button->OnClicked.AddDynamic(this, &UStoreAbilitySlot::Slot1Selected);
		SlotSelectionWidget->Slot2Button->OnClicked.AddDynamic(this, &UStoreAbilitySlot::Slot2Selected);
		SlotSelectionWidget->Slot3Button->OnClicked.AddDynamic(this, &UStoreAbilitySlot::Slot3Selected);
		SlotSelectionWidget->Slot4Button->OnClicked.AddDynamic(this, &UStoreAbilitySlot::Slot4Selected);
	}
	
}

void UStoreAbilitySlot::Slot1Selected()
{
	SetNewBuyButtonText();
	OwningInterface->BuyAbility(AbilityInSlot, EAbilitySlot::EAS_Slot1);
	SlotSelectionWidget->RemoveFromParent();
	SlotSelectionWidget = nullptr;
}


void UStoreAbilitySlot::Slot2Selected()
{
	SetNewBuyButtonText();
	OwningInterface->BuyAbility(AbilityInSlot, EAbilitySlot::EAS_Slot2);
	SlotSelectionWidget->RemoveFromParent();
	SlotSelectionWidget = nullptr;
}


void UStoreAbilitySlot::Slot3Selected()
{
	SetNewBuyButtonText();
	OwningInterface->BuyAbility(AbilityInSlot, EAbilitySlot::EAS_Slot3);
	SlotSelectionWidget->RemoveFromParent();
	SlotSelectionWidget = nullptr;
}


void UStoreAbilitySlot::Slot4Selected()
{
	SetNewBuyButtonText();
	OwningInterface->BuyAbility(AbilityInSlot, EAbilitySlot::EAS_Slot4);
	SlotSelectionWidget->RemoveFromParent();
	SlotSelectionWidget = nullptr;
}