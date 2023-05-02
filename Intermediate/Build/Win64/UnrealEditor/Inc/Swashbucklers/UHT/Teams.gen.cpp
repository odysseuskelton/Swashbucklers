// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/PlayerStates/Teams.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeams() {}
// Cross Module References
	SWASHBUCKLERS_API UEnum* Z_Construct_UEnum_Swashbucklers_ETeam();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETeam;
	static UEnum* ETeam_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETeam.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETeam.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Swashbucklers_ETeam, Z_Construct_UPackage__Script_Swashbucklers(), TEXT("ETeam"));
		}
		return Z_Registration_Info_UEnum_ETeam.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UEnum* StaticEnum<ETeam>()
	{
		return ETeam_StaticEnum();
	}
	struct Z_Construct_UEnum_Swashbucklers_ETeam_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Swashbucklers_ETeam_Statics::Enumerators[] = {
		{ "ETeam::ET_NoTeam", (int64)ETeam::ET_NoTeam },
		{ "ETeam::ET_Pirate", (int64)ETeam::ET_Pirate },
		{ "ETeam::ET_Privateer", (int64)ETeam::ET_Privateer },
		{ "ETeam::ECS_MAX", (int64)ETeam::ECS_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Swashbucklers_ETeam_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ECS_MAX.DisplayName", "DefaultMAX" },
		{ "ECS_MAX.Name", "ETeam::ECS_MAX" },
		{ "ET_NoTeam.DisplayName", "NoTeam" },
		{ "ET_NoTeam.Name", "ETeam::ET_NoTeam" },
		{ "ET_Pirate.DisplayName", "Pirate" },
		{ "ET_Pirate.Name", "ETeam::ET_Pirate" },
		{ "ET_Privateer.DisplayName", "Privateer" },
		{ "ET_Privateer.Name", "ETeam::ET_Privateer" },
		{ "ModuleRelativePath", "Public/PlayerStates/Teams.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Swashbucklers_ETeam_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Swashbucklers,
		nullptr,
		"ETeam",
		"ETeam",
		Z_Construct_UEnum_Swashbucklers_ETeam_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Swashbucklers_ETeam_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Swashbucklers_ETeam_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Swashbucklers_ETeam_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Swashbucklers_ETeam()
	{
		if (!Z_Registration_Info_UEnum_ETeam.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETeam.InnerSingleton, Z_Construct_UEnum_Swashbucklers_ETeam_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETeam.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_PlayerStates_Teams_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_PlayerStates_Teams_h_Statics::EnumInfo[] = {
		{ ETeam_StaticEnum, TEXT("ETeam"), &Z_Registration_Info_UEnum_ETeam, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4006013224U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_PlayerStates_Teams_h_1607178508(TEXT("/Script/Swashbucklers"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_PlayerStates_Teams_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_PlayerStates_Teams_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
