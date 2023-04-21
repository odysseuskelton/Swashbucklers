// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbilities/TickingTask.h"


UTickingTask::UTickingTask(const FObjectInitializer& ObjectInitializer)
{
	bTickingTask = true;
	bSimulatedTask = true;
}

UTickingTask* UTickingTask::AbilityTaskOnTick(UGameplayAbility* OwningAbility, FName TaskInstanceName)
{
	UTickingTask* MyObj = NewAbilityTask<UTickingTask>(OwningAbility);
	return MyObj;
}

void UTickingTask::Activate()
{
	Super::Activate();
}

void UTickingTask::TickTask(float DeltaTime)
{
	Super::TickTask(DeltaTime);
	OnTick.Broadcast(DeltaTime);
}