// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Interfaces/HitInterface.h"
#include "Interfaces/ExecutionInterface.h"
#include "GameplayEffect.h"
#include "InputActionValue.h"
#include "Ship.generated.h"

class UFloatingPawnMovement;
class UHealthbarComponent;
class UPlayerNameplateComponent;

class UInputMappingContext;
class UInputAction;

class ACannon;
class ACaptainState;
class USBGameplayAbility;
class USBAbilitySystemComponent;
class UNiagaraSystem;
class UBuoyancyComponent;
class USmoothSync;

UCLASS()
class SWASHBUCKLERS_API AShip : public APawn, public IHitInterface, public IExecutionInterface
{
	GENERATED_BODY()

public:
	AShip();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const;

	virtual void BeginPlay() override;

	UFUNCTION()
	void ShipCollision(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	UFUNCTION(Server, Reliable)
	void ServerShipCollision(AActor* OtherActor, const FHitResult& Hit, float SpeedOfImpact);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastShipCollision(AActor* OtherActor, const FHitResult& Hit, float SpeedOfImpact, FVector ForceOfImpact);

	FTimerHandle ShipCollisionTimer;
	void ShipCollisionTimerFinished();

	UFUNCTION()
	void OnHealthChanged(float Health, float MaxHealth, AActor* InstigatorActor);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastOnHealthChanged(float Health, float MaxHealth, AActor* InstigatorActor);

	void SpawnShipDamageSystems(uint16 NumberOfSystemsToSpawn);

	virtual void Die(AActor* InstigatorActor);

	void CleanupCannons(float CannonDespawnTime);

	void AcquireCannonAbilities();

	FVector ForceToApply;

	//Store Info
	UPROPERTY(EditAnywhere, Category = "Store Info")
	FName StoreShipName;

	UPROPERTY(EditAnywhere, Category = "Store Info")
	UTexture2D* StoreShipImage;

	UPROPERTY(EditAnywhere, Category = "Store Info")
	int32 StoreHP;

	UPROPERTY(EditAnywhere, Category = "Store Info")
	int32 StoreCannons;

	UPROPERTY(EditAnywhere, Category = "Store Info")
	float StoreSpeed;

	UPROPERTY(EditAnywhere, Category = "Store Info")
	float StoreAcceleration;

	UPROPERTY(EditAnywhere, Category = "Store Info")
	FString StoreDescription;

	UPROPERTY(EditAnywhere, Category = "Store Info")
	int32 StoreCost;


	void SetSailColors(ETeam PlayerTeam);
	bool bSailColorSet = false;


	UPROPERTY(EditAnywhere)
	UMaterialInterface* PirateMaterial;

	UPROPERTY(EditAnywhere)
	UMaterialInterface* PrivateerMaterial;

	UPROPERTY(EditAnywhere)
	UMaterialInterface* PirateMaterialSecondary;

	UPROPERTY(EditAnywhere)
	UMaterialInterface* PrivateerMaterialSecondary;

	UPROPERTY(EditAnywhere)
	UMaterialInterface* PirateFlag;

	UPROPERTY(EditAnywhere)
	UMaterialInterface* PrivateerFlag;


protected:

	UPROPERTY(EditAnywhere)
	TSubclassOf<UGameplayEffect> RamDamageEffectClass;
	//Components
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess))
	UStaticMeshComponent* ShipMesh;

	UPROPERTY()
	APlayerController* PlayerController;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess))
	UFloatingPawnMovement* PawnMovement;

	UPROPERTY(VisibleAnywhere)
	UBuoyancyComponent* BuoyancyComponent;

	UPROPERTY(VisibleAnywhere)
	UHealthbarComponent* HealthbarComponent;

	UPROPERTY(EditAnywhere)
	UAudioComponent* CruisingSoundComponent;

	UPROPERTY(VisibleAnywhere)
	USmoothSync* SmoothSyncComp;

	AActor* RammedShip;
	float ImpactSpeed = 0.f;

	//Healthbar Functionality
	FTimerHandle HealthbarTimer;
	void HealthbarTimerFinished();

	//Ship Variables
	float DeltaSeconds;

	UPROPERTY(EditAnywhere)
	float StealthBuoyancy = 5000.f;

	UPROPERTY(EditAnywhere)
	float MouseWheelMultiplier = 3.f;

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

	UPROPERTY(EditAnywhere)
	float CannonRecoilMultiplier = 1.f;

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

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, Category = "AbilitySystem", meta = (AllowPrivateAccess))
	TSubclassOf<USBGameplayAbility> PortCannonAbility;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, Category = "AbilitySystem", meta = (AllowPrivateAccess))
	TSubclassOf<USBGameplayAbility> StarboardCannonAbility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilitySystem", meta = (AllowPrivateAccess))
	TSubclassOf<USBGameplayAbility> AuxiliaryCannonAbility;

	UFUNCTION(BlueprintCallable)
	void SwitchCannonAbilities(TSubclassOf<USBGameplayAbility> NewPortCannonAbility, TSubclassOf<USBGameplayAbility> NewStarboardCannonAbility);

	bool bAcquiredCannonAbilities = false;

	virtual void FirePortCannons();

	virtual void FireStarboardCannons();

	UFUNCTION(Server, Reliable)
	virtual void ServerFireCannons(TSubclassOf<USBGameplayAbility> CannonAbilityToActivate);

	void SpawnCannons();

	void HandleCannonSpawning(int32 CannonSlots, FString CannonAttachString);


	//Ability System Reference
	TWeakObjectPtr<class USBAbilitySystemComponent> AbilitySystemComponent;

	FORCEINLINE virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override { return nullptr; };

public:	
	FORCEINLINE UFloatingPawnMovement* GetPawnMovement() { return PawnMovement; }

	UPROPERTY(Replicated, BlueprintReadOnly)
	bool bOpenSails = false;

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	float StrafeSpeed = .5f;

	UPROPERTY(EditAnywhere)
	float SinkingRate = 1.f;

	//HitInterface Override
	virtual AActor* GetActorWithAbilityComponent() override;
	ETeam GetHitActorTeam() override;
	FORCEINLINE bool IsHitActorDead() { return bIsDead; }
	FORCEINLINE bool CanBeKnocked() { return true; }
	FORCEINLINE virtual bool IsLocallyControlledInterface() override { return IsLocallyControlled(); }

	//Execution Interface Overrides
	virtual float GetShipSpeed();
};

