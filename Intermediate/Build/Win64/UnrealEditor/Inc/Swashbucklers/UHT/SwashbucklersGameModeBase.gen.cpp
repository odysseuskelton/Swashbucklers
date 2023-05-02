// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/SwashbucklersGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwashbucklersGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ASwashbucklersGameModeBase();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ASwashbucklersGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	void ASwashbucklersGameModeBase::StaticRegisterNativesASwashbucklersGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASwashbucklersGameModeBase);
	UClass* Z_Construct_UClass_ASwashbucklersGameModeBase_NoRegister()
	{
		return ASwashbucklersGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASwashbucklersGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASwashbucklersGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwashbucklersGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SwashbucklersGameModeBase.h" },
		{ "ModuleRelativePath", "SwashbucklersGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASwashbucklersGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASwashbucklersGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASwashbucklersGameModeBase_Statics::ClassParams = {
		&ASwashbucklersGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASwashbucklersGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASwashbucklersGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASwashbucklersGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ASwashbucklersGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASwashbucklersGameModeBase.OuterSingleton, Z_Construct_UClass_ASwashbucklersGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASwashbucklersGameModeBase.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<ASwashbucklersGameModeBase>()
	{
		return ASwashbucklersGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASwashbucklersGameModeBase);
	ASwashbucklersGameModeBase::~ASwashbucklersGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_SwashbucklersGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_SwashbucklersGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASwashbucklersGameModeBase, ASwashbucklersGameModeBase::StaticClass, TEXT("ASwashbucklersGameModeBase"), &Z_Registration_Info_UClass_ASwashbucklersGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASwashbucklersGameModeBase), 2070213071U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_SwashbucklersGameModeBase_h_3299403816(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_SwashbucklersGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_SwashbucklersGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
