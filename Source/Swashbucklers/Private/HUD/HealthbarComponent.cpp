// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/HealthbarComponent.h"
#include "HUD/Healthbar.h"
#include "Components/ProgressBar.h"

void UHealthbarComponent::SetHealthPercent(float Percent)
{
    HealthBarWidget = HealthBarWidget == nullptr ? Cast<UHealthbar>(GetUserWidgetObject()) : HealthBarWidget;
    if (HealthBarWidget && HealthBarWidget->HealthBar)
    {
        HealthBarWidget->HealthBar->SetPercent(Percent);
    }
}

void UHealthbarComponent::SetRenderOpacity(float OpacityToSet)
{

    HealthBarWidget = HealthBarWidget == nullptr ? Cast<UHealthbar>(GetUserWidgetObject()) : HealthBarWidget;
    if (HealthBarWidget && HealthBarWidget->HealthBar)
    {
        HealthBarWidget->HealthBar->SetRenderOpacity(OpacityToSet);
    }
}
