// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NavCheckPoints.generated.h"


class USphereComponent;

UCLASS()
class SWASHBUCKLERS_API ANavCheckPoints : public AActor
{
	GENERATED_BODY()
	
public:	
	ANavCheckPoints();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
	USphereComponent* NavCheckpoint;

};
