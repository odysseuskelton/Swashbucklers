// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Healthbar.generated.h"

class UProgressBar;
/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API UHealthbar : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UProgressBar* HealthBar;

	//UFUNCTION()
	//void SetHealthbar(float CurrentHealth, float MaxHealth);
};
