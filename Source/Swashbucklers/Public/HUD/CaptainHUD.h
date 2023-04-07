// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "CaptainHUD.generated.h"

class UCaptainOverlay;
/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API ACaptainHUD : public AHUD
{
	GENERATED_BODY()
	

public:
	void SetHUDHealth(float HealthPercentToSet);

	void SetHUDPoE(int32 PoEToSet);

protected:
	virtual void BeginPlay() override;

private:
	APlayerController* Controller;

	UPROPERTY(EditDefaultsOnly, Category = "Player")
	TSubclassOf<UCaptainOverlay> CaptainOverlayClass;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess))
	UCaptainOverlay* CaptainOverlay;

};
