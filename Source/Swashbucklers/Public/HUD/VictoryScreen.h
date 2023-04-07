// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "VictoryScreen.generated.h"

/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API UVictoryScreen : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent)
	void PlayVictoryAnimation();



	
};
