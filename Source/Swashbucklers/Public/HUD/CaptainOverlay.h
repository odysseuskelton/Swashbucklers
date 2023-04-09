// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameplayAbilities/AbilityTypes.h"
#include "CaptainOverlay.generated.h"

class UTextBlock;
class UImage;
class USBGameplayAbility;
/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API UCaptainOverlay : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent)
	void SetHealthProgress(float CurrentHealth, float MaxHealth);

	UFUNCTION(BlueprintImplementableEvent)
	void SetManaProgress(float CurrentMana, float MaxMana);
	
	void SetPoEText(int32 PoEToSet);

	UFUNCTION(BlueprintImplementableEvent)
	void PlayPoEAnimation();

	UFUNCTION(BlueprintImplementableEvent)
	void StartCooldown(EAbilitySlot AbilitySlotToActivate);

	void UpdateSlot(FGameplayAbilityInfo AbilityInfo, EAbilitySlot SlotAssigned);

	UPROPERTY(BlueprintReadOnly)
	FGameplayAbilityInfo Slot1Info;

	UPROPERTY(BlueprintReadOnly)
	FGameplayAbilityInfo Slot2Info;

	UPROPERTY(BlueprintReadOnly)
	FGameplayAbilityInfo Slot3Info;

	UPROPERTY(BlueprintReadOnly)
	FGameplayAbilityInfo Slot4Info;

	UPROPERTY(BlueprintReadWrite)
	UMaterialInstanceDynamic* Slot1DynamicMat;

	UPROPERTY(BlueprintReadWrite)
	UMaterialInstanceDynamic* Slot2DynamicMat;

	UPROPERTY(BlueprintReadWrite)
	UMaterialInstanceDynamic* Slot3DynamicMat;

	UPROPERTY(BlueprintReadWrite)
	UMaterialInstanceDynamic* Slot4DynamicMat;

private:
	UPROPERTY(meta = (BindWidget))
	UTextBlock* PoEText;

	UPROPERTY(meta = (BindWidget))
	UImage* Slot1Image;
	UPROPERTY(meta = (BindWidget))
	UImage* Slot2Image;
	UPROPERTY(meta = (BindWidget))
	UImage* Slot3Image;
	UPROPERTY(meta = (BindWidget))
	UImage* Slot4Image;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Slot1Text;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* Slot2Text;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* Slot3Text;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* Slot4Text;




};
