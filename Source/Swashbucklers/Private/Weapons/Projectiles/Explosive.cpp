// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/Projectiles/Explosive.h"
#include "Weapons/Projectiles/Projectile.h"
#include "Interfaces/HitInterface.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/KismetMaterialLibrary.h"
#include "Components/AudioComponent.h"
#include "Kismet/GameplayStatics.h"
#include "NiagaraFunctionLibrary.h"
#include "TimerManager.h"
#include "Net/UnrealNetwork.h"


AExplosive::AExplosive()
{
	ExplosiveMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ExplosiveMesh"));
	SetRootComponent(ExplosiveMesh);

	AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
	AudioComponent->SetupAttachment(GetRootComponent());

	PrimaryActorTick.bCanEverTick = false;

}

void AExplosive::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AExplosive, bActivated);
	DOREPLIFETIME(AExplosive, ExplosiveTeam);
}

void AExplosive::BeginPlay()
{
	Super::BeginPlay();

	AudioComponent->Play();
	
	GetWorldTimerManager().SetTimer(SearchTimerHandle, this, &AExplosive::SearchTimerPulse, 0.5f);


	ExplosiveMesh->OnComponentBeginOverlap.AddDynamic(this, &AExplosive::ExplosiveOverlap);
	
}

void AExplosive::ExplosiveOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AProjectile* ProjectileHit = Cast<AProjectile>(OtherActor);
	if (!bActivated && ProjectileHit)
	{
		MulticastActivate();
		return;
	}

	if (OtherActor->GetName().Contains("WaterBodyOcean") && SplashSystem)
	{
		MulticastWaterSplash();
	}
	if (GEngine && HasAuthority())
	{
		GEngine->AddOnScreenDebugMessage(0, 10, FColor::Red, TEXT("Sa overlap on server"));
	}
	if (GEngine && !HasAuthority())
	{
		GEngine->AddOnScreenDebugMessage(0, 10, FColor::Red, TEXT("Sa overlap on client"));
	}
}

void AExplosive::MulticastWaterSplash_Implementation()
{
	UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, SplashSystem, ExplosiveMesh->GetComponentLocation());
	if (SplashSound)
	{
		UGameplayStatics::PlaySoundAtLocation(this, SplashSound, ExplosiveMesh->GetComponentLocation());
	}
}


void AExplosive::SetMaterial()
{

	MulticastSetMaterial(ExplosiveTeam);

}

void AExplosive::ServerSetTeam_Implementation(ETeam TeamToSet)
{
	ExplosiveTeam = TeamToSet;
	SetMaterial();

}


void AExplosive::MulticastSetMaterial_Implementation(ETeam TeamOfOwner)
{


	if (TeamOfOwner == ETeam::ET_Pirate)
	{
		if (ExplosiveMesh && PirateMaterial)
		{
			DynamicMaterial = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, PirateMaterial);
			ExplosiveMesh->SetMaterial(1, DynamicMaterial);
		}
		return;
	}

	if (TeamOfOwner == ETeam::ET_Privateer)
	{
		if (ExplosiveMesh && PirateMaterial && PrivateerMaterial)
		{
			DynamicMaterial = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, PrivateerMaterial);
			ExplosiveMesh->SetMaterial(1, DynamicMaterial);
		}
		return;
	}

	if (TeamOfOwner == ETeam::ET_NoTeam)
	{
		if (ExplosiveMesh && PirateMaterial && PrivateerMaterial)
		{
			DynamicMaterial = UKismetMaterialLibrary::CreateDynamicMaterialInstance(this, PrivateerMaterial);
			ExplosiveMesh->SetMaterial(1, DynamicMaterial);
		}
		return;
	}
}

void AExplosive::SearchTimerPulse()
{
	if (bEmissiveBright == false)
	{
		if (DynamicMaterial)
		{
			DynamicMaterial->SetScalarParameterValue("Power", 250);
			bEmissiveBright = true;
		}
	}
	else
	{
		if (DynamicMaterial)
		{
			DynamicMaterial->SetScalarParameterValue("Power", 30);
			bEmissiveBright = false;
		}
	}

	TArray<FHitResult> HitActors;
	TArray<AActor*>ActorsToIgnore;
	TArray<IHitInterface*> HitInterfaces;

	UKismetSystemLibrary::SphereTraceMulti(this, GetActorLocation(), GetActorLocation(), 3500, ETraceTypeQuery::TraceTypeQuery1, false, ActorsToIgnore, EDrawDebugTrace::None, HitActors, true);

	if (!HitActors.IsEmpty())
	{
		for (FHitResult Hit : HitActors)
		{	
			if (Hit.GetActor())
			{
				IHitInterface* HitInterface = Cast<IHitInterface>(Hit.GetActor());
				if (HitInterface && ExplosiveTeam != HitInterface->GetHitActorTeam())
				{
					HitInterfaces.Add(HitInterface);
				}
			}
		}
	}

	++NumberOfPulsesSearching;
	if (NumberOfPulsesSearching >= 40 || !HitInterfaces.IsEmpty())
	{
		MulticastActivate();
	}
	else
	{
		GetWorldTimerManager().SetTimer(SearchTimerHandle, this, &AExplosive::SearchTimerPulse, 0.5f);
	}
}

void AExplosive::MulticastActivate_Implementation()
{
	if (bActivated) return;
	bActivated = true;

	if (AudioComponent)
	{
		AudioComponent->Stop();
		AudioComponent->Deactivate();
		AudioComponent->SetSound(ActivatedSound);
		AudioComponent->Activate();
		AudioComponent->Play();
	}


	if (HasAuthority())
	{
		ExplosiveActivated();
	}
}


void AExplosive::ExplosiveActivated()
{
	if (bEmissiveBright == false)
	{
		if (DynamicMaterial)
		{
			DynamicMaterial->SetScalarParameterValue("Power", 600);
			bEmissiveBright = true;
		}
	}
	else
	{
		if (DynamicMaterial)
		{
			DynamicMaterial->SetScalarParameterValue("Power", 150);
			bEmissiveBright = false;
		}
	}

	++NumberOfPulsesActivated;
	if (NumberOfPulsesActivated <= 16)
	{
		GetWorldTimerManager().SetTimer(ActivatedTimerHandle, this, &AExplosive::ExplosiveActivated, 0.1);
	}
	else
	{
		Detonate();
	}
}

void AExplosive::Detonate()
{
	ServerDetonate();
}

void AExplosive::ServerDetonate_Implementation()
{
	TArray<AActor*>ActorsToIgnore;
	TArray<FHitResult> HitActors;
	ActorsToIgnore.Add(this);

	TArray<AActor*> ActorsToApplyGameplayEffectTo;


	UKismetSystemLibrary::SphereTraceMulti(this, GetActorLocation(), GetActorLocation(), 3500, ETraceTypeQuery::TraceTypeQuery1, false, ActorsToIgnore, EDrawDebugTrace::None, HitActors, true);

	for (FHitResult Hit : HitActors)
	{

		IHitInterface* HitInterface = Cast<IHitInterface>(Hit.GetActor());
		if (HitInterface)
		{
			if (HitInterface->IsHitActorDead()) return;

			AActor* HitActor = HitInterface->GetActorWithAbilityComponent();

			if (HitActor)
			{
				if (HitInterface && ExplosiveTeam != HitInterface->GetHitActorTeam() && !ActorsToApplyGameplayEffectTo.Contains(HitActor))
				{
					ActorsToApplyGameplayEffectTo.Add(HitActor);
				}
			}
		}
	}

	FGameplayAbilityTargetDataHandle TargetData = UAbilitySystemBlueprintLibrary::AbilityTargetDataFromActorArray(ActorsToApplyGameplayEffectTo, true);
	ApplyGESpecHandleToTargetData(ExplosiveGEHandle, TargetData);
	ActorsToApplyGameplayEffectTo.Empty();

	MulticastExplosion();
	Destroy();
}

void AExplosive::ApplyGESpecHandleToTargetData(const FGameplayEffectSpecHandle& GESpecHandle, const FGameplayAbilityTargetDataHandle& TargetDataHandle)
{
	for (TSharedPtr<FGameplayAbilityTargetData> Data : TargetDataHandle.Data)
	{
		Data->ApplyGameplayEffectSpec(*GESpecHandle.Data.Get());
	}
}

void AExplosive::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AExplosive::MulticastExplosion_Implementation()
{
	if (ExplosionSystem && WaterExplosion)
	{
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, ExplosionSystem, ExplosiveMesh->GetComponentLocation());
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, WaterExplosion, ExplosiveMesh->GetComponentLocation());
	}

	if (DetonatedSound)
	{
		UGameplayStatics::PlaySoundAtLocation(this, DetonatedSound, ExplosiveMesh->GetComponentLocation());
	}
}

