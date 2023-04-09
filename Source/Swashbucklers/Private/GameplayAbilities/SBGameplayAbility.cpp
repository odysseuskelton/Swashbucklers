// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbilities/SBGameplayAbility.h"

FGameplayAbilityInfo USBGameplayAbility::GetAbilityInfo()
{
	UGameplayEffect* CoolDownEffect = GetCooldownGameplayEffect();
	UGameplayEffect* CostEffect = GetCostGameplayEffect();

	if (CoolDownEffect && CostEffect)
	{
		float CoolDownDuration = 0;
		CoolDownEffect->DurationMagnitude.GetStaticMagnitudeIfPossible(1, CoolDownDuration);
		float Cost = 0;
		if (CostEffect->Modifiers.Num() > 0)
		{
			FGameplayModifierInfo EffectInfo = CostEffect->Modifiers[0];
			EffectInfo.ModifierMagnitude.GetStaticMagnitudeIfPossible(1, Cost);
			FGameplayAttribute CostAttr = EffectInfo.Attribute;
			FString AttributeName = CostAttr.AttributeName;

			return FGameplayAbilityInfo(AbilityName, AbilityDescription, AbilityType, CoolDownDuration, Cost, UIMaterial, GetClass());
		}

	}
	return FGameplayAbilityInfo();
}