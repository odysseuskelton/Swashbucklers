// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/GameplayAbilities/SBAttributeSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBAttributeSet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_USBAttributeSet();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_USBAttributeSet_NoRegister();
	SWASHBUCKLERS_API UFunction* Z_Construct_UDelegateFunction_Swashbucklers_OnBountyChangeDelegate__DelegateSignature();
	SWASHBUCKLERS_API UFunction* Z_Construct_UDelegateFunction_Swashbucklers_OnCaptureChangeDelegate__DelegateSignature();
	SWASHBUCKLERS_API UFunction* Z_Construct_UDelegateFunction_Swashbucklers_OnHealthChangeDelegate__DelegateSignature();
	SWASHBUCKLERS_API UFunction* Z_Construct_UDelegateFunction_Swashbucklers_OnManaChangeDelegate__DelegateSignature();
	SWASHBUCKLERS_API UFunction* Z_Construct_UDelegateFunction_Swashbucklers_OnPiecesOfEightDelegate__DelegateSignature();
	SWASHBUCKLERS_API UFunction* Z_Construct_UDelegateFunction_Swashbucklers_OnPlayerKillChangeDelegate__DelegateSignature();
	SWASHBUCKLERS_API UFunction* Z_Construct_UDelegateFunction_Swashbucklers_OnSpeedChangeDelegate__DelegateSignature();
	SWASHBUCKLERS_API UFunction* Z_Construct_UDelegateFunction_Swashbucklers_OnTowerKillChangeDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Swashbucklers_OnHealthChangeDelegate__DelegateSignature_Statics
	{
		struct _Script_Swashbucklers_eventOnHealthChangeDelegate_Parms
		{
			float Health;
			float MaxHealth;
			AActor* InstigatorActor;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Swashbucklers_OnHealthChangeDelegate__DelegateSignature_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Swashbucklers_eventOnHealthChangeDelegate_Parms, Health), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Swashbucklers_OnHealthChangeDelegate__DelegateSignature_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Swashbucklers_eventOnHealthChangeDelegate_Parms, MaxHealth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Swashbucklers_OnHealthChangeDelegate__DelegateSignature_Statics::NewProp_InstigatorActor = { "InstigatorActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Swashbucklers_eventOnHealthChangeDelegate_Parms, InstigatorActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Swashbucklers_OnHealthChangeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Swashbucklers_OnHealthChangeDelegate__DelegateSignature_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Swashbucklers_OnHealthChangeDelegate__DelegateSignature_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Swashbucklers_OnHealthChangeDelegate__DelegateSignature_Statics::NewProp_InstigatorActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Swashbucklers_OnHealthChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Swashbucklers_OnHealthChangeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Swashbucklers, nullptr, "OnHealthChangeDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Swashbucklers_OnHealthChangeDelegate__DelegateSignature_Statics::_Script_Swashbucklers_eventOnHealthChangeDelegate_Parms), Z_Construct_UDelegateFunction_Swashbucklers_OnHealthChangeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Swashbucklers_OnHealthChangeDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Swashbucklers_OnHealthChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Swashbucklers_OnHealthChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Swashbucklers_OnHealthChangeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Swashbucklers_OnHealthChangeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Swashbucklers_OnManaChangeDelegate__DelegateSignature_Statics
	{
		struct _Script_Swashbucklers_eventOnManaChangeDelegate_Parms
		{
			float Mana;
			float MaxMana;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Mana;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMana;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Swashbucklers_OnManaChangeDelegate__DelegateSignature_Statics::NewProp_Mana = { "Mana", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Swashbucklers_eventOnManaChangeDelegate_Parms, Mana), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Swashbucklers_OnManaChangeDelegate__DelegateSignature_Statics::NewProp_MaxMana = { "MaxMana", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Swashbucklers_eventOnManaChangeDelegate_Parms, MaxMana), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Swashbucklers_OnManaChangeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Swashbucklers_OnManaChangeDelegate__DelegateSignature_Statics::NewProp_Mana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Swashbucklers_OnManaChangeDelegate__DelegateSignature_Statics::NewProp_MaxMana,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Swashbucklers_OnManaChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Swashbucklers_OnManaChangeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Swashbucklers, nullptr, "OnManaChangeDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Swashbucklers_OnManaChangeDelegate__DelegateSignature_Statics::_Script_Swashbucklers_eventOnManaChangeDelegate_Parms), Z_Construct_UDelegateFunction_Swashbucklers_OnManaChangeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Swashbucklers_OnManaChangeDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Swashbucklers_OnManaChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Swashbucklers_OnManaChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Swashbucklers_OnManaChangeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Swashbucklers_OnManaChangeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Swashbucklers_OnBountyChangeDelegate__DelegateSignature_Statics
	{
		struct _Script_Swashbucklers_eventOnBountyChangeDelegate_Parms
		{
			int32 Bounty;
			AActor* DestroyedActor;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Bounty;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Swashbucklers_OnBountyChangeDelegate__DelegateSignature_Statics::NewProp_Bounty = { "Bounty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Swashbucklers_eventOnBountyChangeDelegate_Parms, Bounty), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Swashbucklers_OnBountyChangeDelegate__DelegateSignature_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Swashbucklers_eventOnBountyChangeDelegate_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Swashbucklers_OnBountyChangeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Swashbucklers_OnBountyChangeDelegate__DelegateSignature_Statics::NewProp_Bounty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Swashbucklers_OnBountyChangeDelegate__DelegateSignature_Statics::NewProp_DestroyedActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Swashbucklers_OnBountyChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Swashbucklers_OnBountyChangeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Swashbucklers, nullptr, "OnBountyChangeDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Swashbucklers_OnBountyChangeDelegate__DelegateSignature_Statics::_Script_Swashbucklers_eventOnBountyChangeDelegate_Parms), Z_Construct_UDelegateFunction_Swashbucklers_OnBountyChangeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Swashbucklers_OnBountyChangeDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Swashbucklers_OnBountyChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Swashbucklers_OnBountyChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Swashbucklers_OnBountyChangeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Swashbucklers_OnBountyChangeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Swashbucklers_OnSpeedChangeDelegate__DelegateSignature_Statics
	{
		struct _Script_Swashbucklers_eventOnSpeedChangeDelegate_Parms
		{
			float Speed;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Swashbucklers_OnSpeedChangeDelegate__DelegateSignature_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Swashbucklers_eventOnSpeedChangeDelegate_Parms, Speed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Swashbucklers_OnSpeedChangeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Swashbucklers_OnSpeedChangeDelegate__DelegateSignature_Statics::NewProp_Speed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Swashbucklers_OnSpeedChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Swashbucklers_OnSpeedChangeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Swashbucklers, nullptr, "OnSpeedChangeDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Swashbucklers_OnSpeedChangeDelegate__DelegateSignature_Statics::_Script_Swashbucklers_eventOnSpeedChangeDelegate_Parms), Z_Construct_UDelegateFunction_Swashbucklers_OnSpeedChangeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Swashbucklers_OnSpeedChangeDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Swashbucklers_OnSpeedChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Swashbucklers_OnSpeedChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Swashbucklers_OnSpeedChangeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Swashbucklers_OnSpeedChangeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Swashbucklers_OnPiecesOfEightDelegate__DelegateSignature_Statics
	{
		struct _Script_Swashbucklers_eventOnPiecesOfEightDelegate_Parms
		{
			int32 PiecesOfEight;
			AActor* DestroyedActor;
			int32 BountyToCollect;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PiecesOfEight;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BountyToCollect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Swashbucklers_OnPiecesOfEightDelegate__DelegateSignature_Statics::NewProp_PiecesOfEight = { "PiecesOfEight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Swashbucklers_eventOnPiecesOfEightDelegate_Parms, PiecesOfEight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Swashbucklers_OnPiecesOfEightDelegate__DelegateSignature_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Swashbucklers_eventOnPiecesOfEightDelegate_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Swashbucklers_OnPiecesOfEightDelegate__DelegateSignature_Statics::NewProp_BountyToCollect = { "BountyToCollect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Swashbucklers_eventOnPiecesOfEightDelegate_Parms, BountyToCollect), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Swashbucklers_OnPiecesOfEightDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Swashbucklers_OnPiecesOfEightDelegate__DelegateSignature_Statics::NewProp_PiecesOfEight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Swashbucklers_OnPiecesOfEightDelegate__DelegateSignature_Statics::NewProp_DestroyedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Swashbucklers_OnPiecesOfEightDelegate__DelegateSignature_Statics::NewProp_BountyToCollect,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Swashbucklers_OnPiecesOfEightDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Swashbucklers_OnPiecesOfEightDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Swashbucklers, nullptr, "OnPiecesOfEightDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Swashbucklers_OnPiecesOfEightDelegate__DelegateSignature_Statics::_Script_Swashbucklers_eventOnPiecesOfEightDelegate_Parms), Z_Construct_UDelegateFunction_Swashbucklers_OnPiecesOfEightDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Swashbucklers_OnPiecesOfEightDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Swashbucklers_OnPiecesOfEightDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Swashbucklers_OnPiecesOfEightDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Swashbucklers_OnPiecesOfEightDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Swashbucklers_OnPiecesOfEightDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Swashbucklers_OnPlayerKillChangeDelegate__DelegateSignature_Statics
	{
		struct _Script_Swashbucklers_eventOnPlayerKillChangeDelegate_Parms
		{
			int32 PlayerKills;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerKills;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Swashbucklers_OnPlayerKillChangeDelegate__DelegateSignature_Statics::NewProp_PlayerKills = { "PlayerKills", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Swashbucklers_eventOnPlayerKillChangeDelegate_Parms, PlayerKills), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Swashbucklers_OnPlayerKillChangeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Swashbucklers_OnPlayerKillChangeDelegate__DelegateSignature_Statics::NewProp_PlayerKills,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Swashbucklers_OnPlayerKillChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Swashbucklers_OnPlayerKillChangeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Swashbucklers, nullptr, "OnPlayerKillChangeDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Swashbucklers_OnPlayerKillChangeDelegate__DelegateSignature_Statics::_Script_Swashbucklers_eventOnPlayerKillChangeDelegate_Parms), Z_Construct_UDelegateFunction_Swashbucklers_OnPlayerKillChangeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Swashbucklers_OnPlayerKillChangeDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Swashbucklers_OnPlayerKillChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Swashbucklers_OnPlayerKillChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Swashbucklers_OnPlayerKillChangeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Swashbucklers_OnPlayerKillChangeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Swashbucklers_OnTowerKillChangeDelegate__DelegateSignature_Statics
	{
		struct _Script_Swashbucklers_eventOnTowerKillChangeDelegate_Parms
		{
			int32 TowerKills;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TowerKills;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Swashbucklers_OnTowerKillChangeDelegate__DelegateSignature_Statics::NewProp_TowerKills = { "TowerKills", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Swashbucklers_eventOnTowerKillChangeDelegate_Parms, TowerKills), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Swashbucklers_OnTowerKillChangeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Swashbucklers_OnTowerKillChangeDelegate__DelegateSignature_Statics::NewProp_TowerKills,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Swashbucklers_OnTowerKillChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Swashbucklers_OnTowerKillChangeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Swashbucklers, nullptr, "OnTowerKillChangeDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Swashbucklers_OnTowerKillChangeDelegate__DelegateSignature_Statics::_Script_Swashbucklers_eventOnTowerKillChangeDelegate_Parms), Z_Construct_UDelegateFunction_Swashbucklers_OnTowerKillChangeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Swashbucklers_OnTowerKillChangeDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Swashbucklers_OnTowerKillChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Swashbucklers_OnTowerKillChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Swashbucklers_OnTowerKillChangeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Swashbucklers_OnTowerKillChangeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Swashbucklers_OnCaptureChangeDelegate__DelegateSignature_Statics
	{
		struct _Script_Swashbucklers_eventOnCaptureChangeDelegate_Parms
		{
			int32 Captures;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Captures;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Swashbucklers_OnCaptureChangeDelegate__DelegateSignature_Statics::NewProp_Captures = { "Captures", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Swashbucklers_eventOnCaptureChangeDelegate_Parms, Captures), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Swashbucklers_OnCaptureChangeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Swashbucklers_OnCaptureChangeDelegate__DelegateSignature_Statics::NewProp_Captures,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Swashbucklers_OnCaptureChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Swashbucklers_OnCaptureChangeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Swashbucklers, nullptr, "OnCaptureChangeDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Swashbucklers_OnCaptureChangeDelegate__DelegateSignature_Statics::_Script_Swashbucklers_eventOnCaptureChangeDelegate_Parms), Z_Construct_UDelegateFunction_Swashbucklers_OnCaptureChangeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Swashbucklers_OnCaptureChangeDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Swashbucklers_OnCaptureChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Swashbucklers_OnCaptureChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Swashbucklers_OnCaptureChangeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Swashbucklers_OnCaptureChangeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(USBAttributeSet::execOnRep_PlayerKills)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldPlayerKills);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PlayerKills(Z_Param_Out_OldPlayerKills);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBAttributeSet::execOnRep_TowerKills)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldTowerKills);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_TowerKills(Z_Param_Out_OldTowerKills);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBAttributeSet::execOnRep_TreasureCaptures)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldTreasureCaptures);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_TreasureCaptures(Z_Param_Out_OldTreasureCaptures);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBAttributeSet::execOnRep_PiecesOfEight)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldPiecesOfEight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PiecesOfEight(Z_Param_Out_OldPiecesOfEight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBAttributeSet::execOnRep_Bounty)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldBounty);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Bounty(Z_Param_Out_OldBounty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBAttributeSet::execOnRep_Speed)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Speed(Z_Param_Out_OldSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBAttributeSet::execOnRep_MaxMana)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxMana);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxMana(Z_Param_Out_OldMaxMana);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBAttributeSet::execOnRep_Mana)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMana);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Mana(Z_Param_Out_OldMana);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBAttributeSet::execOnRep_MaxHealth)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxHealth(Z_Param_Out_OldMaxHealth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USBAttributeSet::execOnRep_Health)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Health(Z_Param_Out_OldHealth);
		P_NATIVE_END;
	}
	void USBAttributeSet::StaticRegisterNativesUSBAttributeSet()
	{
		UClass* Class = USBAttributeSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Bounty", &USBAttributeSet::execOnRep_Bounty },
			{ "OnRep_Health", &USBAttributeSet::execOnRep_Health },
			{ "OnRep_Mana", &USBAttributeSet::execOnRep_Mana },
			{ "OnRep_MaxHealth", &USBAttributeSet::execOnRep_MaxHealth },
			{ "OnRep_MaxMana", &USBAttributeSet::execOnRep_MaxMana },
			{ "OnRep_PiecesOfEight", &USBAttributeSet::execOnRep_PiecesOfEight },
			{ "OnRep_PlayerKills", &USBAttributeSet::execOnRep_PlayerKills },
			{ "OnRep_Speed", &USBAttributeSet::execOnRep_Speed },
			{ "OnRep_TowerKills", &USBAttributeSet::execOnRep_TowerKills },
			{ "OnRep_TreasureCaptures", &USBAttributeSet::execOnRep_TreasureCaptures },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USBAttributeSet_OnRep_Bounty_Statics
	{
		struct SBAttributeSet_eventOnRep_Bounty_Parms
		{
			FGameplayAttributeData OldBounty;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldBounty_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldBounty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBAttributeSet_OnRep_Bounty_Statics::NewProp_OldBounty_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBAttributeSet_OnRep_Bounty_Statics::NewProp_OldBounty = { "OldBounty", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SBAttributeSet_eventOnRep_Bounty_Parms, OldBounty), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_USBAttributeSet_OnRep_Bounty_Statics::NewProp_OldBounty_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBAttributeSet_OnRep_Bounty_Statics::NewProp_OldBounty_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBAttributeSet_OnRep_Bounty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBAttributeSet_OnRep_Bounty_Statics::NewProp_OldBounty,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBAttributeSet_OnRep_Bounty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USBAttributeSet_OnRep_Bounty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBAttributeSet, nullptr, "OnRep_Bounty", nullptr, nullptr, sizeof(Z_Construct_UFunction_USBAttributeSet_OnRep_Bounty_Statics::SBAttributeSet_eventOnRep_Bounty_Parms), Z_Construct_UFunction_USBAttributeSet_OnRep_Bounty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBAttributeSet_OnRep_Bounty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBAttributeSet_OnRep_Bounty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBAttributeSet_OnRep_Bounty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBAttributeSet_OnRep_Bounty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USBAttributeSet_OnRep_Bounty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBAttributeSet_OnRep_Health_Statics
	{
		struct SBAttributeSet_eventOnRep_Health_Parms
		{
			FGameplayAttributeData OldHealth;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBAttributeSet_OnRep_Health_Statics::NewProp_OldHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBAttributeSet_OnRep_Health_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SBAttributeSet_eventOnRep_Health_Parms, OldHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_USBAttributeSet_OnRep_Health_Statics::NewProp_OldHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBAttributeSet_OnRep_Health_Statics::NewProp_OldHealth_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBAttributeSet_OnRep_Health_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBAttributeSet_OnRep_Health_Statics::NewProp_OldHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBAttributeSet_OnRep_Health_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USBAttributeSet_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBAttributeSet, nullptr, "OnRep_Health", nullptr, nullptr, sizeof(Z_Construct_UFunction_USBAttributeSet_OnRep_Health_Statics::SBAttributeSet_eventOnRep_Health_Parms), Z_Construct_UFunction_USBAttributeSet_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBAttributeSet_OnRep_Health_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBAttributeSet_OnRep_Health_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBAttributeSet_OnRep_Health_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBAttributeSet_OnRep_Health()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USBAttributeSet_OnRep_Health_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBAttributeSet_OnRep_Mana_Statics
	{
		struct SBAttributeSet_eventOnRep_Mana_Parms
		{
			FGameplayAttributeData OldMana;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMana;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBAttributeSet_OnRep_Mana_Statics::NewProp_OldMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBAttributeSet_OnRep_Mana_Statics::NewProp_OldMana = { "OldMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SBAttributeSet_eventOnRep_Mana_Parms, OldMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_USBAttributeSet_OnRep_Mana_Statics::NewProp_OldMana_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBAttributeSet_OnRep_Mana_Statics::NewProp_OldMana_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBAttributeSet_OnRep_Mana_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBAttributeSet_OnRep_Mana_Statics::NewProp_OldMana,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USBAttributeSet_OnRep_Mana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBAttributeSet, nullptr, "OnRep_Mana", nullptr, nullptr, sizeof(Z_Construct_UFunction_USBAttributeSet_OnRep_Mana_Statics::SBAttributeSet_eventOnRep_Mana_Parms), Z_Construct_UFunction_USBAttributeSet_OnRep_Mana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBAttributeSet_OnRep_Mana_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBAttributeSet_OnRep_Mana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USBAttributeSet_OnRep_Mana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBAttributeSet_OnRep_MaxHealth_Statics
	{
		struct SBAttributeSet_eventOnRep_MaxHealth_Parms
		{
			FGameplayAttributeData OldMaxHealth;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth = { "OldMaxHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SBAttributeSet_eventOnRep_MaxHealth_Parms, OldMaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_USBAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBAttributeSet_OnRep_MaxHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USBAttributeSet_OnRep_MaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBAttributeSet, nullptr, "OnRep_MaxHealth", nullptr, nullptr, sizeof(Z_Construct_UFunction_USBAttributeSet_OnRep_MaxHealth_Statics::SBAttributeSet_eventOnRep_MaxHealth_Parms), Z_Construct_UFunction_USBAttributeSet_OnRep_MaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBAttributeSet_OnRep_MaxHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBAttributeSet_OnRep_MaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USBAttributeSet_OnRep_MaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBAttributeSet_OnRep_MaxMana_Statics
	{
		struct SBAttributeSet_eventOnRep_MaxMana_Parms
		{
			FGameplayAttributeData OldMaxMana;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxMana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxMana;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana = { "OldMaxMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SBAttributeSet_eventOnRep_MaxMana_Parms, OldMaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_USBAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBAttributeSet_OnRep_MaxMana_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USBAttributeSet_OnRep_MaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBAttributeSet, nullptr, "OnRep_MaxMana", nullptr, nullptr, sizeof(Z_Construct_UFunction_USBAttributeSet_OnRep_MaxMana_Statics::SBAttributeSet_eventOnRep_MaxMana_Parms), Z_Construct_UFunction_USBAttributeSet_OnRep_MaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBAttributeSet_OnRep_MaxMana_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBAttributeSet_OnRep_MaxMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USBAttributeSet_OnRep_MaxMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBAttributeSet_OnRep_PiecesOfEight_Statics
	{
		struct SBAttributeSet_eventOnRep_PiecesOfEight_Parms
		{
			FGameplayAttributeData OldPiecesOfEight;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldPiecesOfEight_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldPiecesOfEight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBAttributeSet_OnRep_PiecesOfEight_Statics::NewProp_OldPiecesOfEight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBAttributeSet_OnRep_PiecesOfEight_Statics::NewProp_OldPiecesOfEight = { "OldPiecesOfEight", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SBAttributeSet_eventOnRep_PiecesOfEight_Parms, OldPiecesOfEight), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_USBAttributeSet_OnRep_PiecesOfEight_Statics::NewProp_OldPiecesOfEight_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBAttributeSet_OnRep_PiecesOfEight_Statics::NewProp_OldPiecesOfEight_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBAttributeSet_OnRep_PiecesOfEight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBAttributeSet_OnRep_PiecesOfEight_Statics::NewProp_OldPiecesOfEight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBAttributeSet_OnRep_PiecesOfEight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USBAttributeSet_OnRep_PiecesOfEight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBAttributeSet, nullptr, "OnRep_PiecesOfEight", nullptr, nullptr, sizeof(Z_Construct_UFunction_USBAttributeSet_OnRep_PiecesOfEight_Statics::SBAttributeSet_eventOnRep_PiecesOfEight_Parms), Z_Construct_UFunction_USBAttributeSet_OnRep_PiecesOfEight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBAttributeSet_OnRep_PiecesOfEight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBAttributeSet_OnRep_PiecesOfEight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBAttributeSet_OnRep_PiecesOfEight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBAttributeSet_OnRep_PiecesOfEight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USBAttributeSet_OnRep_PiecesOfEight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBAttributeSet_OnRep_PlayerKills_Statics
	{
		struct SBAttributeSet_eventOnRep_PlayerKills_Parms
		{
			FGameplayAttributeData OldPlayerKills;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldPlayerKills_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldPlayerKills;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBAttributeSet_OnRep_PlayerKills_Statics::NewProp_OldPlayerKills_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBAttributeSet_OnRep_PlayerKills_Statics::NewProp_OldPlayerKills = { "OldPlayerKills", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SBAttributeSet_eventOnRep_PlayerKills_Parms, OldPlayerKills), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_USBAttributeSet_OnRep_PlayerKills_Statics::NewProp_OldPlayerKills_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBAttributeSet_OnRep_PlayerKills_Statics::NewProp_OldPlayerKills_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBAttributeSet_OnRep_PlayerKills_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBAttributeSet_OnRep_PlayerKills_Statics::NewProp_OldPlayerKills,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBAttributeSet_OnRep_PlayerKills_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USBAttributeSet_OnRep_PlayerKills_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBAttributeSet, nullptr, "OnRep_PlayerKills", nullptr, nullptr, sizeof(Z_Construct_UFunction_USBAttributeSet_OnRep_PlayerKills_Statics::SBAttributeSet_eventOnRep_PlayerKills_Parms), Z_Construct_UFunction_USBAttributeSet_OnRep_PlayerKills_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBAttributeSet_OnRep_PlayerKills_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBAttributeSet_OnRep_PlayerKills_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBAttributeSet_OnRep_PlayerKills_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBAttributeSet_OnRep_PlayerKills()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USBAttributeSet_OnRep_PlayerKills_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBAttributeSet_OnRep_Speed_Statics
	{
		struct SBAttributeSet_eventOnRep_Speed_Parms
		{
			FGameplayAttributeData OldSpeed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBAttributeSet_OnRep_Speed_Statics::NewProp_OldSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBAttributeSet_OnRep_Speed_Statics::NewProp_OldSpeed = { "OldSpeed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SBAttributeSet_eventOnRep_Speed_Parms, OldSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_USBAttributeSet_OnRep_Speed_Statics::NewProp_OldSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBAttributeSet_OnRep_Speed_Statics::NewProp_OldSpeed_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBAttributeSet_OnRep_Speed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBAttributeSet_OnRep_Speed_Statics::NewProp_OldSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBAttributeSet_OnRep_Speed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USBAttributeSet_OnRep_Speed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBAttributeSet, nullptr, "OnRep_Speed", nullptr, nullptr, sizeof(Z_Construct_UFunction_USBAttributeSet_OnRep_Speed_Statics::SBAttributeSet_eventOnRep_Speed_Parms), Z_Construct_UFunction_USBAttributeSet_OnRep_Speed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBAttributeSet_OnRep_Speed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBAttributeSet_OnRep_Speed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBAttributeSet_OnRep_Speed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBAttributeSet_OnRep_Speed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USBAttributeSet_OnRep_Speed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBAttributeSet_OnRep_TowerKills_Statics
	{
		struct SBAttributeSet_eventOnRep_TowerKills_Parms
		{
			FGameplayAttributeData OldTowerKills;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldTowerKills_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldTowerKills;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBAttributeSet_OnRep_TowerKills_Statics::NewProp_OldTowerKills_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBAttributeSet_OnRep_TowerKills_Statics::NewProp_OldTowerKills = { "OldTowerKills", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SBAttributeSet_eventOnRep_TowerKills_Parms, OldTowerKills), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_USBAttributeSet_OnRep_TowerKills_Statics::NewProp_OldTowerKills_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBAttributeSet_OnRep_TowerKills_Statics::NewProp_OldTowerKills_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBAttributeSet_OnRep_TowerKills_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBAttributeSet_OnRep_TowerKills_Statics::NewProp_OldTowerKills,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBAttributeSet_OnRep_TowerKills_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USBAttributeSet_OnRep_TowerKills_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBAttributeSet, nullptr, "OnRep_TowerKills", nullptr, nullptr, sizeof(Z_Construct_UFunction_USBAttributeSet_OnRep_TowerKills_Statics::SBAttributeSet_eventOnRep_TowerKills_Parms), Z_Construct_UFunction_USBAttributeSet_OnRep_TowerKills_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBAttributeSet_OnRep_TowerKills_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBAttributeSet_OnRep_TowerKills_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBAttributeSet_OnRep_TowerKills_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBAttributeSet_OnRep_TowerKills()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USBAttributeSet_OnRep_TowerKills_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USBAttributeSet_OnRep_TreasureCaptures_Statics
	{
		struct SBAttributeSet_eventOnRep_TreasureCaptures_Parms
		{
			FGameplayAttributeData OldTreasureCaptures;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldTreasureCaptures_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldTreasureCaptures;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBAttributeSet_OnRep_TreasureCaptures_Statics::NewProp_OldTreasureCaptures_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USBAttributeSet_OnRep_TreasureCaptures_Statics::NewProp_OldTreasureCaptures = { "OldTreasureCaptures", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SBAttributeSet_eventOnRep_TreasureCaptures_Parms, OldTreasureCaptures), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_USBAttributeSet_OnRep_TreasureCaptures_Statics::NewProp_OldTreasureCaptures_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USBAttributeSet_OnRep_TreasureCaptures_Statics::NewProp_OldTreasureCaptures_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USBAttributeSet_OnRep_TreasureCaptures_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USBAttributeSet_OnRep_TreasureCaptures_Statics::NewProp_OldTreasureCaptures,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USBAttributeSet_OnRep_TreasureCaptures_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USBAttributeSet_OnRep_TreasureCaptures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USBAttributeSet, nullptr, "OnRep_TreasureCaptures", nullptr, nullptr, sizeof(Z_Construct_UFunction_USBAttributeSet_OnRep_TreasureCaptures_Statics::SBAttributeSet_eventOnRep_TreasureCaptures_Parms), Z_Construct_UFunction_USBAttributeSet_OnRep_TreasureCaptures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USBAttributeSet_OnRep_TreasureCaptures_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USBAttributeSet_OnRep_TreasureCaptures_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USBAttributeSet_OnRep_TreasureCaptures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USBAttributeSet_OnRep_TreasureCaptures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USBAttributeSet_OnRep_TreasureCaptures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USBAttributeSet);
	UClass* Z_Construct_UClass_USBAttributeSet_NoRegister()
	{
		return USBAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_USBAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Mana;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxMana;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bounty_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PiecesOfEight_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PiecesOfEight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TreasureCaptures_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TreasureCaptures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TowerKills_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TowerKills;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerKills_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerKills;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstigatorActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestroyedActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BountyCollected_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BountyCollected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USBAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USBAttributeSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USBAttributeSet_OnRep_Bounty, "OnRep_Bounty" }, // 4175326159
		{ &Z_Construct_UFunction_USBAttributeSet_OnRep_Health, "OnRep_Health" }, // 2073574841
		{ &Z_Construct_UFunction_USBAttributeSet_OnRep_Mana, "OnRep_Mana" }, // 904955015
		{ &Z_Construct_UFunction_USBAttributeSet_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 2607564192
		{ &Z_Construct_UFunction_USBAttributeSet_OnRep_MaxMana, "OnRep_MaxMana" }, // 3972624709
		{ &Z_Construct_UFunction_USBAttributeSet_OnRep_PiecesOfEight, "OnRep_PiecesOfEight" }, // 3224709864
		{ &Z_Construct_UFunction_USBAttributeSet_OnRep_PlayerKills, "OnRep_PlayerKills" }, // 2587463193
		{ &Z_Construct_UFunction_USBAttributeSet_OnRep_Speed, "OnRep_Speed" }, // 1043452020
		{ &Z_Construct_UFunction_USBAttributeSet_OnRep_TowerKills, "OnRep_TowerKills" }, // 4024741985
		{ &Z_Construct_UFunction_USBAttributeSet_OnRep_TreasureCaptures, "OnRep_TreasureCaptures" }, // 2583904213
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameplayAbilities/SBAttributeSet.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBAttributeSet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBAttributeSet_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "AttributeSetBase" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBAttributeSet_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USBAttributeSet_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBAttributeSet_Statics::NewProp_Health_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBAttributeSet_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "AttributeSetBase" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USBAttributeSet_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBAttributeSet_Statics::NewProp_MaxHealth_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBAttributeSet_Statics::NewProp_Mana_MetaData[] = {
		{ "Category", "AttributeSetBase" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBAttributeSet_Statics::NewProp_Mana = { "Mana", "OnRep_Mana", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBAttributeSet, Mana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USBAttributeSet_Statics::NewProp_Mana_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBAttributeSet_Statics::NewProp_Mana_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBAttributeSet_Statics::NewProp_MaxMana_MetaData[] = {
		{ "Category", "AttributeSetBase" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBAttributeSet_Statics::NewProp_MaxMana = { "MaxMana", "OnRep_MaxMana", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBAttributeSet, MaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USBAttributeSet_Statics::NewProp_MaxMana_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBAttributeSet_Statics::NewProp_MaxMana_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBAttributeSet_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "AttributeSetBase" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBAttributeSet_Statics::NewProp_Speed = { "Speed", "OnRep_Speed", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBAttributeSet, Speed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USBAttributeSet_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBAttributeSet_Statics::NewProp_Speed_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBAttributeSet_Statics::NewProp_Bounty_MetaData[] = {
		{ "Category", "AttributeSetBase" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBAttributeSet_Statics::NewProp_Bounty = { "Bounty", "OnRep_Bounty", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBAttributeSet, Bounty), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USBAttributeSet_Statics::NewProp_Bounty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBAttributeSet_Statics::NewProp_Bounty_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBAttributeSet_Statics::NewProp_PiecesOfEight_MetaData[] = {
		{ "Category", "AttributeSetBase" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBAttributeSet_Statics::NewProp_PiecesOfEight = { "PiecesOfEight", "OnRep_PiecesOfEight", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBAttributeSet, PiecesOfEight), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USBAttributeSet_Statics::NewProp_PiecesOfEight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBAttributeSet_Statics::NewProp_PiecesOfEight_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBAttributeSet_Statics::NewProp_TreasureCaptures_MetaData[] = {
		{ "Category", "AttributeSetBase" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBAttributeSet_Statics::NewProp_TreasureCaptures = { "TreasureCaptures", "OnRep_TreasureCaptures", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBAttributeSet, TreasureCaptures), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USBAttributeSet_Statics::NewProp_TreasureCaptures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBAttributeSet_Statics::NewProp_TreasureCaptures_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBAttributeSet_Statics::NewProp_TowerKills_MetaData[] = {
		{ "Category", "AttributeSetBase" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBAttributeSet_Statics::NewProp_TowerKills = { "TowerKills", "OnRep_TowerKills", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBAttributeSet, TowerKills), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USBAttributeSet_Statics::NewProp_TowerKills_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBAttributeSet_Statics::NewProp_TowerKills_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBAttributeSet_Statics::NewProp_PlayerKills_MetaData[] = {
		{ "Category", "AttributeSetBase" },
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USBAttributeSet_Statics::NewProp_PlayerKills = { "PlayerKills", "OnRep_PlayerKills", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBAttributeSet, PlayerKills), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_USBAttributeSet_Statics::NewProp_PlayerKills_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBAttributeSet_Statics::NewProp_PlayerKills_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBAttributeSet_Statics::NewProp_InstigatorActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBAttributeSet_Statics::NewProp_InstigatorActor = { "InstigatorActor", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBAttributeSet, InstigatorActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBAttributeSet_Statics::NewProp_InstigatorActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBAttributeSet_Statics::NewProp_InstigatorActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBAttributeSet_Statics::NewProp_DestroyedActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USBAttributeSet_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBAttributeSet, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USBAttributeSet_Statics::NewProp_DestroyedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBAttributeSet_Statics::NewProp_DestroyedActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USBAttributeSet_Statics::NewProp_BountyCollected_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilities/SBAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USBAttributeSet_Statics::NewProp_BountyCollected = { "BountyCollected", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USBAttributeSet, BountyCollected), METADATA_PARAMS(Z_Construct_UClass_USBAttributeSet_Statics::NewProp_BountyCollected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USBAttributeSet_Statics::NewProp_BountyCollected_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USBAttributeSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBAttributeSet_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBAttributeSet_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBAttributeSet_Statics::NewProp_Mana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBAttributeSet_Statics::NewProp_MaxMana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBAttributeSet_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBAttributeSet_Statics::NewProp_Bounty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBAttributeSet_Statics::NewProp_PiecesOfEight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBAttributeSet_Statics::NewProp_TreasureCaptures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBAttributeSet_Statics::NewProp_TowerKills,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBAttributeSet_Statics::NewProp_PlayerKills,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBAttributeSet_Statics::NewProp_InstigatorActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBAttributeSet_Statics::NewProp_DestroyedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USBAttributeSet_Statics::NewProp_BountyCollected,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USBAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USBAttributeSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USBAttributeSet_Statics::ClassParams = {
		&USBAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USBAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USBAttributeSet_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USBAttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USBAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USBAttributeSet()
	{
		if (!Z_Registration_Info_UClass_USBAttributeSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USBAttributeSet.OuterSingleton, Z_Construct_UClass_USBAttributeSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USBAttributeSet.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<USBAttributeSet>()
	{
		return USBAttributeSet::StaticClass();
	}

	void USBAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Health(TEXT("Health"));
		static const FName Name_MaxHealth(TEXT("MaxHealth"));
		static const FName Name_Mana(TEXT("Mana"));
		static const FName Name_MaxMana(TEXT("MaxMana"));
		static const FName Name_Speed(TEXT("Speed"));
		static const FName Name_Bounty(TEXT("Bounty"));
		static const FName Name_PiecesOfEight(TEXT("PiecesOfEight"));
		static const FName Name_TreasureCaptures(TEXT("TreasureCaptures"));
		static const FName Name_TowerKills(TEXT("TowerKills"));
		static const FName Name_PlayerKills(TEXT("PlayerKills"));
		static const FName Name_InstigatorActor(TEXT("InstigatorActor"));
		static const FName Name_DestroyedActor(TEXT("DestroyedActor"));
		static const FName Name_BountyCollected(TEXT("BountyCollected"));

		const bool bIsValid = true
			&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
			&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
			&& Name_Mana == ClassReps[(int32)ENetFields_Private::Mana].Property->GetFName()
			&& Name_MaxMana == ClassReps[(int32)ENetFields_Private::MaxMana].Property->GetFName()
			&& Name_Speed == ClassReps[(int32)ENetFields_Private::Speed].Property->GetFName()
			&& Name_Bounty == ClassReps[(int32)ENetFields_Private::Bounty].Property->GetFName()
			&& Name_PiecesOfEight == ClassReps[(int32)ENetFields_Private::PiecesOfEight].Property->GetFName()
			&& Name_TreasureCaptures == ClassReps[(int32)ENetFields_Private::TreasureCaptures].Property->GetFName()
			&& Name_TowerKills == ClassReps[(int32)ENetFields_Private::TowerKills].Property->GetFName()
			&& Name_PlayerKills == ClassReps[(int32)ENetFields_Private::PlayerKills].Property->GetFName()
			&& Name_InstigatorActor == ClassReps[(int32)ENetFields_Private::InstigatorActor].Property->GetFName()
			&& Name_DestroyedActor == ClassReps[(int32)ENetFields_Private::DestroyedActor].Property->GetFName()
			&& Name_BountyCollected == ClassReps[(int32)ENetFields_Private::BountyCollected].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USBAttributeSet"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USBAttributeSet);
	USBAttributeSet::~USBAttributeSet() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBAttributeSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBAttributeSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USBAttributeSet, USBAttributeSet::StaticClass, TEXT("USBAttributeSet"), &Z_Registration_Info_UClass_USBAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USBAttributeSet), 3265863914U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBAttributeSet_h_1724607020(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBAttributeSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
