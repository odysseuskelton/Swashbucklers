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


AExplosive::AExplosive()
{
	ExplosiveMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ExplosiveMesh"));
	SetRootComponent(ExplosiveMesh);

	AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
	AudioComponent->SetupAttachment(GetRootComponent());

	PrimaryActorTick.bCanEverTick = false;

}

void AExplosive::BeginPlay()
{
	Super::BeginPlay();

	AudioComponent->Play();
	
	GetWorldTimerManager().SetTimer(SearchTimerHandle, this, &AExplosive::SearchTimerPulse, 0.5f);

	ExplosiveMesh->OnComponentBeginOverlap.AddDynamic(this, &AExplosive::ExplosiveOverlap);
	ExplosiveMesh->OnComponentHit.AddDynamic(this, &AExplosive::ExplosiveHit);
}

void AExplosive::ExplosiveOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (bActivated) return;
	AProjectile* ProjectileHit = Cast<AProjectile>(OtherActor);
	if (ProjectileHit)
	{
		GetWorldTimerManager().ClearAllTimersForObject(this);
		Activate();
		return;
	}

	if (OtherActor->GetName().Contains("WaterBodyOcean") && SplashSystem)
	{
		MulticastWaterSplash();
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

void AExplosive::ExplosiveHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (bActivated) return;

	IHitInterface* HitInterface = Cast<IHitInterface>(OtherActor);
	IHitInterface* InstigatorInterface = Cast<IHitInterface>(GetOwner());

	if(InstigatorInterface && HitInterface && InstigatorInterface->GetHitActorTeam() != HitInterface->GetHitActorTeam())
	{

		GetWorldTimerManager().ClearAllTimersForObject(this);
		Activate();
		return;
	}
}

void AExplosive::SetMaterial()
{
	if (GetOwner())
	{
		IHitInterface* OwnerInterface = Cast<IHitInterface>(GetOwner());

		if (OwnerInterface)
		{
			MulticastSetMaterial(OwnerInterface->GetHitActorTeam());
		}
	}
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

	++NumberOfPulsesSearching;
	if (NumberOfPulsesSearching >= 40)
	{
		Activate();
	}
	else
	{
		GetWorldTimerManager().SetTimer(SearchTimerHandle, this, &AExplosive::SearchTimerPulse, 0.5f);
	}
}

void AExplosive::Activate()
{
	if (bActivated) return;

	if (AudioComponent)
	{
		AudioComponent->Stop();
		AudioComponent->Deactivate();
		AudioComponent->SetSound(ActivatedSound);
		AudioComponent->Activate();
		AudioComponent->Play();
	}

	ExplosiveActivated();
	bActivated = true;
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
	if (NumberOfPulsesActivated <= 7)
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
	TArray<AActor*>ActorsToIgnore;
	TArray<FHitResult> HitActors;
	ActorsToIgnore.Add(this);
	if (GetOwner())
	{
		ActorsToIgnore.Add(GetOwner());
	}
	UKismetSystemLibrary::SphereTraceMulti(this, GetActorLocation(), GetActorLocation(), 3500, ETraceTypeQuery::TraceTypeQuery1, false, ActorsToIgnore, EDrawDebugTrace::None, HitActors, true);

	if (ExplosiveGEHandle.IsValid())
	{
		for (FHitResult Hit : HitActors)
		{
			IHitInterface* HitInterface = Cast<IHitInterface>(Hit.GetActor());
			IHitInterface* InstigatorInterface = Cast<IHitInterface>(GetOwner());

			if (HitInterface)
			{
				if (HitInterface->IsHitActorDead()) return;

				AActor* HitActor = HitInterface->GetActorWithAbilityComponent();

				if (HitActor)
				{
					FGameplayAbilityTargetDataHandle TargetHandle = UAbilitySystemBlueprintLibrary::AbilityTargetDataFromActor(HitActor);
					if (InstigatorInterface && HitInterface && InstigatorInterface->GetHitActorTeam() != HitInterface->GetHitActorTeam())
					{
						ApplyGESpecHandleToTargetData(ExplosiveGEHandle, TargetHandle);
					}
				}
			}
		}
	}

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

