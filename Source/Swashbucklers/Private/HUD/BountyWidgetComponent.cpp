// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/BountyWidgetComponent.h"
#include "Components/TextBlock.h"
#include "HUD/BountyWidget.h"

void UBountyWidgetComponent::SetGoldPickupText(int32 BountyToSet)
{
	BountyWidget = BountyWidget == nullptr ? Cast<UBountyWidget>(GetUserWidgetObject()) : BountyWidget;

	if (BountyWidget && BountyWidget->GoldPickupText)
	{
		const FString String = FString::Printf(TEXT("%d"), BountyToSet);
		BountyWidget->GoldPickupText->SetText(FText::FromString(String));
		BountyWidget->PlayBountyAnimation();
	}


}