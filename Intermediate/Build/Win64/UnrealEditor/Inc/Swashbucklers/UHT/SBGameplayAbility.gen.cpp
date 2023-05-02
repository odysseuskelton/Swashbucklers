// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/GameplayAbilities/SBGameplayAbility.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "Swashbucklers/Public/GameplayAbilities/AbilityTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBGameplayAbility() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_USBGameplayAbility();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_USBGameplayAbility_NoRegister();
	SWASHBUCKLERS_API UEnum* Z_Construct_UEnum_Swashbucklers_EAbilityType();
	SWASHBUCKLERS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityInfo();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	DEFINE_FUNCTION(USBGameplayAbility::execApplyHealEffectToActorsInAOE)
	{
		P_GET_STRUCT(FGameplayEffectSpecHandle,Z_Param_Spec);
		P_GET_OBJECT(AActor,Z_Param_OwnerActor);
		P_GET_STRUCT(FVector,Z_Param_Origin);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyHealEffectToActorsInAOE(Z_Param_Spec,Z_Param_OwnerActor,Z_Param_Origin,Z_Param_Radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBGameplayAbility::execGetAbilityInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayAbilityInfo*)Z_Param__Result=P_THIS->GetAbilityInfo();
		P_NATIVE_END;
	}
	void USBGameplayAbility::StaticRegisterNativesUSBGameplayAbility()
	{
		UClass* Class = USBGameplayAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyHealEffectToActorsInAOE", &USBGameplayAbility::execApplyHealEffectToActorsInAOE },
			{ "GetAbilityInfo", &USBGameplayAbility::execGetAbilityInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBGameplayAbility_ApplyHealEffectToActorsInAOE_Statics
	{
		struct SBGameplayAbility_eventApplyHealEffectToActorsInAOE_Parms
		{
			FGameplayEffectSpecHandle Spec;
			AActor* OwnerActor;
			FVector Origin;
			float Radius;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Spec;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBGameplayAbility_ApplyHealEffectToActorsInAOE_Statics::NewProp_Spec = { "Spec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SBGameplayAbility_eventApplyHealEffectToActorsInAOE_Parms, Spec), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(nullptr, 0) }; // 1303953225
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USBGameplayAbility_ApplyHealEffectToActorsInAOE_Statics::NewProp_OwnerActor = { "OwnerActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SBGameplayAbility_eventApplyHealEffectToActorsInAOE_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBGameplayAbility_ApplyHealEffectToActorsInAOE_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SBGameplayAbility_eventApplyHealEffectToActorsInAOE_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USBGameplayAbility_ApplyHealEffectToActorsInAOE_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SBGameplayAbility_eventApplyHealEffectToActorsInAOE_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBGameplayAbility_ApplyHealEffectToActorsInAOE_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBGameplayAbility_ApplyHealEffectToActorsInAOE_Statics::NewProp_Spec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBGameplayAbility_ApplyHealEffectToActorsInAOE_Statics::NewProp_OwnerActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBGameplayAbility_ApplyHealEffectToActorsInAOE_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBGameplayAbility_ApplyHealEffectToActorsInAOE_Statics::NewProp_Radius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBGameplayAbility_ApplyHealEffectToActorsInAOE_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USBGameplayAbility_ApplyHealEffectToActorsInAOE_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBGameplayAbility, nullptr, "ApplyHealEffectToActorsInAOE", nullptr, nullptr, sizeof(Z_Construct_UFunction_USBGameplayAbility_ApplyHealEffectToActorsInAOE_Statics::SBGameplayAbility_eventApplyHealEffectToActorsInAOE_Parms), Z_Construct_UFunction_USBGameplayAbility_ApplyHealEffectToActorsInAOE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBGameplayAbility_ApplyHealEffectToActorsInAOE_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBGameplayAbility_ApplyHealEffectToActorsInAOE_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBGameplayAbility_ApplyHealEffectToActorsInAOE_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBGameplayAbility_ApplyHealEffectToActorsInAOE()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USBGameplayAbility_ApplyHealEffectToActorsInAOE_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBGameplayAbility_GetAbilityInfo_Statics
	{
		struct SBGameplayAbility_eventGetAbilityInfo_Parms
		{
			FGameplayAbilityInfo ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBGameplayAbility_GetAbilityInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SBGameplayAbility_eventGetAbilityInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayAbilityInfo, METADATA_PARAMS(nullptr, 0) }; // 2276528733
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBGameplayAbility_GetAbilityInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBGameplayAbility_GetAbilityInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBGameplayAbility_GetAbilityInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USBGameplayAbility_GetAbilityInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBGameplayAbility, nullptr, "GetAbilityInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_USBGameplayAbility_GetAbilityInfo_Statics::SBGameplayAbility_eventGetAbilityInfo_Parms), Z_Construct_UFunction_USBGameplayAbility_GetAbilityInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBGameplayAbility_GetAbilityInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBGameplayAbility_GetAbilityInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBGameplayAbility_GetAbilityInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBGameplayAbility_GetAbilityInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USBGameplayAbility_GetAbilityInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USBGameplayAbility);
	UClass* Z_Construct_UClass_USBGameplayAbility_NoRegister()
	{
		return USBGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_USBGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AbilityName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AbilityType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AbilityType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AbilityDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoreCost_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StoreCost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UIMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInputID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityInputID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBGameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBGameplayAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBGameplayAbility_ApplyHealEffectToActorsInAOE, "ApplyHealEffectToActorsInAOE" }, // 1042905195
		{ &Z_Construct_UFunction_USBGameplayAbility_GetAbilityInfo, "GetAbilityInfo" }, // 608445452
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBGameplayAbility_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameplayAbilities/SBGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBGameplayAbility.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBGameplayAbility_Statics::NewProp_AbilityName_MetaData[] = {
		{ "Category", "SBGameplayAbility" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBGameplayAbility_Statics::NewProp_AbilityName = { "AbilityName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBGameplayAbility, AbilityName), METADATA_PARAMS(Z_Construct_UClass_USBGameplayAbility_Statics::NewProp_AbilityName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBGameplayAbility_Statics::NewProp_AbilityName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USBGameplayAbility_Statics::NewProp_AbilityType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBGameplayAbility_Statics::NewProp_AbilityType_MetaData[] = {
		{ "Category", "SBGameplayAbility" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USBGameplayAbility_Statics::NewProp_AbilityType = { "AbilityType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBGameplayAbility, AbilityType), Z_Construct_UEnum_Swashbucklers_EAbilityType, METADATA_PARAMS(Z_Construct_UClass_USBGameplayAbility_Statics::NewProp_AbilityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBGameplayAbility_Statics::NewProp_AbilityType_MetaData)) }; // 2758750863
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBGameplayAbility_Statics::NewProp_AbilityDescription_MetaData[] = {
		{ "Category", "SBGameplayAbility" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USBGameplayAbility_Statics::NewProp_AbilityDescription = { "AbilityDescription", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBGameplayAbility, AbilityDescription), METADATA_PARAMS(Z_Construct_UClass_USBGameplayAbility_Statics::NewProp_AbilityDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBGameplayAbility_Statics::NewProp_AbilityDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBGameplayAbility_Statics::NewProp_StoreCost_MetaData[] = {
		{ "Category", "SBGameplayAbility" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBGameplayAbility_Statics::NewProp_StoreCost = { "StoreCost", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBGameplayAbility, StoreCost), METADATA_PARAMS(Z_Construct_UClass_USBGameplayAbility_Statics::NewProp_StoreCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBGameplayAbility_Statics::NewProp_StoreCost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBGameplayAbility_Statics::NewProp_UIMaterial_MetaData[] = {
		{ "Category", "AbilityBase" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBGameplayAbility_Statics::NewProp_UIMaterial = { "UIMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBGameplayAbility, UIMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBGameplayAbility_Statics::NewProp_UIMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBGameplayAbility_Statics::NewProp_UIMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBGameplayAbility_Statics::NewProp_AbilityInputID_MetaData[] = {
		{ "Category", "SBGameplayAbility" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBGameplayAbility_Statics::NewProp_AbilityInputID = { "AbilityInputID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBGameplayAbility, AbilityInputID), METADATA_PARAMS(Z_Construct_UClass_USBGameplayAbility_Statics::NewProp_AbilityInputID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBGameplayAbility_Statics::NewProp_AbilityInputID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBGameplayAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBGameplayAbility_Statics::NewProp_AbilityName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBGameplayAbility_Statics::NewProp_AbilityType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBGameplayAbility_Statics::NewProp_AbilityType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBGameplayAbility_Statics::NewProp_AbilityDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBGameplayAbility_Statics::NewProp_StoreCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBGameplayAbility_Statics::NewProp_UIMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBGameplayAbility_Statics::NewProp_AbilityInputID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBGameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBGameplayAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USBGameplayAbility_Statics::ClassParams = {
		&USBGameplayAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBGameplayAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBGameplayAbility_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBGameplayAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBGameplayAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBGameplayAbility()
	{
		if (!Z_Registration_Info_UClass_USBGameplayAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USBGameplayAbility.OuterSingleton, Z_Construct_UClass_USBGameplayAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USBGameplayAbility.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<USBGameplayAbility>()
	{
		return USBGameplayAbility::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBGameplayAbility);
	USBGameplayAbility::~USBGameplayAbility() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBGameplayAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBGameplayAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USBGameplayAbility, USBGameplayAbility::StaticClass, TEXT("USBGameplayAbility"), &Z_Registration_Info_UClass_USBGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USBGameplayAbility), 1580084400U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBGameplayAbility_h_2869355091(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBGameplayAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
