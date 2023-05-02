// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "Projectile.generated.h"


class UNiagaraComponent;
class UProjectileMovementComponent;
class USphereComponent;
class UNiagaraSystem;

UCLASS()
class SWASHBUCKLERS_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	AProjectile();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	AActor* PlayerPawn;

	UFUNCTION()
	virtual void CollisionSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION(NetMulticast, Unreliable)
	void MulticastWaterSplash(const FHitResult SphereHit);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastShipHitEffects(FHitResult ShipHit);

	void ApplyGESpecHandleToTargetData(const FGameplayEffectSpecHandle& GESpecHandle, const FGameplayAbilityTargetDataHandle& TargetDataHandle);

	void SphereTrace(FHitResult& SphereHit);

	void SetStencilValueOfCannonball(ETeam TeamOfOwner);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastSetStencilValueOfCannonball(ETeam TeamOfOwner);

	UPROPERTY(BlueprintReadWrite)
	FGameplayEffectSpecHandle AbilityHandle;

	UPROPERTY(Replicated)
	bool EasterEggSounds = false;


private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess))
	UStaticMeshComponent* ProjectileMesh;

	UPROPERTY(VisibleAnywhere)
	USphereComponent* CollisionSphere;

	UPROPERTY(VisibleAnywhere)
	USphereComponent* TraceStart;

	UPROPERTY(VisibleAnywhere)
	USphereComponent* TraceEnd;

	UPROPERTY(VisibleAnywhere)
	UNiagaraComponent* ProjectileTrail;

	UPROPERTY(EditAnywhere)
	float ProjectileLifeSpan = 5.f;

	UPROPERTY(EditAnywhere)
	float CannonballForce = 15.f;

protected:

	UPROPERTY(VisibleAnywhere)
	UProjectileMovementComponent* ProjectileMovement;

	TArray<AActor*> IgnoreActors;

	UPROPERTY(EditAnywhere)
	float SphereTraceRadius = 18.0;

	UPROPERTY(EditAnywhere, Category = "Weapon Properties")
	bool bShowDebugSphere = false;

	UPROPERTY(EditAnywhere)
	UNiagaraSystem* ShipHitSystem;

	UPROPERTY(EditAnywhere)
	USoundBase* ShipHitSound;

	UPROPERTY(EditAnywhere)
	UNiagaraSystem* SplashSystem;

	UPROPERTY(EditAnywhere)
	USoundBase* SplashSound;

	UPROPERTY(EditAnywhere)
	USoundBase* KerSplooshSound;

	UPROPERTY(EditAnywhere)
	USoundBase* KaBoomSound;




public:
	FORCEINLINE void SetPlayerPawn(AActor* PlayerPawnToSet) { PlayerPawn = PlayerPawnToSet; }
	FORCEINLINE UStaticMeshComponent* GetProjectileMesh() { return ProjectileMesh; }

};
