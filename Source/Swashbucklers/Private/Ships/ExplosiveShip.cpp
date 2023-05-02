// Fill out your copyright notice in the Description page of Project Settings.


#include "Ships/ExplosiveShip.h"
#include "Components/SphereComponent.h"
#include "NiagaraComponent.h"
#include "Interfaces/HitInterface.h"
#include "Interfaces/PlayerInterface.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Components/SBAbilitySystemComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "Net/UnrealNetwork.h"
#include "Weapons/Projectiles/Projectile.h"


AExplosiveShip::AExplosiveShip()
{
	//DetectionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("DetectionSphere"));
	//DetectionSphere->SetupAttachment(GetRootComponent());
	PrimaryActorTick.bCanEverTick = true;

	FuseSystem = CreateDefaultSubobject<UNiagaraComponent>(TEXT("FuseSystem"));
	FuseSystem->SetupAttachment(GetRootComponent());
	
}

void AExplosiveShip::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AExplosiveShip, PrivateerFuseColor);
	DOREPLIFETIME(AExplosiveShip, PirateFuseColor);


}


void AExplosiveShip::BeginPlay()
{
	Super::BeginPlay();

	GetWorldTimerManager().SetTimer(DetonationTimer, this, &AExplosiveShip::DetonationTimerFinished, 5.f);
	//if (ShipMesh)
	//{
	//	ShipMesh->OnComponentBeginOverlap.AddDynamic(this, &AExplosiveShip::ShipBeginOverlap);
	//}

}


void AExplosiveShip::ShipCollision(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (!OtherActor) return;
	IHitInterface* HitInterface = Cast<IHitInterface>(OtherActor);
	if (HitInterface && HitInterface->GetHitActorTeam() != AITeam)
	{
		Die(this);
	}
}

void AExplosiveShip::ShipBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!OtherActor) return;

	AProjectile* Projectile = Cast<AProjectile>(OtherActor);
	if (Projectile)
	{
		Die(this);
	}
}


void AExplosiveShip::SetTeam(ETeam TeamToSet)
{
	AITeam = TeamToSet;

	if (AITeam == ETeam::ET_Privateer)
	{
		ShipMesh->SetMaterial(3, PrivateerMaterial);
		FuseSystem->SetColorParameter(FName("ColorParam"), PrivateerFuseColor);
	}

	if (AITeam == ETeam::ET_Pirate)
	{
		ShipMesh->SetMaterial(3, PirateMaterial);
		FuseSystem->SetColorParameter(FName("ColorParam"), PirateFuseColor);
	}
}

void AExplosiveShip::OnRep_SetTeam()
{
	if (AITeam == ETeam::ET_Privateer)
	{
		ShipMesh->SetMaterial(3, PrivateerMaterial);
		FuseSystem->SetColorParameter(FName("ColorParam"), PrivateerFuseColor);
	}

	if (AITeam == ETeam::ET_Pirate)
	{
		ShipMesh->SetMaterial(3, PirateMaterial);
		FuseSystem->SetColorParameter(FName("ColorParam"), PirateFuseColor);
	}

}

void AExplosiveShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!HasAuthority()) return;
	if (AITeam != ETeam::ET_NoTeam && bCanAcquireTarget == true)
	{
		bCanAcquireTarget = false;
		AcquireTarget();

	}

}

void AExplosiveShip::AcquireTarget()
{
	UE_LOG(LogTemp, Warning, TEXT("AcquireTarget"))
	float ShortestDistance = 1000000000.f;
	TArray<AActor*> OutActors;
	UGameplayStatics::GetAllActorsWithInterface(this, UHitInterface::StaticClass(), OutActors);
	for (AActor* Actor : OutActors)
	{
		IHitInterface* HitInterface = Cast<IHitInterface>(Actor);
		if (HitInterface && HitInterface->GetHitActorTeam() != AITeam && HitInterface->AITargetable() && !HitInterface->IsHitActorDead())
		{

			float DistanceToCurrentActor = GetDistanceTo(Actor);
			if (DistanceToCurrentActor < ShortestDistance)
			{
				
				ShortestDistance = DistanceToCurrentActor;
				CurrentTarget = Actor;
			}
		}
	}

	if (CurrentTarget)
	{

		FVector LocationToMoveTo = CurrentTarget->GetActorLocation();
		LocationToMoveTo.Z = GetActorLocation().Z;
		TargetLocation = LocationToMoveTo;
		if (GetDistanceTo(CurrentTarget) < 100000)
		{
			MoveToLocation(TargetLocation);
			GetWorldTimerManager().SetTimer(CorrectRotationTimer, this, &AAIShip::CorrectActorRotationTowardTarget, 2.f);
		}
	}
}

void AExplosiveShip::DetonationTimerFinished()
{
	Die(this);
}

void AExplosiveShip::Die(AActor* InstigatorActor)
{
	ServerExplodeShip();
	
}

void AExplosiveShip::ServerExplodeShip_Implementation()
{
	if (!ExplosiveGEHandle.IsValid()) return;
	TArray<AActor*>ActorsToIgnore;
	TArray<FHitResult> HitActors;
	ActorsToIgnore.Add(this);

	TArray<AActor*> ActorsToApplyGameplayEffectTo;

	UKismetSystemLibrary::SphereTraceMulti(this, GetActorLocation(), GetActorLocation(), 3500, ETraceTypeQuery::TraceTypeQuery1, false, ActorsToIgnore, EDrawDebugTrace::None, HitActors, true);

	for (FHitResult Hit : HitActors)
	{
		UE_LOG(LogTemp, Warning, TEXT("Hit actor in explode %s"), *Hit.GetActor()->GetName())
		IHitInterface* HitInterface = Cast<IHitInterface>(Hit.GetActor());
		if (HitInterface)
		{
			UE_LOG(LogTemp, Warning, TEXT("Hit interface valid in explosion"))
			if (HitInterface->IsHitActorDead()) return;

			AActor* HitActor = HitInterface->GetActorWithAbilityComponent();

			if (HitActor)
			{
				UE_LOG(LogTemp, Warning, TEXT("Hit actor valid valid in explosion"))

				if (HitInterface && AITeam != HitInterface->GetHitActorTeam() && !ActorsToApplyGameplayEffectTo.Contains(HitActor))
				{
					UE_LOG(LogTemp, Warning, TEXT("All conditions met, apply gameplay effect"))
					ActorsToApplyGameplayEffectTo.Add(HitActor);
				}
			}
		}
	}

	FGameplayAbilityTargetDataHandle TargetData = UAbilitySystemBlueprintLibrary::AbilityTargetDataFromActorArray(ActorsToApplyGameplayEffectTo, true);
	ApplyGESpecHandleToTargetData(ExplosiveGEHandle, TargetData);
	ActorsToApplyGameplayEffectTo.Empty();

	MulticastExplodeShip();
	Destroy();

}

void AExplosiveShip::ApplyGESpecHandleToTargetData(const FGameplayEffectSpecHandle& GESpecHandle, const FGameplayAbilityTargetDataHandle& TargetDataHandle)
{
	for (TSharedPtr<FGameplayAbilityTargetData> Data : TargetDataHandle.Data)
	{
		Data->ApplyGameplayEffectSpec(*GESpecHandle.Data.Get());
	}
}

void AExplosiveShip::MulticastExplodeShip_Implementation()
{
	if (ShipDeathSystem)
	{
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, ShipDeathSystem, ShipMesh->GetComponentLocation());
	}
	if (ShipDeathSound)
	{
		UGameplayStatics::PlaySoundAtLocation(this, ShipDeathSound, ShipMesh->GetComponentLocation());
	}
}