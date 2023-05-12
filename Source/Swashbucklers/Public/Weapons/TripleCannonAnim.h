// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "TripleCannonAnim.generated.h"

/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API UTripleCannonAnim : public UAnimInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	bool bFiring = false;
	

};
