// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/HUD/BountyWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBountyWidget() {}
// Cross Module References
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UBountyWidget();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UBountyWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	static FName NAME_UBountyWidget_PlayBountyAnimation = FName(TEXT("PlayBountyAnimation"));
	void UBountyWidget::PlayBountyAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBountyWidget_PlayBountyAnimation),NULL);
	}
	void UBountyWidget::StaticRegisterNativesUBountyWidget()
	{
	}
	struct Z_Construct_UFunction_UBountyWidget_PlayBountyAnimation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBountyWidget_PlayBountyAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/BountyWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBountyWidget_PlayBountyAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBountyWidget, nullptr, "PlayBountyAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBountyWidget_PlayBountyAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBountyWidget_PlayBountyAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBountyWidget_PlayBountyAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBountyWidget_PlayBountyAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBountyWidget);
	UClass* Z_Construct_UClass_UBountyWidget_NoRegister()
	{
		return UBountyWidget::StaticClass();
	}
	struct Z_Construct_UClass_UBountyWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoldPickupText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GoldPickupText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBountyWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBountyWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBountyWidget_PlayBountyAnimation, "PlayBountyAnimation" }, // 241243074
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBountyWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HUD/BountyWidget.h" },
		{ "ModuleRelativePath", "Public/HUD/BountyWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBountyWidget_Statics::NewProp_GoldPickupText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/BountyWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBountyWidget_Statics::NewProp_GoldPickupText = { "GoldPickupText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBountyWidget, GoldPickupText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBountyWidget_Statics::NewProp_GoldPickupText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBountyWidget_Statics::NewProp_GoldPickupText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBountyWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBountyWidget_Statics::NewProp_GoldPickupText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBountyWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBountyWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBountyWidget_Statics::ClassParams = {
		&UBountyWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBountyWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBountyWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBountyWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBountyWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBountyWidget()
	{
		if (!Z_Registration_Info_UClass_UBountyWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBountyWidget.OuterSingleton, Z_Construct_UClass_UBountyWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBountyWidget.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<UBountyWidget>()
	{
		return UBountyWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBountyWidget);
	UBountyWidget::~UBountyWidget() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_BountyWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_BountyWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBountyWidget, UBountyWidget::StaticClass, TEXT("UBountyWidget"), &Z_Registration_Info_UClass_UBountyWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBountyWidget), 497370603U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_BountyWidget_h_1646148097(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_BountyWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_BountyWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
