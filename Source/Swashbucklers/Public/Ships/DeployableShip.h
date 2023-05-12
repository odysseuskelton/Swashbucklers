// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ships/AIShip.h"
#include "PlayerStates/Teams.h"
#include "DeployableShip.generated.h"


class ATripleCannon;
class UAISense;
class USensorBase;
struct FSensedStimulus;
class ACaptainState;
/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API ADeployableShip : public AAIShip
{
	GENERATED_BODY()

public:
	ADeployableShip();

	virtual void BeginPlay() override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


	void LifespanTimerFinished();

private:

	virtual void SetTeam(ETeam TeamToSet) override;

	virtual void OnRep_SetTeam() override;

	void SpawnTripleCannons();

	void SetCannonTeamColors();

	UFUNCTION(NetMulticast, Reliable)
	void MulticastSetMaterial(ETeam TeamOfOwner);

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(ReplicatedUsing=OnRep_TurretRotation)
	FRotator CurrentRotation;

	UFUNCTION()
	void OnRep_TurretRotation();

	UFUNCTION()
	void OnCurrentSense(const USensorBase* SensorPtr, int32 Channel, const TArray<FSensedStimulus>& inSensedStimulus);

	void FireCannons();

	void FireSecondaryCannon();

	virtual void Die(AActor* InstigatorActor) override;

	void StopCannonFire();

	bool bNeedsNewTarget = true;
	bool bIsFiring = false;

	bool bDeployableShipTeamSet = false;



	UPROPERTY(Replicated, BlueprintReadWrite, meta=(AllowPrivateAccess))
	ACaptainState* OwningCaptState;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* TurretBase;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ATripleCannon> TripleCannonClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UGameplayEffect> CannonDamageEffectClass;
	
	UPROPERTY(EditAnywhere)
	ATripleCannon* MainWeapon;

	UPROPERTY(EditAnywhere)
	ATripleCannon* SecondaryWeapon;

	FTimerHandle FireOffsetTimer;

	UPROPERTY(EditAnywhere)
	float FireOffset = 0.55f;

	FTimerHandle LifeSpanTimer;;

	UPROPERTY(EditAnywhere)
	float DeployableShipLifeTime = 20.f;

	UPROPERTY(EditAnywhere)
	float MaxAggroDistance = 30000.f;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> ActorClassToDetect;

	IHitInterface* StoredHitInterface;

	TArray<AActor*> ActorsToIgnore;


};
