// Fill out your copyright notice in the Description page of Project Settings.

#include "Weapons/Projectiles/Projectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "NiagaraComponent.h"
#include "Interfaces/HitInterface.h"
#include "PlayerStates/CaptainState.h"
#include "Components/SphereComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "NiagaraFunctionLibrary.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"


AProjectile::AProjectile()
{
	PrimaryActorTick.bCanEverTick = true;

	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));
	SetRootComponent(ProjectileMesh);

	ProjectileTrail = CreateDefaultSubobject<UNiagaraComponent>(TEXT("ProjectileTrail"));
	ProjectileTrail->SetupAttachment(GetRootComponent());

	CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));
	CollisionSphere->SetupAttachment(GetRootComponent());

	TraceStart = CreateDefaultSubobject<USphereComponent>(TEXT("TraceStart"));
	TraceStart->SetupAttachment(CollisionSphere);

	TraceEnd = CreateDefaultSubobject<USphereComponent>(TEXT("TraceEnd"));
	TraceEnd->SetupAttachment(CollisionSphere);

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));

}


void AProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AProjectile, EasterEggSounds);
}


void AProjectile::BeginPlay()
{
	Super::BeginPlay();
	SetLifeSpan(ProjectileLifeSpan);

	CollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &AProjectile::CollisionSphereOverlap);
}

void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//if (GetOwner())
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("Owner Name of CannonBall..... %s"), *GetOwner()->GetName())
	//}

}

void AProjectile::CollisionSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!GetOwner() || !GetOwner()->HasAuthority()) return;

	FHitResult SphereHit;
	SphereTrace(SphereHit);


	if (SphereHit.GetActor())
	{
		IHitInterface* HitInterface = Cast<IHitInterface>(SphereHit.GetActor());
		IHitInterface* InstigatorInterface = Cast<IHitInterface>(PlayerPawn);
		if (HitInterface)
		{
			if (HitInterface->IsHitActorDead()) return;

			AActor* HitActor = HitInterface->GetActorWithAbilityComponent();

			if (HitActor && AbilityHandle.IsValid())
			{
				FGameplayAbilityTargetDataHandle TargetHandle = UAbilitySystemBlueprintLibrary::AbilityTargetDataFromActor(HitActor);
				if (InstigatorInterface->GetHitActorTeam() != HitInterface->GetHitActorTeam())
				{
					ApplyGESpecHandleToTargetData(AbilityHandle, TargetHandle);
				}
				MulticastShipHitEffects(SphereHit);
				
				Destroy();
			}
		}
	}

	if (OtherActor->GetName().Contains("WaterBodyOcean") && SplashSystem)
	{
		MulticastWaterSplash();
	}
	
}

void AProjectile::MulticastWaterSplash_Implementation()
{
	UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, SplashSystem, ProjectileMesh->GetComponentLocation());
	if (SplashSound)
	{
		UGameplayStatics::PlaySoundAtLocation(this, SplashSound, ProjectileMesh->GetComponentLocation());
		if (EasterEggSounds == true)
		{
			UGameplayStatics::PlaySoundAtLocation(this, KerSplooshSound, ProjectileMesh->GetComponentLocation());
		}
	}
}

void AProjectile::MulticastShipHitEffects_Implementation(FHitResult ShipHit)
{
	if (ShipHitSystem)
	{
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, ShipHitSystem, ShipHit.ImpactPoint);
	}
	if (ShipHitSound)
	{
		UGameplayStatics::PlaySoundAtLocation(this, ShipHitSound, ShipHit.ImpactPoint);
		if (EasterEggSounds == true)
		{
			UGameplayStatics::PlaySoundAtLocation(this, KaBoomSound, ProjectileMesh->GetComponentLocation());
		}
	}

	if (!ShipHit.GetActor()) return;

	UStaticMeshComponent* MeshComponent = Cast<UStaticMeshComponent>(ShipHit.GetActor()->GetRootComponent());
	if (MeshComponent)
	{
		if (!MeshComponent->IsSimulatingPhysics()) return;
		FVector Forward = this->GetActorForwardVector();
		FVector ForceToApply = Forward * CannonballForce * MeshComponent->GetMass();
		MeshComponent->AddImpulse(ForceToApply, FName(), true);

	}
}

void AProjectile::ApplyGESpecHandleToTargetData(const FGameplayEffectSpecHandle& GESpecHandle, const FGameplayAbilityTargetDataHandle& TargetDataHandle)
{
	for (TSharedPtr<FGameplayAbilityTargetData> Data : TargetDataHandle.Data)
	{
		Data->ApplyGameplayEffectSpec(*GESpecHandle.Data.Get());
	}
}

void AProjectile::SphereTrace(FHitResult& SphereHit)
{
	const FVector Start = TraceStart->GetComponentLocation();
	const FVector End = TraceEnd->GetComponentLocation();

	TArray<AActor*> ActorsToIgnore;
	ActorsToIgnore.AddUnique(this);
	if (GetOwner())
	{
		ActorsToIgnore.AddUnique(GetOwner());
	}

	if (PlayerPawn)
	{
		ActorsToIgnore.AddUnique(PlayerPawn);
	}

	for (AActor* Actor : IgnoreActors)
	{
		ActorsToIgnore.AddUnique(Actor);
	}

	UKismetSystemLibrary::SphereTraceSingle(this, Start, End, SphereTraceRadius, ETraceTypeQuery::TraceTypeQuery1, false, ActorsToIgnore, bShowDebugSphere ? EDrawDebugTrace::ForDuration : EDrawDebugTrace::None, SphereHit, true);
	IgnoreActors.AddUnique(SphereHit.GetActor());
}


void AProjectile::SetStencilValueOfCannonball(ETeam TeamOfOwner)
{
	MulticastSetStencilValueOfCannonball(TeamOfOwner);
}

void AProjectile::MulticastSetStencilValueOfCannonball_Implementation(ETeam TeamOfOwner)
{
	if (TeamOfOwner == ETeam::ET_Pirate)
	{
		ProjectileMesh->SetCustomDepthStencilValue(254);
	}
	else if (TeamOfOwner == ETeam::ET_Privateer)
	{
		ProjectileMesh->SetCustomDepthStencilValue(253);
	}
}