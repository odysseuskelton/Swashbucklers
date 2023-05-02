// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/NavCheckPoints.h"
#include "Components/SphereComponent.h"


ANavCheckPoints::ANavCheckPoints()
{
	PrimaryActorTick.bCanEverTick = true;

	NavCheckpoint = CreateDefaultSubobject<USphereComponent>(TEXT("NavCheckpoint"));
	SetRootComponent(NavCheckpoint);

}

void ANavCheckPoints::BeginPlay()
{
	Super::BeginPlay();
	
}

void ANavCheckPoints::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

