// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ships/AIShip.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "ExplosiveShip.generated.h"

class USphereComponent;
class UNiagaraComponent;
/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API AExplosiveShip : public AAIShip
{
	GENERATED_BODY()
	
public:
	AExplosiveShip();
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	void BeginPlay();
	void ShipCollision(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	virtual void ShipBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;
	void SetTeam(ETeam TeamToSet) override;
	void OnRep_SetTeam() override;
	void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Replicated)
	FLinearColor PrivateerFuseColor;

	UPROPERTY(EditAnywhere, Replicated)
	FLinearColor PirateFuseColor;

	UFUNCTION()
	void AcquireTarget();

private:
	UPROPERTY(VisibleAnywhere)
	UNiagaraComponent* FuseSystem;

	FTimerHandle DetonationTimer;
	void DetonationTimerFinished();

	bool bCanAcquireTarget = true;

	virtual void Die(AActor* InstigatorActor) override;

	void ApplyGESpecHandleToTargetData(const FGameplayEffectSpecHandle& GESpecHandle, const FGameplayAbilityTargetDataHandle& TargetDataHandle);

	UFUNCTION(Server, Reliable)
	void ServerExplodeShip();

	UFUNCTION(NetMulticast, Reliable)
	void MulticastExplodeShip();

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess))
	FGameplayEffectSpecHandle ExplosiveGEHandle;

	FORCEINLINE virtual bool IsAI() override { return true; }


	/*UPROPERTY(EditAnywhere)
	USphereComponent* DetectionSphere;*/


};
