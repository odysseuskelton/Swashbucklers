// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/PlayerStates/CaptainState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCaptainState() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ACaptainState();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ACaptainState_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_AShip_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UCaptainStateInterface_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_USBAbilitySystemComponent_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_USBAttributeSet_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_USBGameplayAbility_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_USlotInterface_NoRegister();
	SWASHBUCKLERS_API UEnum* Z_Construct_UEnum_Swashbucklers_EAbilitySlot();
	SWASHBUCKLERS_API UEnum* Z_Construct_UEnum_Swashbucklers_EBuildingType();
	SWASHBUCKLERS_API UEnum* Z_Construct_UEnum_Swashbucklers_ETeam();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	DEFINE_FUNCTION(ACaptainState::execClientActivateSlotCooldown)
	{
		P_GET_OBJECT(UClass,Z_Param_AbilityInSlotToActivate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientActivateSlotCooldown_Implementation(Z_Param_AbilityInSlotToActivate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACaptainState::execGetPlayerTeam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETeam*)Z_Param__Result=P_THIS->GetPlayerTeam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACaptainState::execOnRep_Team)
	{
		P_GET_ENUM(ETeam,Z_Param_TeamToSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Team(ETeam(Z_Param_TeamToSet));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACaptainState::execServerRegisterCaptainState)
	{
		P_GET_OBJECT(ACaptainState,Z_Param_CaptainState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerRegisterCaptainState_Implementation(Z_Param_CaptainState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACaptainState::execOnRep_Slot4Change)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Slot4Change();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACaptainState::execOnRep_Slot3Change)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Slot3Change();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACaptainState::execOnRep_Slot2Change)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Slot2Change();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACaptainState::execOnRep_Slot1Change)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Slot1Change();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACaptainState::execServerBuyAbility)
	{
		P_GET_OBJECT(UClass,Z_Param_AbilityToBuy);
		P_GET_ENUM(EAbilitySlot,Z_Param_SlotSelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerBuyAbility_Implementation(Z_Param_AbilityToBuy,EAbilitySlot(Z_Param_SlotSelected));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACaptainState::execServerSwitchShips)
	{
		P_GET_OBJECT(UClass,Z_Param_ShipToSwitchTo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSwitchShips_Implementation(Z_Param_ShipToSwitchTo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACaptainState::execServerBuyShip)
	{
		P_GET_OBJECT(UClass,Z_Param_ShipToBuy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerBuyShip_Implementation(Z_Param_ShipToBuy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACaptainState::execBuildingDestroyedNotification)
	{
		P_GET_ENUM(EBuildingType,Z_Param_BuildingTypeDestroyed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuildingDestroyedNotification(EBuildingType(Z_Param_BuildingTypeDestroyed));
		P_NATIVE_END;
	}
	struct CaptainState_eventClientActivateSlotCooldown_Parms
	{
		TSubclassOf<USBGameplayAbility>  AbilityInSlotToActivate;
	};
	struct CaptainState_eventServerBuyAbility_Parms
	{
		TSubclassOf<USBGameplayAbility>  AbilityToBuy;
		EAbilitySlot SlotSelected;
	};
	struct CaptainState_eventServerBuyShip_Parms
	{
		TSubclassOf<AShip>  ShipToBuy;
	};
	struct CaptainState_eventServerRegisterCaptainState_Parms
	{
		ACaptainState* CaptainState;
	};
	struct CaptainState_eventServerSwitchShips_Parms
	{
		TSubclassOf<AShip>  ShipToSwitchTo;
	};
	static FName NAME_ACaptainState_ClientActivateSlotCooldown = FName(TEXT("ClientActivateSlotCooldown"));
	void ACaptainState::ClientActivateSlotCooldown(TSubclassOf<USBGameplayAbility>  AbilityInSlotToActivate)
	{
		CaptainState_eventClientActivateSlotCooldown_Parms Parms;
		Parms.AbilityInSlotToActivate=AbilityInSlotToActivate;
		ProcessEvent(FindFunctionChecked(NAME_ACaptainState_ClientActivateSlotCooldown),&Parms);
	}
	static FName NAME_ACaptainState_ServerBuyAbility = FName(TEXT("ServerBuyAbility"));
	void ACaptainState::ServerBuyAbility(TSubclassOf<USBGameplayAbility>  AbilityToBuy, EAbilitySlot SlotSelected)
	{
		CaptainState_eventServerBuyAbility_Parms Parms;
		Parms.AbilityToBuy=AbilityToBuy;
		Parms.SlotSelected=SlotSelected;
		ProcessEvent(FindFunctionChecked(NAME_ACaptainState_ServerBuyAbility),&Parms);
	}
	static FName NAME_ACaptainState_ServerBuyShip = FName(TEXT("ServerBuyShip"));
	void ACaptainState::ServerBuyShip(TSubclassOf<AShip>  ShipToBuy)
	{
		CaptainState_eventServerBuyShip_Parms Parms;
		Parms.ShipToBuy=ShipToBuy;
		ProcessEvent(FindFunctionChecked(NAME_ACaptainState_ServerBuyShip),&Parms);
	}
	static FName NAME_ACaptainState_ServerRegisterCaptainState = FName(TEXT("ServerRegisterCaptainState"));
	void ACaptainState::ServerRegisterCaptainState(ACaptainState* CaptainState)
	{
		CaptainState_eventServerRegisterCaptainState_Parms Parms;
		Parms.CaptainState=CaptainState;
		ProcessEvent(FindFunctionChecked(NAME_ACaptainState_ServerRegisterCaptainState),&Parms);
	}
	static FName NAME_ACaptainState_ServerSwitchShips = FName(TEXT("ServerSwitchShips"));
	void ACaptainState::ServerSwitchShips(TSubclassOf<AShip>  ShipToSwitchTo)
	{
		CaptainState_eventServerSwitchShips_Parms Parms;
		Parms.ShipToSwitchTo=ShipToSwitchTo;
		ProcessEvent(FindFunctionChecked(NAME_ACaptainState_ServerSwitchShips),&Parms);
	}
	void ACaptainState::StaticRegisterNativesACaptainState()
	{
		UClass* Class = ACaptainState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuildingDestroyedNotification", &ACaptainState::execBuildingDestroyedNotification },
			{ "ClientActivateSlotCooldown", &ACaptainState::execClientActivateSlotCooldown },
			{ "GetPlayerTeam", &ACaptainState::execGetPlayerTeam },
			{ "OnRep_Slot1Change", &ACaptainState::execOnRep_Slot1Change },
			{ "OnRep_Slot2Change", &ACaptainState::execOnRep_Slot2Change },
			{ "OnRep_Slot3Change", &ACaptainState::execOnRep_Slot3Change },
			{ "OnRep_Slot4Change", &ACaptainState::execOnRep_Slot4Change },
			{ "OnRep_Team", &ACaptainState::execOnRep_Team },
			{ "ServerBuyAbility", &ACaptainState::execServerBuyAbility },
			{ "ServerBuyShip", &ACaptainState::execServerBuyShip },
			{ "ServerRegisterCaptainState", &ACaptainState::execServerRegisterCaptainState },
			{ "ServerSwitchShips", &ACaptainState::execServerSwitchShips },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACaptainState_BuildingDestroyedNotification_Statics
	{
		struct CaptainState_eventBuildingDestroyedNotification_Parms
		{
			EBuildingType BuildingTypeDestroyed;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_BuildingTypeDestroyed_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BuildingTypeDestroyed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACaptainState_BuildingDestroyedNotification_Statics::NewProp_BuildingTypeDestroyed_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACaptainState_BuildingDestroyedNotification_Statics::NewProp_BuildingTypeDestroyed = { "BuildingTypeDestroyed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CaptainState_eventBuildingDestroyedNotification_Parms, BuildingTypeDestroyed), Z_Construct_UEnum_Swashbucklers_EBuildingType, METADATA_PARAMS(nullptr, 0) }; // 1602796454
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptainState_BuildingDestroyedNotification_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptainState_BuildingDestroyedNotification_Statics::NewProp_BuildingTypeDestroyed_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptainState_BuildingDestroyedNotification_Statics::NewProp_BuildingTypeDestroyed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaptainState_BuildingDestroyedNotification_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerStates/CaptainState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptainState_BuildingDestroyedNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACaptainState, nullptr, "BuildingDestroyedNotification", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACaptainState_BuildingDestroyedNotification_Statics::CaptainState_eventBuildingDestroyedNotification_Parms), Z_Construct_UFunction_ACaptainState_BuildingDestroyedNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptainState_BuildingDestroyedNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACaptainState_BuildingDestroyedNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptainState_BuildingDestroyedNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACaptainState_BuildingDestroyedNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptainState_BuildingDestroyedNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACaptainState_ClientActivateSlotCooldown_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityInSlotToActivate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ACaptainState_ClientActivateSlotCooldown_Statics::NewProp_AbilityInSlotToActivate = { "AbilityInSlotToActivate", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CaptainState_eventClientActivateSlotCooldown_Parms, AbilityInSlotToActivate), Z_Construct_UClass_UClass, Z_Construct_UClass_USBGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptainState_ClientActivateSlotCooldown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptainState_ClientActivateSlotCooldown_Statics::NewProp_AbilityInSlotToActivate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaptainState_ClientActivateSlotCooldown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerStates/CaptainState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptainState_ClientActivateSlotCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACaptainState, nullptr, "ClientActivateSlotCooldown", nullptr, nullptr, sizeof(CaptainState_eventClientActivateSlotCooldown_Parms), Z_Construct_UFunction_ACaptainState_ClientActivateSlotCooldown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptainState_ClientActivateSlotCooldown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACaptainState_ClientActivateSlotCooldown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptainState_ClientActivateSlotCooldown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACaptainState_ClientActivateSlotCooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptainState_ClientActivateSlotCooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACaptainState_GetPlayerTeam_Statics
	{
		struct CaptainState_eventGetPlayerTeam_Parms
		{
			ETeam ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACaptainState_GetPlayerTeam_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACaptainState_GetPlayerTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CaptainState_eventGetPlayerTeam_Parms, ReturnValue), Z_Construct_UEnum_Swashbucklers_ETeam, METADATA_PARAMS(nullptr, 0) }; // 4006013224
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptainState_GetPlayerTeam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptainState_GetPlayerTeam_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptainState_GetPlayerTeam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaptainState_GetPlayerTeam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerStates/CaptainState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptainState_GetPlayerTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACaptainState, nullptr, "GetPlayerTeam", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACaptainState_GetPlayerTeam_Statics::CaptainState_eventGetPlayerTeam_Parms), Z_Construct_UFunction_ACaptainState_GetPlayerTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptainState_GetPlayerTeam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACaptainState_GetPlayerTeam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptainState_GetPlayerTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACaptainState_GetPlayerTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptainState_GetPlayerTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACaptainState_OnRep_Slot1Change_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaptainState_OnRep_Slot1Change_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerStates/CaptainState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptainState_OnRep_Slot1Change_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACaptainState, nullptr, "OnRep_Slot1Change", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACaptainState_OnRep_Slot1Change_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptainState_OnRep_Slot1Change_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACaptainState_OnRep_Slot1Change()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptainState_OnRep_Slot1Change_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACaptainState_OnRep_Slot2Change_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaptainState_OnRep_Slot2Change_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerStates/CaptainState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptainState_OnRep_Slot2Change_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACaptainState, nullptr, "OnRep_Slot2Change", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACaptainState_OnRep_Slot2Change_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptainState_OnRep_Slot2Change_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACaptainState_OnRep_Slot2Change()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptainState_OnRep_Slot2Change_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACaptainState_OnRep_Slot3Change_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaptainState_OnRep_Slot3Change_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerStates/CaptainState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptainState_OnRep_Slot3Change_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACaptainState, nullptr, "OnRep_Slot3Change", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACaptainState_OnRep_Slot3Change_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptainState_OnRep_Slot3Change_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACaptainState_OnRep_Slot3Change()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptainState_OnRep_Slot3Change_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACaptainState_OnRep_Slot4Change_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaptainState_OnRep_Slot4Change_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerStates/CaptainState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptainState_OnRep_Slot4Change_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACaptainState, nullptr, "OnRep_Slot4Change", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACaptainState_OnRep_Slot4Change_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptainState_OnRep_Slot4Change_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACaptainState_OnRep_Slot4Change()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptainState_OnRep_Slot4Change_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACaptainState_OnRep_Team_Statics
	{
		struct CaptainState_eventOnRep_Team_Parms
		{
			ETeam TeamToSet;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_TeamToSet_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TeamToSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACaptainState_OnRep_Team_Statics::NewProp_TeamToSet_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACaptainState_OnRep_Team_Statics::NewProp_TeamToSet = { "TeamToSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CaptainState_eventOnRep_Team_Parms, TeamToSet), Z_Construct_UEnum_Swashbucklers_ETeam, METADATA_PARAMS(nullptr, 0) }; // 4006013224
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptainState_OnRep_Team_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptainState_OnRep_Team_Statics::NewProp_TeamToSet_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptainState_OnRep_Team_Statics::NewProp_TeamToSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaptainState_OnRep_Team_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerStates/CaptainState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptainState_OnRep_Team_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACaptainState, nullptr, "OnRep_Team", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACaptainState_OnRep_Team_Statics::CaptainState_eventOnRep_Team_Parms), Z_Construct_UFunction_ACaptainState_OnRep_Team_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptainState_OnRep_Team_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACaptainState_OnRep_Team_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptainState_OnRep_Team_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACaptainState_OnRep_Team()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptainState_OnRep_Team_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACaptainState_ServerBuyAbility_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityToBuy;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SlotSelected_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SlotSelected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ACaptainState_ServerBuyAbility_Statics::NewProp_AbilityToBuy = { "AbilityToBuy", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CaptainState_eventServerBuyAbility_Parms, AbilityToBuy), Z_Construct_UClass_UClass, Z_Construct_UClass_USBGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACaptainState_ServerBuyAbility_Statics::NewProp_SlotSelected_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACaptainState_ServerBuyAbility_Statics::NewProp_SlotSelected = { "SlotSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CaptainState_eventServerBuyAbility_Parms, SlotSelected), Z_Construct_UEnum_Swashbucklers_EAbilitySlot, METADATA_PARAMS(nullptr, 0) }; // 1220480195
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptainState_ServerBuyAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptainState_ServerBuyAbility_Statics::NewProp_AbilityToBuy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptainState_ServerBuyAbility_Statics::NewProp_SlotSelected_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptainState_ServerBuyAbility_Statics::NewProp_SlotSelected,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaptainState_ServerBuyAbility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerStates/CaptainState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptainState_ServerBuyAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACaptainState, nullptr, "ServerBuyAbility", nullptr, nullptr, sizeof(CaptainState_eventServerBuyAbility_Parms), Z_Construct_UFunction_ACaptainState_ServerBuyAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptainState_ServerBuyAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACaptainState_ServerBuyAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptainState_ServerBuyAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACaptainState_ServerBuyAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptainState_ServerBuyAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACaptainState_ServerBuyShip_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_ShipToBuy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ACaptainState_ServerBuyShip_Statics::NewProp_ShipToBuy = { "ShipToBuy", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CaptainState_eventServerBuyShip_Parms, ShipToBuy), Z_Construct_UClass_UClass, Z_Construct_UClass_AShip_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptainState_ServerBuyShip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptainState_ServerBuyShip_Statics::NewProp_ShipToBuy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaptainState_ServerBuyShip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerStates/CaptainState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptainState_ServerBuyShip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACaptainState, nullptr, "ServerBuyShip", nullptr, nullptr, sizeof(CaptainState_eventServerBuyShip_Parms), Z_Construct_UFunction_ACaptainState_ServerBuyShip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptainState_ServerBuyShip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACaptainState_ServerBuyShip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptainState_ServerBuyShip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACaptainState_ServerBuyShip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptainState_ServerBuyShip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACaptainState_ServerRegisterCaptainState_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptainState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACaptainState_ServerRegisterCaptainState_Statics::NewProp_CaptainState = { "CaptainState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CaptainState_eventServerRegisterCaptainState_Parms, CaptainState), Z_Construct_UClass_ACaptainState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptainState_ServerRegisterCaptainState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptainState_ServerRegisterCaptainState_Statics::NewProp_CaptainState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaptainState_ServerRegisterCaptainState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerStates/CaptainState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptainState_ServerRegisterCaptainState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACaptainState, nullptr, "ServerRegisterCaptainState", nullptr, nullptr, sizeof(CaptainState_eventServerRegisterCaptainState_Parms), Z_Construct_UFunction_ACaptainState_ServerRegisterCaptainState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptainState_ServerRegisterCaptainState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACaptainState_ServerRegisterCaptainState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptainState_ServerRegisterCaptainState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACaptainState_ServerRegisterCaptainState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptainState_ServerRegisterCaptainState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACaptainState_ServerSwitchShips_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_ShipToSwitchTo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ACaptainState_ServerSwitchShips_Statics::NewProp_ShipToSwitchTo = { "ShipToSwitchTo", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CaptainState_eventServerSwitchShips_Parms, ShipToSwitchTo), Z_Construct_UClass_UClass, Z_Construct_UClass_AShip_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACaptainState_ServerSwitchShips_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACaptainState_ServerSwitchShips_Statics::NewProp_ShipToSwitchTo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACaptainState_ServerSwitchShips_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerStates/CaptainState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACaptainState_ServerSwitchShips_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACaptainState, nullptr, "ServerSwitchShips", nullptr, nullptr, sizeof(CaptainState_eventServerSwitchShips_Parms), Z_Construct_UFunction_ACaptainState_ServerSwitchShips_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptainState_ServerSwitchShips_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACaptainState_ServerSwitchShips_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACaptainState_ServerSwitchShips_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACaptainState_ServerSwitchShips()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACaptainState_ServerSwitchShips_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACaptainState);
	UClass* Z_Construct_UClass_ACaptainState_NoRegister()
	{
		return ACaptainState::StaticClass();
	}
	struct Z_Construct_UClass_ACaptainState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultShip_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultShip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentShip_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CurrentShip;
		static const UECodeGen_Private::FClassPropertyParams NewProp_StartingAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StartingAbilities;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManaRegenEffectClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ManaRegenEffectClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthRegenEffectClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_HealthRegenEffectClass;
		static const UECodeGen_Private::FClassPropertyParams NewProp_OwnedShips_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnedShips_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OwnedShips;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
		static const UECodeGen_Private::FClassPropertyParams NewProp_OwnedAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnedAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OwnedAbilities;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlayerTeam_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerTeam_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlayerTeam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot1_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Slot1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot2_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Slot2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot3_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Slot3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot4_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Slot4;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACaptainState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACaptainState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACaptainState_BuildingDestroyedNotification, "BuildingDestroyedNotification" }, // 1004175479
		{ &Z_Construct_UFunction_ACaptainState_ClientActivateSlotCooldown, "ClientActivateSlotCooldown" }, // 1895199675
		{ &Z_Construct_UFunction_ACaptainState_GetPlayerTeam, "GetPlayerTeam" }, // 9704339
		{ &Z_Construct_UFunction_ACaptainState_OnRep_Slot1Change, "OnRep_Slot1Change" }, // 1305043777
		{ &Z_Construct_UFunction_ACaptainState_OnRep_Slot2Change, "OnRep_Slot2Change" }, // 2397927791
		{ &Z_Construct_UFunction_ACaptainState_OnRep_Slot3Change, "OnRep_Slot3Change" }, // 1259638849
		{ &Z_Construct_UFunction_ACaptainState_OnRep_Slot4Change, "OnRep_Slot4Change" }, // 648233958
		{ &Z_Construct_UFunction_ACaptainState_OnRep_Team, "OnRep_Team" }, // 1106389286
		{ &Z_Construct_UFunction_ACaptainState_ServerBuyAbility, "ServerBuyAbility" }, // 1740640530
		{ &Z_Construct_UFunction_ACaptainState_ServerBuyShip, "ServerBuyShip" }, // 145937139
		{ &Z_Construct_UFunction_ACaptainState_ServerRegisterCaptainState, "ServerRegisterCaptainState" }, // 2004054111
		{ &Z_Construct_UFunction_ACaptainState_ServerSwitchShips, "ServerSwitchShips" }, // 795981279
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptainState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PlayerStates/CaptainState.h" },
		{ "ModuleRelativePath", "Public/PlayerStates/CaptainState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptainState_Statics::NewProp_DefaultShip_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "CaptainState" },
		{ "ModuleRelativePath", "Public/PlayerStates/CaptainState.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACaptainState_Statics::NewProp_DefaultShip = { "DefaultShip", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACaptainState, DefaultShip), Z_Construct_UClass_UClass, Z_Construct_UClass_AShip_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaptainState_Statics::NewProp_DefaultShip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptainState_Statics::NewProp_DefaultShip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptainState_Statics::NewProp_CurrentShip_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "CaptainState" },
		{ "ModuleRelativePath", "Public/PlayerStates/CaptainState.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACaptainState_Statics::NewProp_CurrentShip = { "CurrentShip", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACaptainState, CurrentShip), Z_Construct_UClass_UClass, Z_Construct_UClass_AShip_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaptainState_Statics::NewProp_CurrentShip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptainState_Statics::NewProp_CurrentShip_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACaptainState_Statics::NewProp_StartingAbilities_Inner = { "StartingAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_USBGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptainState_Statics::NewProp_StartingAbilities_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "AbilitySystem" },
		{ "ModuleRelativePath", "Public/PlayerStates/CaptainState.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACaptainState_Statics::NewProp_StartingAbilities = { "StartingAbilities", nullptr, (EPropertyFlags)0x0014000000000025, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACaptainState, StartingAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACaptainState_Statics::NewProp_StartingAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptainState_Statics::NewProp_StartingAbilities_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptainState_Statics::NewProp_ManaRegenEffectClass_MetaData[] = {
		{ "Category", "CaptainState" },
		{ "Comment", "//Regen\n" },
		{ "ModuleRelativePath", "Public/PlayerStates/CaptainState.h" },
		{ "ToolTip", "Regen" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACaptainState_Statics::NewProp_ManaRegenEffectClass = { "ManaRegenEffectClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACaptainState, ManaRegenEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaptainState_Statics::NewProp_ManaRegenEffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptainState_Statics::NewProp_ManaRegenEffectClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptainState_Statics::NewProp_HealthRegenEffectClass_MetaData[] = {
		{ "Category", "CaptainState" },
		{ "ModuleRelativePath", "Public/PlayerStates/CaptainState.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACaptainState_Statics::NewProp_HealthRegenEffectClass = { "HealthRegenEffectClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACaptainState, HealthRegenEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaptainState_Statics::NewProp_HealthRegenEffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptainState_Statics::NewProp_HealthRegenEffectClass_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACaptainState_Statics::NewProp_OwnedShips_Inner = { "OwnedShips", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AShip_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptainState_Statics::NewProp_OwnedShips_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "CaptainState" },
		{ "ModuleRelativePath", "Public/PlayerStates/CaptainState.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACaptainState_Statics::NewProp_OwnedShips = { "OwnedShips", nullptr, (EPropertyFlags)0x0014000000000025, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACaptainState, OwnedShips), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACaptainState_Statics::NewProp_OwnedShips_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptainState_Statics::NewProp_OwnedShips_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptainState_Statics::NewProp_AbilityComponent_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "AbilitySystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerStates/CaptainState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptainState_Statics::NewProp_AbilityComponent = { "AbilityComponent", nullptr, (EPropertyFlags)0x00400000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACaptainState, AbilityComponent), Z_Construct_UClass_USBAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaptainState_Statics::NewProp_AbilityComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptainState_Statics::NewProp_AbilityComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptainState_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "AbilitySystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerStates/CaptainState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACaptainState_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x00400000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACaptainState, AttributeSet), Z_Construct_UClass_USBAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaptainState_Statics::NewProp_AttributeSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptainState_Statics::NewProp_AttributeSet_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACaptainState_Statics::NewProp_OwnedAbilities_Inner = { "OwnedAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_USBGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptainState_Statics::NewProp_OwnedAbilities_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "CaptainState" },
		{ "ModuleRelativePath", "Public/PlayerStates/CaptainState.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACaptainState_Statics::NewProp_OwnedAbilities = { "OwnedAbilities", nullptr, (EPropertyFlags)0x0044000000000025, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACaptainState, OwnedAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACaptainState_Statics::NewProp_OwnedAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptainState_Statics::NewProp_OwnedAbilities_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACaptainState_Statics::NewProp_PlayerTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptainState_Statics::NewProp_PlayerTeam_MetaData[] = {
		{ "Category", "CaptainState" },
		{ "ModuleRelativePath", "Public/PlayerStates/CaptainState.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACaptainState_Statics::NewProp_PlayerTeam = { "PlayerTeam", "OnRep_Team", (EPropertyFlags)0x0040000100000021, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACaptainState, PlayerTeam), Z_Construct_UEnum_Swashbucklers_ETeam, METADATA_PARAMS(Z_Construct_UClass_ACaptainState_Statics::NewProp_PlayerTeam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptainState_Statics::NewProp_PlayerTeam_MetaData)) }; // 4006013224
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptainState_Statics::NewProp_Slot1_MetaData[] = {
		{ "Comment", "//Ability Slots\n" },
		{ "ModuleRelativePath", "Public/PlayerStates/CaptainState.h" },
		{ "ToolTip", "Ability Slots" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACaptainState_Statics::NewProp_Slot1 = { "Slot1", "OnRep_Slot1Change", (EPropertyFlags)0x0044000100000020, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACaptainState, Slot1), Z_Construct_UClass_UClass, Z_Construct_UClass_USBGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaptainState_Statics::NewProp_Slot1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptainState_Statics::NewProp_Slot1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptainState_Statics::NewProp_Slot2_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerStates/CaptainState.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACaptainState_Statics::NewProp_Slot2 = { "Slot2", "OnRep_Slot2Change", (EPropertyFlags)0x0044000100000020, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACaptainState, Slot2), Z_Construct_UClass_UClass, Z_Construct_UClass_USBGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaptainState_Statics::NewProp_Slot2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptainState_Statics::NewProp_Slot2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptainState_Statics::NewProp_Slot3_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerStates/CaptainState.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACaptainState_Statics::NewProp_Slot3 = { "Slot3", "OnRep_Slot3Change", (EPropertyFlags)0x0044000100000020, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACaptainState, Slot3), Z_Construct_UClass_UClass, Z_Construct_UClass_USBGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaptainState_Statics::NewProp_Slot3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptainState_Statics::NewProp_Slot3_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaptainState_Statics::NewProp_Slot4_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerStates/CaptainState.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACaptainState_Statics::NewProp_Slot4 = { "Slot4", "OnRep_Slot4Change", (EPropertyFlags)0x0044000100000020, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACaptainState, Slot4), Z_Construct_UClass_UClass, Z_Construct_UClass_USBGameplayAbility_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACaptainState_Statics::NewProp_Slot4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptainState_Statics::NewProp_Slot4_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACaptainState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptainState_Statics::NewProp_DefaultShip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptainState_Statics::NewProp_CurrentShip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptainState_Statics::NewProp_StartingAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptainState_Statics::NewProp_StartingAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptainState_Statics::NewProp_ManaRegenEffectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptainState_Statics::NewProp_HealthRegenEffectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptainState_Statics::NewProp_OwnedShips_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptainState_Statics::NewProp_OwnedShips,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptainState_Statics::NewProp_AbilityComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptainState_Statics::NewProp_AttributeSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptainState_Statics::NewProp_OwnedAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptainState_Statics::NewProp_OwnedAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptainState_Statics::NewProp_PlayerTeam_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptainState_Statics::NewProp_PlayerTeam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptainState_Statics::NewProp_Slot1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptainState_Statics::NewProp_Slot2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptainState_Statics::NewProp_Slot3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaptainState_Statics::NewProp_Slot4,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACaptainState_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ACaptainState, IAbilitySystemInterface), false },  // 220555618
			{ Z_Construct_UClass_UCaptainStateInterface_NoRegister, (int32)VTABLE_OFFSET(ACaptainState, ICaptainStateInterface), false },  // 3089804417
			{ Z_Construct_UClass_USlotInterface_NoRegister, (int32)VTABLE_OFFSET(ACaptainState, ISlotInterface), false },  // 1524447836
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACaptainState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACaptainState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACaptainState_Statics::ClassParams = {
		&ACaptainState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACaptainState_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACaptainState_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACaptainState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACaptainState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACaptainState()
	{
		if (!Z_Registration_Info_UClass_ACaptainState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACaptainState.OuterSingleton, Z_Construct_UClass_ACaptainState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACaptainState.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<ACaptainState>()
	{
		return ACaptainState::StaticClass();
	}

	void ACaptainState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_StartingAbilities(TEXT("StartingAbilities"));
		static const FName Name_OwnedShips(TEXT("OwnedShips"));
		static const FName Name_OwnedAbilities(TEXT("OwnedAbilities"));
		static const FName Name_PlayerTeam(TEXT("PlayerTeam"));
		static const FName Name_Slot1(TEXT("Slot1"));
		static const FName Name_Slot2(TEXT("Slot2"));
		static const FName Name_Slot3(TEXT("Slot3"));
		static const FName Name_Slot4(TEXT("Slot4"));

		const bool bIsValid = true
			&& Name_StartingAbilities == ClassReps[(int32)ENetFields_Private::StartingAbilities].Property->GetFName()
			&& Name_OwnedShips == ClassReps[(int32)ENetFields_Private::OwnedShips].Property->GetFName()
			&& Name_OwnedAbilities == ClassReps[(int32)ENetFields_Private::OwnedAbilities].Property->GetFName()
			&& Name_PlayerTeam == ClassReps[(int32)ENetFields_Private::PlayerTeam].Property->GetFName()
			&& Name_Slot1 == ClassReps[(int32)ENetFields_Private::Slot1].Property->GetFName()
			&& Name_Slot2 == ClassReps[(int32)ENetFields_Private::Slot2].Property->GetFName()
			&& Name_Slot3 == ClassReps[(int32)ENetFields_Private::Slot3].Property->GetFName()
			&& Name_Slot4 == ClassReps[(int32)ENetFields_Private::Slot4].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACaptainState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACaptainState);
	ACaptainState::~ACaptainState() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_PlayerStates_CaptainState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_PlayerStates_CaptainState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACaptainState, ACaptainState::StaticClass, TEXT("ACaptainState"), &Z_Registration_Info_UClass_ACaptainState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACaptainState), 3086568257U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_PlayerStates_CaptainState_h_1892066875(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_PlayerStates_CaptainState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_PlayerStates_CaptainState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
