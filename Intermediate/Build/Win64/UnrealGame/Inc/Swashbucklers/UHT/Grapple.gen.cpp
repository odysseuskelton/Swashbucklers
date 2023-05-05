// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/Weapons/Projectiles/Grapple.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrapple() {}
// Cross Module References
	CABLECOMPONENT_API UClass* Z_Construct_UClass_UCableComponent_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_AGrapple();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_AGrapple_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_AProjectile();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	DEFINE_FUNCTION(AGrapple::execMulticastAttachGrapple)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastAttachGrapple_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AGrapple_MulticastAttachGrapple = FName(TEXT("MulticastAttachGrapple"));
	void AGrapple::MulticastAttachGrapple()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGrapple_MulticastAttachGrapple),NULL);
	}
	void AGrapple::StaticRegisterNativesAGrapple()
	{
		UClass* Class = AGrapple::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MulticastAttachGrapple", &AGrapple::execMulticastAttachGrapple },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGrapple_MulticastAttachGrapple_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrapple_MulticastAttachGrapple_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/Projectiles/Grapple.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrapple_MulticastAttachGrapple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrapple, nullptr, "MulticastAttachGrapple", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrapple_MulticastAttachGrapple_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrapple_MulticastAttachGrapple_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrapple_MulticastAttachGrapple()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrapple_MulticastAttachGrapple_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGrapple);
	UClass* Z_Construct_UClass_AGrapple_NoRegister()
	{
		return AGrapple::StaticClass();
	}
	struct Z_Construct_UClass_AGrapple_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrappleCable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GrappleCable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrappleAcceptanceDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GrappleAcceptanceDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrappleDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GrappleDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGrapple_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGrapple_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGrapple_MulticastAttachGrapple, "MulticastAttachGrapple" }, // 3865578169
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrapple_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapons/Projectiles/Grapple.h" },
		{ "ModuleRelativePath", "Public/Weapons/Projectiles/Grapple.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrapple_Statics::NewProp_GrappleCable_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Grapple" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapons/Projectiles/Grapple.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrapple_Statics::NewProp_GrappleCable = { "GrappleCable", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGrapple, GrappleCable), Z_Construct_UClass_UCableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGrapple_Statics::NewProp_GrappleCable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrapple_Statics::NewProp_GrappleCable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrapple_Statics::NewProp_GrappleAcceptanceDistance_MetaData[] = {
		{ "Category", "Grapple" },
		{ "ModuleRelativePath", "Public/Weapons/Projectiles/Grapple.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGrapple_Statics::NewProp_GrappleAcceptanceDistance = { "GrappleAcceptanceDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGrapple, GrappleAcceptanceDistance), METADATA_PARAMS(Z_Construct_UClass_AGrapple_Statics::NewProp_GrappleAcceptanceDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrapple_Statics::NewProp_GrappleAcceptanceDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrapple_Statics::NewProp_GrappleDuration_MetaData[] = {
		{ "Category", "Grapple" },
		{ "ModuleRelativePath", "Public/Weapons/Projectiles/Grapple.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGrapple_Statics::NewProp_GrappleDuration = { "GrappleDuration", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGrapple, GrappleDuration), METADATA_PARAMS(Z_Construct_UClass_AGrapple_Statics::NewProp_GrappleDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrapple_Statics::NewProp_GrappleDuration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGrapple_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrapple_Statics::NewProp_GrappleCable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrapple_Statics::NewProp_GrappleAcceptanceDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrapple_Statics::NewProp_GrappleDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGrapple_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrapple>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGrapple_Statics::ClassParams = {
		&AGrapple::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGrapple_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGrapple_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGrapple_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGrapple_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGrapple()
	{
		if (!Z_Registration_Info_UClass_AGrapple.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGrapple.OuterSingleton, Z_Construct_UClass_AGrapple_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGrapple.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<AGrapple>()
	{
		return AGrapple::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrapple);
	AGrapple::~AGrapple() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Grapple_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Grapple_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGrapple, AGrapple::StaticClass, TEXT("AGrapple"), &Z_Registration_Info_UClass_AGrapple, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGrapple), 3630081880U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Grapple_h_53162638(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Grapple_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Grapple_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
