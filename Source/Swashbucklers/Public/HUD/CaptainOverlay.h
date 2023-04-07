// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CaptainOverlay.generated.h"

class UTextBlock;
/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API UCaptainOverlay : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent)
	void SetHealthProgress(float HealthPercent);
	
	void SetPoEText(int32 PoEToSet);

	UFUNCTION(BlueprintImplementableEvent)
	void PlayPoEAnimation();

private:
	UPROPERTY(meta = (BindWidget))
	UTextBlock* PoEText;


};
