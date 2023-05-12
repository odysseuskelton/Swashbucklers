

#include "GameplayAbilities/SpellActors/WaterSpout.h"
#include "NiagaraComponent.h"
#include "Components/BoxComponent.h"
#include "Components/AudioComponent.h"
#include "Ships/Ship.h"


AWaterSpout::AWaterSpout()
{
	PrimaryActorTick.bCanEverTick = false;

	WaterSpoutSystem = CreateDefaultSubobject<UNiagaraComponent>(TEXT("WaterSpoutSystem"));
	SetRootComponent(WaterSpoutSystem);

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	CollisionBox->SetupAttachment(WaterSpoutSystem);

	WaterSpoutAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
	WaterSpoutAudio->SetupAttachment(WaterSpoutSystem);

}

void AWaterSpout::BeginPlay()
{
	Super::BeginPlay();
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AWaterSpout::CollisionBoxOverlap);
	CollisionBox->OnComponentEndOverlap.AddDynamic(this, &AWaterSpout::CollisionBoxEndOverlap);

	SetLifeSpan(LifeSpanDuration);
	
}

void AWaterSpout::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AWaterSpout::CollisionBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	if (OtherActor)
	{
		AShip* ShipToAffect = Cast<AShip>(OtherActor);
		if (ShipToAffect && !ShipsEffected.Contains(ShipToAffect))
		{
			AffectShips(ShipToAffect);
		}
	}
}

void AWaterSpout::CollisionBoxEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor)
	{

	}
}

void AWaterSpout::AffectShips(AShip* ShipToAffect)
{
	ShipsEffected.Add(ShipToAffect);

	ShipToAffect->GetShipMesh()->AddImpulse(ImpactForce);

}