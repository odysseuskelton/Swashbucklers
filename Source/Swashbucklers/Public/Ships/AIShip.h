// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ships/Ship.h"
#include "PlayerStates/Teams.h"
#include "AbilitySystemInterface.h"
#include "AIShip.generated.h"


class AAIController;
class USBAbilitySystemComponent;
class USBAttributeSet;
class USBGameplayAbility;
class USenseReceiverComponent;

UENUM(BlueprintType)
enum class EAIState : uint8
{
	EAI_NoState UMETA(DisplayName = "NoState"),
	EAI_Dead UMETA(DisplayName = "Dead"),
	EAI_Patrolling UMETA(DisplayName = "Patrolling"),
	EAI_Aggroed UMETA(DisplayName = "Aggroed"),
	EAI_Repositioning UMETA(DisplayName = "Repositioning"),
	EAI_Chasing UMETA(DisplayName = "Chasing"),
	EAI_Attacking UMETA(DisplayName = "Attacking"),
	EAI_Engaged UMETA(DisplayName = "Engaged")
};

/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API AAIShip : public AShip, public IAbilitySystemInterface
{
	GENERATED_BODY()
	
public:
	void MoveToTarget(AActor* Target);
	void MoveToLocation(FVector LocationToMoveTo, float AcptRadius);
	UFUNCTION(Server, Reliable)
	void ServerMoveToLocation(FVector LocationToMoveTo, float AcptRadius);

	UFUNCTION(BlueprintCallable)
	virtual void SetTeam(ETeam TeamToSet);

	FTimerHandle CorrectRotationTimer;
	void CorrectActorRotationTowardTarget();
protected:
	AAIShip();
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const;

	virtual void Die(AActor* InstigatorActor) override;

	virtual void MulticastOnHealthChanged_Implementation(float Health, float MaxHealth, AActor* InstigatorActor) override;

	UPROPERTY(VisibleAnywhere)
	EAIState AIState = EAIState::EAI_Patrolling;

	void Tick(float DeltaTime);
	void InitializeEnemy();

	UPROPERTY(EditAnywhere)
	AActor* CurrentTarget;
	FVector TargetLocation;

	UPROPERTY(EditAnywhere, ReplicatedUsing= OnRep_SetTeam)
	ETeam AITeam;

	UFUNCTION()
	virtual void OnRep_SetTeam();


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AbilitySystem", meta = (AllowPrivateAccess))
	USBAbilitySystemComponent* AbilityComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AbilitySystem", meta = (AllowPrivateAccess))
	USBAttributeSet* AttributeSet;

	AAIController* AIController;

	UPROPERTY(VisibleAnywhere)
	USenseReceiverComponent* Sensor;

public:


	//Hit interface override

	FORCEINLINE virtual AActor* GetActorWithAbilityComponent() override { return this; }
	FORCEINLINE bool CanBeKnocked() { return false; }
	FORCEINLINE virtual ETeam GetHitActorTeam() { return AITeam; }
	FORCEINLINE virtual void SetCurrentTarget(AActor* TargetToSet) { CurrentTarget = TargetToSet; }
	FORCEINLINE virtual bool IsAI() override { return true; }

	//IAbilitySystemInterface Override
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	bool ShipIsIdle();



};
