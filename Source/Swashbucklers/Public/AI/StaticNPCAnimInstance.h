// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "StaticNPCAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API UStaticNPCAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	bool bCanAttack = true;
	
	UPROPERTY(BlueprintReadOnly)
	bool bDead = false;
	
};
