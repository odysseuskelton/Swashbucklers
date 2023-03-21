// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbilities/SBAttributeSet.h"
#include "GameplayEffectExtension.h"
#include "GameplayEffect.h"
#include "Net/UnrealNetwork.h"
#include "GameplayEffect.h"

USBAttributeSet::USBAttributeSet() :
	Health(500.f),
	MaxHealth(500.f), 
	Mana(100.f),
	MaxMana(100.f)
{
}

void USBAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(USBAttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USBAttributeSet, MaxHealth, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USBAttributeSet, Mana, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USBAttributeSet, MaxMana, COND_None, REPNOTIFY_Always);
}

void USBAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	if (Data.EvaluatedData.Attribute.GetUProperty() == FindFieldChecked<FProperty>(USBAttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(USBAttributeSet, Health)))
	{
		Health.SetCurrentValue(FMath::Clamp(Health.GetCurrentValue(), 0.f, MaxHealth.GetCurrentValue()));
		Health.SetBaseValue(FMath::Clamp(Health.GetBaseValue(), 0.f, MaxHealth.GetCurrentValue()));			

		OnHealthChange.Broadcast(Health.GetCurrentValue(), MaxHealth.GetCurrentValue());
	}

	if (Data.EvaluatedData.Attribute.GetUProperty() == FindFieldChecked<FProperty>(USBAttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(USBAttributeSet, Mana)))
	{
		Mana.SetCurrentValue(FMath::Clamp(Mana.GetCurrentValue(), 0.f, MaxMana.GetCurrentValue()));
		Mana.SetBaseValue(FMath::Clamp(Mana.GetBaseValue(), 0.f, MaxMana.GetCurrentValue()));
		//OnManaChange.Broadcast(Mana.GetCurrentValue(), MaxMana.GetCurrentValue());
	}
}

void USBAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USBAttributeSet, Health, OldHealth);
	OnHealthChange.Broadcast(Health.GetCurrentValue(), MaxHealth.GetCurrentValue());
}

void USBAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USBAttributeSet, MaxHealth, OldMaxHealth);
}

void USBAttributeSet::OnRep_Mana(const FGameplayAttributeData& OldMana)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USBAttributeSet, Mana, OldMana);
}

void USBAttributeSet::OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USBAttributeSet, MaxMana, OldMaxMana);
}

