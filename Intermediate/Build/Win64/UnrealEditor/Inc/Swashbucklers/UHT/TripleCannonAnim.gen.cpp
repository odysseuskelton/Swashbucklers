// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/Weapons/TripleCannonAnim.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTripleCannonAnim() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UTripleCannonAnim();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UTripleCannonAnim_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	void UTripleCannonAnim::StaticRegisterNativesUTripleCannonAnim()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTripleCannonAnim);
	UClass* Z_Construct_UClass_UTripleCannonAnim_NoRegister()
	{
		return UTripleCannonAnim::StaticClass();
	}
	struct Z_Construct_UClass_UTripleCannonAnim_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFiring_MetaData[];
#endif
		static void NewProp_bFiring_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFiring;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTripleCannonAnim_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTripleCannonAnim_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Weapons/TripleCannonAnim.h" },
		{ "ModuleRelativePath", "Public/Weapons/TripleCannonAnim.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTripleCannonAnim_Statics::NewProp_bFiring_MetaData[] = {
		{ "Category", "TripleCannonAnim" },
		{ "ModuleRelativePath", "Public/Weapons/TripleCannonAnim.h" },
	};
#endif
	void Z_Construct_UClass_UTripleCannonAnim_Statics::NewProp_bFiring_SetBit(void* Obj)
	{
		((UTripleCannonAnim*)Obj)->bFiring = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTripleCannonAnim_Statics::NewProp_bFiring = { "bFiring", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTripleCannonAnim), &Z_Construct_UClass_UTripleCannonAnim_Statics::NewProp_bFiring_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTripleCannonAnim_Statics::NewProp_bFiring_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTripleCannonAnim_Statics::NewProp_bFiring_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTripleCannonAnim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTripleCannonAnim_Statics::NewProp_bFiring,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTripleCannonAnim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTripleCannonAnim>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTripleCannonAnim_Statics::ClassParams = {
		&UTripleCannonAnim::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTripleCannonAnim_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTripleCannonAnim_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UTripleCannonAnim_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTripleCannonAnim_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTripleCannonAnim()
	{
		if (!Z_Registration_Info_UClass_UTripleCannonAnim.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTripleCannonAnim.OuterSingleton, Z_Construct_UClass_UTripleCannonAnim_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTripleCannonAnim.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<UTripleCannonAnim>()
	{
		return UTripleCannonAnim::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTripleCannonAnim);
	UTripleCannonAnim::~UTripleCannonAnim() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_TripleCannonAnim_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_TripleCannonAnim_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTripleCannonAnim, UTripleCannonAnim::StaticClass, TEXT("UTripleCannonAnim"), &Z_Registration_Info_UClass_UTripleCannonAnim, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTripleCannonAnim), 3931644611U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_TripleCannonAnim_h_2761213636(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_TripleCannonAnim_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_TripleCannonAnim_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
