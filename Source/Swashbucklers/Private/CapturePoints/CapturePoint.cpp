// Fill out your copyright notice in the Description page of Project Settings.


#include "CapturePoints/CapturePoint.h"
#include "GameModes/SBGameMode.h"
#include "PlayerStates/Teams.h"
#include "Interfaces/HitInterface.h"
#include "HUD/CaptureProgressComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameModes/SBGameMode.h"

#include "Net/UnrealNetwork.h"

ACapturePoint::ACapturePoint()
{
	PrimaryActorTick.bCanEverTick = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);

	CapturePoint = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CapturePoint"));
	CapturePoint->SetupAttachment(GetRootComponent());

	TreasureChest = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("TreasureChest"));
	TreasureChest->SetupAttachment(GetRootComponent());

	TreasureChestSand = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("TreasureChestSand"));
	TreasureChestSand->SetupAttachment(TreasureChest);

	CaptureProgressComponent = CreateDefaultSubobject<UCaptureProgressComponent>(TEXT("CaptureProgressComponent"));
	CaptureProgressComponent->SetupAttachment(CapturePoint);

}

void ACapturePoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ACapturePoint, CaptureProgress);
	DOREPLIFETIME(ACapturePoint, bCaptured);
	DOREPLIFETIME(ACapturePoint, CurrentMaterial);
}

void ACapturePoint::BeginPlay()
{
	Super::BeginPlay();

	//BindDelegates();
	if (CaptureProgressComponent)
	{
		CaptureProgressComponent->SetVisibility(false);
	}

	GameMode = Cast<ASBGameMode>(UGameplayStatics::GetGameMode(this));

}

void ACapturePoint::BindDelegates()
{
	if (CapturePoint)
	{
		CapturePoint->OnComponentBeginOverlap.AddDynamic(this, &ACapturePoint::CapturePointOverlap);
		CapturePoint->OnComponentEndOverlap.AddDynamic(this, &ACapturePoint::CapturePointEndOverlap);
	}
}

void ACapturePoint::CapturePointOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	IHitInterface* HitInterface = Cast<IHitInterface>(OtherActor);

	if (HitInterface)
	{
		if (HitInterface->GetHitActorTeam() == ETeam::ET_Pirate)
		{
			PirateTeamOnPoint.Add(OtherActor);
		}
		if (HitInterface->GetHitActorTeam() == ETeam::ET_Privateer)
		{
			PrivateerTeamOnPoint.Add(OtherActor);
		}
	}
}

void ACapturePoint::CapturePointEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (PirateTeamOnPoint.Contains(OtherActor))
	{
		PirateTeamOnPoint.Remove(OtherActor);
	}

	if (PrivateerTeamOnPoint.Contains(OtherActor))
	{
		PrivateerTeamOnPoint.Remove(OtherActor);
	}
}

void ACapturePoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	GameMode = GameMode == nullptr ? Cast<ASBGameMode>(UGameplayStatics::GetGameMode(this)) : GameMode;

	if (!CaptureProgressComponent || !HasAuthority() || !GameMode || GameMode->GetMatchState() != MatchState::TreasureSpawned) return;

	if (CaptureProgress == 100.f)
	{
		Captured();
	}

	if (!bCaptured)
	{
		if (PirateTeamOnPoint.IsEmpty() && PrivateerTeamOnPoint.IsEmpty())
		{
			NoTeamCapturing();

			return;
		}

		else if (!PirateTeamOnPoint.IsEmpty() && !PrivateerTeamOnPoint.IsEmpty())
		{
			NoTeamCapturing();
		}

		else if ((!PirateTeamOnPoint.IsEmpty() && PrivateerTeamOnPoint.IsEmpty()) || !PrivateerTeamOnPoint.IsEmpty() && PirateTeamOnPoint.IsEmpty())
		{
			if (!PirateTeamOnPoint.IsEmpty())
			{
				PirateTeamCapturing();
			}
			else
			{
				PrivateerTeamCapturing();
			}


			CaptureProgress = FMath::FInterpConstantTo(CaptureProgress, 100, DeltaTime, CaptureRate);
			TreasureChestSand->SetMorphTarget(FName("Key 1"), CaptureProgress / 100);
			return;
		}
	}

}

void ACapturePoint::PrivateerTeamCapturing()
{
	CaptureProgressComponent->SetMaterialOnProgressBar(ETeam::ET_Privateer);
	CaptureProgressComponent->SetProgress(CaptureProgress / 100.f);
	if (CapturePoint->GetMaterial(0) != PrivateerCapturingMaterial)
	{
		CapturePoint->SetMaterial(0, PrivateerCapturingMaterial);
		CurrentMaterial = CapturePoint->GetMaterial(0);
	}
}

void ACapturePoint::PirateTeamCapturing()
{
	CaptureProgressComponent->SetMaterialOnProgressBar(ETeam::ET_Pirate);
	CaptureProgressComponent->SetProgress(CaptureProgress / 100.f);
	if (CapturePoint->GetMaterial(0) != PirateCapturingMaterial)
	{
		CapturePoint->SetMaterial(0, PirateCapturingMaterial);
		CurrentMaterial = CapturePoint->GetMaterial(0);
	}
}

void ACapturePoint::NoTeamCapturing()
{
	CaptureProgressComponent->SetMaterialOnProgressBar(ETeam::ET_NoTeam);
	CaptureProgressComponent->SetProgress(CaptureProgress / 100.f);
	if (CapturePoint->GetMaterial(0) != NoOneCapturingMaterial)
	{
		CapturePoint->SetMaterial(0, NoOneCapturingMaterial);
		CurrentMaterial = CapturePoint->GetMaterial(0);
	}
}

void ACapturePoint::OnRep_CapturePointMaterialChange()
{
	CapturePoint->SetMaterial(0, CurrentMaterial);
}

void ACapturePoint::Captured()
{
	bCaptured = true;
	CaptureProgress = 0.f;

	CapturePoint->OnComponentBeginOverlap.RemoveAll(this);
	CapturePoint->OnComponentEndOverlap.RemoveAll(this);

	CaptureProgress = 0.f;
	ASBGameMode* SBGameMode = Cast<ASBGameMode>(UGameplayStatics::GetGameMode(this));
	if (SBGameMode)
	{
		if (PirateTeamOnPoint.IsEmpty() && !PrivateerTeamOnPoint.IsEmpty())
		{
			SBGameMode->TreasureCaptured(ETeam::ET_Privateer);
		}
		else if (!PirateTeamOnPoint.IsEmpty() && PrivateerTeamOnPoint.IsEmpty())
		{
			SBGameMode->TreasureCaptured(ETeam::ET_Pirate);
		}
	}

	PirateTeamOnPoint.Empty();
	PrivateerTeamOnPoint.Empty();

	TreasureChestSand->SetMorphTarget(FName("Key 1"), 0);
	CaptureProgressComponent->SetMaterialOnProgressBar(ETeam::ET_NoTeam);
	CaptureProgressComponent->SetProgress(CaptureProgress / 100.f);
}

void ACapturePoint::SetCapturePointVisibility(bool bVisibility)
{
	if (HasAuthority())
	{
		bCaptured = false;
		CaptureProgress = 0.f;
		BindDelegates();

	}

	MulticastSetCapturePointVisibility(bVisibility);
}

void ACapturePoint::OnRep_CaptureProgress()
{
	CaptureProgressComponent->SetProgress(CaptureProgress / 100.f);
}

void ACapturePoint::MulticastSetCapturePointVisibility_Implementation(bool bVisibility)
{
	if (CapturePoint)
	{
		CapturePoint->SetVisibility(bVisibility);
	}
	if (CaptureProgressComponent)
	{
		CaptureProgressComponent->SetVisibility(bVisibility);
	}
}
