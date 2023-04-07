// Fill out your copyright notice in the Description page of Project Settings.


#include "Buildings/TowerAnimInstance.h"

void UTowerAnimInstance::NativeInitializeAnimation()
{
    Super::NativeInitializeAnimation();
    //BanditCharacter = Cast<ABanditCharacter>(TryGetPawnOwner());
}

void UTowerAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
}