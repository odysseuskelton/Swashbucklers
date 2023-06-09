// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "Cannon.generated.h"


class AProjectile;
class UNiagaraSystem;
class UNiagaraSystemComponent;

UCLASS()
class SWASHBUCKLERS_API ACannon : public AActor
{
	GENERATED_BODY()
	
public:	
	ACannon();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const;

	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void FireCannon();

	UFUNCTION(BlueprintCallable)
	void FireDragonsBreath();

	void ApplyGESpecHandleToTargetData(const FGameplayEffectSpecHandle& GESpecHandle, const FGameplayAbilityTargetDataHandle& TargetDataHandle);

	void CannonFireEffects();

	UFUNCTION(Server, Reliable)
	void ServerCannonFireEffects(FTransform TransformToSpawnAt);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastCannonFireEffects(FTransform TransformToSpawnAt);

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess))
	FGameplayEffectSpecHandle CannonGEHandle;

	UPROPERTY()
	FName SocketName = "";

	FRotator StartingRotation;

	UPROPERTY(Replicated)
	bool ExtraSoundsOnCannonball = false;

	UPROPERTY(BlueprintReadWrite)
	bool bCannonStreamAbilityActive = false;

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess))
	USkeletalMeshComponent* CannonMesh;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AProjectile> CannonballClass;

	//FireEffects
	UPROPERTY(EditAnywhere)
	UAnimationAsset* FireAnimation;

	UPROPERTY(EditAnywhere)
	UNiagaraSystem* CannonFireSystem;

	UPROPERTY(EditAnywhere)
	UNiagaraSystem* CannonSmokeSystem;

	UPROPERTY(EditAnywhere)
	USoundBase* CannonFireSound;

	UPROPERTY(EditAnywhere)
	float CannonAngularRecoil = 30.f;

	UPROPERTY(EditAnywhere)
	float CannonLinearRecoil = 30.f;
	
public:	

};
