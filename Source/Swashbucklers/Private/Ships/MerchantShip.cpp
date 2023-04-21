// Fill out your copyright notice in the Description page of Project Settings.


#include "Ships/MerchantShip.h"
#include "GameModes/SBGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "GameplayAbilities/SBAttributeSet.h"

void AMerchantShip::BeginPlay()
{
	Super::BeginPlay();

	ShipMesh->OnComponentBeginOverlap.AddDynamic(this, &AMerchantShip::ShipBeginOverlap);

}

void AMerchantShip::ShipBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->Tags.Contains("PrivateerGoal"))
	{
		if (AITeam == ETeam::ET_Privateer)
		{
			AttributeSet->SendPOEToTeam(ETeam::ET_Privateer, ReturnToBaseBounty);
		}
		Destroy();
		TreasureResolved();
	}

	if (OtherActor->Tags.Contains("PirateGoal"))
	{
		if (AITeam == ETeam::ET_Pirate)
		{
			AttributeSet->SendPOEToTeam(ETeam::ET_Pirate, ReturnToBaseBounty);
		}
		Destroy();
		TreasureResolved();
	}
}

void AMerchantShip::TreasureResolved()
{
	ASBGameMode* GameMode = Cast<ASBGameMode>(UGameplayStatics::GetGameMode(this));
	UE_LOG(LogTemp, Warning, TEXT("Treasure Resolved"))

		if (GameMode)
		{
			GameMode->TreasureResolved();
		}
}

void AMerchantShip::Die(AActor* InstigatorActor)
{

	if (AITeam == ETeam::ET_Pirate)
	{
		AttributeSet->SendPOEToTeam(ETeam::ET_Privateer, MerchantShipBounty);
	}

	if (AITeam == ETeam::ET_Privateer)
	{
		AttributeSet->SendPOEToTeam(ETeam::ET_Pirate, MerchantShipBounty);
	}

	Super::Die(InstigatorActor);

	GetWorldTimerManager().SetTimer(DestroyTimer, this, &AMerchantShip::DestroyTimerFinished, 5.f);
}


void AMerchantShip::DestroyTimerFinished()
{
	TreasureResolved();

	Destroy();
}


