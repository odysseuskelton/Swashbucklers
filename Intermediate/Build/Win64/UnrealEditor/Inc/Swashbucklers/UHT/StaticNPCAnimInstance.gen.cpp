// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/AI/StaticNPCAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticNPCAnimInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UStaticNPCAnimInstance();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UStaticNPCAnimInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	void UStaticNPCAnimInstance::StaticRegisterNativesUStaticNPCAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStaticNPCAnimInstance);
	UClass* Z_Construct_UClass_UStaticNPCAnimInstance_NoRegister()
	{
		return UStaticNPCAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UStaticNPCAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanAttack_MetaData[];
#endif
		static void NewProp_bCanAttack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanAttack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDead_MetaData[];
#endif
		static void NewProp_bDead_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDead;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStaticNPCAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticNPCAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AI/StaticNPCAnimInstance.h" },
		{ "ModuleRelativePath", "Public/AI/StaticNPCAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticNPCAnimInstance_Statics::NewProp_bCanAttack_MetaData[] = {
		{ "Category", "StaticNPCAnimInstance" },
		{ "ModuleRelativePath", "Public/AI/StaticNPCAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UStaticNPCAnimInstance_Statics::NewProp_bCanAttack_SetBit(void* Obj)
	{
		((UStaticNPCAnimInstance*)Obj)->bCanAttack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticNPCAnimInstance_Statics::NewProp_bCanAttack = { "bCanAttack", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UStaticNPCAnimInstance), &Z_Construct_UClass_UStaticNPCAnimInstance_Statics::NewProp_bCanAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticNPCAnimInstance_Statics::NewProp_bCanAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticNPCAnimInstance_Statics::NewProp_bCanAttack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticNPCAnimInstance_Statics::NewProp_bDead_MetaData[] = {
		{ "Category", "StaticNPCAnimInstance" },
		{ "ModuleRelativePath", "Public/AI/StaticNPCAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UStaticNPCAnimInstance_Statics::NewProp_bDead_SetBit(void* Obj)
	{
		((UStaticNPCAnimInstance*)Obj)->bDead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticNPCAnimInstance_Statics::NewProp_bDead = { "bDead", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UStaticNPCAnimInstance), &Z_Construct_UClass_UStaticNPCAnimInstance_Statics::NewProp_bDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticNPCAnimInstance_Statics::NewProp_bDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticNPCAnimInstance_Statics::NewProp_bDead_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStaticNPCAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticNPCAnimInstance_Statics::NewProp_bCanAttack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticNPCAnimInstance_Statics::NewProp_bDead,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStaticNPCAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaticNPCAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStaticNPCAnimInstance_Statics::ClassParams = {
		&UStaticNPCAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStaticNPCAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStaticNPCAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UStaticNPCAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticNPCAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStaticNPCAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UStaticNPCAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStaticNPCAnimInstance.OuterSingleton, Z_Construct_UClass_UStaticNPCAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStaticNPCAnimInstance.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<UStaticNPCAnimInstance>()
	{
		return UStaticNPCAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticNPCAnimInstance);
	UStaticNPCAnimInstance::~UStaticNPCAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_AI_StaticNPCAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_AI_StaticNPCAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStaticNPCAnimInstance, UStaticNPCAnimInstance::StaticClass, TEXT("UStaticNPCAnimInstance"), &Z_Registration_Info_UClass_UStaticNPCAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStaticNPCAnimInstance), 3339188672U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_AI_StaticNPCAnimInstance_h_3424647968(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_AI_StaticNPCAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_AI_StaticNPCAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
