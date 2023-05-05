// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/Buildings/BuildingTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildingTypes() {}
// Cross Module References
	SWASHBUCKLERS_API UEnum* Z_Construct_UEnum_Swashbucklers_EBuildingType();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBuildingType;
	static UEnum* EBuildingType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBuildingType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBuildingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Swashbucklers_EBuildingType, Z_Construct_UPackage__Script_Swashbucklers(), TEXT("EBuildingType"));
		}
		return Z_Registration_Info_UEnum_EBuildingType.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UEnum* StaticEnum<EBuildingType>()
	{
		return EBuildingType_StaticEnum();
	}
	struct Z_Construct_UEnum_Swashbucklers_EBuildingType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Swashbucklers_EBuildingType_Statics::Enumerators[] = {
		{ "EBuildingType::EBT_NoType", (int64)EBuildingType::EBT_NoType },
		{ "EBuildingType::EBT_PirateHideout", (int64)EBuildingType::EBT_PirateHideout },
		{ "EBuildingType::EBT_PrivateerHQ", (int64)EBuildingType::EBT_PrivateerHQ },
		{ "EBuildingType::EBT_Tower", (int64)EBuildingType::EBT_Tower },
		{ "EBuildingType::EBT_MAX", (int64)EBuildingType::EBT_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Swashbucklers_EBuildingType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EBT_MAX.DisplayName", "DefaultMAX" },
		{ "EBT_MAX.Name", "EBuildingType::EBT_MAX" },
		{ "EBT_NoType.DisplayName", "NoType" },
		{ "EBT_NoType.Name", "EBuildingType::EBT_NoType" },
		{ "EBT_PirateHideout.DisplayName", "PirateHideout" },
		{ "EBT_PirateHideout.Name", "EBuildingType::EBT_PirateHideout" },
		{ "EBT_PrivateerHQ.DisplayName", "PrivateerHQ" },
		{ "EBT_PrivateerHQ.Name", "EBuildingType::EBT_PrivateerHQ" },
		{ "EBT_Tower.DisplayName", "Tower" },
		{ "EBT_Tower.Name", "EBuildingType::EBT_Tower" },
		{ "ModuleRelativePath", "Public/Buildings/BuildingTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Swashbucklers_EBuildingType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Swashbucklers,
		nullptr,
		"EBuildingType",
		"EBuildingType",
		Z_Construct_UEnum_Swashbucklers_EBuildingType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Swashbucklers_EBuildingType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Swashbucklers_EBuildingType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Swashbucklers_EBuildingType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Swashbucklers_EBuildingType()
	{
		if (!Z_Registration_Info_UEnum_EBuildingType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBuildingType.InnerSingleton, Z_Construct_UEnum_Swashbucklers_EBuildingType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBuildingType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_BuildingTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_BuildingTypes_h_Statics::EnumInfo[] = {
		{ EBuildingType_StaticEnum, TEXT("EBuildingType"), &Z_Registration_Info_UEnum_EBuildingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1602796454U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_BuildingTypes_h_2429122880(TEXT("/Script/Swashbucklers"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_BuildingTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_BuildingTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
