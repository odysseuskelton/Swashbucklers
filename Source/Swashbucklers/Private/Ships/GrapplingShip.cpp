// Fill out your copyright notice in the Description page of Project Settings.


#include "Ships/GrapplingShip.h"
#include "PlayerStates//CaptainState.h"

AGrapplingShip::AGrapplingShip()
{
	GrapplingHook = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GrapplingHookMesh"));
	GrapplingHook->SetupAttachment(GetRootComponent());

}


void AGrapplingShip::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}



void AGrapplingShip::FireAuxiliaryCannons()
{
	Super::FireAuxiliaryCannons();

	if (bIsDead) return;

	if (HasAuthority())
	{
		if (CaptainState)
		{
			CaptainState->ActivateAbility(AuxiliaryCannonAbility);
		}
	}
	else
	{
		ServerFireGrapple(AuxiliaryCannonAbility);
	}
}

void AGrapplingShip::ServerFireGrapple_Implementation(TSubclassOf<USBGameplayAbility> AbilityToActivate)
{
	if (CaptainState)
	{
		if (bIsDead) return;
		CaptainState = CaptainState == nullptr ? CaptainState = GetPlayerState<ACaptainState>() : CaptainState;
		if (CaptainState)
		{
			CaptainState->ActivateAbility(AbilityToActivate);
		}
	}
}

void AGrapplingShip::SetHookVisibility(bool bVisibility)
{
	if (GrapplingHook)
	{
		GrapplingHook->SetVisibility(bVisibility);
	}
}