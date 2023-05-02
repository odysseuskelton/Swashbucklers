// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/GameModes/SBMainMenuGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBMainMenuGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ASBMainMenuGameMode();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ASBMainMenuGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	void ASBMainMenuGameMode::StaticRegisterNativesASBMainMenuGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASBMainMenuGameMode);
	UClass* Z_Construct_UClass_ASBMainMenuGameMode_NoRegister()
	{
		return ASBMainMenuGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASBMainMenuGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBMainMenuGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBMainMenuGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/SBMainMenuGameMode.h" },
		{ "ModuleRelativePath", "Public/GameModes/SBMainMenuGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBMainMenuGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBMainMenuGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASBMainMenuGameMode_Statics::ClassParams = {
		&ASBMainMenuGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASBMainMenuGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBMainMenuGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBMainMenuGameMode()
	{
		if (!Z_Registration_Info_UClass_ASBMainMenuGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASBMainMenuGameMode.OuterSingleton, Z_Construct_UClass_ASBMainMenuGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASBMainMenuGameMode.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<ASBMainMenuGameMode>()
	{
		return ASBMainMenuGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBMainMenuGameMode);
	ASBMainMenuGameMode::~ASBMainMenuGameMode() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameModes_SBMainMenuGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameModes_SBMainMenuGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASBMainMenuGameMode, ASBMainMenuGameMode::StaticClass, TEXT("ASBMainMenuGameMode"), &Z_Registration_Info_UClass_ASBMainMenuGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASBMainMenuGameMode), 109081372U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameModes_SBMainMenuGameMode_h_3961095637(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameModes_SBMainMenuGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameModes_SBMainMenuGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
