// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WaterSpout.generated.h"

class UNiagaraComponent;
class UBoxComponent;
class UAudioComponent;
class AShip;

UCLASS()
class SWASHBUCKLERS_API AWaterSpout : public AActor
{
	GENERATED_BODY()
	
public:	
	AWaterSpout();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void CollisionBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void CollisionBoxEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	void AffectShips(AShip* ShipToAffect);
	
	TArray<AShip*> ShipsEffected;

	UPROPERTY(VisibleAnywhere)
	UNiagaraComponent* WaterSpoutSystem;

	UPROPERTY(VisibleAnywhere)
	UBoxComponent* CollisionBox;

	UPROPERTY(VisibleAnywhere)
	UAudioComponent* WaterSpoutAudio;

	UPROPERTY(EditAnywhere)
	FVector ImpactForce;

	UPROPERTY(EditAnywhere)
	float LifeSpanDuration = 7.f;


};
