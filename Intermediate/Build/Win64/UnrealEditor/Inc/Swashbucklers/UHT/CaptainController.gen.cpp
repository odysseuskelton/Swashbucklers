// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/PlayerControllers/CaptainController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCaptainController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ACaptainController();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ACaptainController_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ACaptainState_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UClientLobbyMenu_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UInGameMenu_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UVictoryScreen_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	DEFINE_FUNCTION(ACaptainController::execOnRep_MatchStateSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MatchStateSet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACaptainController::execClientJoinMidgame)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_StateOfMatch);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Warmup);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToSpawnTreasure);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartingTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ActiveTreasureTime);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumCaps);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientJoinMidgame_Implementation(Z_Param_StateOfMatch,Z_Param_Warmup,Z_Param_TimeToSpawnTreasure,Z_Param_StartingTime,Z_Param_ActiveTreasureTime,Z_Param_NumCaps);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACaptainController::execServerCheckMatchState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerCheckMatchState_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACaptainController::execClientReportServerTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeOfClientRequest);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeServerReceivedClientRequest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientReportServerTime_Implementation(Z_Param_TimeOfClientRequest,Z_Param_TimeServerReceivedClientRequest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACaptainController::execServerRequestServerTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeOfClientRequest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerRequestServerTime_Implementation(Z_Param_TimeOfClientRequest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACaptainController::execOpenInGameMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenInGameMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACaptainController::execOnBountyChange)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Bounty);
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBountyChange(Z_Param_Bounty,Z_Param_DestroyedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACaptainController::execServerRequestSwitchTeam)
	{
		P_GET_OBJECT(ACaptainState,Z_Param_StateRequesting);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerRequestSwitchTeam_Implementation(Z_Param_StateRequesting);
		P_NATIVE_END;
	}
	struct CaptainController_eventClientJoinMidgame_Parms
	{
		FName StateOfMatch;
		float Warmup;
		float TimeToSpawnTreasure;
		float StartingTime;
		float ActiveTreasureTime;
		int32 NumCaps;
	};
	struct CaptainController_eventClientReportServerTime_Parms
	{
		float TimeOfClientRequest;
		float TimeServerReceivedClientRequest;
	};
	struct CaptainController_eventServerRequestServerTime_Parms
	{
		float TimeOfClientRequest;
	};
	struct CaptainController_eventServerRequestSwitchTeam_Parms
	{
		ACaptainState* StateRequesting;
	};
	static FName NAME_ACaptainController_ClientJoinMidgame = FName(TEXT("ClientJoinMidgame"));
	void ACaptainController::ClientJoinMidgame(FName StateOfMatch, float Warmup, float TimeToSpawnTreasure, float StartingTime, float ActiveTreasureTime, int32 NumCaps)
	{
		CaptainController_eventClientJoinMidgame_Parms Parms;
		Parms.StateOfMatch=StateOfMatch;
		Parms.Warmup=Warmup;
		Parms.TimeToSpawnTreasure=TimeToSpawnTreasure;
		Parms.StartingTime=StartingTime;
		Parms.ActiveTreasureTime=ActiveTreasureTime;
		Parms.NumCaps=NumCaps;
		ProcessEvent(FindFunctionChecked(NAME_ACaptainController_ClientJoinMidgame),&Parms);
	}
	static FName NAME_ACaptainController_ClientReportServerTime = FName(TEXT("ClientReportServerTime"));
	void ACaptainController::ClientReportServerTime(float TimeOfClientRequest, float TimeServerReceivedClientRequest)
	{
		CaptainController_eventClientReportServerTime_Parms Parms;
		Parms.TimeOfClientRequest=TimeOfClientRequest;
		Parms.TimeServerReceivedClientRequest=TimeServerReceivedClientRequest;
		ProcessEvent(FindFunctionChecked(NAME_ACaptainController_ClientReportServerTime),&Parms);
	}
	static FName NAME_ACaptainController_ServerCheckMatchState = FName(TEXT("ServerCheckMatchState"));
	void ACaptainController::ServerCheckMatchState()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACaptainController_ServerCheckMatchState),NULL);
	}
	static FName NAME_ACaptainController_ServerRequestServerTime = FName(TEXT("ServerRequestServerTime"));
	void ACaptainController::ServerRequestServerTime(float TimeOfClientRequest)
	{
		CaptainController_eventServerRequestServerTime_Parms Parms;
		Parms.TimeOfClientRequest=TimeOfClientRequest;
		ProcessEvent(FindFunctionChecked(NAME_ACaptainController_ServerRequestServerTime),&Parms);
	}
	static FName NAME_ACaptainController_ServerRequestSwitchTeam = FName(TEXT("ServerRequestSwitchTeam"));
	void ACaptainController::ServerRequestSwitchTeam(ACaptainState* StateRequesting)
	{
		CaptainController_eventServerRequestSwitchTeam_Parms Parms;
		Parms.StateRequesting=StateRequesting;
		ProcessEvent(FindFunctionChecked(NAME_ACaptainController_ServerRequestSwitchTeam),&Parms);
	}
	void ACaptainController::StaticRegisterNativesACaptainController()
	{
		UClass* Class = ACaptainController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientJoinMidgame", &ACaptainController::execClientJoinMidgame },
			{ "ClientReportServerTime", &ACaptainController::execClientReportServerTime },
			{ "OnBountyChange", &ACaptainController::execOnBountyChange },
			{ "OnRep_MatchStateSet", &ACaptainController::execOnRep_MatchStateSet },
			{ "OpenInGameMenu", &ACaptainController::execOpenInGameMenu },
			{ "ServerCheckMatchState", &ACaptainController::execServerCheckMatchState },
			{ "ServerRequestServerTime", &ACaptainController::execServerRequestServerTime },
			{ "ServerRequestSwitchTeam", &ACaptainController::execServerRequestSwitchTeam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACaptainController_ClientJoinMidgame_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_StateOfMatch;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Warmup;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToSpawnTreasure;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartingTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActiveTreasureTime;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumCaps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ACaptainController_ClientJoinMidgame_Statics::NewProp_StateOfMatch = { "StateOfMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CaptainController_eventClientJoinMidgame_Parms, StateOfMatch), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACaptainController_ClientJoinMidgame_Statics::NewProp_Warmup = { "Warmup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CaptainController_eventClientJoinMidgame_Parms, Warmup), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACaptainController_ClientJoinMidgame_Statics::NewProp_TimeToSpawnTreasure = { "TimeToSpawnTreasure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CaptainController_eventClientJoinMidgame_Parms, TimeToSpawnTreasure), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACaptainController_ClientJoinMidgame_Statics::NewProp_StartingTime = { "StartingTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CaptainController_eventClientJoinMidgame_Parms, StartingTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACaptainController_ClientJoinMidgame_Statics::NewProp_ActiveTreasureTime = { "ActiveTreasureTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CaptainController_eventClientJoinMidgame_Parms, ActiveTreasureTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACaptainController_ClientJoinMidgame_Statics::NewProp_NumCaps = { "NumCaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CaptainController_eventClientJoinMidgame_Parms, NumCaps), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptainController_ClientJoinMidgame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptainController_ClientJoinMidgame_Statics::NewProp_StateOfMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptainController_ClientJoinMidgame_Statics::NewProp_Warmup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptainController_ClientJoinMidgame_Statics::NewProp_TimeToSpawnTreasure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptainController_ClientJoinMidgame_Statics::NewProp_StartingTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptainController_ClientJoinMidgame_Statics::NewProp_ActiveTreasureTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptainController_ClientJoinMidgame_Statics::NewProp_NumCaps,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaptainController_ClientJoinMidgame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerControllers/CaptainController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptainController_ClientJoinMidgame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACaptainController, nullptr, "ClientJoinMidgame", nullptr, nullptr, sizeof(CaptainController_eventClientJoinMidgame_Parms), Z_Construct_UFunction_ACaptainController_ClientJoinMidgame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptainController_ClientJoinMidgame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACaptainController_ClientJoinMidgame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptainController_ClientJoinMidgame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACaptainController_ClientJoinMidgame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptainController_ClientJoinMidgame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACaptainController_ClientReportServerTime_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeOfClientRequest;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeServerReceivedClientRequest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACaptainController_ClientReportServerTime_Statics::NewProp_TimeOfClientRequest = { "TimeOfClientRequest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CaptainController_eventClientReportServerTime_Parms, TimeOfClientRequest), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACaptainController_ClientReportServerTime_Statics::NewProp_TimeServerReceivedClientRequest = { "TimeServerReceivedClientRequest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CaptainController_eventClientReportServerTime_Parms, TimeServerReceivedClientRequest), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptainController_ClientReportServerTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptainController_ClientReportServerTime_Statics::NewProp_TimeOfClientRequest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptainController_ClientReportServerTime_Statics::NewProp_TimeServerReceivedClientRequest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaptainController_ClientReportServerTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerControllers/CaptainController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptainController_ClientReportServerTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACaptainController, nullptr, "ClientReportServerTime", nullptr, nullptr, sizeof(CaptainController_eventClientReportServerTime_Parms), Z_Construct_UFunction_ACaptainController_ClientReportServerTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptainController_ClientReportServerTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACaptainController_ClientReportServerTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptainController_ClientReportServerTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACaptainController_ClientReportServerTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptainController_ClientReportServerTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACaptainController_OnBountyChange_Statics
	{
		struct CaptainController_eventOnBountyChange_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACaptainController_OnBountyChange_Statics::NewProp_Bounty = { "Bounty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CaptainController_eventOnBountyChange_Parms, Bounty), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACaptainController_OnBountyChange_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CaptainController_eventOnBountyChange_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptainController_OnBountyChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptainController_OnBountyChange_Statics::NewProp_Bounty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptainController_OnBountyChange_Statics::NewProp_DestroyedActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaptainController_OnBountyChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerControllers/CaptainController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptainController_OnBountyChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACaptainController, nullptr, "OnBountyChange", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACaptainController_OnBountyChange_Statics::CaptainController_eventOnBountyChange_Parms), Z_Construct_UFunction_ACaptainController_OnBountyChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptainController_OnBountyChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACaptainController_OnBountyChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptainController_OnBountyChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACaptainController_OnBountyChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptainController_OnBountyChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACaptainController_OnRep_MatchStateSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaptainController_OnRep_MatchStateSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerControllers/CaptainController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptainController_OnRep_MatchStateSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACaptainController, nullptr, "OnRep_MatchStateSet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACaptainController_OnRep_MatchStateSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptainController_OnRep_MatchStateSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACaptainController_OnRep_MatchStateSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptainController_OnRep_MatchStateSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACaptainController_OpenInGameMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaptainController_OpenInGameMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerControllers/CaptainController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptainController_OpenInGameMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACaptainController, nullptr, "OpenInGameMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACaptainController_OpenInGameMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptainController_OpenInGameMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACaptainController_OpenInGameMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptainController_OpenInGameMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACaptainController_ServerCheckMatchState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaptainController_ServerCheckMatchState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerControllers/CaptainController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptainController_ServerCheckMatchState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACaptainController, nullptr, "ServerCheckMatchState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACaptainController_ServerCheckMatchState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptainController_ServerCheckMatchState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACaptainController_ServerCheckMatchState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptainController_ServerCheckMatchState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACaptainController_ServerRequestServerTime_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeOfClientRequest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACaptainController_ServerRequestServerTime_Statics::NewProp_TimeOfClientRequest = { "TimeOfClientRequest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CaptainController_eventServerRequestServerTime_Parms, TimeOfClientRequest), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptainController_ServerRequestServerTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptainController_ServerRequestServerTime_Statics::NewProp_TimeOfClientRequest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaptainController_ServerRequestServerTime_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Sync with server time\n" },
		{ "ModuleRelativePath", "Public/PlayerControllers/CaptainController.h" },
		{ "ToolTip", "Sync with server time" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptainController_ServerRequestServerTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACaptainController, nullptr, "ServerRequestServerTime", nullptr, nullptr, sizeof(CaptainController_eventServerRequestServerTime_Parms), Z_Construct_UFunction_ACaptainController_ServerRequestServerTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptainController_ServerRequestServerTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACaptainController_ServerRequestServerTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptainController_ServerRequestServerTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACaptainController_ServerRequestServerTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptainController_ServerRequestServerTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACaptainController_ServerRequestSwitchTeam_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StateRequesting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACaptainController_ServerRequestSwitchTeam_Statics::NewProp_StateRequesting = { "StateRequesting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CaptainController_eventServerRequestSwitchTeam_Parms, StateRequesting), Z_Construct_UClass_ACaptainState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptainController_ServerRequestSwitchTeam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptainController_ServerRequestSwitchTeam_Statics::NewProp_StateRequesting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaptainController_ServerRequestSwitchTeam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerControllers/CaptainController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptainController_ServerRequestSwitchTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACaptainController, nullptr, "ServerRequestSwitchTeam", nullptr, nullptr, sizeof(CaptainController_eventServerRequestSwitchTeam_Parms), Z_Construct_UFunction_ACaptainController_ServerRequestSwitchTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptainController_ServerRequestSwitchTeam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACaptainController_ServerRequestSwitchTeam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptainController_ServerRequestSwitchTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACaptainController_ServerRequestSwitchTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptainController_ServerRequestSwitchTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACaptainController);
	UClass* Z_Construct_UClass_ACaptainController_NoRegister()
	{
		return ACaptainController::StaticClass();
	}
	struct Z_Construct_UClass_ACaptainController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeSyncFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSyncFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerControllerContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerControllerContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InGameMenuAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InGameMenuAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeaderboardAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InGameMenuClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InGameMenuClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientLobbyMenuClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ClientLobbyMenuClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InGameMenuWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InGameMenuWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientLobbyMenu_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ClientLobbyMenu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PirateVictoryScreenClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PirateVictoryScreenClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrivateerVictoryScreenClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PrivateerVictoryScreenClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnToMainMenuDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnToMainMenuDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchState_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MatchState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACaptainController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACaptainController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACaptainController_ClientJoinMidgame, "ClientJoinMidgame" }, // 1041849414
		{ &Z_Construct_UFunction_ACaptainController_ClientReportServerTime, "ClientReportServerTime" }, // 2460755946
		{ &Z_Construct_UFunction_ACaptainController_OnBountyChange, "OnBountyChange" }, // 1068069182
		{ &Z_Construct_UFunction_ACaptainController_OnRep_MatchStateSet, "OnRep_MatchStateSet" }, // 3370636053
		{ &Z_Construct_UFunction_ACaptainController_OpenInGameMenu, "OpenInGameMenu" }, // 157442187
		{ &Z_Construct_UFunction_ACaptainController_ServerCheckMatchState, "ServerCheckMatchState" }, // 1695638003
		{ &Z_Construct_UFunction_ACaptainController_ServerRequestServerTime, "ServerRequestServerTime" }, // 3545664367
		{ &Z_Construct_UFunction_ACaptainController_ServerRequestSwitchTeam, "ServerRequestSwitchTeam" }, // 1498158293
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptainController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PlayerControllers/CaptainController.h" },
		{ "ModuleRelativePath", "Public/PlayerControllers/CaptainController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptainController_Statics::NewProp_TimeSyncFrequency_MetaData[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "Public/PlayerControllers/CaptainController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACaptainController_Statics::NewProp_TimeSyncFrequency = { "TimeSyncFrequency", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACaptainController, TimeSyncFrequency), METADATA_PARAMS(Z_Construct_UClass_ACaptainController_Statics::NewProp_TimeSyncFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptainController_Statics::NewProp_TimeSyncFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptainController_Statics::NewProp_PlayerControllerContext_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "//Input\n" },
		{ "ModuleRelativePath", "Public/PlayerControllers/CaptainController.h" },
		{ "ToolTip", "Input" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptainController_Statics::NewProp_PlayerControllerContext = { "PlayerControllerContext", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACaptainController, PlayerControllerContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaptainController_Statics::NewProp_PlayerControllerContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptainController_Statics::NewProp_PlayerControllerContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptainController_Statics::NewProp_InGameMenuAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/PlayerControllers/CaptainController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptainController_Statics::NewProp_InGameMenuAction = { "InGameMenuAction", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACaptainController, InGameMenuAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaptainController_Statics::NewProp_InGameMenuAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptainController_Statics::NewProp_InGameMenuAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptainController_Statics::NewProp_LeaderboardAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/PlayerControllers/CaptainController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptainController_Statics::NewProp_LeaderboardAction = { "LeaderboardAction", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACaptainController, LeaderboardAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaptainController_Statics::NewProp_LeaderboardAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptainController_Statics::NewProp_LeaderboardAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptainController_Statics::NewProp_InGameMenuClass_MetaData[] = {
		{ "Category", "CaptainController" },
		{ "ModuleRelativePath", "Public/PlayerControllers/CaptainController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACaptainController_Statics::NewProp_InGameMenuClass = { "InGameMenuClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACaptainController, InGameMenuClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInGameMenu_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaptainController_Statics::NewProp_InGameMenuClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptainController_Statics::NewProp_InGameMenuClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptainController_Statics::NewProp_ClientLobbyMenuClass_MetaData[] = {
		{ "Category", "CaptainController" },
		{ "ModuleRelativePath", "Public/PlayerControllers/CaptainController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACaptainController_Statics::NewProp_ClientLobbyMenuClass = { "ClientLobbyMenuClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACaptainController, ClientLobbyMenuClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UClientLobbyMenu_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaptainController_Statics::NewProp_ClientLobbyMenuClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptainController_Statics::NewProp_ClientLobbyMenuClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptainController_Statics::NewProp_InGameMenuWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerControllers/CaptainController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptainController_Statics::NewProp_InGameMenuWidget = { "InGameMenuWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACaptainController, InGameMenuWidget), Z_Construct_UClass_UInGameMenu_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaptainController_Statics::NewProp_InGameMenuWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptainController_Statics::NewProp_InGameMenuWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptainController_Statics::NewProp_ClientLobbyMenu_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerControllers/CaptainController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptainController_Statics::NewProp_ClientLobbyMenu = { "ClientLobbyMenu", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACaptainController, ClientLobbyMenu), Z_Construct_UClass_UClientLobbyMenu_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaptainController_Statics::NewProp_ClientLobbyMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptainController_Statics::NewProp_ClientLobbyMenu_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptainController_Statics::NewProp_PirateVictoryScreenClass_MetaData[] = {
		{ "Category", "CaptainController" },
		{ "ModuleRelativePath", "Public/PlayerControllers/CaptainController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACaptainController_Statics::NewProp_PirateVictoryScreenClass = { "PirateVictoryScreenClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACaptainController, PirateVictoryScreenClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UVictoryScreen_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaptainController_Statics::NewProp_PirateVictoryScreenClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptainController_Statics::NewProp_PirateVictoryScreenClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptainController_Statics::NewProp_PrivateerVictoryScreenClass_MetaData[] = {
		{ "Category", "CaptainController" },
		{ "ModuleRelativePath", "Public/PlayerControllers/CaptainController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACaptainController_Statics::NewProp_PrivateerVictoryScreenClass = { "PrivateerVictoryScreenClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACaptainController, PrivateerVictoryScreenClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UVictoryScreen_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaptainController_Statics::NewProp_PrivateerVictoryScreenClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptainController_Statics::NewProp_PrivateerVictoryScreenClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptainController_Statics::NewProp_ReturnToMainMenuDelay_MetaData[] = {
		{ "Category", "CaptainController" },
		{ "ModuleRelativePath", "Public/PlayerControllers/CaptainController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACaptainController_Statics::NewProp_ReturnToMainMenuDelay = { "ReturnToMainMenuDelay", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACaptainController, ReturnToMainMenuDelay), METADATA_PARAMS(Z_Construct_UClass_ACaptainController_Statics::NewProp_ReturnToMainMenuDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptainController_Statics::NewProp_ReturnToMainMenuDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptainController_Statics::NewProp_MatchState_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerControllers/CaptainController.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ACaptainController_Statics::NewProp_MatchState = { "MatchState", "OnRep_MatchStateSet", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACaptainController, MatchState), METADATA_PARAMS(Z_Construct_UClass_ACaptainController_Statics::NewProp_MatchState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptainController_Statics::NewProp_MatchState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACaptainController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptainController_Statics::NewProp_TimeSyncFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptainController_Statics::NewProp_PlayerControllerContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptainController_Statics::NewProp_InGameMenuAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptainController_Statics::NewProp_LeaderboardAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptainController_Statics::NewProp_InGameMenuClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptainController_Statics::NewProp_ClientLobbyMenuClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptainController_Statics::NewProp_InGameMenuWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptainController_Statics::NewProp_ClientLobbyMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptainController_Statics::NewProp_PirateVictoryScreenClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptainController_Statics::NewProp_PrivateerVictoryScreenClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptainController_Statics::NewProp_ReturnToMainMenuDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptainController_Statics::NewProp_MatchState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACaptainController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACaptainController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACaptainController_Statics::ClassParams = {
		&ACaptainController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACaptainController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACaptainController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACaptainController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptainController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACaptainController()
	{
		if (!Z_Registration_Info_UClass_ACaptainController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACaptainController.OuterSingleton, Z_Construct_UClass_ACaptainController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACaptainController.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<ACaptainController>()
	{
		return ACaptainController::StaticClass();
	}

	void ACaptainController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_MatchState(TEXT("MatchState"));

		const bool bIsValid = true
			&& Name_MatchState == ClassReps[(int32)ENetFields_Private::MatchState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACaptainController"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACaptainController);
	ACaptainController::~ACaptainController() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_PlayerControllers_CaptainController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_PlayerControllers_CaptainController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACaptainController, ACaptainController::StaticClass, TEXT("ACaptainController"), &Z_Registration_Info_UClass_ACaptainController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACaptainController), 3112716051U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_PlayerControllers_CaptainController_h_2059490454(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_PlayerControllers_CaptainController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_PlayerControllers_CaptainController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
