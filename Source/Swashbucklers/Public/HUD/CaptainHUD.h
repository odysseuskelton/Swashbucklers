// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GameplayAbilities/AbilityTypes.h"
#include "CaptainHUD.generated.h"

class UCaptainOverlay;
class USBGameplayAbility;
/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API ACaptainHUD : public AHUD
{
	GENERATED_BODY()
	

public:
	void SetHUDHealth(float CurrentHealth, float MaxHealth);
	void SetHUDMana(float CurrentMana, float MaxMana);

	void SetHUDPoE(int32 PoEToSet);

	void ActivateSlotCooldownOnOverlay(EAbilitySlot AbilitySlotToActivate);

	void SetAbilitySlot(FGameplayAbilityInfo AbilityInfo, EAbilitySlot SlotAssigned);


protected:
	virtual void BeginPlay() override;

	void InitializeOverlaySlots();

private:
	APlayerController* Controller;

	UPROPERTY(EditDefaultsOnly, Category = "Player")
	TSubclassOf<UCaptainOverlay> CaptainOverlayClass;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess))
	UCaptainOverlay* CaptainOverlay;

public:
	FORCEINLINE virtual bool IsCaptainOverlayValid() { if (CaptainOverlay) { return true; } return false; }


};
