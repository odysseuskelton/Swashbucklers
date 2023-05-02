// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/StaticNPC.h"
#include "Interfaces/HitInterface.h"
#include "Interfaces/CaptainStateInterface.h"
#include "Components/SphereComponent.h"
#include "Components/SBAbilitySystemComponent.h"
#include "GameplayAbilities/SBAttributeSet.h"
#include "HUD/HealthbarComponent.h"
#include "AI/StaticNPCAnimInstance.h"

#include "Kismet/KismetMathLibrary.h"

AStaticNPC::AStaticNPC()
{
	PrimaryActorTick.bCanEverTick = true;
	CharacterMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh"));
	//SetRootComponent(CharacterMesh);
	CharacterMesh->SetupAttachment(GetRootComponent());

	AggroComponent = CreateDefaultSubobject<USphereComponent>(TEXT("AggroComponent"));
	AggroComponent->SetSphereRadius(10000.f);
	AggroComponent->SetupAttachment(GetRootComponent());

	AbilityComponent = CreateDefaultSubobject<USBAbilitySystemComponent>("AbilityComponent");
	AbilityComponent->SetIsReplicated(true);
	AbilityComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);

	HealthbarComponent = CreateDefaultSubobject<UHealthbarComponent>(TEXT("Healthbar"));
	HealthbarComponent->SetupAttachment(CharacterMesh);

	AttributeSet = CreateDefaultSubobject<USBAttributeSet>("AttributeSetBaseComp");
}

void AStaticNPC::BeginPlay()
{
	Super::BeginPlay();
	AggroComponent->SetWorldLocation(GetActorLocation());

	AnimInstance = Cast<UStaticNPCAnimInstance>(CharacterMesh->GetAnimInstance());

	if (HealthbarComponent)
	{
		HealthbarComponent->SetRenderOpacity(0.f);
	}
	
	if (AggroComponent)
	{
		AggroComponent->OnComponentBeginOverlap.AddDynamic(this, &AStaticNPC::EnterAggroRange);
		AggroComponent->OnComponentEndOverlap.AddDynamic(this, &AStaticNPC::ExitAggroRange);
	}
	InitializeAttributes();

	if (CharacterMesh)
	{
		CharacterMesh->OnComponentBeginOverlap.AddDynamic(this, &AStaticNPC::OnMeshOverlap);
	}
}

void AStaticNPC::OnMeshOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	if (bCanAttack && OtherActor)
	{

		IHitInterface* HitInterface = Cast<IHitInterface>(OtherActor);
		IHitInterface* InstigatorInterface = Cast<IHitInterface>(this);
		if (HitInterface && !AlreadyHitInterfaces.Contains(HitInterface) && DamageEffectClass && InstigatorInterface && InstigatorInterface->GetAbilitySystemComponent() && HitInterface->GetAbilitySystemComponent() && InstigatorInterface->GetHitActorTeam() != HitInterface->GetHitActorTeam())
		{
			FGameplayEffectContextHandle ContextHandle;
			ContextHandle.AddInstigator(this, this);
			FGameplayEffectSpecHandle DamageEffectHandle = InstigatorInterface->GetAbilitySystemComponent()->MakeOutgoingSpec(DamageEffectClass, 0, ContextHandle);
			InstigatorInterface->GetAbilitySystemComponent()->ApplyGameplayEffectSpecToTarget(*DamageEffectHandle.Data.Get(), HitInterface->GetAbilitySystemComponent());
			AlreadyHitInterfaces.Add(HitInterface);


			UStaticMeshComponent* MeshComponent = Cast<UStaticMeshComponent>(OtherActor->GetRootComponent());
			if (MeshComponent && HitInterface->IsLocallyControlledInterface())
			{
				if (!MeshComponent->IsSimulatingPhysics() || !HitInterface->CanBeKnocked()) return;
				FVector Forward = this->GetActorForwardVector();
				FVector ForceToApply = Forward * KrakenHitForceMultiplier * CharacterMesh->GetMass();
				MeshComponent->AddImpulse(ForceToApply, FName(), true);
			}
		}
	}
}


void AStaticNPC::InitializeAttributes()
{
	if (AttributeSet)
	{
		AttributeSet->MaxHealth.SetBaseValue(StartingHealth);
		AttributeSet->MaxHealth.SetCurrentValue(StartingHealth);
		AttributeSet->Health.SetBaseValue(StartingHealth);
		AttributeSet->Health.SetCurrentValue(StartingHealth);
		AttributeSet->OnHealthChange.AddUniqueDynamic(this, &AStaticNPC::OnHealthChanged);
	}
}

void AStaticNPC::EnterAggroRange(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (CurrentTarget) return;

	IHitInterface* HitInterface = Cast<IHitInterface>(OtherActor);

	if (HitInterface && HitInterface->GetHitActorTeam() != AITeam)
	{

		CurrentTarget = OtherActor;

		GetWorldTimerManager().SetTimer(AttackTimer, this, &AStaticNPC::Attack, AttackDelay);
	}

}

void AStaticNPC::ExitAggroRange(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (CurrentTarget == OtherActor)
	{
		CurrentTarget = nullptr;
		
	}
}

void AStaticNPC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bCanRotate && CharacterMesh && !bDead && CurrentTarget)
	{
		RotateToTarget(DeltaTime);
	}

}

void AStaticNPC::RotateToTarget(float DeltaTime)
{
	if (!CurrentTarget) return;
	if (bCanRotate && !bDead && CurrentTarget->IsValidLowLevel() && CharacterMesh->IsValidLowLevel() && CharacterMesh->IsValidLowLevelFast() && CurrentTarget->IsValidLowLevelFast())
	{
		FRotator RotationToSet = UKismetMathLibrary::FindLookAtRotation(CharacterMesh->GetComponentLocation(), CurrentTarget->GetActorLocation());
		//UE_LOG(LogTemp, Warning, TEXT("Target Acquired %f"), RotationToSet.Vector().Size())
		RotationToSet.Pitch = CharacterMesh->GetComponentRotation().Pitch;
		RotationToSet.Roll = CharacterMesh->GetComponentRotation().Roll;
		CharacterMesh->SetWorldRotation(FMath::RInterpTo(CharacterMesh->GetComponentRotation(), RotationToSet, DeltaTime, TrackingSpeed));
	}
	
}

void AStaticNPC::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


void AStaticNPC::Attack()
{
	if (!CurrentTarget || bDead) return;
	CharacterMesh->SetCollisionResponseToChannel(ECC_PhysicsBody, ECollisionResponse::ECR_Overlap);
	bCanAttack = true;
	AnimInstance = AnimInstance == nullptr ? Cast<UStaticNPCAnimInstance>(CharacterMesh->GetAnimInstance()) : AnimInstance;
	if (AnimInstance)
	{
		AnimInstance->bCanAttack = bCanAttack;
	}
}

void AStaticNPC::SetCanRotate(bool bUpdate)
{
	bCanRotate = bUpdate;
}

void AStaticNPC::AttackFinished()
{
	if (CharacterMesh)
	{
		CharacterMesh->SetCollisionResponseToChannel(ECC_PhysicsBody, ECollisionResponse::ECR_Block);
	}
	AnimInstance = AnimInstance == nullptr ? Cast<UStaticNPCAnimInstance>(CharacterMesh->GetAnimInstance()) : AnimInstance;
	bCanAttack = false;
	if (AnimInstance)
	{
		AnimInstance->bCanAttack = bCanAttack;
	}
	AlreadyHitInterfaces.Empty();
	GetWorldTimerManager().SetTimer(AttackTimer, this, &AStaticNPC::Attack, AttackDelay);
}

void AStaticNPC::Die(AActor* InstigatorActor)
{
	bCanRotate = false;
	bDead = true;
	bCanAttack = false;
	GetWorldTimerManager().ClearAllTimersForObject(this);
	AnimInstance = AnimInstance == nullptr ? Cast<UStaticNPCAnimInstance>(CharacterMesh->GetAnimInstance()) : AnimInstance;
	if (AnimInstance)
	{
		AnimInstance->bDead = bDead;
	}
	SetLifeSpan(5.f);

	ICaptainStateInterface* KillerInterface = Cast<ICaptainStateInterface>(InstigatorActor);
	if (KillerInterface)
	{
		if (KillerInterface->GetPlayerTeam() == ETeam::ET_Pirate)
		{
			AttributeSet->SendPOEToTeam(ETeam::ET_Pirate, Bounty);
		}
		else if (KillerInterface->GetPlayerTeam() == ETeam::ET_Privateer)
		{
			AttributeSet->SendPOEToTeam(ETeam::ET_Privateer, Bounty);
		}
	}
}

UAbilitySystemComponent* AStaticNPC::GetAbilitySystemComponent() const
{
	return AbilityComponent;
}

void AStaticNPC::OnHealthChanged(float Health, float MaxHealth, AActor* InstigatorActor)
{
	if (!HasAuthority()) return;
	if (CurrentTarget == nullptr && InstigatorActor)
	{
		ICaptainStateInterface* AttackerInterface = Cast<ICaptainStateInterface>(InstigatorActor);
		if (AttackerInterface)
		{
			CurrentTarget = AttackerInterface->GetPossessedPawn();
		}
		GetWorldTimerManager().SetTimer(AttackTimer, this, &AStaticNPC::Attack, AttackDelay);
	}

	MulticastOnHealthChanged(Health, MaxHealth, InstigatorActor);
}

void AStaticNPC::MulticastOnHealthChanged_Implementation(float Health, float MaxHealth, AActor* InstigatorActor)
{

	if (InstigatorActor != this && HealthbarComponent && HealthbarComponent->GetHealthPercent() > Health / MaxHealth)
	{
		HealthbarComponent->SetRenderOpacity(100.f);
		GetWorldTimerManager().SetTimer(HealthbarTimer, this, &AStaticNPC::HealthbarTimerFinished, 4.f);
	}

	if (HealthbarComponent)
	{
		HealthbarComponent->SetHealthPercent(Health / MaxHealth);
	}


	if (Health <= 0 && !bDead)
	{

		Die(InstigatorActor);
	}
}

void AStaticNPC::HealthbarTimerFinished()
{
	HealthbarComponent->SetRenderOpacity(0.f);
}