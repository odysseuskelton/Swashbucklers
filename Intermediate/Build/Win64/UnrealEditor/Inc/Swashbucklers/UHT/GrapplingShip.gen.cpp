// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/Ships/GrapplingShip.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrapplingShip() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_AGrapplingShip();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_AGrapplingShip_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_APlayerShip();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_USBGameplayAbility_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	DEFINE_FUNCTION(AGrapplingShip::execSetHookVisibility)
	{
		P_GET_UBOOL(Z_Param_bVisibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHookVisibility(Z_Param_bVisibility);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrapplingShip::execServerFireGrapple)
	{
		P_GET_OBJECT(UClass,Z_Param_AbilityToActivate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerFireGrapple_Implementation(Z_Param_AbilityToActivate);
		P_NATIVE_END;
	}
	struct GrapplingShip_eventServerFireGrapple_Parms
	{
		TSubclassOf<USBGameplayAbility>  AbilityToActivate;
	};
	static FName NAME_AGrapplingShip_ServerFireGrapple = FName(TEXT("ServerFireGrapple"));
	void AGrapplingShip::ServerFireGrapple(TSubclassOf<USBGameplayAbility>  AbilityToActivate)
	{
		GrapplingShip_eventServerFireGrapple_Parms Parms;
		Parms.AbilityToActivate=AbilityToActivate;
		ProcessEvent(FindFunctionChecked(NAME_AGrapplingShip_ServerFireGrapple),&Parms);
	}
	void AGrapplingShip::StaticRegisterNativesAGrapplingShip()
	{
		UClass* Class = AGrapplingShip::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerFireGrapple", &AGrapplingShip::execServerFireGrapple },
			{ "SetHookVisibility", &AGrapplingShip::execSetHookVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGrapplingShip_ServerFireGrapple_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityToActivate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AGrapplingShip_ServerFireGrapple_Statics::NewProp_AbilityToActivate = { "AbilityToActivate", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GrapplingShip_eventServerFireGrapple_Parms, AbilityToActivate), Z_Construct_UClass_UClass, Z_Construct_UClass_USBGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrapplingShip_ServerFireGrapple_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrapplingShip_ServerFireGrapple_Statics::NewProp_AbilityToActivate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrapplingShip_ServerFireGrapple_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/GrapplingShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrapplingShip_ServerFireGrapple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrapplingShip, nullptr, "ServerFireGrapple", nullptr, nullptr, sizeof(GrapplingShip_eventServerFireGrapple_Parms), Z_Construct_UFunction_AGrapplingShip_ServerFireGrapple_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrapplingShip_ServerFireGrapple_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrapplingShip_ServerFireGrapple_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrapplingShip_ServerFireGrapple_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrapplingShip_ServerFireGrapple()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrapplingShip_ServerFireGrapple_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrapplingShip_SetHookVisibility_Statics
	{
		struct GrapplingShip_eventSetHookVisibility_Parms
		{
			bool bVisibility;
		};
		static void NewProp_bVisibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGrapplingShip_SetHookVisibility_Statics::NewProp_bVisibility_SetBit(void* Obj)
	{
		((GrapplingShip_eventSetHookVisibility_Parms*)Obj)->bVisibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGrapplingShip_SetHookVisibility_Statics::NewProp_bVisibility = { "bVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GrapplingShip_eventSetHookVisibility_Parms), &Z_Construct_UFunction_AGrapplingShip_SetHookVisibility_Statics::NewProp_bVisibility_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrapplingShip_SetHookVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrapplingShip_SetHookVisibility_Statics::NewProp_bVisibility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrapplingShip_SetHookVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/GrapplingShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrapplingShip_SetHookVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrapplingShip, nullptr, "SetHookVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGrapplingShip_SetHookVisibility_Statics::GrapplingShip_eventSetHookVisibility_Parms), Z_Construct_UFunction_AGrapplingShip_SetHookVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrapplingShip_SetHookVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGrapplingShip_SetHookVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrapplingShip_SetHookVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGrapplingShip_SetHookVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrapplingShip_SetHookVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGrapplingShip);
	UClass* Z_Construct_UClass_AGrapplingShip_NoRegister()
	{
		return AGrapplingShip::StaticClass();
	}
	struct Z_Construct_UClass_AGrapplingShip_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrapplingHook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GrapplingHook;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGrapplingShip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerShip,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGrapplingShip_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGrapplingShip_ServerFireGrapple, "ServerFireGrapple" }, // 356742701
		{ &Z_Construct_UFunction_AGrapplingShip_SetHookVisibility, "SetHookVisibility" }, // 4211825713
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrapplingShip_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Ships/GrapplingShip.h" },
		{ "ModuleRelativePath", "Public/Ships/GrapplingShip.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrapplingShip_Statics::NewProp_GrapplingHook_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "GrapplingShip" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Ships/GrapplingShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrapplingShip_Statics::NewProp_GrapplingHook = { "GrapplingHook", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGrapplingShip, GrapplingHook), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGrapplingShip_Statics::NewProp_GrapplingHook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrapplingShip_Statics::NewProp_GrapplingHook_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGrapplingShip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrapplingShip_Statics::NewProp_GrapplingHook,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGrapplingShip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrapplingShip>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGrapplingShip_Statics::ClassParams = {
		&AGrapplingShip::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGrapplingShip_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGrapplingShip_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGrapplingShip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGrapplingShip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGrapplingShip()
	{
		if (!Z_Registration_Info_UClass_AGrapplingShip.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGrapplingShip.OuterSingleton, Z_Construct_UClass_AGrapplingShip_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGrapplingShip.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<AGrapplingShip>()
	{
		return AGrapplingShip::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrapplingShip);
	AGrapplingShip::~AGrapplingShip() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_GrapplingShip_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_GrapplingShip_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGrapplingShip, AGrapplingShip::StaticClass, TEXT("AGrapplingShip"), &Z_Registration_Info_UClass_AGrapplingShip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGrapplingShip), 594626389U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_GrapplingShip_h_4153990630(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_GrapplingShip_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_GrapplingShip_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
