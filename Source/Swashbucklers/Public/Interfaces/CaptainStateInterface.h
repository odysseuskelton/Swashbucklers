// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PlayerStates/Teams.h"
#include "GameplayAbilities/AbilityTypes.h"
#include "CaptainStateInterface.generated.h"

class AShip;
class USBGameplayAbility;
class USBAttributeSet;
// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UCaptainStateInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class SWASHBUCKLERS_API ICaptainStateInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual APawn* GetPossessedPawn() = 0;
	virtual TArray<TSubclassOf<AShip>> GetPlayerShips() = 0; 
	virtual void BuyShip(TSubclassOf<AShip> ShipToAdd) = 0;
	virtual void BuyAbility(TSubclassOf<USBGameplayAbility> AbilityToAdd, EAbilitySlot SlotSelected) = 0;
	virtual int32 GetPlayerPOE() = 0;
	virtual void SetDefaultShip(TSubclassOf<AShip> NewDefaultShip) = 0;
	virtual ETeam GetPlayerTeam() = 0;
	virtual void SendPlayerPOE(int32 POEToSend) = 0;
	virtual TArray<TSubclassOf<USBGameplayAbility>> GetCurrentAbilities() = 0;
	virtual USBAttributeSet* GetPlayerAttributeSet() = 0;

};
