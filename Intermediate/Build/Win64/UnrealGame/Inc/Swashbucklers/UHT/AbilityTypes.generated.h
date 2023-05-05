// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayAbilities/AbilityTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SWASHBUCKLERS_AbilityTypes_generated_h
#error "AbilityTypes.generated.h already included, missing '#pragma once' in AbilityTypes.h"
#endif
#define SWASHBUCKLERS_AbilityTypes_generated_h

#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_AbilityTypes_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics; \
	SWASHBUCKLERS_API static class UScriptStruct* StaticStruct();


template<> SWASHBUCKLERS_API UScriptStruct* StaticStruct<struct FGameplayAbilityInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_AbilityTypes_h


#define FOREACH_ENUM_EABILITYSLOT(op) \
	op(EAbilitySlot::EAS_NoSlot) \
	op(EAbilitySlot::EAS_Slot1) \
	op(EAbilitySlot::EAS_Slot2) \
	op(EAbilitySlot::EAS_Slot3) \
	op(EAbilitySlot::EAS_Slot4) 

enum class EAbilitySlot : uint8;
template<> struct TIsUEnumClass<EAbilitySlot> { enum { Value = true }; };
template<> SWASHBUCKLERS_API UEnum* StaticEnum<EAbilitySlot>();

#define FOREACH_ENUM_EABILITYTYPE(op) \
	op(EAbilityType::EAT_Standard) \
	op(EAbilityType::EAT_SlotAbility) 

enum class EAbilityType : uint8;
template<> struct TIsUEnumClass<EAbilityType> { enum { Value = true }; };
template<> SWASHBUCKLERS_API UEnum* StaticEnum<EAbilityType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
