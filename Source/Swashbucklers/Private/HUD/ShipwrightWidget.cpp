// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/ShipwrightWidget.h"
#include "Components/WidgetSwitcher.h"
#include "Components/Button.h"

void UShipwrightWidget::InitializeStoreWidget()
{
	if (ShipwrightButton)
	{
		ShipwrightButton->OnClicked.AddDynamic(this, &UShipwrightWidget::SwitchToShipwright);
	}
	if (CircleOfStormsButton)
	{
		CircleOfStormsButton->OnClicked.AddDynamic(this, &UShipwrightWidget::SwitchToCircleOfStorms);
	}
}

void UShipwrightWidget::SwitchToShipwright()
{
	if (StoreSwitcher)
	{
		StoreSwitcher->SetActiveWidgetIndex(0);
	}
}

void UShipwrightWidget::SwitchToCircleOfStorms()
{
	if (StoreSwitcher)
	{
		StoreSwitcher->SetActiveWidgetIndex(1);
	}
}