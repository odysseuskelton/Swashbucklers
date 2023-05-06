// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ships/AIShip.h"
#include "AITypes.h"
#include "Navigation/PathFollowingComponent.h"
#include "AIArtilleryShip.generated.h"

class UAISense;
class USensorBase;
class AProjectile;
struct FSensedStimulus;
struct FAIRequestID;
class IHitInterface;
/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API AAIArtilleryShip : public AAIShip
{
	GENERATED_BODY()
	
public:
	AAIArtilleryShip();

protected:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	void ChaseTarget();

	void Reposition();

	void HandleShipRotation(float DeltaTime);

	void RotateArtilleryCannon(FRotator& LookAtRotation);

	void OpenCloseSails();

	UFUNCTION()
	void OnMoveCompleted(FAIRequestID RequestID, EPathFollowingResult::Type Result);

	bool CurrentTargetInRange();

	void Attack();

	UFUNCTION()
	void OnCurrentSense(const USensorBase* SensorPtr, int32 Channel, const TArray<FSensedStimulus>& inSensedStimulus);

	UFUNCTION()
	void OnLostSense(const USensorBase* SensorPtr, int32 Channel, const TArray<FSensedStimulus>& inSensedStimulus);

	void AcquireNewTarget();

	bool bNeedsNewTargets = true;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> ActorClassToDetect;

	FTimerHandle AttackTimer;

	UPROPERTY(EditAnywhere)
	float AttackAcceptanceRadius = 20000.f;
	
	UPROPERTY(EditAnywhere)
	float AttackDelay = 3.5f;

	UPROPERTY(EditAnywhere)
	float MaxAggroRange = 50000.f;

	UPROPERTY(EditAnywhere)
	float FiringDistance = 35000.f;

	UPROPERTY(EditAnywhere)
	float MinRepositionDistance = 5000.f;

	UPROPERTY(EditAnywhere)
	float MaxRepositionDistance = 8000.f;

	UPROPERTY(EditAnywhere)
	float CannonDistanceMultiplier = 0.0007f;

	TArray<AActor*> ActorsToIgnore;
	TArray<AActor*> CurrentlyDetectedActors;

	UFUNCTION(BlueprintCallable)
	virtual void FireArtilleryCannon();

	void ResumePath();

	UPROPERTY(EditAnywhere)
	TSubclassOf<AProjectile> ArtilleryProjectileClass;

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess))
	FGameplayEffectSpecHandle ArtilleryGEHandle;

private:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* TurretBaseMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess))
	UStaticMeshComponent* TurretCannonMesh;

	IHitInterface* StoredTargetInterface;

public:
	FORCEINLINE bool IsHitActorDead() override { return bIsDead; }



};
