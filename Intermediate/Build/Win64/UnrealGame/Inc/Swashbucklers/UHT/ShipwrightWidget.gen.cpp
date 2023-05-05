// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/HUD/ShipwrightWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShipwrightWidget() {}
// Cross Module References
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UShipwrightWidget();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UShipwrightWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UGridPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	DEFINE_FUNCTION(UShipwrightWidget::execSwitchToCircleOfStorms)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchToCircleOfStorms();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShipwrightWidget::execSwitchToShipwright)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchToShipwright();
		P_NATIVE_END;
	}
	void UShipwrightWidget::StaticRegisterNativesUShipwrightWidget()
	{
		UClass* Class = UShipwrightWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SwitchToCircleOfStorms", &UShipwrightWidget::execSwitchToCircleOfStorms },
			{ "SwitchToShipwright", &UShipwrightWidget::execSwitchToShipwright },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UShipwrightWidget_SwitchToCircleOfStorms_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShipwrightWidget_SwitchToCircleOfStorms_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/ShipwrightWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShipwrightWidget_SwitchToCircleOfStorms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShipwrightWidget, nullptr, "SwitchToCircleOfStorms", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShipwrightWidget_SwitchToCircleOfStorms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShipwrightWidget_SwitchToCircleOfStorms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShipwrightWidget_SwitchToCircleOfStorms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShipwrightWidget_SwitchToCircleOfStorms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShipwrightWidget_SwitchToShipwright_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShipwrightWidget_SwitchToShipwright_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/ShipwrightWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShipwrightWidget_SwitchToShipwright_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShipwrightWidget, nullptr, "SwitchToShipwright", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShipwrightWidget_SwitchToShipwright_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShipwrightWidget_SwitchToShipwright_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShipwrightWidget_SwitchToShipwright()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShipwrightWidget_SwitchToShipwright_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShipwrightWidget);
	UClass* Z_Construct_UClass_UShipwrightWidget_NoRegister()
	{
		return UShipwrightWidget::StaticClass();
	}
	struct Z_Construct_UClass_UShipwrightWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShipSlotGridPanel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShipSlotGridPanel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySlotGridPanel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySlotGridPanel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShipwrightButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShipwrightButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CircleOfStormsButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CircleOfStormsButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoreSwitcher_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StoreSwitcher;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShipwrightWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UShipwrightWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UShipwrightWidget_SwitchToCircleOfStorms, "SwitchToCircleOfStorms" }, // 3900448446
		{ &Z_Construct_UFunction_UShipwrightWidget_SwitchToShipwright, "SwitchToShipwright" }, // 1135622934
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShipwrightWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HUD/ShipwrightWidget.h" },
		{ "ModuleRelativePath", "Public/HUD/ShipwrightWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShipwrightWidget_Statics::NewProp_ShipSlotGridPanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/ShipwrightWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShipwrightWidget_Statics::NewProp_ShipSlotGridPanel = { "ShipSlotGridPanel", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShipwrightWidget, ShipSlotGridPanel), Z_Construct_UClass_UGridPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UShipwrightWidget_Statics::NewProp_ShipSlotGridPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShipwrightWidget_Statics::NewProp_ShipSlotGridPanel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShipwrightWidget_Statics::NewProp_AbilitySlotGridPanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/ShipwrightWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShipwrightWidget_Statics::NewProp_AbilitySlotGridPanel = { "AbilitySlotGridPanel", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShipwrightWidget, AbilitySlotGridPanel), Z_Construct_UClass_UGridPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UShipwrightWidget_Statics::NewProp_AbilitySlotGridPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShipwrightWidget_Statics::NewProp_AbilitySlotGridPanel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShipwrightWidget_Statics::NewProp_ShipwrightButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/ShipwrightWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShipwrightWidget_Statics::NewProp_ShipwrightButton = { "ShipwrightButton", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShipwrightWidget, ShipwrightButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UShipwrightWidget_Statics::NewProp_ShipwrightButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShipwrightWidget_Statics::NewProp_ShipwrightButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShipwrightWidget_Statics::NewProp_CircleOfStormsButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/ShipwrightWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShipwrightWidget_Statics::NewProp_CircleOfStormsButton = { "CircleOfStormsButton", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShipwrightWidget, CircleOfStormsButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UShipwrightWidget_Statics::NewProp_CircleOfStormsButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShipwrightWidget_Statics::NewProp_CircleOfStormsButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShipwrightWidget_Statics::NewProp_StoreSwitcher_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/ShipwrightWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShipwrightWidget_Statics::NewProp_StoreSwitcher = { "StoreSwitcher", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShipwrightWidget, StoreSwitcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UShipwrightWidget_Statics::NewProp_StoreSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShipwrightWidget_Statics::NewProp_StoreSwitcher_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShipwrightWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShipwrightWidget_Statics::NewProp_ShipSlotGridPanel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShipwrightWidget_Statics::NewProp_AbilitySlotGridPanel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShipwrightWidget_Statics::NewProp_ShipwrightButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShipwrightWidget_Statics::NewProp_CircleOfStormsButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShipwrightWidget_Statics::NewProp_StoreSwitcher,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShipwrightWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShipwrightWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UShipwrightWidget_Statics::ClassParams = {
		&UShipwrightWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UShipwrightWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UShipwrightWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UShipwrightWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShipwrightWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShipwrightWidget()
	{
		if (!Z_Registration_Info_UClass_UShipwrightWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShipwrightWidget.OuterSingleton, Z_Construct_UClass_UShipwrightWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UShipwrightWidget.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<UShipwrightWidget>()
	{
		return UShipwrightWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShipwrightWidget);
	UShipwrightWidget::~UShipwrightWidget() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ShipwrightWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ShipwrightWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UShipwrightWidget, UShipwrightWidget::StaticClass, TEXT("UShipwrightWidget"), &Z_Registration_Info_UClass_UShipwrightWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShipwrightWidget), 3781129602U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ShipwrightWidget_h_3205075460(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ShipwrightWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ShipwrightWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
