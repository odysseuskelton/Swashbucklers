// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/CaptureProgressComponent.h"
#include "HUD/CaptureProgressWidget.h"

void UCaptureProgressComponent::SetMaterialOnProgressBar(ETeam TeamToSet)
{
    CaptureProgressWidget = CaptureProgressWidget == nullptr ? Cast<UCaptureProgressWidget>(GetUserWidgetObject()) : CaptureProgressWidget;
    if (CaptureProgressWidget)
    {
        CaptureProgressWidget->SetMaterial(TeamToSet);
    }
}


void UCaptureProgressComponent::SetProgress(float ProgressToSet)
{
    CaptureProgressWidget = CaptureProgressWidget == nullptr ? Cast<UCaptureProgressWidget>(GetUserWidgetObject()) : CaptureProgressWidget;
    if (CaptureProgressWidget)
    {
        CaptureProgressWidget->SetProgress(ProgressToSet);
    }
}