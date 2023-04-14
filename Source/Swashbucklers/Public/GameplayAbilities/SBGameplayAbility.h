// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "AbilityTypes.h"
#include "SBGameplayAbility.generated.h"

/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API USBGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	FGameplayAbilityInfo GetAbilityInfo();

	UFUNCTION(BlueprintCallable)
	void ApplyHealEffectToActorsInAOE(FGameplayEffectSpecHandle Spec, AActor* OwnerActor, FVector Origin, float Radius);

	void ApplyGESpecHandleToTargetData(const FGameplayEffectSpecHandle& GESpecHandle, const FGameplayAbilityTargetDataHandle& TargetDataHandle);


	UPROPERTY(EditAnywhere)
	FString AbilityName;

	UPROPERTY(EditAnywhere)
	EAbilityType AbilityType;

	UPROPERTY(EditAnywhere)
	FString AbilityDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityBase")
	UMaterialInstance* UIMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 AbilityInputID = 0;
	
};
