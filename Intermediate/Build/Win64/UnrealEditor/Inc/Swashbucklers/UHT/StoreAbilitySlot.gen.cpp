// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/HUD/StoreAbilitySlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoreAbilitySlot() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_USBGameplayAbility_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_USlotSelectionWidget_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UStoreAbilitySlot();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UStoreAbilitySlot_NoRegister();
	SWASHBUCKLERS_API UFunction* Z_Construct_UDelegateFunction_Swashbucklers_OnPurchaseDelegate__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Swashbucklers_OnPurchaseDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Swashbucklers_OnPurchaseDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/StoreAbilitySlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Swashbucklers_OnPurchaseDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Swashbucklers, nullptr, "OnPurchaseDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Swashbucklers_OnPurchaseDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Swashbucklers_OnPurchaseDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Swashbucklers_OnPurchaseDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Swashbucklers_OnPurchaseDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UStoreAbilitySlot::execSlot4Selected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Slot4Selected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreAbilitySlot::execSlot3Selected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Slot3Selected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreAbilitySlot::execSlot2Selected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Slot2Selected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreAbilitySlot::execSlot1Selected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Slot1Selected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoreAbilitySlot::execBuyButtonPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuyButtonPressed();
		P_NATIVE_END;
	}
	void UStoreAbilitySlot::StaticRegisterNativesUStoreAbilitySlot()
	{
		UClass* Class = UStoreAbilitySlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuyButtonPressed", &UStoreAbilitySlot::execBuyButtonPressed },
			{ "Slot1Selected", &UStoreAbilitySlot::execSlot1Selected },
			{ "Slot2Selected", &UStoreAbilitySlot::execSlot2Selected },
			{ "Slot3Selected", &UStoreAbilitySlot::execSlot3Selected },
			{ "Slot4Selected", &UStoreAbilitySlot::execSlot4Selected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStoreAbilitySlot_BuyButtonPressed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreAbilitySlot_BuyButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/StoreAbilitySlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreAbilitySlot_BuyButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreAbilitySlot, nullptr, "BuyButtonPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreAbilitySlot_BuyButtonPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreAbilitySlot_BuyButtonPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreAbilitySlot_BuyButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStoreAbilitySlot_BuyButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreAbilitySlot_Slot1Selected_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreAbilitySlot_Slot1Selected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/StoreAbilitySlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreAbilitySlot_Slot1Selected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreAbilitySlot, nullptr, "Slot1Selected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreAbilitySlot_Slot1Selected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreAbilitySlot_Slot1Selected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreAbilitySlot_Slot1Selected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStoreAbilitySlot_Slot1Selected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreAbilitySlot_Slot2Selected_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreAbilitySlot_Slot2Selected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/StoreAbilitySlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreAbilitySlot_Slot2Selected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreAbilitySlot, nullptr, "Slot2Selected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreAbilitySlot_Slot2Selected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreAbilitySlot_Slot2Selected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreAbilitySlot_Slot2Selected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStoreAbilitySlot_Slot2Selected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreAbilitySlot_Slot3Selected_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreAbilitySlot_Slot3Selected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/StoreAbilitySlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreAbilitySlot_Slot3Selected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreAbilitySlot, nullptr, "Slot3Selected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreAbilitySlot_Slot3Selected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreAbilitySlot_Slot3Selected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreAbilitySlot_Slot3Selected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStoreAbilitySlot_Slot3Selected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoreAbilitySlot_Slot4Selected_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreAbilitySlot_Slot4Selected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUD/StoreAbilitySlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreAbilitySlot_Slot4Selected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreAbilitySlot, nullptr, "Slot4Selected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreAbilitySlot_Slot4Selected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreAbilitySlot_Slot4Selected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreAbilitySlot_Slot4Selected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStoreAbilitySlot_Slot4Selected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStoreAbilitySlot);
	UClass* Z_Construct_UClass_UStoreAbilitySlot_NoRegister()
	{
		return UStoreAbilitySlot::StaticClass();
	}
	struct Z_Construct_UClass_UStoreAbilitySlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityIcon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityNameText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityNameText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DescriptionText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DescriptionText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityCostText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityCostText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityCostImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityCostImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuyButtonText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BuyButtonText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuyButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BuyButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotSelectionClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SlotSelectionClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInSlot_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityInSlot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStoreAbilitySlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStoreAbilitySlot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStoreAbilitySlot_BuyButtonPressed, "BuyButtonPressed" }, // 3296084717
		{ &Z_Construct_UFunction_UStoreAbilitySlot_Slot1Selected, "Slot1Selected" }, // 3882170725
		{ &Z_Construct_UFunction_UStoreAbilitySlot_Slot2Selected, "Slot2Selected" }, // 4001176856
		{ &Z_Construct_UFunction_UStoreAbilitySlot_Slot3Selected, "Slot3Selected" }, // 3545871548
		{ &Z_Construct_UFunction_UStoreAbilitySlot_Slot4Selected, "Slot4Selected" }, // 2066641052
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreAbilitySlot_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HUD/StoreAbilitySlot.h" },
		{ "ModuleRelativePath", "Public/HUD/StoreAbilitySlot.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_AbilityIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/StoreAbilitySlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_AbilityIcon = { "AbilityIcon", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStoreAbilitySlot, AbilityIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_AbilityIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_AbilityIcon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_AbilityNameText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/StoreAbilitySlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_AbilityNameText = { "AbilityNameText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStoreAbilitySlot, AbilityNameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_AbilityNameText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_AbilityNameText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_DescriptionText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/StoreAbilitySlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_DescriptionText = { "DescriptionText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStoreAbilitySlot, DescriptionText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_DescriptionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_DescriptionText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_AbilityCostText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/StoreAbilitySlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_AbilityCostText = { "AbilityCostText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStoreAbilitySlot, AbilityCostText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_AbilityCostText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_AbilityCostText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_AbilityCostImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/StoreAbilitySlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_AbilityCostImage = { "AbilityCostImage", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStoreAbilitySlot, AbilityCostImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_AbilityCostImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_AbilityCostImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_BuyButtonText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/StoreAbilitySlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_BuyButtonText = { "BuyButtonText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStoreAbilitySlot, BuyButtonText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_BuyButtonText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_BuyButtonText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_BuyButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/StoreAbilitySlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_BuyButton = { "BuyButton", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStoreAbilitySlot, BuyButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_BuyButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_BuyButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_SlotSelectionClass_MetaData[] = {
		{ "Category", "StoreAbilitySlot" },
		{ "ModuleRelativePath", "Public/HUD/StoreAbilitySlot.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_SlotSelectionClass = { "SlotSelectionClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStoreAbilitySlot, SlotSelectionClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USlotSelectionWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_SlotSelectionClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_SlotSelectionClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_AbilityInSlot_MetaData[] = {
		{ "ModuleRelativePath", "Public/HUD/StoreAbilitySlot.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_AbilityInSlot = { "AbilityInSlot", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStoreAbilitySlot, AbilityInSlot), Z_Construct_UClass_UClass, Z_Construct_UClass_USBGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_AbilityInSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_AbilityInSlot_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStoreAbilitySlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_AbilityIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_AbilityNameText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_DescriptionText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_AbilityCostText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_AbilityCostImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_BuyButtonText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_BuyButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_SlotSelectionClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreAbilitySlot_Statics::NewProp_AbilityInSlot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStoreAbilitySlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStoreAbilitySlot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStoreAbilitySlot_Statics::ClassParams = {
		&UStoreAbilitySlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStoreAbilitySlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStoreAbilitySlot_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStoreAbilitySlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreAbilitySlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStoreAbilitySlot()
	{
		if (!Z_Registration_Info_UClass_UStoreAbilitySlot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStoreAbilitySlot.OuterSingleton, Z_Construct_UClass_UStoreAbilitySlot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStoreAbilitySlot.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<UStoreAbilitySlot>()
	{
		return UStoreAbilitySlot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStoreAbilitySlot);
	UStoreAbilitySlot::~UStoreAbilitySlot() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_StoreAbilitySlot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_StoreAbilitySlot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStoreAbilitySlot, UStoreAbilitySlot::StaticClass, TEXT("UStoreAbilitySlot"), &Z_Registration_Info_UClass_UStoreAbilitySlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStoreAbilitySlot), 1733069091U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_StoreAbilitySlot_h_2637366698(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_StoreAbilitySlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_HUD_StoreAbilitySlot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
