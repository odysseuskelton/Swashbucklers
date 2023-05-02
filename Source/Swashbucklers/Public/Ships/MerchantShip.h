// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ships/AIShip.h"
#include "MerchantShip.generated.h"

/**
 * 
 */
UCLASS()
class SWASHBUCKLERS_API AMerchantShip : public AAIShip
{
	GENERATED_BODY()
protected:
	void BeginPlay() override;



public:

	//UFUNCTION()
	virtual void ShipBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;

	void TreasureResolved();

	void Die(AActor* InstigatorActor) override;

	virtual void Tick(float DeltaTime) override;

	TArray<AActor*> NavPoints;

	AActor* CurrentTargetNavPoint;

	FTimerHandle DestroyTimer;
	void DestroyTimerFinished();

	void FindNextCheckpoint();

	FTimerHandle CourseCorrectionTimer;
	void CourseCorrectionTimerFinished();

	UPROPERTY(EditAnywhere)
	int32 MerchantShipBounty = 175.f;

	UPROPERTY(EditAnywhere)
	int32 ReturnToBaseBounty = 300.f;
	
};
