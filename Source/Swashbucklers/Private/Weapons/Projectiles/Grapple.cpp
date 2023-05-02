// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/Projectiles/Grapple.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Interfaces/HitInterface.h"
#include "CableComponent.h"

AGrapple::AGrapple()
{
	PrimaryActorTick.bCanEverTick = true;

	GrappleCable = CreateDefaultSubobject<UCableComponent>(TEXT("GrappleCable"));
	GrappleCable->SetupAttachment(GetRootComponent());
}

void AGrapple::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	PollInit();

	if(AttachedToActor && GetOwner())
	{
		AttachedToActor->SetActorLocation(FMath::VInterpTo(AttachedToActor->GetActorLocation(), GetOwner()->GetActorLocation(), DeltaTime, 1.f));
		if (AttachedToActor)
		{
			if (GetOwner()->GetDistanceTo(AttachedToActor) < GrappleAcceptanceDistance)
			{
				Destroy();
			}
		}
	}

}

void AGrapple::PollInit()
{
	if (!bAttached && GetOwner())
	{
		MulticastAttachGrapple();

	}
}

void AGrapple::MulticastAttachGrapple_Implementation()
{
	if (GrappleCable)
	{
		GrappleCable->SetAttachEndTo(GetOwner(), FName("None"), FName("GrappleSocket"));

	}
}

void AGrapple::CollisionSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!GetOwner()) return;

	FHitResult SphereHit;
	SphereTrace(SphereHit);

	if (SphereHit.GetActor())
	{
		IHitInterface* HitInterface = Cast<IHitInterface>(SphereHit.GetActor());
		IHitInterface* InstigatorInterface = Cast<IHitInterface>(GetOwner());
		if (HitInterface)
		{
			if (HitInterface->IsHitActorDead()) return;

			AActor* HitActor = HitInterface->GetActorWithAbilityComponent();

			if (HitActor)
			{
				UE_LOG(LogTemp, Warning, TEXT("Hit actor interface %s"), *SphereHit.GetActor()->GetName())

				if (InstigatorInterface && HitInterface && InstigatorInterface->GetHitActorTeam() != HitInterface->GetHitActorTeam())
				{
					UE_LOG(LogTemp, Warning, TEXT("Made it into hitactor team %s"), *SphereHit.GetActor()->GetName())
					ProjectileMovement->DestroyComponent();
					SetLifeSpan(GrappleDuration);
					FAttachmentTransformRules TransformRules(EAttachmentRule::KeepRelative, false);
					AttachToActor(SphereHit.GetActor(), TransformRules);
					AttachedToActor = SphereHit.GetActor();
					SetActorLocation(SphereHit.ImpactPoint);
				}

				return;
			}
		}
	}

	if (OtherActor->GetName().Contains("WaterBodyOcean") && SplashSystem)
	{
		MulticastWaterSplash(SphereHit);
	}


	if (OtherActor->GetName().Contains("Landscape"))
	{
		Destroy();
	}
}