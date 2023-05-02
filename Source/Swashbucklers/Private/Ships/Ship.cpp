// Fill out your copyright notice in the Description page of Project Settings.


#include "Ships/Ship.h"
#include "X:/Epic/UE_5.1/Engine/Plugins/Marketplace/SmoothSync/Source/SmoothSyncPlugin/Public/SmoothSync.h"
#include "X:/Epic/UE_5.1/Engine/Plugins/Marketplace/SmoothSync/Source/SmoothSyncPlugin/Public/State.h"

#include "GameplayAbilities/SBGameplayAbility.h"
#include "Components/SBAbilitySystemComponent.h"
#include "GameplayAbilities/SBAttributeSet.h"
#include "Interfaces/HitInterface.h"

#include "GameFramework/GameStateBase.h"
#include "PlayerStates/CaptainState.h"

#include "GameFramework/FloatingPawnMovement.h"
#include "Components/AudioComponent.h"
#include "BuoyancyComponent.h"

#include "HUD/HealthbarComponent.h"

#include "Weapons/Cannon.h"

#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "Net/UnrealNetwork.h"
#include "TimerManager.h"


AShip::AShip()
{
	PrimaryActorTick.bCanEverTick = true;
	ShipMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	SetRootComponent(ShipMesh);

	HealthbarComponent = CreateDefaultSubobject<UHealthbarComponent>(TEXT("Healthbar"));
	HealthbarComponent->SetupAttachment(ShipMesh);

	CruisingSoundComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
	CruisingSoundComponent->SetupAttachment(ShipMesh);
	CruisingSoundComponent->Stop();

	BuoyancyComponent = CreateDefaultSubobject<UBuoyancyComponent>(TEXT("BuoyancyComp"));

	SmoothSyncComp = CreateDefaultSubobject<USmoothSync>(TEXT("SmoothSyncComp"));

	PawnMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("PawnMovement"));
}

void AShip::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AShip, StarboardCannons);
	DOREPLIFETIME(AShip, PortCannons);
	DOREPLIFETIME(AShip, PortCannonAbility);
	DOREPLIFETIME(AShip, StarboardCannonAbility);
	DOREPLIFETIME(AShip, bOpenSails);
	DOREPLIFETIME(AShip, bIsDead);
}

void AShip::BeginPlay()
{
	Super::BeginPlay();
	if (HealthbarComponent)
	{
		HealthbarComponent->SetRenderOpacity(0.f);
	}
	SpawnCannons();
	AcquireCannonAbilities();
	bIsDead = false;
	//BuoyancyComponent->BuoyancyData.MaxBuoyantForce = StealthBuoyancy;
	if (PlayerController)
	{
		SetOwner(PlayerController);
	}

	if (ShipMesh)
	{
		ShipMesh->OnComponentHit.AddDynamic(this, &AShip::ShipCollision);
		ShipMesh->OnComponentBeginOverlap.AddDynamic(this, &AShip::ShipBeginOverlap);
	}

}

void AShip::ShipCollision(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{

	if (!OtherActor || !IsLocallyControlled()) return;
	ServerShipCollision(OtherActor, Hit, PawnMovement->Velocity.Size());

}

void AShip::ShipBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
}

void AShip::ServerShipCollision_Implementation(AActor* OtherActor, const FHitResult& Hit, float SpeedOfImpact)
{
	ImpactSpeed = SpeedOfImpact;
	IHitInterface* HitInterface = Cast<IHitInterface>(OtherActor);
	IHitInterface* InstigatorInterface = Cast<IHitInterface>(this);
	if (PlayerController && PlayerController->GetPawn() != OtherActor)
	{
		const FVector Forward = GetActorForwardVector();
		const FVector ImpactLowered(Hit.ImpactPoint.X, Hit.ImpactPoint.Y, GetActorLocation().Z);
		const FVector ToHit = (ImpactLowered - GetActorLocation()).GetSafeNormal();

		//Forward * tohit = |forward| |tohit| = cos(theta)
		const double CosTheta = FVector::DotProduct(Forward, ToHit);
		//Take inverse cosine to find angle
		double Theta = FMath::Acos(CosTheta);
		//convert from radians to degrees
		Theta = FMath::RadiansToDegrees(Theta);

		ForceToApply = Forward * 0.001f * ShipMesh->GetMass() * (SpeedOfImpact * 0.005);

		if (Theta <= 20 && Theta >= -20)
		{
			if (HitInterface && OtherActor != RammedShip)
			{
				RammedShip = OtherActor;
				MulticastShipCollision(OtherActor, Hit, ImpactSpeed, ForceToApply);

				FGameplayEffectContextHandle ContextHandle;
				ContextHandle.AddInstigator(this, this);

				if (RamDamageEffectClass && InstigatorInterface && InstigatorInterface->GetAbilitySystemComponent() && HitInterface->GetAbilitySystemComponent() && InstigatorInterface->GetHitActorTeam() != HitInterface->GetHitActorTeam())
				{
					FGameplayEffectSpecHandle RamDamageEffect = InstigatorInterface->GetAbilitySystemComponent()->MakeOutgoingSpec(RamDamageEffectClass, 0, ContextHandle);
					InstigatorInterface->GetAbilitySystemComponent()->ApplyGameplayEffectSpecToTarget(*RamDamageEffect.Data.Get(), HitInterface->GetAbilitySystemComponent());
				}
				GetWorldTimerManager().SetTimer(ShipCollisionTimer, this, &AShip::ShipCollisionTimerFinished, 3.f);
			}

		}
	}
}

void AShip::MulticastShipCollision_Implementation(AActor* OtherActor, const FHitResult& Hit, float SpeedOfImpact, FVector ForceOfImpact)
{
	if (!OtherActor) return;
	IHitInterface* HitInterface = Cast<IHitInterface>(OtherActor);
	UStaticMeshComponent* MeshComponent = Cast<UStaticMeshComponent>(OtherActor->GetRootComponent());
	if (MeshComponent && HitInterface && HitInterface->CanBeKnocked() && HitInterface->IsLocallyControlledInterface())
	{
		MeshComponent->AddImpulse(ForceOfImpact, FName(), true);
	}

	UGameplayStatics::PlaySoundAtLocation(this, ShipCollisionSound, Hit.ImpactPoint);
	UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, ShipCollisionSystem, Hit.ImpactPoint);
	
}

void AShip::ShipCollisionTimerFinished()
{
	if (RammedShip)
	{
		RammedShip = nullptr;
	}
}

void AShip::OnHealthChanged(float Health, float MaxHealth, AActor* InstigatorActor)
{
	if (!HasAuthority()) return;
	MulticastOnHealthChanged(Health, MaxHealth, InstigatorActor);
}

void AShip::HealthbarTimerFinished()
{
	HealthbarComponent->SetRenderOpacity(0.f);
}

void AShip::MulticastOnHealthChanged_Implementation(float Health, float MaxHealth, AActor* InstigatorActor)
{
	if (!IsLocallyControlled() && HealthbarComponent && HealthbarComponent->GetHealthPercent() > Health / MaxHealth)
	{
		UE_LOG(LogTemp, Warning, TEXT("render opac"))

		HealthbarComponent->SetRenderOpacity(100.f);
		GetWorldTimerManager().SetTimer(HealthbarTimer, this, &AShip::HealthbarTimerFinished, 4.f);
	}

	if (HealthbarComponent)
	{
		HealthbarComponent->SetHealthPercent(Health / MaxHealth);
	}

	if (Health/MaxHealth < .5f && bMinorDamage == false)
	{
		SpawnShipDamageSystems(2);
		bMinorDamage = true;
	}

	if (Health / MaxHealth < .25f && bMajorDamage == false)
	{
		SpawnShipDamageSystems(2);
		bMajorDamage = true;
	}

	if (Health <= 0 && !bIsDead)
	{

		Die(InstigatorActor);
	}
}

void AShip::SpawnShipDamageSystems(uint16 NumberOfSystemsToSpawn)
{

	for (int16 i = 0; i <= NumberOfSystemsToSpawn; ++i)
	{
		FVector ShipMeshLocation = ShipMesh->GetRelativeLocation();
		ShipMeshLocation.X -= 100.f;
		ShipMeshLocation.Z += 325.f;
		FVector LocationToSpawn = UKismetMathLibrary::RandomPointInBoundingBox(ShipMeshLocation, FVector(1000.f, 300.f, 350.f));

		if (ShipDamagedSystem)
		{
			UNiagaraFunctionLibrary::SpawnSystemAttached(ShipDamagedSystem, ShipMesh, FName(""), LocationToSpawn, FRotator::ZeroRotator, EAttachLocation::KeepWorldPosition, true, true);
		}
	}
}

void AShip::Die(AActor* InstigatorActor)
{
	if (bIsDead == true) return;

	bIsDead = true;

	if (BuoyancyComponent)
	{
		BuoyancyComponent->DestroyComponent();
	}

	CleanupCannons(RespawnTime);

	if (ShipDeathSystem)
	{
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, ShipDeathSystem, ShipMesh->GetComponentLocation());
	}
	if (ShipDeathSound)
	{
		UGameplayStatics::PlaySoundAtLocation(this, ShipDeathSound, ShipMesh->GetComponentLocation());
	}
}

void AShip::CleanupCannons(float CannonDespawnTime)
{
	for (ACannon* Cannon : PortCannons)
	{
		Cannon->SetLifeSpan(CannonDespawnTime);
	}
	for (ACannon* Cannon : StarboardCannons)
	{
		Cannon->SetLifeSpan(CannonDespawnTime);
	}
}

void AShip::AcquireCannonAbilities()
{
	// Grant abilities, but only on the server	

	if (GetLocalRole() != ROLE_Authority || !AbilitySystemComponent.IsValid())
	{
		return;
	}

	if (PortCannonAbility)
	{
		AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(PortCannonAbility, 1, 1, this));
	}
	if (StarboardCannonAbility)
	{
		AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(StarboardCannonAbility, 1, 1, this));
	}
	if (AuxiliaryCannonAbility)
	{
		AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(AuxiliaryCannonAbility, 1, static_cast<int32>(AuxiliaryCannonAbility.GetDefaultObject()->AbilityInputID), this));
	}
}
		

void AShip::SwitchCannonAbilities(TSubclassOf<USBGameplayAbility> NewPortCannonAbility, TSubclassOf<USBGameplayAbility> NewStarboardCannonAbility)
{
	PortCannonAbility = NewPortCannonAbility;
	StarboardCannonAbility = NewStarboardCannonAbility;
}


void AShip::SpawnCannons()
{
	if (!HasAuthority()) return;

	HandleCannonSpawning(PortCannonSlots, FString("LCannon"));

	HandleCannonSpawning(StarboardCannonSlots, FString("RCannon"));
}

void AShip::HandleCannonSpawning(int32 CannonSlots, FString CannonAttachString)
{
	for (int32 i = 1; i <= CannonSlots; i++)
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = this;
		ACannon* CannonToSpawn = GetWorld()->SpawnActor<ACannon>(CannonClass, SpawnParams);
		FAttachmentTransformRules TransformRules(EAttachmentRule::KeepRelative, false);
		FString TempCannonAttachStr = CannonAttachString;
		TempCannonAttachStr.AppendInt(i);
		FName AttachName = FName(*TempCannonAttachStr);
		if (CannonToSpawn)
		{
			CannonToSpawn->AttachToComponent(ShipMesh, TransformRules, AttachName);
			CannonToSpawn->SocketName = FName(*TempCannonAttachStr);
			CannonToSpawn->StartingRotation = ShipMesh->GetSocketRotation(CannonToSpawn->SocketName);
			if (CannonAttachString == FString("LCannon"))
			{
				PortCannons.Add(CannonToSpawn);
			}
			else if (CannonAttachString == FString("RCannon"))
			{
				StarboardCannons.Add(CannonToSpawn);
			}
		}
	}
}

void AShip::SetSailColors(ETeam PlayerTeam)
{
	TArray<UActorComponent*> Sails = GetComponentsByTag(UActorComponent::StaticClass(), "Sail");
	TArray<UActorComponent*> Flags = GetComponentsByTag(UActorComponent::StaticClass(), "Flag");

	if (PlayerTeam == ETeam::ET_Pirate)
	{
		if (StoreShipName == FName("Longship") || StoreShipName == FName("Trireme") || StoreShipName == FName("Sloop"))
		{
			ShipMesh->SetMaterial(4, PirateMaterialSecondary);
		}
		for (UActorComponent* Sail : Sails)
		{
			USkeletalMeshComponent* MeshComponent = Cast<USkeletalMeshComponent>(Sail);
			if (MeshComponent)
			{
				MeshComponent->SetMaterial(0, PirateMaterial);
			}
		}

		for (UActorComponent* Flag : Flags)
		{
			USkeletalMeshComponent* MeshComponent = Cast<USkeletalMeshComponent>(Flag);
			if (MeshComponent)
			{
				MeshComponent->SetMaterial(0, PirateFlag);
			}
		}
		bSailColorSet = true;
	}
	else if (PlayerTeam == ETeam::ET_Privateer)
	{
		ShipMesh->SetMaterial(4, PrivateerMaterialSecondary);
		for (UActorComponent* Sail : Sails)
		{
			USkeletalMeshComponent* MeshComponent = Cast<USkeletalMeshComponent>(Sail);
			if (MeshComponent)
			{
				MeshComponent->SetMaterial(0, PrivateerMaterial);
			}
		}

		for (UActorComponent* Flag : Flags)
		{
			USkeletalMeshComponent* MeshComponent = Cast<USkeletalMeshComponent>(Flag);
			if (MeshComponent)
			{
				MeshComponent->SetMaterial(0, PrivateerFlag);
			}
		}
		bSailColorSet = true;
	}

}

void AShip::Tick(float DeltaTime)
{
	
	Super::Tick(DeltaTime);
	//if (SmoothSyncComp && SmoothSyncComp->stateBuffer[0] && SmoothSyncComp->stateBuffer[1] && HasAuthority() && !IsLocallyControlled())
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("Angular %f Linear %f"), SmoothSyncComp->getAngularVelocity().Size(), SmoothSyncComp->getLinearVelocity().Size())
	//
	//}
	
	if (bIsDead)
	{
		FRotator TargetRotation = ShipMesh->GetRelativeRotation();
		TargetRotation.Pitch = 90.f;

		ShipMesh->SetRelativeRotation(FMath::RInterpTo(GetActorRotation(), TargetRotation, DeltaTime, SinkingRate));
		return;
	}
	/*if (ShipMesh->GetComponentRotation().Roll > 5.f || ShipMesh->GetComponentRotation().Roll < -5.f)
	{
		ShipMesh->SetWorldRotation(FMath::RInterpTo(GetActorRotation(), FRotator(GetActorRotation().Pitch, GetActorRotation().Yaw, 0.f), DeltaTime, 3.f));
	}*/
	DeltaSeconds = DeltaTime;

	
}

AActor* AShip::GetActorWithAbilityComponent()
{
	return nullptr;
}

ETeam AShip::GetHitActorTeam()
{
	return ETeam();
}

float AShip::GetShipSpeed()
{
	return ImpactSpeed;
}


void AShip::FirePortCannons()
{
	if (bIsDead) return;

	
}

void AShip::FireStarboardCannons()
{

	if (bIsDead) return;

	
}

void AShip::ServerFireCannons_Implementation(TSubclassOf<USBGameplayAbility> CannonAbilityToActivate)
{
	if (!CannonAbilityToActivate) return;
	
}

