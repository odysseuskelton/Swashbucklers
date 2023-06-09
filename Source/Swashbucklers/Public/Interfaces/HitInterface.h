// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PlayerStates/Teams.h"
#include "HitInterface.generated.h"

class ACaptainState;
class UAbilitySystemComponent;
// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UHitInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class SWASHBUCKLERS_API IHitInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual AActor* GetActorWithAbilityComponent() = 0;
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const = 0;
	virtual bool IsAI() = 0;
	virtual bool AITargetable() = 0;
	virtual ETeam GetHitActorTeam() = 0;
	virtual bool IsHitActorDead() = 0;
	virtual bool CanBeKnocked() = 0;
	virtual bool IsLocallyControlledInterface() = 0;
};
