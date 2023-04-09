// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplayAbilities/SBAttributeSet.h"
#include "GameplayEffectExtension.h"
#include "GameplayEffect.h"
#include "Net/UnrealNetwork.h"
#include "PlayerStates//CaptainState.h"
#include "GameplayEffect.h"

USBAttributeSet::USBAttributeSet() :
	Health(500.f),
	MaxHealth(500.f), 
	Mana(100.f),
	MaxMana(100.f),
	Speed(0.f),
	Bounty(50.f),
	PiecesOfEight(0.f)
{
}

void USBAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(USBAttributeSet, InstigatorActor, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USBAttributeSet, DestroyedActor, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USBAttributeSet, BountyCollected, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USBAttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USBAttributeSet, MaxHealth, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USBAttributeSet, Mana, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USBAttributeSet, MaxMana, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USBAttributeSet, Speed, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USBAttributeSet, Bounty, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USBAttributeSet, PiecesOfEight, COND_None, REPNOTIFY_Always);
}

void USBAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	if (Data.EvaluatedData.Attribute.GetUProperty() == FindFieldChecked<FProperty>(USBAttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(USBAttributeSet, Health)))
	{
		Health.SetCurrentValue(FMath::Clamp(Health.GetCurrentValue(), 0.f, MaxHealth.GetCurrentValue()));
		Health.SetBaseValue(FMath::Clamp(Health.GetBaseValue(), 0.f, MaxHealth.GetCurrentValue()));			

		InstigatorActor = Data.EffectSpec.GetContext().GetInstigator();

		OnHealthChange.Broadcast(Health.GetCurrentValue(), MaxHealth.GetCurrentValue(), InstigatorActor);
	}

	if (Data.EvaluatedData.Attribute.GetUProperty() == FindFieldChecked<FProperty>(USBAttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(USBAttributeSet, Mana)))
	{
		Mana.SetCurrentValue(FMath::Clamp(Mana.GetCurrentValue(), 0.f, MaxMana.GetCurrentValue()));
		Mana.SetBaseValue(FMath::Clamp(Mana.GetBaseValue(), 0.f, MaxMana.GetCurrentValue()));
		OnManaChange.Broadcast(Mana.GetCurrentValue(), MaxMana.GetCurrentValue());
	}


}

void USBAttributeSet::PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue)
{
	if (Attribute == FindFieldChecked<FProperty>(USBAttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(USBAttributeSet, Speed)))
	{
		Speed.SetCurrentValue(Speed.GetCurrentValue());
		OnSpeedChange.Broadcast(Speed.GetCurrentValue());
	}
}

void USBAttributeSet::CollectBounty(AActor* BountiedActor, float BountyToCollect)
{
	if (!GetActorInfo()->AvatarActor.IsValid() || !GetActorInfo()->AvatarActor->HasAuthority()) return;

	Bounty.SetCurrentValue(FMath::CeilToInt(Bounty.GetCurrentValue() + BountyToCollect / 2));
	DestroyedActor = BountiedActor;
	BountyCollected = BountyToCollect;
	OnBountyChange.Broadcast(FMath::CeilToInt(Bounty.GetCurrentValue()), DestroyedActor);


	PiecesOfEight.SetCurrentValue(FMath::CeilToInt(PiecesOfEight.GetCurrentValue() + BountyToCollect));
	OnPiecesOfEightChange.Broadcast(FMath::CeilToInt(PiecesOfEight.GetCurrentValue()), DestroyedActor, BountyToCollect);

	UE_LOG(LogTemp, Warning, TEXT("Bounty Destroyed Actor %s"), *BountiedActor->GetName())
	UE_LOG(LogTemp, Warning, TEXT("BountyToCollect %f"), BountyToCollect)
	UE_LOG(LogTemp, Warning, TEXT("Currentbounty %f"), Bounty.GetCurrentValue())
}

void USBAttributeSet::Buy(int32 Cost)
{
	int32 ValueToSet = FMath::Clamp(PiecesOfEight.GetCurrentValue()-Cost, 0, PiecesOfEight.GetCurrentValue());
	PiecesOfEight.SetCurrentValue(ValueToSet);

	OnPiecesOfEightChange.Broadcast(PiecesOfEight.GetCurrentValue(), nullptr, 0);
}

void USBAttributeSet::ReceivePOE(int32 POEToReceive)
{
	int32 ValueToSet = FMath::CeilToInt(PiecesOfEight.GetCurrentValue() + POEToReceive);
	PiecesOfEight.SetCurrentValue(ValueToSet);

	OnPiecesOfEightChange.Broadcast(PiecesOfEight.GetCurrentValue(), nullptr, 0);
}

void USBAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USBAttributeSet, Health, OldHealth);
	
	OnHealthChange.Broadcast(Health.GetCurrentValue(), MaxHealth.GetCurrentValue(), InstigatorActor);
}

void USBAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USBAttributeSet, MaxHealth, OldMaxHealth);
}

void USBAttributeSet::OnRep_Mana(const FGameplayAttributeData& OldMana)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USBAttributeSet, Mana, OldMana);
	OnManaChange.Broadcast(Mana.GetCurrentValue(), MaxMana.GetCurrentValue());
}

void USBAttributeSet::OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USBAttributeSet, MaxMana, OldMaxMana);
}

void USBAttributeSet::OnRep_Speed(const FGameplayAttributeData& OldSpeed)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USBAttributeSet, Speed, OldSpeed);

	OnSpeedChange.Broadcast(Speed.GetCurrentValue());

}

void USBAttributeSet::OnRep_Bounty(const FGameplayAttributeData& OldBounty)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USBAttributeSet, Bounty, OldBounty);

	OnBountyChange.Broadcast(Bounty.GetCurrentValue(), DestroyedActor);

}

void USBAttributeSet::OnRep_PiecesOfEight(const FGameplayAttributeData& OldPiecesOfEight)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USBAttributeSet, PiecesOfEight, OldPiecesOfEight);

	OnPiecesOfEightChange.Broadcast(PiecesOfEight.GetCurrentValue(), DestroyedActor, BountyCollected);

}

