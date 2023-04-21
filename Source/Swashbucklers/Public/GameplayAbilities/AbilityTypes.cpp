#include "GameplayAbilities/AbilityTypes.h"
#include "AbilityTypes.h"

//FGameplayAbilityInfo::FGameplayAbilityInfo() :
//FString Name(""),
//FString Description(""),
//float InCooldownDuration(0.f),
//float InCost(0.f),
//UMaterialInstance* InUIMat*(nullptr),
//TSubclassOf<USBGameplayAbility> InAbilityClass(nullptr)
//{
//}
//
//FGameplayAbilityInfo::FGameplayAbilityInfo(FString AbilityName, FString Description, float InCooldownDuration, float InCost, UMaterialInstance* InUIMat, TSubclassOf<USBGameplayAbility> InAbilityClass) :
//FString Name(AbilityName),
//float InCooldownDuration(InCooldownDuration),
//float InCost(InCost),
//UMaterialInstance* InUIMat* (InUIMat),
//TSubclassOf<USBGameplayAbility> InAbilityClass(InAbilityClass)
//{
//}

FGameplayAbilityInfo::FGameplayAbilityInfo() :
AbilityName(""),
AbilityDescription(""),
AbilityType(EAbilityType::EAT_Standard),
CooldownDuration(0.f),
Cost(0.f),
UIMat(nullptr),
AbilityClass(nullptr)
{
}

FGameplayAbilityInfo::FGameplayAbilityInfo(FString Name, FString Description, EAbilityType InType, float InCooldownDuration, float InCost, UMaterialInstance* InUIMat, int32 InStoreCost, TSubclassOf<USBGameplayAbility> InAbilityClass) :
AbilityName(Name),
AbilityDescription(Description),
AbilityType(InType),
CooldownDuration(InCooldownDuration),
Cost(InCost),
StoreCost(InStoreCost),
UIMat(InUIMat),
AbilityClass(InAbilityClass)
{
}
