// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ships/PlayerShip.h"
#include "GrapplingShip.generated.h"

/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API AGrapplingShip : public APlayerShip
{
	GENERATED_BODY()


public:
	AGrapplingShip();

	void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent);

	virtual void FireAuxiliaryCannons() override;

	UFUNCTION(Server, Reliable)
	void ServerFireGrapple(TSubclassOf<USBGameplayAbility> AbilityToActivate);

	UFUNCTION(BlueprintCallable)
	void SetHookVisibility(bool bVisibility);

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess))
	UStaticMeshComponent* GrapplingHook;

};
