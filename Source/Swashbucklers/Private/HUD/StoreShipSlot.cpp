// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/StoreShipSlot.h"
#include "Interfaces/CaptainStateInterface.h"
#include "Ships/Ship.h"
#include "Components/Image.h"
#include "Components/Textblock.h"
#include "Components/Button.h"
#include "Kismet/KismetTextLibrary.h"

void UStoreShipSlot::InitializeShipSlot(TSubclassOf<AShip> ShipToSet, ICaptainStateInterface* CaptainStateInterface, APlayerController* PlayerController)
{
	if (CaptainStateInterface)
	{
		OwningCaptainStateInterface = CaptainStateInterface;
	}

	if (PlayerController)
	{
		OwningPlayerController = PlayerController;
	}

	if (ShipToSet)
	{
		ShipInSlot = ShipToSet;
	}

	if (ShipImage)
	{
		ShipImage->SetBrushFromTexture(ShipToSet.GetDefaultObject()->StoreShipImage);
	}

	if (ShipNameText)
	{
		ShipNameText->SetText(FText::FromName(ShipToSet.GetDefaultObject()->StoreShipName));
	}

	if (HPText)
	{
		const FString String = FString::Printf(TEXT("HP: %d"), ShipToSet.GetDefaultObject()->StoreHP);
		HPText->SetText(FText::FromString(String));
	}

	if (CannonText)
	{
		const FString String = FString::Printf(TEXT("Cannons: %d"), ShipToSet.GetDefaultObject()->StoreCannons);
		CannonText->SetText(FText::FromString(String));
	}

	if (SpeedText)
	{
		FString FloatText = FString::Printf(TEXT("Speed: "));
		FloatText.Append(FString::SanitizeFloat(ShipToSet.GetDefaultObject()->StoreSpeed));
		FloatText.Append(TEXT(" knots"));

		SpeedText->SetText(FText::FromString(FloatText));
	}

	if (AccelerationText)
	{
		FString FloatText = FString::Printf(TEXT("Acceleration: "));
		FloatText.Append(FString::SanitizeFloat(ShipToSet.GetDefaultObject()->StoreAcceleration));
		FloatText.Append(TEXT(" knots/sec"));

		AccelerationText->SetText(FText::FromString(FloatText));
	}

	if (DescriptionText)
	{
		DescriptionText->SetText(FText::FromString(ShipToSet.GetDefaultObject()->StoreDescription));
	}

	if (ShipCostText)
	{
		const FString String = FString::Printf(TEXT("Cost: %d"), ShipToSet.GetDefaultObject()->StoreCost);
		ShipCostText->SetText(FText::FromString(String));
	}

	if (CaptainStateInterface->GetPlayerShips().Contains(ShipToSet))
	{
		if (BuyButtonText)
		{
			FString String = TEXT("Switch Ships");
			BuyButtonText->SetText(FText::FromString(String));
		}
		if (ShipCostText)
		{
			ShipCostText->RemoveFromParent();
		}
		if (ShipCostImage)
		{
			ShipCostImage->RemoveFromParent();
		}
	}


	if (CaptainStateInterface->GetPlayerPOE() < ShipToSet.GetDefaultObject()->StoreCost && !CaptainStateInterface->GetPlayerShips().Contains(ShipToSet))
	{
		bShipBought = true;
		if (BuyButton)
		{
			BuyButton->SetIsEnabled(false);
		}
	}

	if (BuyButton)
	{
		BuyButton->OnClicked.AddDynamic(this, &UStoreShipSlot::BuyShip);
	}
}


void UStoreShipSlot::BuyShip()
{
	if (!OwningCaptainStateInterface || !OwningPlayerController || !ShipInSlot) return;
	if (BuyButton)
	{
		BuyButton->SetIsEnabled(false);
	}
	OwningCaptainStateInterface->BuyShip(ShipInSlot);
}
