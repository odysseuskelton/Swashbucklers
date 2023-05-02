// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/Buildings/Store.h"
#include "Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStore() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ABuilding();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_AShip_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_AStore();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_AStore_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UInteractableInterface_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_USBGameplayAbility_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UShipwrightWidget_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UStoreAbilitySlot_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UStoreShipSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	DEFINE_FUNCTION(AStore::execItemPurchased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ItemPurchased();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStore::execExitStore)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExitStore(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStore::execEnterStore)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterStore(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AStore::StaticRegisterNativesAStore()
	{
		UClass* Class = AStore::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnterStore", &AStore::execEnterStore },
			{ "ExitStore", &AStore::execExitStore },
			{ "ItemPurchased", &AStore::execItemPurchased },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStore_EnterStore_Statics
	{
		struct Store_eventEnterStore_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStore_EnterStore_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStore_EnterStore_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Store_eventEnterStore_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AStore_EnterStore_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AStore_EnterStore_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStore_EnterStore_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Store_eventEnterStore_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStore_EnterStore_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStore_EnterStore_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Store_eventEnterStore_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AStore_EnterStore_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AStore_EnterStore_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AStore_EnterStore_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Store_eventEnterStore_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AStore_EnterStore_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Store_eventEnterStore_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AStore_EnterStore_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Store_eventEnterStore_Parms), &Z_Construct_UFunction_AStore_EnterStore_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStore_EnterStore_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AStore_EnterStore_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Store_eventEnterStore_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AStore_EnterStore_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AStore_EnterStore_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStore_EnterStore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStore_EnterStore_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStore_EnterStore_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStore_EnterStore_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStore_EnterStore_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStore_EnterStore_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStore_EnterStore_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStore_EnterStore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Buildings/Store.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStore_EnterStore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStore, nullptr, "EnterStore", nullptr, nullptr, sizeof(Z_Construct_UFunction_AStore_EnterStore_Statics::Store_eventEnterStore_Parms), Z_Construct_UFunction_AStore_EnterStore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStore_EnterStore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStore_EnterStore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStore_EnterStore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStore_EnterStore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStore_EnterStore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStore_ExitStore_Statics
	{
		struct Store_eventExitStore_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStore_ExitStore_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStore_ExitStore_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Store_eventExitStore_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AStore_ExitStore_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AStore_ExitStore_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStore_ExitStore_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Store_eventExitStore_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStore_ExitStore_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStore_ExitStore_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Store_eventExitStore_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AStore_ExitStore_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AStore_ExitStore_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AStore_ExitStore_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Store_eventExitStore_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStore_ExitStore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStore_ExitStore_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStore_ExitStore_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStore_ExitStore_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStore_ExitStore_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStore_ExitStore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Buildings/Store.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStore_ExitStore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStore, nullptr, "ExitStore", nullptr, nullptr, sizeof(Z_Construct_UFunction_AStore_ExitStore_Statics::Store_eventExitStore_Parms), Z_Construct_UFunction_AStore_ExitStore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStore_ExitStore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStore_ExitStore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStore_ExitStore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStore_ExitStore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStore_ExitStore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStore_ItemPurchased_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStore_ItemPurchased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Buildings/Store.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStore_ItemPurchased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStore, nullptr, "ItemPurchased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStore_ItemPurchased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStore_ItemPurchased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStore_ItemPurchased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStore_ItemPurchased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStore);
	UClass* Z_Construct_UClass_AStore_NoRegister()
	{
		return AStore::StaticClass();
	}
	struct Z_Construct_UClass_AStore_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoreEntry_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StoreEntry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoreEntryText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StoreEntryText;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ShipsInStock_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShipsInStock_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ShipsInStock;
		static const UECodeGen_Private::FClassPropertyParams NewProp_AbilitiesInStock_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitiesInStock_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilitiesInStock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShipwrightWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ShipwrightWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoreShipSlotClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_StoreShipSlotClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoreAbilitySlotClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_StoreAbilitySlotClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStore_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABuilding,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStore_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStore_EnterStore, "EnterStore" }, // 346825042
		{ &Z_Construct_UFunction_AStore_ExitStore, "ExitStore" }, // 3161229722
		{ &Z_Construct_UFunction_AStore_ItemPurchased, "ItemPurchased" }, // 2318425013
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStore_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Buildings/Store.h" },
		{ "ModuleRelativePath", "Public/Buildings/Store.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStore_Statics::NewProp_StoreEntry_MetaData[] = {
		{ "Category", "Store" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildings/Store.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStore_Statics::NewProp_StoreEntry = { "StoreEntry", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AStore, StoreEntry), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStore_Statics::NewProp_StoreEntry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStore_Statics::NewProp_StoreEntry_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStore_Statics::NewProp_StoreEntryText_MetaData[] = {
		{ "Category", "Store" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildings/Store.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStore_Statics::NewProp_StoreEntryText = { "StoreEntryText", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AStore, StoreEntryText), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStore_Statics::NewProp_StoreEntryText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStore_Statics::NewProp_StoreEntryText_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AStore_Statics::NewProp_ShipsInStock_Inner = { "ShipsInStock", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AShip_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStore_Statics::NewProp_ShipsInStock_MetaData[] = {
		{ "Category", "Store" },
		{ "ModuleRelativePath", "Public/Buildings/Store.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStore_Statics::NewProp_ShipsInStock = { "ShipsInStock", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AStore, ShipsInStock), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AStore_Statics::NewProp_ShipsInStock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStore_Statics::NewProp_ShipsInStock_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AStore_Statics::NewProp_AbilitiesInStock_Inner = { "AbilitiesInStock", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_USBGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStore_Statics::NewProp_AbilitiesInStock_MetaData[] = {
		{ "Category", "Store" },
		{ "ModuleRelativePath", "Public/Buildings/Store.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStore_Statics::NewProp_AbilitiesInStock = { "AbilitiesInStock", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AStore, AbilitiesInStock), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AStore_Statics::NewProp_AbilitiesInStock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStore_Statics::NewProp_AbilitiesInStock_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStore_Statics::NewProp_ShipwrightWidgetClass_MetaData[] = {
		{ "Category", "Store" },
		{ "ModuleRelativePath", "Public/Buildings/Store.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AStore_Statics::NewProp_ShipwrightWidgetClass = { "ShipwrightWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AStore, ShipwrightWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UShipwrightWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStore_Statics::NewProp_ShipwrightWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStore_Statics::NewProp_ShipwrightWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStore_Statics::NewProp_StoreShipSlotClass_MetaData[] = {
		{ "Category", "Store" },
		{ "ModuleRelativePath", "Public/Buildings/Store.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AStore_Statics::NewProp_StoreShipSlotClass = { "StoreShipSlotClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AStore, StoreShipSlotClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UStoreShipSlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStore_Statics::NewProp_StoreShipSlotClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStore_Statics::NewProp_StoreShipSlotClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStore_Statics::NewProp_StoreAbilitySlotClass_MetaData[] = {
		{ "Category", "Store" },
		{ "ModuleRelativePath", "Public/Buildings/Store.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AStore_Statics::NewProp_StoreAbilitySlotClass = { "StoreAbilitySlotClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AStore, StoreAbilitySlotClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UStoreAbilitySlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStore_Statics::NewProp_StoreAbilitySlotClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStore_Statics::NewProp_StoreAbilitySlotClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStore_Statics::NewProp_StoreEntry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStore_Statics::NewProp_StoreEntryText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStore_Statics::NewProp_ShipsInStock_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStore_Statics::NewProp_ShipsInStock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStore_Statics::NewProp_AbilitiesInStock_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStore_Statics::NewProp_AbilitiesInStock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStore_Statics::NewProp_ShipwrightWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStore_Statics::NewProp_StoreShipSlotClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStore_Statics::NewProp_StoreAbilitySlotClass,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AStore_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractableInterface_NoRegister, (int32)VTABLE_OFFSET(AStore, IInteractableInterface), false },  // 1384409830
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStore_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStore>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AStore_Statics::ClassParams = {
		&AStore::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStore_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AStore_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStore_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStore_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStore()
	{
		if (!Z_Registration_Info_UClass_AStore.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStore.OuterSingleton, Z_Construct_UClass_AStore_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AStore.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<AStore>()
	{
		return AStore::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStore);
	AStore::~AStore() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Store_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Store_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AStore, AStore::StaticClass, TEXT("AStore"), &Z_Registration_Info_UClass_AStore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStore), 463820819U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Store_h_2291892337(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Store_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Store_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
