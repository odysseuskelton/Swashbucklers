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
/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API AAIShip : public AShip, public IAbilitySystemInterface
{
	GENERATED_BODY()
	
public:
	void MoveToTarget(AActor* Target);
	void SetTeam(ETeam TeamToSet);

protected:
	AAIShip();
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const;

	virtual void MulticastOnHealthChanged_Implementation(float Health, float MaxHealth, AActor* InstigatorActor) override;

	UFUNCTION()
	void ShipBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	void TreasureResolved();

	virtual void Die(AActor* InstigatorActor) override;

	FTimerHandle DestroyTimer;
	void DestroyTimerFinished();

	void Tick(float DeltaTime);
	void InitializeEnemy();

	AActor* CurrentTarget;

	UPROPERTY(ReplicatedUsing= OnRep_SetTeam)
	ETeam AITeam;

	UFUNCTION()
	void OnRep_SetTeam();

private:
	AAIController* AIController;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AbilitySystem", meta = (AllowPrivateAccess))
	USBAbilitySystemComponent* AbilityComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AbilitySystem", meta = (AllowPrivateAccess))
	USBAttributeSet* AttributeSet;

	//Hit interface override

	FORCEINLINE virtual AActor* GetActorWithAbilityComponent() override { return this; }
	FORCEINLINE bool CanBeKnocked() { return false; }
	FORCEINLINE virtual ETeam GetHitActorTeam() { return AITeam; }

	//IAbilitySystemInterface Override
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	UPROPERTY(EditAnywhere)
	int32 MerchantShipBounty = 175.f;

	UPROPERTY(EditAnywhere)
	int32 ReturnToBaseBounty = 300.f;
};
