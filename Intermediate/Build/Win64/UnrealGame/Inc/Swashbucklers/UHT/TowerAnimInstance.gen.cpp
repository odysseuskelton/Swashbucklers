// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/Buildings/TowerAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTowerAnimInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UTowerAnimInstance();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UTowerAnimInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	void UTowerAnimInstance::StaticRegisterNativesUTowerAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTowerAnimInstance);
	UClass* Z_Construct_UClass_UTowerAnimInstance_NoRegister()
	{
		return UTowerAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UTowerAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurretRotation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurretRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CannonRotation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CannonRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTowerAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Buildings/TowerAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Buildings/TowerAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerAnimInstance_Statics::NewProp_TurretRotation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Buildings/TowerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTowerAnimInstance_Statics::NewProp_TurretRotation = { "TurretRotation", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTowerAnimInstance, TurretRotation), METADATA_PARAMS(Z_Construct_UClass_UTowerAnimInstance_Statics::NewProp_TurretRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerAnimInstance_Statics::NewProp_TurretRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerAnimInstance_Statics::NewProp_CannonRotation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Buildings/TowerAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTowerAnimInstance_Statics::NewProp_CannonRotation = { "CannonRotation", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTowerAnimInstance, CannonRotation), METADATA_PARAMS(Z_Construct_UClass_UTowerAnimInstance_Statics::NewProp_CannonRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerAnimInstance_Statics::NewProp_CannonRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTowerAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerAnimInstance_Statics::NewProp_TurretRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerAnimInstance_Statics::NewProp_CannonRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTowerAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTowerAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTowerAnimInstance_Statics::ClassParams = {
		&UTowerAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTowerAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTowerAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UTowerAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTowerAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UTowerAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTowerAnimInstance.OuterSingleton, Z_Construct_UClass_UTowerAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTowerAnimInstance.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<UTowerAnimInstance>()
	{
		return UTowerAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTowerAnimInstance);
	UTowerAnimInstance::~UTowerAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_TowerAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_TowerAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTowerAnimInstance, UTowerAnimInstance::StaticClass, TEXT("UTowerAnimInstance"), &Z_Registration_Info_UClass_UTowerAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTowerAnimInstance), 70424233U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_TowerAnimInstance_h_2792854348(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_TowerAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_TowerAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
