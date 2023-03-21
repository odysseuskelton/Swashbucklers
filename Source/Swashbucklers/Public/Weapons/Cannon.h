// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayEffectTypes.h"
#include "Cannon.generated.h"


class AProjectile;
class UNiagaraSystem;

UCLASS()
class SWASHBUCKLERS_API ACannon : public AActor
{
	GENERATED_BODY()
	
public:	
	ACannon();

	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void FireCannon();

	void CannonFireEffects();

	UFUNCTION(Server, Reliable)
	void ServerCannonFireEffects(FTransform TransformToSpawnAt);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastCannonFireEffects(FTransform TransformToSpawnAt);

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess))
	FGameplayEffectSpecHandle CannonGEHandle;

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere)
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


	
public:	

};
