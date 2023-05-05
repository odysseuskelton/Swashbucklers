// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Buildings/Building.h"
#include "GameplayEffectTypes.h"
#include "Tower.generated.h"

/**
 * 
 */
class IHitInterface;
class USphereComponent;
class AProjectile;
UCLASS()
class SWASHBUCKLERS_API ATower : public ABuilding
{
	GENERATED_BODY()

public:
	ATower();

	virtual void Tick(float DeltaTime) override;

	void HandleCannonFiring(FRotator& LookAtRotation);

	void RotateCannonMesh(FRotator LookAtRotation);

	void RotateTurret(FRotator LookAtRotation, float DeltaTime);


	UPROPERTY(EditAnywhere)
	float CannonFireRate = 2.f;


	UPROPERTY(EditAnywhere)
	float TurretRotationSpeed = 2.f;

protected:
	virtual void BeginPlay() override;

	void AcquireTowerCannonAbility();

	bool bAcquiredTowerCannonAbility = false;

	UFUNCTION()
	void InAggroRange(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OutAggroRange(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
	float DeltaSeconds;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* TurretBaseMesh;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* TurretCannonMesh;

	UPROPERTY(VisibleAnywhere)
	USphereComponent* AggroComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilitySystem", meta = (AllowPrivateAccess))
	TSubclassOf<USBGameplayAbility> TowerCannonAbility;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AProjectile> CannonballClass;

	UFUNCTION(BlueprintCallable)
	void FireTowerCannon();

	void TurretFireEffects();

	virtual void Die(AActor* InstigatorActor) override;

	FTimerHandle FireTimerHandle;
	void FireTimerFinished();
	bool bFireTimerFinished = true;


	UFUNCTION(Server, Reliable)
	void ServerTurretCannonFireEffects(FTransform TransformToSpawnAt);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastTurretCannonFireEffects(FTransform TransformToSpawnAt);

	UPROPERTY(EditAnywhere)
	UNiagaraSystem* CannonFireSystem;

	UPROPERTY(EditAnywhere)
	UNiagaraSystem* CannonSmokeSystem;

	UPROPERTY(EditAnywhere)
	USoundBase* CannonFireSound;

	AActor* TargetToAttack;

	UPROPERTY(ReplicatedUsing = OnRep_RotateTurret)
	FRotator TurretBaseMeshRotation;

	UPROPERTY(ReplicatedUsing = OnRep_RotateCannonMesh)
	FRotator TurretCannonMeshRotation;

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess))
	FGameplayEffectSpecHandle TowerCannonGEHandle;

	UFUNCTION()
	void OnRep_RotateTurret();

	UFUNCTION()
	void OnRep_RotateCannonMesh();
};
