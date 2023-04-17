// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interfaces/HitInterface.h"
#include "PlayerStates/Teams.h"
#include "BuildingTypes.h"
#include "AbilitySystemInterface.h"
#include "Building.generated.h"


class USBAbilitySystemComponent;
class USBAttributeSet;
class USBGameplayAbility;
class UHealthbarComponent;
class UNiagaraSystem;
class UGameplayEffect;

UCLASS()
class SWASHBUCKLERS_API ABuilding : public AActor, public IAbilitySystemInterface, public IHitInterface
{
	GENERATED_BODY()
	
public:	
	ABuilding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AbilitySystem", meta = (AllowPrivateAccess))
	USBAbilitySystemComponent* AbilityComponent;

	UFUNCTION()
	void OnBuildingHealthChange(float Health, float MaxHealth, AActor* InstigatorActor);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastOnBuildingHealthChange(float Health, float MaxHealth, AActor* InstigatorActor);

	void SpawnDamageSystem(uint16 NumberOfSystemsToSpawn);

	virtual void Die();
	FTimerHandle DeathTimer;
	void DeathTimerFinished();
	UPROPERTY(EditAnywhere)
	float DeathTimerDelay = 10.f;

	void HealthbarTimerFinished();

	UFUNCTION(BlueprintImplementableEvent)
	void SpawnDestructible();

	UPROPERTY(Replicated, BlueprintReadOnly, meta = (AllowPrivateAccess), VisibleAnywhere)
	bool bIsDead = false;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* BuildingMesh;

private:
	UPROPERTY(Replicated, EditAnywhere)
	ETeam Team;

	UPROPERTY(Replicated, EditAnywhere)
	EBuildingType BuildingType;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AbilitySystem", meta = (AllowPrivateAccess))
	USBAttributeSet* AttributeSet;

	UPROPERTY(VisibleAnywhere)
	UHealthbarComponent* HealthbarComponent;

	UPROPERTY(EditAnywhere)
	UNiagaraSystem* BuildingDamageSystem;

	UPROPERTY(EditAnywhere)
	UNiagaraSystem* BuildingDeathSystem;

	UPROPERTY(EditAnywhere)
	USoundBase* BuildingHitSound;

	UPROPERTY(EditAnywhere)
	USoundBase* BuildingDeathSound;

	UPROPERTY(EditAnywhere)
	int32 BuildingBounty = 50;

	UPROPERTY(Replicated, EditAnywhere)
	float StartingBuildingHealth = 1500.f;

	FTimerHandle HealthbarTimer;

	bool bMinorDamage = false;
	bool bMajorDamage = false;

public:	
	virtual void Tick(float DeltaTime) override;

	//IAbilitySystemInterface Override
	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	//IHitInterface Override
	FORCEINLINE virtual bool IsLocallyControlledInterface() override { return true; }
	virtual AActor* GetActorWithAbilityComponent() override;
	virtual ETeam GetHitActorTeam() override;
	FORCEINLINE bool IsHitActorDead() { return bIsDead; }
	FORCEINLINE int32 GetBuildingBounty() { return BuildingBounty; }
	FORCEINLINE ETeam GetBuildingTeam() { return Team; }
	FORCEINLINE bool CanBeKnocked() { return false; }

};
