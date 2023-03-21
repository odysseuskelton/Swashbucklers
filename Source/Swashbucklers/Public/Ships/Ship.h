// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Interfaces/HitInterface.h"
#include "InputActionValue.h"
#include "Ship.generated.h"

class UFloatingPawnMovement;
class UHealthbarComponent;

class UInputMappingContext;
class UInputAction;

class ACannon;
class ACaptainState;
class USBGameplayAbility;
class USBAbilitySystemComponent;
class UNiagaraSystem;

UCLASS()
class SWASHBUCKLERS_API AShip : public APawn, public IHitInterface
{
	GENERATED_BODY()

public:
	AShip();

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const;

	virtual void BeginPlay() override;

	virtual void BindAbilityComponentDelegates();

	UFUNCTION()
	void OnHealthChanged(float Health, float MaxHealth);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastOnHealthChanged(float Health, float MaxHealth);

	void SpawnShipDamageSystems(uint16 NumberOfSystemsToSpawn);

	virtual void Die();

	//HitInterface Override
	ACaptainState* GetCaptainState();

	UFUNCTION(Server, Reliable)
	void ServerGetCaptainState();

	void AcquireCannonAbilities();

protected:

	//Components
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess))
	UStaticMeshComponent* ShipMesh;

	UPROPERTY()
	APlayerController* PlayerController;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess))
	UFloatingPawnMovement* PawnMovement;

	UPROPERTY(VisibleAnywhere)
	UHealthbarComponent* HealthbarComponent;

	UPROPERTY(EditAnywhere)
	UAudioComponent* CruisingSoundComponent;

	//Input
	UPROPERTY(EditAnywhere, Category = Input)
	UInputMappingContext* PlayerContext;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* MovementAction;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* TurnAction;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* LookAction;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* FirePortCannonsAction;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* FireStarboardCannonsAction;

	//Healthbar Functionality
	FTimerHandle HealthbarTimer;
	void HealthbarTimerFinished();

	//Ship Variables
	float DeltaSeconds;

	//Death
	UPROPERTY(Replicated, BlueprintReadOnly, meta=(AllowPrivateAccess), VisibleAnywhere)
	bool bIsDead = false;

	bool bMinorDamage = false;
	bool bMajorDamage = false;

	UPROPERTY(EditAnywhere)
	USoundBase* ShipDeathSound;

	UPROPERTY(EditAnywhere)
	UNiagaraSystem* ShipDamagedSystem;

	UPROPERTY(EditAnywhere)
	UNiagaraSystem* ShipDeathSystem;

	UPROPERTY(EditAnywhere)
	float ShipHealth = 200.f;

	UPROPERTY(EditAnywhere)
	float RespawnTime = 10.f;

	//Cannons
	UPROPERTY(EditAnywhere)
	TSubclassOf<ACannon> CannonClass;
	
	UPROPERTY(EditAnywhere)
	int32 PortCannonSlots = 3;

	UPROPERTY(EditAnywhere)
	int32 StarboardCannonSlots = 3;

	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess))
	TArray<ACannon*> PortCannons;

	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess))
	TArray<ACannon*> StarboardCannons;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilitySystem", meta = (AllowPrivateAccess))
	TSubclassOf<USBGameplayAbility> PortCannonAbility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilitySystem", meta = (AllowPrivateAccess))
	TSubclassOf<USBGameplayAbility> StarboardCannonAbility;

	bool bAcquiredCannonAbilities = false;

	virtual void FirePortCannons();

	virtual void FireStarboardCannons();

	UFUNCTION(Server, Reliable)
	virtual void ServerFireCannons(TSubclassOf<USBGameplayAbility> CannonAbilityToActivate);

	void SpawnCannons();

	void HandleCannonSpawning(int32 CannonSlots, FString CannonAttachString);


	//Ability System Reference
	TWeakObjectPtr<class USBAbilitySystemComponent> AbilitySystemComponent;


public:	
	UPROPERTY(Replicated, BlueprintReadOnly)
	bool bOpenSails = false;

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	float StrafeSpeed = .5f;
};
