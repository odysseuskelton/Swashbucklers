// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/Cannon.h"
#include "Weapons/Projectiles/Projectile.h"
#include "Interfaces/PlayerInterface.h"
#include "Interfaces/HitInterface.h"
#include "NiagaraFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"

#include "Net/UnrealNetwork.h"

ACannon::ACannon()
{
	PrimaryActorTick.bCanEverTick = true;

	CannonMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CannonMesh"));
	SetRootComponent(CannonMesh);
}

void ACannon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ACannon, ExtraSoundsOnCannonball);
}


void ACannon::BeginPlay()
{
	Super::BeginPlay();

}


void ACannon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACannon::FireCannon()
{

	CannonMesh->PlayAnimation(FireAnimation, false);
	FTransform MuzzleTransform = CannonMesh->GetSocketTransform(FName("MuzzleSocket"));

	CannonFireEffects();
		
	if (GetOwner())
	{
		IPlayerInterface* FiringPlayer = Cast<IPlayerInterface>(GetOwner());

		if (FiringPlayer)
		{
			FVector Right = GetActorRightVector() * -1;

			FVector AngularForceToApply = Right * CannonAngularRecoil * FiringPlayer->GetCannonRecoilMultiplierFromShip();
			FiringPlayer->GetPlayerShipMesh()->AddAngularImpulseInDegrees(AngularForceToApply, FName(), true);

			FVector Forward = GetActorForwardVector() * -1;
			FVector LinearForceToApply = Forward * CannonLinearRecoil * FiringPlayer->GetCannonRecoilMultiplierFromShip();
			FiringPlayer->GetPlayerShipMesh()->AddImpulse(LinearForceToApply, FName(), true);

		}
	}

	if (GetOwner()->HasAuthority())
	{
		if (GetWorld() && CannonballClass)
		{
			AProjectile* Cannonball = GetWorld()->SpawnActor<AProjectile>(CannonballClass, MuzzleTransform.GetLocation(), MuzzleTransform.GetRotation().Rotator());
			if (Cannonball && CannonGEHandle.IsValid())
			{
				Cannonball->SetOwner(this);
				Cannonball->SetPlayerPawn(GetOwner());
				Cannonball->AbilityHandle = CannonGEHandle;

				IHitInterface* OwnerHitInterface = Cast<IHitInterface>(GetOwner());
				if (OwnerHitInterface)
				{
					Cannonball->SetStencilValueOfCannonball(OwnerHitInterface->GetHitActorTeam());
					Cannonball->EasterEggSounds = ExtraSoundsOnCannonball;
				}
			}
		}
	}
}


void ACannon::CannonFireEffects()
{
	FTransform MuzzleTransform = CannonMesh->GetSocketTransform(FName("MuzzleSocket"));

	if (GetOwner()->HasAuthority())
	{
		ServerCannonFireEffects(MuzzleTransform);
	}

}

void ACannon::ServerCannonFireEffects_Implementation(FTransform TransformToSpawnAt)
{
	MulticastCannonFireEffects(TransformToSpawnAt);
}

void ACannon::MulticastCannonFireEffects_Implementation(FTransform TransformToSpawnAt)
{

	if (CannonFireSystem)
	{
		UNiagaraFunctionLibrary::SpawnSystemAttached(CannonFireSystem, CannonMesh, FName("MuzzleSocket"), FVector::ZeroVector, -1 * GetActorRightVector().Rotation(), EAttachLocation::KeepRelativeOffset, true, true);
	}

	if (CannonSmokeSystem)
	{
		UNiagaraFunctionLibrary::SpawnSystemAttached(CannonSmokeSystem, CannonMesh, FName("MuzzleSocket"), FVector::ZeroVector, -1 * GetActorRightVector().Rotation(), EAttachLocation::KeepRelativeOffset, true, true);
	}

	if (CannonFireSound)
	{
		UGameplayStatics::PlaySoundAtLocation(this, CannonFireSound, TransformToSpawnAt.GetLocation());
	}

}
