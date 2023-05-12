// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "TripleCannon.generated.h"

class UTripleCannonAnim;
class AProjectile;
class UNiagaraSystem;

UCLASS()
class SWASHBUCKLERS_API ATripleCannon : public AActor
{
	GENERATED_BODY()
	
public:	
	ATripleCannon();
	virtual void Tick(float DeltaTime) override;

	void BeginFire();

	void EndFire();

	UFUNCTION(BlueprintCallable)
	void Fire();

	void CannonFireEffects(FTransform MuzzleTransform);

	UFUNCTION(Server, Reliable)
	void ServerCannonFireEffects(FTransform TransformToSpawnAt);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastCannonFireEffects(FTransform TransformToSpawnAt);

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess))
	FGameplayEffectSpecHandle CannonGEHandle;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AProjectile> CannonballClass;

	bool bCannonsFiring = false;

	UPROPERTY(EditAnywhere)
	UNiagaraSystem* CannonFireSystem;

	UPROPERTY(EditAnywhere)
	UNiagaraSystem* CannonSmokeSystem;

	UPROPERTY(EditAnywhere)
	USoundBase* CannonFireSound;

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* CannonMesh;

	UTripleCannonAnim* AnimInstance;

public:	
	FORCEINLINE USkeletalMeshComponent* GetTripleCannonMesh() { return CannonMesh; }
};
