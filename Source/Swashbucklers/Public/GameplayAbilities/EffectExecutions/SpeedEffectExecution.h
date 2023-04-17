 // Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "SpeedEffectExecution.generated.h"

/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API USpeedEffectExecution : public UGameplayEffectExecutionCalculation
{
	GENERATED_BODY()

public:
	USpeedEffectExecution();

	FProperty* HealthProperty;
	FGameplayEffectAttributeCaptureDefinition HealthDef;
	void Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const;
	
};
