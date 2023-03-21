// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "SBAttributeSet.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHealthChangeDelegate, float, Health, float, MaxHealth);

/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API USBAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	USBAttributeSet();
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttributeSetBase", ReplicatedUsing = OnRep_Health)
	FGameplayAttributeData Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttributeSetBase", ReplicatedUsing = OnRep_MaxHealth)
	FGameplayAttributeData MaxHealth;
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttributeSetBase", ReplicatedUsing = OnRep_Mana)
	FGameplayAttributeData Mana;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttributeSetBase", ReplicatedUsing = OnRep_MaxMana)
	FGameplayAttributeData MaxMana;

	void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data) override;

	FOnHealthChangeDelegate OnHealthChange;

protected:
	UFUNCTION()
	virtual void OnRep_Health(const FGameplayAttributeData& OldHealth);

	UFUNCTION()
	virtual void OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth);

	UFUNCTION()
	virtual void OnRep_Mana(const FGameplayAttributeData& OldMana);

	UFUNCTION()
	virtual void OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana);
};
