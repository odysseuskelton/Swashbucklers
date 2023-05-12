// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/TripleCannon.h"
#include "Weapons/TripleCannonAnim.h"
#include "Weapons/Projectiles/Projectile.h"
#include "NiagaraFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Interfaces/HitInterface.h"

ATripleCannon::ATripleCannon()
{
	PrimaryActorTick.bCanEverTick = true;

	CannonMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CannonMesh"));
	SetRootComponent(CannonMesh);
}

void ATripleCannon::BeginPlay()
{
	Super::BeginPlay();
	
}

void ATripleCannon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATripleCannon::BeginFire()
{
	AnimInstance = AnimInstance == nullptr ? AnimInstance = Cast<UTripleCannonAnim>(CannonMesh->GetAnimInstance()) : AnimInstance;

	bCannonsFiring = true;

	if (AnimInstance)
	{
		AnimInstance->bFiring = bCannonsFiring;
	}
}

void ATripleCannon::EndFire()
{
	AnimInstance = AnimInstance == nullptr ? AnimInstance = Cast<UTripleCannonAnim>(CannonMesh->GetAnimInstance()) : AnimInstance;

	bCannonsFiring = false;

	if (AnimInstance)
	{
		AnimInstance->bFiring = bCannonsFiring;
	}
}

void ATripleCannon::Fire()
{

	if (CannonMesh)
	{
		FTransform MuzzleTransform = CannonMesh->GetSocketTransform(FName("MuzzleSocket"));
		FVector MuzzleLocation = MuzzleTransform.GetLocation();
		MuzzleLocation.X += 270.f;
		MuzzleLocation.Z += 75.f;
		MuzzleTransform.SetLocation(MuzzleLocation);

		CannonFireEffects(MuzzleTransform);

		if (GetLocalRole() && HasAuthority())
		{
			if (GetWorld() && CannonballClass)
			{
				FRotator RotationToSet = MuzzleTransform.GetRotation().Rotator();
				//RotationToSet.Pitch += 2.5f;
				AProjectile* Cannonball = GetWorld()->SpawnActor<AProjectile>(CannonballClass, MuzzleTransform.GetLocation(), RotationToSet);
				if (Cannonball && CannonGEHandle.IsValid())
				{
					Cannonball->SetOwner(this);
					Cannonball->SetPlayerPawn(GetOwner());
					Cannonball->AbilityHandle = CannonGEHandle;

					IHitInterface* OwnerHitInterface = Cast<IHitInterface>(GetOwner());
					if (OwnerHitInterface)
					{
						Cannonball->SetStencilValueOfCannonball(OwnerHitInterface->GetHitActorTeam());
					}
				}
			}
		}
	}
}

void ATripleCannon::CannonFireEffects(FTransform MuzzleTransform)
{

	if (GetOwner()->HasAuthority())
	{
		ServerCannonFireEffects(MuzzleTransform);
	}

}

void ATripleCannon::ServerCannonFireEffects_Implementation(FTransform TransformToSpawnAt)
{
	MulticastCannonFireEffects(TransformToSpawnAt);
}

void ATripleCannon::MulticastCannonFireEffects_Implementation(FTransform TransformToSpawnAt)
{

	if (CannonFireSystem)
	{
		UNiagaraFunctionLibrary::SpawnSystemAttached(CannonFireSystem, CannonMesh, FName(), FVector(100.0, 0.f, 0.f), FRotator(-90.f, 0.f, 0.f), EAttachLocation::KeepRelativeOffset, true, true);
	}

	if (CannonSmokeSystem)
	{
		UNiagaraFunctionLibrary::SpawnSystemAttached(CannonSmokeSystem, CannonMesh, FName(), FVector(125.0, 0.f, 0.f), FRotator(-90.f, 0.f, 0.f), EAttachLocation::KeepRelativeOffset, true, true);
	}

	if (CannonFireSound)
	{
		UGameplayStatics::PlaySoundAtLocation(this, CannonFireSound, TransformToSpawnAt.GetLocation());
	}

}

