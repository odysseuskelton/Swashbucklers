// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "Teams.h"
#include "AbilitySystemInterface.h"
#include "CaptainState.generated.h"


class USBAbilitySystemComponent;
class USBAttributeSet;
class USBGameplayAbility;

/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API ACaptainState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	ACaptainState();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AbilitySystem", meta = (AllowPrivateAccess))
	USBAbilitySystemComponent* AbilityComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AbilitySystem", meta = (AllowPrivateAccess))
	USBAttributeSet* AttributeSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilitySystem", meta = (AllowPrivateAccess))
	TArray<TSubclassOf<USBGameplayAbility>> StartingAbilities;

	UPROPERTY(VisibleAnywhere, ReplicatedUsing = OnRep_Team)
	ETeam PlayerTeam;

protected:
	virtual void BeginPlay() override;

	void Tick(float DeltaTime);

public:
	//IAbilitySystemInterface Override
	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	void ActivateAbility(TSubclassOf<USBGameplayAbility> Ability);

	void AcquireAbility(TSubclassOf<USBGameplayAbility> AbilityToAcquire);

	void AcquireAbilities(TArray<TSubclassOf<USBGameplayAbility>> AbilitiesToAcquire);

public:
	FORCEINLINE USBAttributeSet* GetAttributeSet() { return AttributeSet; }
	void SetTeam(ETeam TeamToSet);

	UFUNCTION()
	void OnRep_Team(ETeam TeamToSet);

	FORCEINLINE ETeam GetPlayerTeam() { return PlayerTeam; }
};
