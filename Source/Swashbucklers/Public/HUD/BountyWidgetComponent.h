// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "BountyWidgetComponent.generated.h"

class UBountyWidget;
/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API UBountyWidgetComponent : public UWidgetComponent
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	void SetGoldPickupText(int32 BountyToSet);
	UBountyWidget* BountyWidget;

};
