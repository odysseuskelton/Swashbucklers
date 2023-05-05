// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Interfaces/HitInterface.h"
#include "PlayerStates/Teams.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemInterface.h"
#include "StaticNPC.generated.h"

class USphereComponent;
class USBAbilitySystemComponent;
class USBAttributeSet;
class UStaticNPCAnimInstance;
class UHealthbarComponent;
UCLASS()
class SWASHBUCKLERS_API AStaticNPC : public APawn, public IHitInterface, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	AStaticNPC();

protected:
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnMeshOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	void InitializeAttributes();

	UFUNCTION()
	void EnterAggroRange(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void ExitAggroRange(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

public:	
	virtual void Tick(float DeltaTime) override;

	void RotateToTarget(float DeltaTime);

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	void AttackFinished();

	FTimerHandle AttackTimer;
	UPROPERTY(EditAnywhere)
	float AttackDelay = 3.f;

	UPROPERTY(EditAnywhere)
	float TrackingSpeed = 4.f;

	UPROPERTY(EditAnywhere)
	int32 Bounty = 200.f;

	UPROPERTY(EditAnywhere)
	float KrakenHitForceMultiplier = 0.001;

	void Attack();

	UFUNCTION(BlueprintCallable)
	void SetCanRotate(bool bUpdate);

	bool bCanRotate = true;

	bool bCanAttack = true;
	bool bDead = false;

	void Die(AActor* InstigatorActor);

	UPROPERTY(EditAnywhere)
	ETeam AITeam;

	TArray<IHitInterface*> AlreadyHitInterfaces;

private:
	AActor* CurrentTarget;

	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* CharacterMesh;

	UPROPERTY(VisibleAnywhere)
	USphereComponent* AggroComponent;

	UPROPERTY(VisibleAnywhere)
	UHealthbarComponent* HealthbarComponent;

	UStaticNPCAnimInstance* AnimInstance;

	USBAbilitySystemComponent* AbilityComponent;
	USBAttributeSet* AttributeSet;

	UPROPERTY(EditAnywhere)
	float StartingHealth = 500.f;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UGameplayEffect> DamageEffectClass;


public:
	//IAbilitySystemInterface Override
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	UFUNCTION()
	void OnHealthChanged(float Health, float MaxHealth, AActor* InstigatorActor);

	FTimerHandle HealthbarTimer;
	void HealthbarTimerFinished();

	UFUNCTION(NetMulticast, Reliable)
	void MulticastOnHealthChanged(float Health, float MaxHealth, AActor* InstigatorActor);

	FORCEINLINE virtual AActor* GetActorWithAbilityComponent() override { return this; };
	FORCEINLINE virtual bool AITargetable() override { return true; }
	FORCEINLINE virtual ETeam GetHitActorTeam() override { return AITeam; }
	FORCEINLINE virtual bool IsHitActorDead() override { return bDead; }
	FORCEINLINE virtual bool CanBeKnocked() override { return false; }
	FORCEINLINE virtual bool IsLocallyControlledInterface() override { return false; }
	FORCEINLINE virtual bool IsAI() override { return true; }


};
