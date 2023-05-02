// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayerStates/Teams.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "Explosive.generated.h"

class UProjectileMovementComponent;
class UNiagaraSystem;
class UAudioComponent;

UCLASS()
class SWASHBUCKLERS_API AExplosive : public AActor
{
	GENERATED_BODY()
	
public:	
	AExplosive();

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


protected:
	virtual void BeginPlay() override;

	UFUNCTION()
	void ExplosiveOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION(NetMulticast, Unreliable)
	void MulticastWaterSplash();

	UFUNCTION(BlueprintCallable)
	void SetMaterial();

	UFUNCTION(NetMulticast, Reliable)
	void MulticastSetMaterial(ETeam TeamOfOwner);

private:
	UPROPERTY(Replicated)
	ETeam ExplosiveTeam = ETeam::ET_NoTeam;

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void ServerSetTeam(ETeam TeamToSet);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess))
	UStaticMeshComponent* ExplosiveMesh;

	UPROPERTY(EditAnywhere)
	UMaterialInstance* PirateMaterial;

	UPROPERTY(EditAnywhere)
	UMaterialInstance* PrivateerMaterial;

	UPROPERTY(EditAnywhere)
	UAudioComponent* AudioComponent;

	UPROPERTY(EditAnywhere)
	USoundBase* SearchingSound;

	UPROPERTY(EditAnywhere)
	USoundBase* ActivatedSound;

	UPROPERTY(EditAnywhere)
	USoundBase* DetonatedSound;

	UPROPERTY(EditAnywhere)
	UNiagaraSystem* SplashSystem;

	UPROPERTY(EditAnywhere)
	USoundBase* SplashSound;

	UPROPERTY(EditAnywhere)
	UNiagaraSystem* ExplosionSystem;

	UPROPERTY(EditAnywhere)
	UNiagaraSystem* WaterExplosion;

	FTimerHandle SearchTimerHandle;
	void SearchTimerPulse();

	FTimerHandle ActivatedTimerHandle;

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void MulticastActivate();

	void ExplosiveActivated();
	void Detonate();

	UFUNCTION(Server, Reliable)
	void ServerDetonate();

	UPROPERTY(Replicated)
	bool bActivated = false;

	UFUNCTION(NetMulticast, Reliable)
	void MulticastExplosion();

	void ApplyGESpecHandleToTargetData(const FGameplayEffectSpecHandle& GESpecHandle, const FGameplayAbilityTargetDataHandle& TargetDataHandle);

	int32 NumberOfPulsesSearching = 0;
	int32 NumberOfPulsesActivated = 0;
	bool bEmissiveBright = false;

	UMaterialInstanceDynamic* DynamicMaterial;

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess))
	FGameplayEffectSpecHandle ExplosiveGEHandle;


public:	
	virtual void Tick(float DeltaTime) override;

};
