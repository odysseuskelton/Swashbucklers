// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbilities/SBGameplayAbility.h"
#include "GameplayAbilities/TickingTask.h"
#include "Interfaces/HitInterface.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "Kismet/KismetSystemLibrary.h"



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

			return FGameplayAbilityInfo(AbilityName, AbilityDescription, AbilityType, CoolDownDuration, Cost, UIMaterial, StoreCost, GetClass());
		}

	}
	return FGameplayAbilityInfo();
}

void USBGameplayAbility::ApplyHealEffectToActorsInAOE(FGameplayEffectSpecHandle Spec, AActor* OwnerActor, FVector Origin, float Radius)
{
	TArray<FHitResult> Hits;
	TArray<AActor*> ActorsToIgnore;

	TArray<AActor*> ActorsToApplyGameplayEffectTo;

	UKismetSystemLibrary::SphereTraceMulti(OwnerActor, Origin, Origin, Radius, ETraceTypeQuery::TraceTypeQuery1, false, ActorsToIgnore, EDrawDebugTrace::None, Hits, false);

	for (FHitResult Hit : Hits)
	{

		IHitInterface* HitInterface = Cast<IHitInterface>(Hit.GetActor());
		IHitInterface* InstigatorInterface = Cast<IHitInterface>(OwnerActor);
		if (HitInterface)
		{
			if (HitInterface->IsHitActorDead()) return;

			AActor* HitActor = HitInterface->GetActorWithAbilityComponent();

			if (HitActor)
			{
				if (InstigatorInterface && HitInterface && InstigatorInterface->GetHitActorTeam() == HitInterface->GetHitActorTeam() && !ActorsToApplyGameplayEffectTo.Contains(HitActor))
				{
					ActorsToApplyGameplayEffectTo.Add(HitActor);
				}
			}
		}
	}

	FGameplayAbilityTargetDataHandle TargetData = UAbilitySystemBlueprintLibrary::AbilityTargetDataFromActorArray(ActorsToApplyGameplayEffectTo, true);
	ApplyGESpecHandleToTargetData(Spec, TargetData);
	ActorsToApplyGameplayEffectTo.Empty();
}

void USBGameplayAbility::ApplyGESpecHandleToTargetData(const FGameplayEffectSpecHandle& GESpecHandle, const FGameplayAbilityTargetDataHandle& TargetDataHandle)
{
	for (TSharedPtr<FGameplayAbilityTargetData> Data : TargetDataHandle.Data)
	{
		Data->ApplyGameplayEffectSpec(*GESpecHandle.Data.Get());
	}
}