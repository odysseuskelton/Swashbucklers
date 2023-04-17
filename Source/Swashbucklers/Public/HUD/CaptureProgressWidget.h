// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerStates/Teams.h"
#include "CaptureProgressWidget.generated.h"

/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API UCaptureProgressWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintImplementableEvent)
	void SetProgress(float ProgressToSet);

	UFUNCTION(BlueprintImplementableEvent)
	void SetMaterial(ETeam TeamToSet);

};
