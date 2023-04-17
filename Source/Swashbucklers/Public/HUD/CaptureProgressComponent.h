// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "PlayerStates/Teams.h"
#include "CaptureProgressComponent.generated.h"

class UCaptureProgressWidget;
/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API UCaptureProgressComponent : public UWidgetComponent
{
	GENERATED_BODY()

public:
	void SetMaterialOnProgressBar(ETeam TeamToSet);

	void SetProgress(float ProgressToSet);

	UCaptureProgressWidget* CaptureProgressWidget;
};
