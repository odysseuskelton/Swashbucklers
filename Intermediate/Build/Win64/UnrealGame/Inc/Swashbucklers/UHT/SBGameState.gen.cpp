// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/GameStates/SBGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBGameState() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ABuilding_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ACaptainState_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ASBGameState();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ASBGameState_NoRegister();
	SWASHBUCKLERS_API UEnum* Z_Construct_UEnum_Swashbucklers_EBuildingType();
	SWASHBUCKLERS_API UEnum* Z_Construct_UEnum_Swashbucklers_ETeam();
	SWASHBUCKLERS_API UFunction* Z_Construct_UDelegateFunction_Swashbucklers_OnBuildingDestroyedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Swashbucklers_OnBuildingDestroyedDelegate__DelegateSignature_Statics
	{
		struct _Script_Swashbucklers_eventOnBuildingDestroyedDelegate_Parms
		{
			EBuildingType BuildingType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_BuildingType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BuildingType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Swashbucklers_OnBuildingDestroyedDelegate__DelegateSignature_Statics::NewProp_BuildingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_Swashbucklers_OnBuildingDestroyedDelegate__DelegateSignature_Statics::NewProp_BuildingType = { "BuildingType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Swashbucklers_eventOnBuildingDestroyedDelegate_Parms, BuildingType), Z_Construct_UEnum_Swashbucklers_EBuildingType, METADATA_PARAMS(nullptr, 0) }; // 1602796454
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Swashbucklers_OnBuildingDestroyedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Swashbucklers_OnBuildingDestroyedDelegate__DelegateSignature_Statics::NewProp_BuildingType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Swashbucklers_OnBuildingDestroyedDelegate__DelegateSignature_Statics::NewProp_BuildingType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Swashbucklers_OnBuildingDestroyedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameStates/SBGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Swashbucklers_OnBuildingDestroyedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Swashbucklers, nullptr, "OnBuildingDestroyedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Swashbucklers_OnBuildingDestroyedDelegate__DelegateSignature_Statics::_Script_Swashbucklers_eventOnBuildingDestroyedDelegate_Parms), Z_Construct_UDelegateFunction_Swashbucklers_OnBuildingDestroyedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Swashbucklers_OnBuildingDestroyedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Swashbucklers_OnBuildingDestroyedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Swashbucklers_OnBuildingDestroyedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Swashbucklers_OnBuildingDestroyedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Swashbucklers_OnBuildingDestroyedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ASBGameState::execOnRep_TeamCapturedTreasure)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_TeamCapturedTreasure();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBGameState::execOnRep_TreasureCapturesUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_TreasureCapturesUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBGameState::execClientUpdateHUDCaptures)
	{
		P_GET_OBJECT(ACaptainState,Z_Param_CaptainState);
		P_GET_PROPERTY(FIntProperty,Z_Param_Captures);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientUpdateHUDCaptures_Implementation(Z_Param_CaptainState,Z_Param_Captures);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBGameState::execMulticastExtraHeartPiece)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastExtraHeartPiece_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBGameState::execExtraHeartPiece)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExtraHeartPiece();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBGameState::execClientPlayerKilled)
	{
		P_GET_OBJECT(ACaptainState,Z_Param_SunkCaptainState);
		P_GET_OBJECT(ACaptainState,Z_Param_InstigatorCaptainState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientPlayerKilled_Implementation(Z_Param_SunkCaptainState,Z_Param_InstigatorCaptainState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBGameState::execClientPlayerBountyChanged)
	{
		P_GET_OBJECT(ACaptainState,Z_Param_CapState);
		P_GET_PROPERTY(FIntProperty,Z_Param_Bounty);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientPlayerBountyChanged_Implementation(Z_Param_CapState,Z_Param_Bounty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBGameState::execClientUpdateTowerKills)
	{
		P_GET_OBJECT(ACaptainState,Z_Param_CaptainState);
		P_GET_PROPERTY(FIntProperty,Z_Param_TowerKills);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientUpdateTowerKills_Implementation(Z_Param_CaptainState,Z_Param_TowerKills);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBGameState::execClientUpdatePlayerKills)
	{
		P_GET_OBJECT(ACaptainState,Z_Param_CaptainState);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerKills);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientUpdatePlayerKills_Implementation(Z_Param_CaptainState,Z_Param_PlayerKills);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBGameState::execMulticastBuildingDestroyed)
	{
		P_GET_ENUM(EBuildingType,Z_Param_BuildingType);
		P_GET_OBJECT(ABuilding,Z_Param_BuildingDestroyed);
		P_GET_OBJECT(AActor,Z_Param_InstigatorActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastBuildingDestroyed_Implementation(EBuildingType(Z_Param_BuildingType),Z_Param_BuildingDestroyed,Z_Param_InstigatorActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBGameState::execOnRep_RegisterCaptainState)
	{
		P_GET_OBJECT(ACaptainState,Z_Param_CaptainState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_RegisterCaptainState(Z_Param_CaptainState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBGameState::execOnRep_UpdateTeams)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_UpdateTeams();
		P_NATIVE_END;
	}
	struct SBGameState_eventClientPlayerBountyChanged_Parms
	{
		ACaptainState* CapState;
		int32 Bounty;
	};
	struct SBGameState_eventClientPlayerKilled_Parms
	{
		ACaptainState* SunkCaptainState;
		ACaptainState* InstigatorCaptainState;
	};
	struct SBGameState_eventClientUpdateHUDCaptures_Parms
	{
		ACaptainState* CaptainState;
		int32 Captures;
	};
	struct SBGameState_eventClientUpdatePlayerKills_Parms
	{
		ACaptainState* CaptainState;
		int32 PlayerKills;
	};
	struct SBGameState_eventClientUpdateTowerKills_Parms
	{
		ACaptainState* CaptainState;
		int32 TowerKills;
	};
	struct SBGameState_eventMulticastBuildingDestroyed_Parms
	{
		EBuildingType BuildingType;
		ABuilding* BuildingDestroyed;
		AActor* InstigatorActor;
	};
	static FName NAME_ASBGameState_ClientPlayerBountyChanged = FName(TEXT("ClientPlayerBountyChanged"));
	void ASBGameState::ClientPlayerBountyChanged(ACaptainState* CapState, int32 Bounty)
	{
		SBGameState_eventClientPlayerBountyChanged_Parms Parms;
		Parms.CapState=CapState;
		Parms.Bounty=Bounty;
		ProcessEvent(FindFunctionChecked(NAME_ASBGameState_ClientPlayerBountyChanged),&Parms);
	}
	static FName NAME_ASBGameState_ClientPlayerKilled = FName(TEXT("ClientPlayerKilled"));
	void ASBGameState::ClientPlayerKilled(ACaptainState* SunkCaptainState, ACaptainState* InstigatorCaptainState)
	{
		SBGameState_eventClientPlayerKilled_Parms Parms;
		Parms.SunkCaptainState=SunkCaptainState;
		Parms.InstigatorCaptainState=InstigatorCaptainState;
		ProcessEvent(FindFunctionChecked(NAME_ASBGameState_ClientPlayerKilled),&Parms);
	}
	static FName NAME_ASBGameState_ClientUpdateHUDCaptures = FName(TEXT("ClientUpdateHUDCaptures"));
	void ASBGameState::ClientUpdateHUDCaptures(ACaptainState* CaptainState, int32 Captures)
	{
		SBGameState_eventClientUpdateHUDCaptures_Parms Parms;
		Parms.CaptainState=CaptainState;
		Parms.Captures=Captures;
		ProcessEvent(FindFunctionChecked(NAME_ASBGameState_ClientUpdateHUDCaptures),&Parms);
	}
	static FName NAME_ASBGameState_ClientUpdatePlayerKills = FName(TEXT("ClientUpdatePlayerKills"));
	void ASBGameState::ClientUpdatePlayerKills(ACaptainState* CaptainState, int32 PlayerKills)
	{
		SBGameState_eventClientUpdatePlayerKills_Parms Parms;
		Parms.CaptainState=CaptainState;
		Parms.PlayerKills=PlayerKills;
		ProcessEvent(FindFunctionChecked(NAME_ASBGameState_ClientUpdatePlayerKills),&Parms);
	}
	static FName NAME_ASBGameState_ClientUpdateTowerKills = FName(TEXT("ClientUpdateTowerKills"));
	void ASBGameState::ClientUpdateTowerKills(ACaptainState* CaptainState, int32 TowerKills)
	{
		SBGameState_eventClientUpdateTowerKills_Parms Parms;
		Parms.CaptainState=CaptainState;
		Parms.TowerKills=TowerKills;
		ProcessEvent(FindFunctionChecked(NAME_ASBGameState_ClientUpdateTowerKills),&Parms);
	}
	static FName NAME_ASBGameState_MulticastBuildingDestroyed = FName(TEXT("MulticastBuildingDestroyed"));
	void ASBGameState::MulticastBuildingDestroyed(EBuildingType BuildingType, ABuilding* BuildingDestroyed, AActor* InstigatorActor)
	{
		SBGameState_eventMulticastBuildingDestroyed_Parms Parms;
		Parms.BuildingType=BuildingType;
		Parms.BuildingDestroyed=BuildingDestroyed;
		Parms.InstigatorActor=InstigatorActor;
		ProcessEvent(FindFunctionChecked(NAME_ASBGameState_MulticastBuildingDestroyed),&Parms);
	}
	static FName NAME_ASBGameState_MulticastExtraHeartPiece = FName(TEXT("MulticastExtraHeartPiece"));
	void ASBGameState::MulticastExtraHeartPiece()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASBGameState_MulticastExtraHeartPiece),NULL);
	}
	void ASBGameState::StaticRegisterNativesASBGameState()
	{
		UClass* Class = ASBGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientPlayerBountyChanged", &ASBGameState::execClientPlayerBountyChanged },
			{ "ClientPlayerKilled", &ASBGameState::execClientPlayerKilled },
			{ "ClientUpdateHUDCaptures", &ASBGameState::execClientUpdateHUDCaptures },
			{ "ClientUpdatePlayerKills", &ASBGameState::execClientUpdatePlayerKills },
			{ "ClientUpdateTowerKills", &ASBGameState::execClientUpdateTowerKills },
			{ "ExtraHeartPiece", &ASBGameState::execExtraHeartPiece },
			{ "MulticastBuildingDestroyed", &ASBGameState::execMulticastBuildingDestroyed },
			{ "MulticastExtraHeartPiece", &ASBGameState::execMulticastExtraHeartPiece },
			{ "OnRep_RegisterCaptainState", &ASBGameState::execOnRep_RegisterCaptainState },
			{ "OnRep_TeamCapturedTreasure", &ASBGameState::execOnRep_TeamCapturedTreasure },
			{ "OnRep_TreasureCapturesUpdate", &ASBGameState::execOnRep_TreasureCapturesUpdate },
			{ "OnRep_UpdateTeams", &ASBGameState::execOnRep_UpdateTeams },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBGameState_ClientPlayerBountyChanged_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CapState;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Bounty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBGameState_ClientPlayerBountyChanged_Statics::NewProp_CapState = { "CapState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SBGameState_eventClientPlayerBountyChanged_Parms, CapState), Z_Construct_UClass_ACaptainState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBGameState_ClientPlayerBountyChanged_Statics::NewProp_Bounty = { "Bounty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SBGameState_eventClientPlayerBountyChanged_Parms, Bounty), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBGameState_ClientPlayerBountyChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBGameState_ClientPlayerBountyChanged_Statics::NewProp_CapState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBGameState_ClientPlayerBountyChanged_Statics::NewProp_Bounty,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBGameState_ClientPlayerBountyChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameStates/SBGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBGameState_ClientPlayerBountyChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBGameState, nullptr, "ClientPlayerBountyChanged", nullptr, nullptr, sizeof(SBGameState_eventClientPlayerBountyChanged_Parms), Z_Construct_UFunction_ASBGameState_ClientPlayerBountyChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBGameState_ClientPlayerBountyChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBGameState_ClientPlayerBountyChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBGameState_ClientPlayerBountyChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBGameState_ClientPlayerBountyChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASBGameState_ClientPlayerBountyChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBGameState_ClientPlayerKilled_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SunkCaptainState;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorCaptainState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBGameState_ClientPlayerKilled_Statics::NewProp_SunkCaptainState = { "SunkCaptainState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SBGameState_eventClientPlayerKilled_Parms, SunkCaptainState), Z_Construct_UClass_ACaptainState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBGameState_ClientPlayerKilled_Statics::NewProp_InstigatorCaptainState = { "InstigatorCaptainState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SBGameState_eventClientPlayerKilled_Parms, InstigatorCaptainState), Z_Construct_UClass_ACaptainState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBGameState_ClientPlayerKilled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBGameState_ClientPlayerKilled_Statics::NewProp_SunkCaptainState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBGameState_ClientPlayerKilled_Statics::NewProp_InstigatorCaptainState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBGameState_ClientPlayerKilled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameStates/SBGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBGameState_ClientPlayerKilled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBGameState, nullptr, "ClientPlayerKilled", nullptr, nullptr, sizeof(SBGameState_eventClientPlayerKilled_Parms), Z_Construct_UFunction_ASBGameState_ClientPlayerKilled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBGameState_ClientPlayerKilled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBGameState_ClientPlayerKilled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBGameState_ClientPlayerKilled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBGameState_ClientPlayerKilled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASBGameState_ClientPlayerKilled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBGameState_ClientUpdateHUDCaptures_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptainState;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Captures;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBGameState_ClientUpdateHUDCaptures_Statics::NewProp_CaptainState = { "CaptainState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SBGameState_eventClientUpdateHUDCaptures_Parms, CaptainState), Z_Construct_UClass_ACaptainState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBGameState_ClientUpdateHUDCaptures_Statics::NewProp_Captures = { "Captures", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SBGameState_eventClientUpdateHUDCaptures_Parms, Captures), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBGameState_ClientUpdateHUDCaptures_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBGameState_ClientUpdateHUDCaptures_Statics::NewProp_CaptainState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBGameState_ClientUpdateHUDCaptures_Statics::NewProp_Captures,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBGameState_ClientUpdateHUDCaptures_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameStates/SBGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBGameState_ClientUpdateHUDCaptures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBGameState, nullptr, "ClientUpdateHUDCaptures", nullptr, nullptr, sizeof(SBGameState_eventClientUpdateHUDCaptures_Parms), Z_Construct_UFunction_ASBGameState_ClientUpdateHUDCaptures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBGameState_ClientUpdateHUDCaptures_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBGameState_ClientUpdateHUDCaptures_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBGameState_ClientUpdateHUDCaptures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBGameState_ClientUpdateHUDCaptures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASBGameState_ClientUpdateHUDCaptures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBGameState_ClientUpdatePlayerKills_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptainState;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerKills;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBGameState_ClientUpdatePlayerKills_Statics::NewProp_CaptainState = { "CaptainState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SBGameState_eventClientUpdatePlayerKills_Parms, CaptainState), Z_Construct_UClass_ACaptainState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBGameState_ClientUpdatePlayerKills_Statics::NewProp_PlayerKills = { "PlayerKills", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SBGameState_eventClientUpdatePlayerKills_Parms, PlayerKills), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBGameState_ClientUpdatePlayerKills_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBGameState_ClientUpdatePlayerKills_Statics::NewProp_CaptainState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBGameState_ClientUpdatePlayerKills_Statics::NewProp_PlayerKills,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBGameState_ClientUpdatePlayerKills_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameStates/SBGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBGameState_ClientUpdatePlayerKills_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBGameState, nullptr, "ClientUpdatePlayerKills", nullptr, nullptr, sizeof(SBGameState_eventClientUpdatePlayerKills_Parms), Z_Construct_UFunction_ASBGameState_ClientUpdatePlayerKills_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBGameState_ClientUpdatePlayerKills_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBGameState_ClientUpdatePlayerKills_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBGameState_ClientUpdatePlayerKills_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBGameState_ClientUpdatePlayerKills()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASBGameState_ClientUpdatePlayerKills_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBGameState_ClientUpdateTowerKills_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptainState;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TowerKills;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBGameState_ClientUpdateTowerKills_Statics::NewProp_CaptainState = { "CaptainState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SBGameState_eventClientUpdateTowerKills_Parms, CaptainState), Z_Construct_UClass_ACaptainState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASBGameState_ClientUpdateTowerKills_Statics::NewProp_TowerKills = { "TowerKills", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SBGameState_eventClientUpdateTowerKills_Parms, TowerKills), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBGameState_ClientUpdateTowerKills_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBGameState_ClientUpdateTowerKills_Statics::NewProp_CaptainState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBGameState_ClientUpdateTowerKills_Statics::NewProp_TowerKills,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBGameState_ClientUpdateTowerKills_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameStates/SBGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBGameState_ClientUpdateTowerKills_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBGameState, nullptr, "ClientUpdateTowerKills", nullptr, nullptr, sizeof(SBGameState_eventClientUpdateTowerKills_Parms), Z_Construct_UFunction_ASBGameState_ClientUpdateTowerKills_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBGameState_ClientUpdateTowerKills_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBGameState_ClientUpdateTowerKills_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBGameState_ClientUpdateTowerKills_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBGameState_ClientUpdateTowerKills()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASBGameState_ClientUpdateTowerKills_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBGameState_ExtraHeartPiece_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBGameState_ExtraHeartPiece_Statics::Function_MetaDataParams[] = {
		{ "Category", "Commands" },
		{ "ModuleRelativePath", "Public/GameStates/SBGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBGameState_ExtraHeartPiece_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBGameState, nullptr, "ExtraHeartPiece", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBGameState_ExtraHeartPiece_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBGameState_ExtraHeartPiece_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBGameState_ExtraHeartPiece()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASBGameState_ExtraHeartPiece_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBGameState_MulticastBuildingDestroyed_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_BuildingType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BuildingType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BuildingDestroyed;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASBGameState_MulticastBuildingDestroyed_Statics::NewProp_BuildingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASBGameState_MulticastBuildingDestroyed_Statics::NewProp_BuildingType = { "BuildingType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SBGameState_eventMulticastBuildingDestroyed_Parms, BuildingType), Z_Construct_UEnum_Swashbucklers_EBuildingType, METADATA_PARAMS(nullptr, 0) }; // 1602796454
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBGameState_MulticastBuildingDestroyed_Statics::NewProp_BuildingDestroyed = { "BuildingDestroyed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SBGameState_eventMulticastBuildingDestroyed_Parms, BuildingDestroyed), Z_Construct_UClass_ABuilding_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBGameState_MulticastBuildingDestroyed_Statics::NewProp_InstigatorActor = { "InstigatorActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SBGameState_eventMulticastBuildingDestroyed_Parms, InstigatorActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBGameState_MulticastBuildingDestroyed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBGameState_MulticastBuildingDestroyed_Statics::NewProp_BuildingType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBGameState_MulticastBuildingDestroyed_Statics::NewProp_BuildingType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBGameState_MulticastBuildingDestroyed_Statics::NewProp_BuildingDestroyed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBGameState_MulticastBuildingDestroyed_Statics::NewProp_InstigatorActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBGameState_MulticastBuildingDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameStates/SBGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBGameState_MulticastBuildingDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBGameState, nullptr, "MulticastBuildingDestroyed", nullptr, nullptr, sizeof(SBGameState_eventMulticastBuildingDestroyed_Parms), Z_Construct_UFunction_ASBGameState_MulticastBuildingDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBGameState_MulticastBuildingDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBGameState_MulticastBuildingDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBGameState_MulticastBuildingDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBGameState_MulticastBuildingDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASBGameState_MulticastBuildingDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBGameState_MulticastExtraHeartPiece_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBGameState_MulticastExtraHeartPiece_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameStates/SBGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBGameState_MulticastExtraHeartPiece_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBGameState, nullptr, "MulticastExtraHeartPiece", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBGameState_MulticastExtraHeartPiece_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBGameState_MulticastExtraHeartPiece_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBGameState_MulticastExtraHeartPiece()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASBGameState_MulticastExtraHeartPiece_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBGameState_OnRep_RegisterCaptainState_Statics
	{
		struct SBGameState_eventOnRep_RegisterCaptainState_Parms
		{
			ACaptainState* CaptainState;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptainState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASBGameState_OnRep_RegisterCaptainState_Statics::NewProp_CaptainState = { "CaptainState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SBGameState_eventOnRep_RegisterCaptainState_Parms, CaptainState), Z_Construct_UClass_ACaptainState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASBGameState_OnRep_RegisterCaptainState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASBGameState_OnRep_RegisterCaptainState_Statics::NewProp_CaptainState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBGameState_OnRep_RegisterCaptainState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameStates/SBGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBGameState_OnRep_RegisterCaptainState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBGameState, nullptr, "OnRep_RegisterCaptainState", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASBGameState_OnRep_RegisterCaptainState_Statics::SBGameState_eventOnRep_RegisterCaptainState_Parms), Z_Construct_UFunction_ASBGameState_OnRep_RegisterCaptainState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBGameState_OnRep_RegisterCaptainState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBGameState_OnRep_RegisterCaptainState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBGameState_OnRep_RegisterCaptainState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBGameState_OnRep_RegisterCaptainState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASBGameState_OnRep_RegisterCaptainState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBGameState_OnRep_TeamCapturedTreasure_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBGameState_OnRep_TeamCapturedTreasure_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameStates/SBGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBGameState_OnRep_TeamCapturedTreasure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBGameState, nullptr, "OnRep_TeamCapturedTreasure", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBGameState_OnRep_TeamCapturedTreasure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBGameState_OnRep_TeamCapturedTreasure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBGameState_OnRep_TeamCapturedTreasure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASBGameState_OnRep_TeamCapturedTreasure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBGameState_OnRep_TreasureCapturesUpdate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBGameState_OnRep_TreasureCapturesUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameStates/SBGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBGameState_OnRep_TreasureCapturesUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBGameState, nullptr, "OnRep_TreasureCapturesUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBGameState_OnRep_TreasureCapturesUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBGameState_OnRep_TreasureCapturesUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBGameState_OnRep_TreasureCapturesUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASBGameState_OnRep_TreasureCapturesUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBGameState_OnRep_UpdateTeams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBGameState_OnRep_UpdateTeams_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//UFUNCTION(NetMulticast, Reliable)\n//void MulticastUpdateTeams();\n" },
		{ "ModuleRelativePath", "Public/GameStates/SBGameState.h" },
		{ "ToolTip", "UFUNCTION(NetMulticast, Reliable)\nvoid MulticastUpdateTeams();" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBGameState_OnRep_UpdateTeams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBGameState, nullptr, "OnRep_UpdateTeams", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBGameState_OnRep_UpdateTeams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBGameState_OnRep_UpdateTeams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBGameState_OnRep_UpdateTeams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASBGameState_OnRep_UpdateTeams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASBGameState);
	UClass* Z_Construct_UClass_ASBGameState_NoRegister()
	{
		return ASBGameState::StaticClass();
	}
	struct Z_Construct_UClass_ASBGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PirateTeam_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PirateTeam_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PirateTeam;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrivateerTeam_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrivateerTeam_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PrivateerTeam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewestCaptainState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewestCaptainState;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptainStates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptainStates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CaptainStates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInLobby_MetaData[];
#endif
		static void NewProp_bIsInLobby_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInLobby;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TeamCapturingTreasure_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeamCapturingTreasure_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TeamCapturingTreasure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TreasureActiveTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TreasureActiveTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TreasuresCaptured_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TreasuresCaptured;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TreasureLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TreasureLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameState,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBGameState_ClientPlayerBountyChanged, "ClientPlayerBountyChanged" }, // 297462251
		{ &Z_Construct_UFunction_ASBGameState_ClientPlayerKilled, "ClientPlayerKilled" }, // 1151896740
		{ &Z_Construct_UFunction_ASBGameState_ClientUpdateHUDCaptures, "ClientUpdateHUDCaptures" }, // 2714338242
		{ &Z_Construct_UFunction_ASBGameState_ClientUpdatePlayerKills, "ClientUpdatePlayerKills" }, // 182007049
		{ &Z_Construct_UFunction_ASBGameState_ClientUpdateTowerKills, "ClientUpdateTowerKills" }, // 1565021598
		{ &Z_Construct_UFunction_ASBGameState_ExtraHeartPiece, "ExtraHeartPiece" }, // 140478479
		{ &Z_Construct_UFunction_ASBGameState_MulticastBuildingDestroyed, "MulticastBuildingDestroyed" }, // 2119053792
		{ &Z_Construct_UFunction_ASBGameState_MulticastExtraHeartPiece, "MulticastExtraHeartPiece" }, // 3542986724
		{ &Z_Construct_UFunction_ASBGameState_OnRep_RegisterCaptainState, "OnRep_RegisterCaptainState" }, // 3604033185
		{ &Z_Construct_UFunction_ASBGameState_OnRep_TeamCapturedTreasure, "OnRep_TeamCapturedTreasure" }, // 644409071
		{ &Z_Construct_UFunction_ASBGameState_OnRep_TreasureCapturesUpdate, "OnRep_TreasureCapturesUpdate" }, // 374690387
		{ &Z_Construct_UFunction_ASBGameState_OnRep_UpdateTeams, "OnRep_UpdateTeams" }, // 178378144
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBGameState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameStates/SBGameState.h" },
		{ "ModuleRelativePath", "Public/GameStates/SBGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASBGameState_Statics::NewProp_PirateTeam_Inner = { "PirateTeam", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBGameState_Statics::NewProp_PirateTeam_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameStates/SBGameState.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBGameState_Statics::NewProp_PirateTeam = { "PirateTeam", "OnRep_UpdateTeams", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASBGameState, PirateTeam), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBGameState_Statics::NewProp_PirateTeam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBGameState_Statics::NewProp_PirateTeam_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASBGameState_Statics::NewProp_PrivateerTeam_Inner = { "PrivateerTeam", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBGameState_Statics::NewProp_PrivateerTeam_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameStates/SBGameState.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBGameState_Statics::NewProp_PrivateerTeam = { "PrivateerTeam", "OnRep_UpdateTeams", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASBGameState, PrivateerTeam), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBGameState_Statics::NewProp_PrivateerTeam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBGameState_Statics::NewProp_PrivateerTeam_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBGameState_Statics::NewProp_NewestCaptainState_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameStates/SBGameState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBGameState_Statics::NewProp_NewestCaptainState = { "NewestCaptainState", "OnRep_RegisterCaptainState", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASBGameState, NewestCaptainState), Z_Construct_UClass_ACaptainState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBGameState_Statics::NewProp_NewestCaptainState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBGameState_Statics::NewProp_NewestCaptainState_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBGameState_Statics::NewProp_CaptainStates_Inner = { "CaptainStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ACaptainState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBGameState_Statics::NewProp_CaptainStates_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameStates/SBGameState.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASBGameState_Statics::NewProp_CaptainStates = { "CaptainStates", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASBGameState, CaptainStates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASBGameState_Statics::NewProp_CaptainStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBGameState_Statics::NewProp_CaptainStates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBGameState_Statics::NewProp_bIsInLobby_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameStates/SBGameState.h" },
	};
#endif
	void Z_Construct_UClass_ASBGameState_Statics::NewProp_bIsInLobby_SetBit(void* Obj)
	{
		((ASBGameState*)Obj)->bIsInLobby = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASBGameState_Statics::NewProp_bIsInLobby = { "bIsInLobby", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ASBGameState), &Z_Construct_UClass_ASBGameState_Statics::NewProp_bIsInLobby_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASBGameState_Statics::NewProp_bIsInLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBGameState_Statics::NewProp_bIsInLobby_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASBGameState_Statics::NewProp_TeamCapturingTreasure_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBGameState_Statics::NewProp_TeamCapturingTreasure_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameStates/SBGameState.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASBGameState_Statics::NewProp_TeamCapturingTreasure = { "TeamCapturingTreasure", "OnRep_TeamCapturedTreasure", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASBGameState, TeamCapturingTreasure), Z_Construct_UEnum_Swashbucklers_ETeam, METADATA_PARAMS(Z_Construct_UClass_ASBGameState_Statics::NewProp_TeamCapturingTreasure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBGameState_Statics::NewProp_TeamCapturingTreasure_MetaData)) }; // 4006013224
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBGameState_Statics::NewProp_TreasureActiveTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameStates/SBGameState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBGameState_Statics::NewProp_TreasureActiveTime = { "TreasureActiveTime", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASBGameState, TreasureActiveTime), METADATA_PARAMS(Z_Construct_UClass_ASBGameState_Statics::NewProp_TreasureActiveTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBGameState_Statics::NewProp_TreasureActiveTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBGameState_Statics::NewProp_TreasuresCaptured_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameStates/SBGameState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASBGameState_Statics::NewProp_TreasuresCaptured = { "TreasuresCaptured", "OnRep_TreasureCapturesUpdate", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASBGameState, TreasuresCaptured), METADATA_PARAMS(Z_Construct_UClass_ASBGameState_Statics::NewProp_TreasuresCaptured_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBGameState_Statics::NewProp_TreasuresCaptured_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBGameState_Statics::NewProp_TreasureLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameStates/SBGameState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASBGameState_Statics::NewProp_TreasureLocation = { "TreasureLocation", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASBGameState, TreasureLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASBGameState_Statics::NewProp_TreasureLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBGameState_Statics::NewProp_TreasureLocation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBGameState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBGameState_Statics::NewProp_PirateTeam_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBGameState_Statics::NewProp_PirateTeam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBGameState_Statics::NewProp_PrivateerTeam_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBGameState_Statics::NewProp_PrivateerTeam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBGameState_Statics::NewProp_NewestCaptainState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBGameState_Statics::NewProp_CaptainStates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBGameState_Statics::NewProp_CaptainStates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBGameState_Statics::NewProp_bIsInLobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBGameState_Statics::NewProp_TeamCapturingTreasure_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBGameState_Statics::NewProp_TeamCapturingTreasure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBGameState_Statics::NewProp_TreasureActiveTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBGameState_Statics::NewProp_TreasuresCaptured,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBGameState_Statics::NewProp_TreasureLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBGameState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASBGameState_Statics::ClassParams = {
		&ASBGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBGameState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBGameState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBGameState()
	{
		if (!Z_Registration_Info_UClass_ASBGameState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASBGameState.OuterSingleton, Z_Construct_UClass_ASBGameState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASBGameState.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<ASBGameState>()
	{
		return ASBGameState::StaticClass();
	}

	void ASBGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_PirateTeam(TEXT("PirateTeam"));
		static const FName Name_PrivateerTeam(TEXT("PrivateerTeam"));
		static const FName Name_NewestCaptainState(TEXT("NewestCaptainState"));
		static const FName Name_CaptainStates(TEXT("CaptainStates"));
		static const FName Name_bIsInLobby(TEXT("bIsInLobby"));
		static const FName Name_TeamCapturingTreasure(TEXT("TeamCapturingTreasure"));
		static const FName Name_TreasureActiveTime(TEXT("TreasureActiveTime"));
		static const FName Name_TreasuresCaptured(TEXT("TreasuresCaptured"));
		static const FName Name_TreasureLocation(TEXT("TreasureLocation"));

		const bool bIsValid = true
			&& Name_PirateTeam == ClassReps[(int32)ENetFields_Private::PirateTeam].Property->GetFName()
			&& Name_PrivateerTeam == ClassReps[(int32)ENetFields_Private::PrivateerTeam].Property->GetFName()
			&& Name_NewestCaptainState == ClassReps[(int32)ENetFields_Private::NewestCaptainState].Property->GetFName()
			&& Name_CaptainStates == ClassReps[(int32)ENetFields_Private::CaptainStates].Property->GetFName()
			&& Name_bIsInLobby == ClassReps[(int32)ENetFields_Private::bIsInLobby].Property->GetFName()
			&& Name_TeamCapturingTreasure == ClassReps[(int32)ENetFields_Private::TeamCapturingTreasure].Property->GetFName()
			&& Name_TreasureActiveTime == ClassReps[(int32)ENetFields_Private::TreasureActiveTime].Property->GetFName()
			&& Name_TreasuresCaptured == ClassReps[(int32)ENetFields_Private::TreasuresCaptured].Property->GetFName()
			&& Name_TreasureLocation == ClassReps[(int32)ENetFields_Private::TreasureLocation].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASBGameState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBGameState);
	ASBGameState::~ASBGameState() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameStates_SBGameState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameStates_SBGameState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASBGameState, ASBGameState::StaticClass, TEXT("ASBGameState"), &Z_Registration_Info_UClass_ASBGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASBGameState), 217025779U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameStates_SBGameState_h_2260909642(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameStates_SBGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_GameStates_SBGameState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
