// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/AI/NavCheckPoints.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavCheckPoints() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ANavCheckPoints();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ANavCheckPoints_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	void ANavCheckPoints::StaticRegisterNativesANavCheckPoints()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANavCheckPoints);
	UClass* Z_Construct_UClass_ANavCheckPoints_NoRegister()
	{
		return ANavCheckPoints::StaticClass();
	}
	struct Z_Construct_UClass_ANavCheckPoints_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavCheckpoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NavCheckpoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavCheckPoints_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavCheckPoints_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/NavCheckPoints.h" },
		{ "ModuleRelativePath", "Public/AI/NavCheckPoints.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavCheckPoints_Statics::NewProp_NavCheckpoint_MetaData[] = {
		{ "Category", "NavCheckPoints" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/NavCheckPoints.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavCheckPoints_Statics::NewProp_NavCheckpoint = { "NavCheckpoint", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavCheckPoints, NavCheckpoint), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavCheckPoints_Statics::NewProp_NavCheckpoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavCheckPoints_Statics::NewProp_NavCheckpoint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavCheckPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavCheckPoints_Statics::NewProp_NavCheckpoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavCheckPoints_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavCheckPoints>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANavCheckPoints_Statics::ClassParams = {
		&ANavCheckPoints::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANavCheckPoints_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANavCheckPoints_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANavCheckPoints_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANavCheckPoints_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavCheckPoints()
	{
		if (!Z_Registration_Info_UClass_ANavCheckPoints.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANavCheckPoints.OuterSingleton, Z_Construct_UClass_ANavCheckPoints_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANavCheckPoints.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<ANavCheckPoints>()
	{
		return ANavCheckPoints::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavCheckPoints);
	ANavCheckPoints::~ANavCheckPoints() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_AI_NavCheckPoints_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_AI_NavCheckPoints_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANavCheckPoints, ANavCheckPoints::StaticClass, TEXT("ANavCheckPoints"), &Z_Registration_Info_UClass_ANavCheckPoints, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANavCheckPoints), 3479110713U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_AI_NavCheckPoints_h_3069577365(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_AI_NavCheckPoints_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_AI_NavCheckPoints_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
