// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbilities/EffectExecutions/SpeedEffectExecution.h"
#include "AbilitySystemComponent.h"
#include "Interfaces/ExecutionInterface.h"
#include "GameplayAbilities/SBAttributeSet.h"

struct DamageStatics
{
	//	DECLARE_ATTRIBUTE_CAPTUREDEF(WeaponDamage)

		DamageStatics()
	{
			//		DEFINE_ATTRIBUTE_CAPTUREDEF(UAttributeSetBase, WeaponDamage, Source, false);
	}

};

static DamageStatics& GetDamageStatics()
{
	static DamageStatics DamageStaticsVar;
	return DamageStaticsVar;
}

USpeedEffectExecution::USpeedEffectExecution()
{
	HealthProperty = FindFieldChecked<FProperty>(USBAttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(USBAttributeSet, Health));
	HealthDef = FGameplayEffectAttributeCaptureDefinition(HealthProperty, EGameplayEffectAttributeCaptureSource::Target, false);

	RelevantAttributesToCapture.Add(HealthDef);
	//RelevantAttributesToCapture.Add(GetDamageStatics().WeaponDamageDef);
}

void USpeedEffectExecution::Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const
{
	UAbilitySystemComponent* TargetAbilitySystemComponent = ExecutionParams.GetTargetAbilitySystemComponent();
	UAbilitySystemComponent* SourceAbilitySystemComponent = ExecutionParams.GetSourceAbilitySystemComponent();

	AActor* SourceActor = SourceAbilitySystemComponent ? SourceAbilitySystemComponent->GetAvatarActor() : nullptr;
	AActor* TargetActor = TargetAbilitySystemComponent ? TargetAbilitySystemComponent->GetAvatarActor() : nullptr;

	const FGameplayEffectSpec& Spec = ExecutionParams.GetOwningSpec();

	// Gather the tags from the source and target as that can affect which buffs should be used
	const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
	const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();

	float InstigatorSpeedMagnitude = 0.f;
	float TargetSpeedMagnitude = 0.f;

	IExecutionInterface* SourceExecutionInterface = Cast<IExecutionInterface>(SourceActor);
	if (SourceExecutionInterface)
	{
		InstigatorSpeedMagnitude = FMath::Clamp(SourceExecutionInterface->GetShipSpeed() * 0.05, 0, SourceExecutionInterface->GetShipSpeed() * 0.05);
	}

	float FinalDamage = FMath::Clamp(InstigatorSpeedMagnitude, 0, InstigatorSpeedMagnitude);
	UE_LOG(LogTemp, Warning, TEXT("Final Damage %f"), FinalDamage)

	OutExecutionOutput.AddOutputModifier(FGameplayModifierEvaluatedData(HealthProperty, EGameplayModOp::Additive, -FinalDamage));

}
