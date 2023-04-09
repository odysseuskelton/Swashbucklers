// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/SBAbilitySystemComponent.h"
#include "GameplayAbilities/SBGameplayAbility.h"
#include "Interfaces/SlotInterface.h"

void USBAbilitySystemComponent::NotifyAbilityCommit(UGameplayAbility* Ability)
{
	Super::NotifyAbilityCommit(Ability);
	UE_LOG(LogTemp, Warning, TEXT("enter notify ability commit..."))

	if (Ability)
	{
		USBGameplayAbility* SBGameplayAbility = Cast<USBGameplayAbility>(Ability);
		ISlotInterface* SlotInterface = Cast<ISlotInterface>(GetOwner());

		if (SBGameplayAbility && SlotInterface)
		{
			for (TSubclassOf<USBGameplayAbility> AbilityClassInSlot : SlotInterface->GetCurrentAbilities())
			{
				if (AbilityClassInSlot)
				{
					USBGameplayAbility* AbilityInSlot = AbilityClassInSlot.GetDefaultObject();
					if (AbilityInSlot && AbilityInSlot->AbilityName == SBGameplayAbility->AbilityName)
					{
						
						UE_LOG(LogTemp, Warning, TEXT("found..."))
						
						SlotInterface->ActivateSlotCooldown(AbilityClassInSlot);
						return;
					}
				}
			}
		}
	}
}
