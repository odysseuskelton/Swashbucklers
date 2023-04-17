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

	if (bCannonStreamAbilityActive)
	{
		FireDragonsBreath();
	}

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

void ACannon::FireDragonsBreath()
{
	FTransform MuzzleTransform = CannonMesh->GetSocketTransform(FName("MuzzleSocket"));
	
	FVector End = GetActorRotation().Vector() * 2000.f + GetActorLocation();
	TArray<AActor*>ActorsToIgnore;
	TArray<FHitResult> HitActors;
	ActorsToIgnore.Add(this);

	if (GetOwner())
	{
		ActorsToIgnore.Add(GetOwner());
	}
	UKismetSystemLibrary::SphereTraceMulti(this, MuzzleTransform.GetLocation(), End, 150, ETraceTypeQuery::TraceTypeQuery1, false, ActorsToIgnore, EDrawDebugTrace::None, HitActors, true);
	//DrawDebugSphere(GetWorld(), MuzzleTransform.GetLocation(), 130, 12, FColor::Red);

	for (FHitResult Hit : HitActors)
	{
		IHitInterface* HitInterface = Cast<IHitInterface>(Hit.GetActor());
		IHitInterface* InstigatorInterface = Cast<IHitInterface>(GetOwner());
		if (HitInterface)
		{
			if (HitInterface->IsHitActorDead()) return;

			AActor* HitActor = HitInterface->GetActorWithAbilityComponent();

			if (HitActor && CannonGEHandle.IsValid())
			{

				FGameplayAbilityTargetDataHandle TargetHandle = UAbilitySystemBlueprintLibrary::AbilityTargetDataFromActor(HitActor);
				if (InstigatorInterface && HitInterface && InstigatorInterface->GetHitActorTeam() != HitInterface->GetHitActorTeam())
				{
					ApplyGESpecHandleToTargetData(CannonGEHandle, TargetHandle);

				}
			}
		}
	}
	HitActors.Empty();
}

void ACannon::ApplyGESpecHandleToTargetData(const FGameplayEffectSpecHandle& GESpecHandle, const FGameplayAbilityTargetDataHandle& TargetDataHandle)
{
	for (TSharedPtr<FGameplayAbilityTargetData> Data : TargetDataHandle.Data)
	{
		Data->ApplyGameplayEffectSpec(*GESpecHandle.Data.Get());
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
		UNiagaraFunctionLibrary::SpawnSystemAttached(CannonFireSystem, CannonMesh, FName(), FVector(100.0, 0.f, 0.f), FRotator(-90.f,0.f,0.f), EAttachLocation::KeepRelativeOffset, true, true);
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

