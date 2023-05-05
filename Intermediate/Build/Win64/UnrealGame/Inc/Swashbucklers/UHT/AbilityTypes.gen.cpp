// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/GameplayAbilities/AbilityTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_USBGameplayAbility_NoRegister();
	SWASHBUCKLERS_API UEnum* Z_Construct_UEnum_Swashbucklers_EAbilitySlot();
	SWASHBUCKLERS_API UEnum* Z_Construct_UEnum_Swashbucklers_EAbilityType();
	SWASHBUCKLERS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityInfo();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAbilitySlot;
	static UEnum* EAbilitySlot_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAbilitySlot.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAbilitySlot.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Swashbucklers_EAbilitySlot, Z_Construct_UPackage__Script_Swashbucklers(), TEXT("EAbilitySlot"));
		}
		return Z_Registration_Info_UEnum_EAbilitySlot.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UEnum* StaticEnum<EAbilitySlot>()
	{
		return EAbilitySlot_StaticEnum();
	}
	struct Z_Construct_UEnum_Swashbucklers_EAbilitySlot_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Swashbucklers_EAbilitySlot_Statics::Enumerators[] = {
		{ "EAbilitySlot::EAS_NoSlot", (int64)EAbilitySlot::EAS_NoSlot },
		{ "EAbilitySlot::EAS_Slot1", (int64)EAbilitySlot::EAS_Slot1 },
		{ "EAbilitySlot::EAS_Slot2", (int64)EAbilitySlot::EAS_Slot2 },
		{ "EAbilitySlot::EAS_Slot3", (int64)EAbilitySlot::EAS_Slot3 },
		{ "EAbilitySlot::EAS_Slot4", (int64)EAbilitySlot::EAS_Slot4 },
		{ "EAbilitySlot::EAS_MAX", (int64)EAbilitySlot::EAS_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Swashbucklers_EAbilitySlot_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EAS_MAX.DisplayName", "DefaultMAX" },
		{ "EAS_MAX.Name", "EAbilitySlot::EAS_MAX" },
		{ "EAS_NoSlot.DisplayName", "NoSlot" },
		{ "EAS_NoSlot.Name", "EAbilitySlot::EAS_NoSlot" },
		{ "EAS_Slot1.DisplayName", "Slot1" },
		{ "EAS_Slot1.Name", "EAbilitySlot::EAS_Slot1" },
		{ "EAS_Slot2.DisplayName", "Slot2" },
		{ "EAS_Slot2.Name", "EAbilitySlot::EAS_Slot2" },
		{ "EAS_Slot3.DisplayName", "Slot3" },
		{ "EAS_Slot3.Name", "EAbilitySlot::EAS_Slot3" },
		{ "EAS_Slot4.DisplayName", "Slot4" },
		{ "EAS_Slot4.Name", "EAbilitySlot::EAS_Slot4" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/AbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Swashbucklers_EAbilitySlot_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Swashbucklers,
		nullptr,
		"EAbilitySlot",
		"EAbilitySlot",
		Z_Construct_UEnum_Swashbucklers_EAbilitySlot_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Swashbucklers_EAbilitySlot_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Swashbucklers_EAbilitySlot_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Swashbucklers_EAbilitySlot_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Swashbucklers_EAbilitySlot()
	{
		if (!Z_Registration_Info_UEnum_EAbilitySlot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAbilitySlot.InnerSingleton, Z_Construct_UEnum_Swashbucklers_EAbilitySlot_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAbilitySlot.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAbilityType;
	static UEnum* EAbilityType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAbilityType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAbilityType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Swashbucklers_EAbilityType, Z_Construct_UPackage__Script_Swashbucklers(), TEXT("EAbilityType"));
		}
		return Z_Registration_Info_UEnum_EAbilityType.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UEnum* StaticEnum<EAbilityType>()
	{
		return EAbilityType_StaticEnum();
	}
	struct Z_Construct_UEnum_Swashbucklers_EAbilityType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Swashbucklers_EAbilityType_Statics::Enumerators[] = {
		{ "EAbilityType::EAT_Standard", (int64)EAbilityType::EAT_Standard },
		{ "EAbilityType::EAT_SlotAbility", (int64)EAbilityType::EAT_SlotAbility },
		{ "EAbilityType::EAT_MAX", (int64)EAbilityType::EAT_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Swashbucklers_EAbilityType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EAT_MAX.DisplayName", "DefaultMAX" },
		{ "EAT_MAX.Name", "EAbilityType::EAT_MAX" },
		{ "EAT_SlotAbility.DisplayName", "Slot Ability" },
		{ "EAT_SlotAbility.Name", "EAbilityType::EAT_SlotAbility" },
		{ "EAT_Standard.DisplayName", "Standard Ability" },
		{ "EAT_Standard.Name", "EAbilityType::EAT_Standard" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/AbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Swashbucklers_EAbilityType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Swashbucklers,
		nullptr,
		"EAbilityType",
		"EAbilityType",
		Z_Construct_UEnum_Swashbucklers_EAbilityType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Swashbucklers_EAbilityType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Swashbucklers_EAbilityType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Swashbucklers_EAbilityType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Swashbucklers_EAbilityType()
	{
		if (!Z_Registration_Info_UEnum_EAbilityType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAbilityType.InnerSingleton, Z_Construct_UEnum_Swashbucklers_EAbilityType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAbilityType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayAbilityInfo;
class UScriptStruct* FGameplayAbilityInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilityInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayAbilityInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilityInfo, Z_Construct_UPackage__Script_Swashbucklers(), TEXT("GameplayAbilityInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilityInfo.OuterSingleton;
}
template<> SWASHBUCKLERS_API UScriptStruct* StaticStruct<FGameplayAbilityInfo>()
{
	return FGameplayAbilityInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AbilityName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AbilityDescription;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AbilityType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AbilityType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CooldownDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CooldownDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cost_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Cost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoreCost_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StoreCost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIMat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UIMat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/AbilityTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilityInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_AbilityName_MetaData[] = {
		{ "Category", "AbilityInfo" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/AbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_AbilityName = { "AbilityName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityInfo, AbilityName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_AbilityName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_AbilityName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_AbilityDescription_MetaData[] = {
		{ "Category", "AbilityInfo" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/AbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_AbilityDescription = { "AbilityDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityInfo, AbilityDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_AbilityDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_AbilityDescription_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_AbilityType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_AbilityType_MetaData[] = {
		{ "Category", "AbilityInfo" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/AbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_AbilityType = { "AbilityType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityInfo, AbilityType), Z_Construct_UEnum_Swashbucklers_EAbilityType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_AbilityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_AbilityType_MetaData)) }; // 2758750863
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_CooldownDuration_MetaData[] = {
		{ "Category", "AbilityInfo" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/AbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_CooldownDuration = { "CooldownDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityInfo, CooldownDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_CooldownDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_CooldownDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_Cost_MetaData[] = {
		{ "Category", "AbilityInfo" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/AbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityInfo, Cost), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_Cost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_Cost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_StoreCost_MetaData[] = {
		{ "Category", "AbilityInfo" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/AbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_StoreCost = { "StoreCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityInfo, StoreCost), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_StoreCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_StoreCost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_UIMat_MetaData[] = {
		{ "Category", "AbilityInfo" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/AbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_UIMat = { "UIMat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityInfo, UIMat), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_UIMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_UIMat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_AbilityClass_MetaData[] = {
		{ "Category", "AbilityInfo" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/AbilityTypes.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_AbilityClass = { "AbilityClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilityInfo, AbilityClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USBGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_AbilityClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_AbilityClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_AbilityName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_AbilityDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_AbilityType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_AbilityType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_CooldownDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_Cost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_StoreCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_UIMat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewProp_AbilityClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
		nullptr,
		&NewStructOps,
		"GameplayAbilityInfo",
		sizeof(FGameplayAbilityInfo),
		alignof(FGameplayAbilityInfo),
		Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayAbilityInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayAbilityInfo.InnerSingleton, Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayAbilityInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_AbilityTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_AbilityTypes_h_Statics::EnumInfo[] = {
		{ EAbilitySlot_StaticEnum, TEXT("EAbilitySlot"), &Z_Registration_Info_UEnum_EAbilitySlot, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1220480195U) },
		{ EAbilityType_StaticEnum, TEXT("EAbilityType"), &Z_Registration_Info_UEnum_EAbilityType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2758750863U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_AbilityTypes_h_Statics::ScriptStructInfo[] = {
		{ FGameplayAbilityInfo::StaticStruct, Z_Construct_UScriptStruct_FGameplayAbilityInfo_Statics::NewStructOps, TEXT("GameplayAbilityInfo"), &Z_Registration_Info_UScriptStruct_GameplayAbilityInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayAbilityInfo), 2276528733U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_AbilityTypes_h_1914693014(TEXT("/Script/Swashbucklers"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_AbilityTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_AbilityTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_AbilityTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_AbilityTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
