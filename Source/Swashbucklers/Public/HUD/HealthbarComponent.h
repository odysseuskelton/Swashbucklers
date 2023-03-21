// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "HealthbarComponent.generated.h"


class UHealthbar;
/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API UHealthbarComponent : public UWidgetComponent
{
	GENERATED_BODY()

public:
	void SetHealthPercent(float Percent);

private:
	UPROPERTY()
	UHealthbar* HealthBarWidget;
};
