// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapons/Projectiles/Projectile.h"
#include "Grapple.generated.h"


class UCableComponent;
/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API AGrapple : public AProjectile
{
	GENERATED_BODY()
	
public:
	AGrapple();

	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION(NetMulticast, Reliable)
	void MulticastAttachGrapple();

	void PollInit();

	virtual void CollisionSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess))
	UCableComponent* GrappleCable;

	AActor* AttachedToActor;

	UPROPERTY(EditAnywhere)
	float GrappleAcceptanceDistance = 3000.f;


	UPROPERTY(EditAnywhere)
	float GrappleDuration = 5.f;
	
	bool bAttached = false;
};
