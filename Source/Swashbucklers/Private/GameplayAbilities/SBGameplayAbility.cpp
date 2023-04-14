// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbilities/SBGameplayAbility.h"
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

			return FGameplayAbilityInfo(AbilityName, AbilityDescription, AbilityType, CoolDownDuration, Cost, UIMaterial, GetClass());
		}

	}
	return FGameplayAbilityInfo();
}

void USBGameplayAbility::ApplyHealEffectToActorsInAOE(FGameplayEffectSpecHandle Spec, AActor* OwnerActor, FVector Origin, float Radius)
{
	TArray<FHitResult> Hits;
	TArray<AActor*> ActorsToIgnore;

	TArray<AActor*> ActorsToApplyGameplayEffectTo;

	UE_LOG(LogTemp, Warning, TEXT("Sphere trace"))
	UKismetSystemLibrary::SphereTraceMulti(OwnerActor, Origin, Origin, Radius, ETraceTypeQuery::TraceTypeQuery1, false, ActorsToIgnore, EDrawDebugTrace::ForDuration, Hits, false);

	for (FHitResult Hit : Hits)
	{
		UE_LOG(LogTemp, Warning, TEXT("Actor to hit... %s"), *Hit.GetActor()->GetName())

		IHitInterface* HitInterface = Cast<IHitInterface>(Hit.GetActor());
		IHitInterface* InstigatorInterface = Cast<IHitInterface>(OwnerActor);
		if (HitInterface)
		{
			if (HitInterface->IsHitActorDead()) return;

			AActor* HitActor = HitInterface->GetActorWithAbilityComponent();

			if (HitActor)
			{
				if (InstigatorInterface && HitInterface && InstigatorInterface->GetHitActorTeam() == HitInterface->GetHitActorTeam())
				{
					UE_LOG(LogTemp, Warning, TEXT("Actor to heal... %s"), *HitActor->GetName())
					ActorsToApplyGameplayEffectTo.Add(HitActor);
				}
			}
		}
	}

	FGameplayAbilityTargetDataHandle TargetData = UAbilitySystemBlueprintLibrary::AbilityTargetDataFromActorArray(ActorsToApplyGameplayEffectTo, true);
	ApplyGESpecHandleToTargetData(Spec, TargetData);
}

void USBGameplayAbility::ApplyGESpecHandleToTargetData(const FGameplayEffectSpecHandle& GESpecHandle, const FGameplayAbilityTargetDataHandle& TargetDataHandle)
{
	for (TSharedPtr<FGameplayAbilityTargetData> Data : TargetDataHandle.Data)
	{
		Data->ApplyGameplayEffectSpec(*GESpecHandle.Data.Get());
	}
}