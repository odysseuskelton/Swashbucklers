// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "SBAbilitySystemComponent.generated.h"

/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API USBAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()

public:
	bool bCharacterAbilitiesGiven = false;

	virtual void NotifyAbilityCommit(UGameplayAbility* Ability) override;
};
