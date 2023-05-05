// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/HUD/BountyWidgetComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBountyWidgetComponent() {}
// Cross Module References
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UBountyWidgetComponent();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UBountyWidgetComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	DEFINE_FUNCTION(UBountyWidgetComponent::execSetGoldPickupText)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BountyToSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGoldPickupText(Z_Param_BountyToSet);
		P_NATIVE_END;
	}
	void UBountyWidgetComponent::StaticRegisterNativesUBountyWidgetComponent()
	{
		UClass* Class = UBountyWidgetComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetGoldPickupText", &UBountyWidgetComponent::execSetGoldPickupText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBountyWidgetComponent_SetGoldPickupText_Statics
	{
		struct BountyWidgetComponent_eventSetGoldPickupText_Parms
		{
			int32 BountyToSet;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_BountyToSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBountyWidgetComponent_SetGoldPickupText_Statics::NewProp_BountyToSet = { "BountyToSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BountyWidgetComponent_eventSetGoldPickupText_Parms, BountyToSet), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBountyWidgetComponent_SetGoldPickupText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBountyWidgetComponent_SetGoldPickupText_Statics::NewProp_BountyToSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBountyWidgetComponent_SetGoldPickupText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/BountyWidgetComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBountyWidgetComponent_SetGoldPickupText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBountyWidgetComponent, nullptr, "SetGoldPickupText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBountyWidgetComponent_SetGoldPickupText_Statics::BountyWidgetComponent_eventSetGoldPickupText_Parms), Z_Construct_UFunction_UBountyWidgetComponent_SetGoldPickupText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBountyWidgetComponent_SetGoldPickupText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBountyWidgetComponent_SetGoldPickupText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBountyWidgetComponent_SetGoldPickupText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBountyWidgetComponent_SetGoldPickupText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBountyWidgetComponent_SetGoldPickupText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBountyWidgetComponent);
	UClass* Z_Construct_UClass_UBountyWidgetComponent_NoRegister()
	{
		return UBountyWidgetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBountyWidgetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBountyWidgetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBountyWidgetComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBountyWidgetComponent_SetGoldPickupText, "SetGoldPickupText" }, // 3423819264
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBountyWidgetComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "HUD/BountyWidgetComponent.h" },
		{ "ModuleRelativePath", "Public/HUD/BountyWidgetComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBountyWidgetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBountyWidgetComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBountyWidgetComponent_Statics::ClassParams = {
		&UBountyWidgetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBountyWidgetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBountyWidgetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBountyWidgetComponent()
	{
		if (!Z_Registration_Info_UClass_UBountyWidgetComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBountyWidgetComponent.OuterSingleton, Z_Construct_UClass_UBountyWidgetComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBountyWidgetComponent.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<UBountyWidgetComponent>()
	{
		return UBountyWidgetComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBountyWidgetComponent);
	UBountyWidgetComponent::~UBountyWidgetComponent() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_BountyWidgetComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_BountyWidgetComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBountyWidgetComponent, UBountyWidgetComponent::StaticClass, TEXT("UBountyWidgetComponent"), &Z_Registration_Info_UClass_UBountyWidgetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBountyWidgetComponent), 2493218384U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_BountyWidgetComponent_h_1272965346(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_BountyWidgetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_BountyWidgetComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
