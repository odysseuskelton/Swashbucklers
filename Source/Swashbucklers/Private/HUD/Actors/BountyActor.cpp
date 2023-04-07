// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/Actors/BountyActor.h"

// Sets default values
ABountyActor::ABountyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABountyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABountyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



