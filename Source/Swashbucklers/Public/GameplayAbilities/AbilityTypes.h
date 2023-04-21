#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AbilityTypes.generated.h"

class USBGameplayAbility;

UENUM(BlueprintType)
enum class EAbilitySlot : uint8
{
	EAS_NoSlot UMETA(DisplayName = "NoSlot"),
	EAS_Slot1 UMETA(DisplayName = "Slot1"),
	EAS_Slot2 UMETA(DisplayName = "Slot2"),
	EAS_Slot3 UMETA(DisplayName = "Slot3"),
	EAS_Slot4 UMETA(DisplayName = "Slot4"),
	EAS_MAX UMETA(DisplayName = "DefaultMAX")
};

UENUM(BlueprintType)
enum class EAbilityType : uint8
{
	EAT_Standard UMETA(DisplayName = "Standard Ability"),
	EAT_SlotAbility UMETA(DisplayName = "Slot Ability"),
	EAT_MAX UMETA(DisplayName = "DefaultMAX")
};

USTRUCT(BlueprintType)
struct FGameplayAbilityInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityInfo")
	FString AbilityName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityInfo")
	FString AbilityDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityInfo")
	EAbilityType AbilityType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityInfo")
	float CooldownDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityInfo")
	float Cost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityInfo")
	int32 StoreCost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityInfo")
	UMaterialInstance* UIMat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AbilityInfo")
	TSubclassOf<USBGameplayAbility> AbilityClass;

	FGameplayAbilityInfo();
	FGameplayAbilityInfo(FString Name, FString Description, EAbilityType Type, float InCooldownDuration, float InCost, UMaterialInstance* InUIMat, int32 InStoreCost, TSubclassOf<USBGameplayAbility> InAbilityClass);

};