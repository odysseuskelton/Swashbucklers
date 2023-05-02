// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/HUD/StoreShipSlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoreShipSlot() {}
// Cross Module References
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UStoreShipSlot();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UStoreShipSlot_NoRegister();
	SWASHBUCKLERS_API UFunction* Z_Construct_UDelegateFunction_Swashbucklers_OnShipPurchaseDelegate__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Swashbucklers_OnShipPurchaseDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Swashbucklers_OnShipPurchaseDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/StoreShipSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Swashbucklers_OnShipPurchaseDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Swashbucklers, nullptr, "OnShipPurchaseDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Swashbucklers_OnShipPurchaseDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Swashbucklers_OnShipPurchaseDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Swashbucklers_OnShipPurchaseDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Swashbucklers_OnShipPurchaseDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UStoreShipSlot::execBuyShip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuyShip();
		P_NATIVE_END;
	}
	void UStoreShipSlot::StaticRegisterNativesUStoreShipSlot()
	{
		UClass* Class = UStoreShipSlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuyShip", &UStoreShipSlot::execBuyShip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStoreShipSlot_BuyShip_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreShipSlot_BuyShip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/StoreShipSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreShipSlot_BuyShip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreShipSlot, nullptr, "BuyShip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreShipSlot_BuyShip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreShipSlot_BuyShip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreShipSlot_BuyShip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStoreShipSlot_BuyShip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStoreShipSlot);
	UClass* Z_Construct_UClass_UStoreShipSlot_NoRegister()
	{
		return UStoreShipSlot::StaticClass();
	}
	struct Z_Construct_UClass_UStoreShipSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShipImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShipImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShipNameText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShipNameText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HPText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HPText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CannonText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CannonText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpeedText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccelerationText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AccelerationText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DescriptionText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DescriptionText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShipCostImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShipCostImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShipCostText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShipCostText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuyButtonText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BuyButtonText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuyButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BuyButton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStoreShipSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStoreShipSlot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStoreShipSlot_BuyShip, "BuyShip" }, // 1767655660
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreShipSlot_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HUD/StoreShipSlot.h" },
		{ "ModuleRelativePath", "Public/HUD/StoreShipSlot.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_ShipImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "StoreShipSlot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/StoreShipSlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_ShipImage = { "ShipImage", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStoreShipSlot, ShipImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_ShipImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_ShipImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_ShipNameText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "StoreShipSlot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/StoreShipSlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_ShipNameText = { "ShipNameText", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStoreShipSlot, ShipNameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_ShipNameText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_ShipNameText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_HPText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "StoreShipSlot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/StoreShipSlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_HPText = { "HPText", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStoreShipSlot, HPText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_HPText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_HPText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_CannonText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "StoreShipSlot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/StoreShipSlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_CannonText = { "CannonText", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStoreShipSlot, CannonText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_CannonText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_CannonText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_SpeedText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "StoreShipSlot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/StoreShipSlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_SpeedText = { "SpeedText", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStoreShipSlot, SpeedText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_SpeedText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_SpeedText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_AccelerationText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "StoreShipSlot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/StoreShipSlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_AccelerationText = { "AccelerationText", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStoreShipSlot, AccelerationText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_AccelerationText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_AccelerationText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_DescriptionText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "StoreShipSlot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/StoreShipSlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_DescriptionText = { "DescriptionText", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStoreShipSlot, DescriptionText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_DescriptionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_DescriptionText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_ShipCostImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "StoreShipSlot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/StoreShipSlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_ShipCostImage = { "ShipCostImage", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStoreShipSlot, ShipCostImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_ShipCostImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_ShipCostImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_ShipCostText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "StoreShipSlot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/StoreShipSlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_ShipCostText = { "ShipCostText", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStoreShipSlot, ShipCostText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_ShipCostText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_ShipCostText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_BuyButtonText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "StoreShipSlot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/StoreShipSlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_BuyButtonText = { "BuyButtonText", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStoreShipSlot, BuyButtonText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_BuyButtonText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_BuyButtonText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_BuyButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "StoreShipSlot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/StoreShipSlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_BuyButton = { "BuyButton", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStoreShipSlot, BuyButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_BuyButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_BuyButton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStoreShipSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_ShipImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_ShipNameText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_HPText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_CannonText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_SpeedText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_AccelerationText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_DescriptionText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_ShipCostImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_ShipCostText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_BuyButtonText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreShipSlot_Statics::NewProp_BuyButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStoreShipSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStoreShipSlot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStoreShipSlot_Statics::ClassParams = {
		&UStoreShipSlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStoreShipSlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStoreShipSlot_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStoreShipSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreShipSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStoreShipSlot()
	{
		if (!Z_Registration_Info_UClass_UStoreShipSlot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStoreShipSlot.OuterSingleton, Z_Construct_UClass_UStoreShipSlot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStoreShipSlot.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<UStoreShipSlot>()
	{
		return UStoreShipSlot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStoreShipSlot);
	UStoreShipSlot::~UStoreShipSlot() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_StoreShipSlot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_StoreShipSlot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStoreShipSlot, UStoreShipSlot::StaticClass, TEXT("UStoreShipSlot"), &Z_Registration_Info_UClass_UStoreShipSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStoreShipSlot), 3154033747U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_StoreShipSlot_h_2243728807(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_StoreShipSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_StoreShipSlot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
