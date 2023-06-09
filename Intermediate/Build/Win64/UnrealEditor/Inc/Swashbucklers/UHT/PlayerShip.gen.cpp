// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Swashbucklers/Public/Ships/PlayerShip.h"
#include "Engine/Classes/Engine/HitResult.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerShip() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ABountyActor_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_ACaptainState_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_APlayerShip();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_APlayerShip_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_AShip();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UInteractableInterface_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UPlayerInterface_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_UPlayerNameplateComponent_NoRegister();
	SWASHBUCKLERS_API UClass* Z_Construct_UClass_USBGameplayAbility_NoRegister();
	SWASHBUCKLERS_API UEnum* Z_Construct_UEnum_Swashbucklers_EAbilitySlot();
	UPackage* Z_Construct_UPackage__Script_Swashbucklers();
// End Cross Module References
	DEFINE_FUNCTION(APlayerShip::execOnPiecesOfEightChange)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PiecesOfEight);
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
		P_GET_PROPERTY(FIntProperty,Z_Param_Bounty);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPiecesOfEightChange(Z_Param_PiecesOfEight,Z_Param_DestroyedActor,Z_Param_Bounty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execMulticastPlayerBountyChanged)
	{
		P_GET_OBJECT(ACaptainState,Z_Param_CaptainStateBountyChange);
		P_GET_PROPERTY(FIntProperty,Z_Param_Bounty);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastPlayerBountyChanged_Implementation(Z_Param_CaptainStateBountyChange,Z_Param_Bounty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execServerPlayerBountyChange)
	{
		P_GET_OBJECT(ACaptainState,Z_Param_CaptainStateBountyChange);
		P_GET_PROPERTY(FIntProperty,Z_Param_Bounty);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerPlayerBountyChange_Implementation(Z_Param_CaptainStateBountyChange,Z_Param_Bounty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execMulticastTowerKillChange)
	{
		P_GET_OBJECT(ACaptainState,Z_Param_CaptainStateTowerKillChange);
		P_GET_PROPERTY(FIntProperty,Z_Param_TowerKills);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastTowerKillChange_Implementation(Z_Param_CaptainStateTowerKillChange,Z_Param_TowerKills);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execServerTowerKillChange)
	{
		P_GET_OBJECT(ACaptainState,Z_Param_CaptainStateTowerKillChange);
		P_GET_PROPERTY(FIntProperty,Z_Param_TowerKills);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerTowerKillChange_Implementation(Z_Param_CaptainStateTowerKillChange,Z_Param_TowerKills);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execMulticastCaptureChange)
	{
		P_GET_OBJECT(ACaptainState,Z_Param_CaptainStateCaptureChange);
		P_GET_PROPERTY(FIntProperty,Z_Param_Captures);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastCaptureChange_Implementation(Z_Param_CaptainStateCaptureChange,Z_Param_Captures);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execServerCaptureChange)
	{
		P_GET_OBJECT(ACaptainState,Z_Param_CaptainStateCaptureChange);
		P_GET_PROPERTY(FIntProperty,Z_Param_Captures);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerCaptureChange_Implementation(Z_Param_CaptainStateCaptureChange,Z_Param_Captures);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execOnCaptureChange)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Captures);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCaptureChange(Z_Param_Captures);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execOnTowerKillChange)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TowerKills);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTowerKillChange(Z_Param_TowerKills);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execMulticastPlayerKillChange)
	{
		P_GET_OBJECT(ACaptainState,Z_Param_CaptainStatePlayerKillChange);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerKills);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastPlayerKillChange_Implementation(Z_Param_CaptainStatePlayerKillChange,Z_Param_PlayerKills);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execServerPlayerKillChange)
	{
		P_GET_OBJECT(ACaptainState,Z_Param_CaptainStatePlayerKillChange);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerKills);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerPlayerKillChange_Implementation(Z_Param_CaptainStatePlayerKillChange,Z_Param_PlayerKills);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execOnPlayerKillChange)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerKills);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerKillChange(Z_Param_PlayerKills);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execOnBountyChange)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Bounty);
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBountyChange(Z_Param_Bounty,Z_Param_DestroyedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execMulticastOnSpeedChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Speed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastOnSpeedChanged_Implementation(Z_Param_Speed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execClientOnSpeedChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewSpeed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewAcceleration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientOnSpeedChanged_Implementation(Z_Param_NewSpeed,Z_Param_NewAcceleration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execOnSpeedChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AttributeSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSpeedChanged(Z_Param_AttributeSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execOnManaChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Mana);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxMana);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnManaChanged(Z_Param_Mana,Z_Param_MaxMana);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execGetCaptainState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACaptainState**)Z_Param__Result=P_THIS->GetCaptainState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execServerActivateSlotAction)
	{
		P_GET_ENUM(EAbilitySlot,Z_Param_AbilitySlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerActivateSlotAction_Implementation(EAbilitySlot(Z_Param_AbilitySlot));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execServerFireAuxiliary)
	{
		P_GET_OBJECT(UClass,Z_Param_AuxAbilityToActivate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerFireAuxiliary_Implementation(Z_Param_AuxAbilityToActivate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execServerReleaseAuxiliarycannons)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerReleaseAuxiliarycannons_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execServerCaptainTurn)
	{
		P_GET_UBOOL(Z_Param_bNewLeft);
		P_GET_UBOOL(Z_Param_bNewRight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerCaptainTurn_Implementation(Z_Param_bNewLeft,Z_Param_bNewRight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execServerHoistSails)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerHoistSails_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execServerDropSails)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerDropSails_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execHandleEndInteract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleEndInteract();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execEndInteract)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndInteract(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execClientStartInteracting)
	{
		P_GET_TINTERFACE(IInteractableInterface,Z_Param_ScriptInterface);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientStartInteracting_Implementation(Z_Param_ScriptInterface);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execServerStartInteracting)
	{
		P_GET_OBJECT(APlayerController,Z_Param_ClientPlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerStartInteracting_Implementation(Z_Param_ClientPlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execCanInteract)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CanInteract(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execOnRep_PortCannonRotationCalc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PortCannonRotationCalc();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execOnRep_StarboardCannonRotationCalc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_StarboardCannonRotationCalc();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execNameplateVisibilityTimerFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NameplateVisibilityTimerFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerShip::execServerResetHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerResetHealth_Implementation();
		P_NATIVE_END;
	}
	struct PlayerShip_eventClientOnSpeedChanged_Parms
	{
		float NewSpeed;
		float NewAcceleration;
	};
	struct PlayerShip_eventClientStartInteracting_Parms
	{
		TScriptInterface<IInteractableInterface> ScriptInterface;
	};
	struct PlayerShip_eventMulticastCaptureChange_Parms
	{
		ACaptainState* CaptainStateCaptureChange;
		int32 Captures;
	};
	struct PlayerShip_eventMulticastOnSpeedChanged_Parms
	{
		float Speed;
	};
	struct PlayerShip_eventMulticastPlayerBountyChanged_Parms
	{
		ACaptainState* CaptainStateBountyChange;
		int32 Bounty;
	};
	struct PlayerShip_eventMulticastPlayerKillChange_Parms
	{
		ACaptainState* CaptainStatePlayerKillChange;
		int32 PlayerKills;
	};
	struct PlayerShip_eventMulticastTowerKillChange_Parms
	{
		ACaptainState* CaptainStateTowerKillChange;
		int32 TowerKills;
	};
	struct PlayerShip_eventServerActivateSlotAction_Parms
	{
		EAbilitySlot AbilitySlot;
	};
	struct PlayerShip_eventServerCaptainTurn_Parms
	{
		bool bNewLeft;
		bool bNewRight;
	};
	struct PlayerShip_eventServerCaptureChange_Parms
	{
		ACaptainState* CaptainStateCaptureChange;
		int32 Captures;
	};
	struct PlayerShip_eventServerFireAuxiliary_Parms
	{
		TSubclassOf<USBGameplayAbility>  AuxAbilityToActivate;
	};
	struct PlayerShip_eventServerPlayerBountyChange_Parms
	{
		ACaptainState* CaptainStateBountyChange;
		int32 Bounty;
	};
	struct PlayerShip_eventServerPlayerKillChange_Parms
	{
		ACaptainState* CaptainStatePlayerKillChange;
		int32 PlayerKills;
	};
	struct PlayerShip_eventServerStartInteracting_Parms
	{
		APlayerController* ClientPlayerController;
	};
	struct PlayerShip_eventServerTowerKillChange_Parms
	{
		ACaptainState* CaptainStateTowerKillChange;
		int32 TowerKills;
	};
	static FName NAME_APlayerShip_ClientOnSpeedChanged = FName(TEXT("ClientOnSpeedChanged"));
	void APlayerShip::ClientOnSpeedChanged(float NewSpeed, float NewAcceleration)
	{
		PlayerShip_eventClientOnSpeedChanged_Parms Parms;
		Parms.NewSpeed=NewSpeed;
		Parms.NewAcceleration=NewAcceleration;
		ProcessEvent(FindFunctionChecked(NAME_APlayerShip_ClientOnSpeedChanged),&Parms);
	}
	static FName NAME_APlayerShip_ClientStartInteracting = FName(TEXT("ClientStartInteracting"));
	void APlayerShip::ClientStartInteracting(TScriptInterface<IInteractableInterface> const& ScriptInterface)
	{
		PlayerShip_eventClientStartInteracting_Parms Parms;
		Parms.ScriptInterface=ScriptInterface;
		ProcessEvent(FindFunctionChecked(NAME_APlayerShip_ClientStartInteracting),&Parms);
	}
	static FName NAME_APlayerShip_MulticastCaptureChange = FName(TEXT("MulticastCaptureChange"));
	void APlayerShip::MulticastCaptureChange(ACaptainState* CaptainStateCaptureChange, int32 Captures)
	{
		PlayerShip_eventMulticastCaptureChange_Parms Parms;
		Parms.CaptainStateCaptureChange=CaptainStateCaptureChange;
		Parms.Captures=Captures;
		ProcessEvent(FindFunctionChecked(NAME_APlayerShip_MulticastCaptureChange),&Parms);
	}
	static FName NAME_APlayerShip_MulticastOnSpeedChanged = FName(TEXT("MulticastOnSpeedChanged"));
	void APlayerShip::MulticastOnSpeedChanged(float Speed)
	{
		PlayerShip_eventMulticastOnSpeedChanged_Parms Parms;
		Parms.Speed=Speed;
		ProcessEvent(FindFunctionChecked(NAME_APlayerShip_MulticastOnSpeedChanged),&Parms);
	}
	static FName NAME_APlayerShip_MulticastPlayerBountyChanged = FName(TEXT("MulticastPlayerBountyChanged"));
	void APlayerShip::MulticastPlayerBountyChanged(ACaptainState* CaptainStateBountyChange, int32 Bounty)
	{
		PlayerShip_eventMulticastPlayerBountyChanged_Parms Parms;
		Parms.CaptainStateBountyChange=CaptainStateBountyChange;
		Parms.Bounty=Bounty;
		ProcessEvent(FindFunctionChecked(NAME_APlayerShip_MulticastPlayerBountyChanged),&Parms);
	}
	static FName NAME_APlayerShip_MulticastPlayerKillChange = FName(TEXT("MulticastPlayerKillChange"));
	void APlayerShip::MulticastPlayerKillChange(ACaptainState* CaptainStatePlayerKillChange, int32 PlayerKills)
	{
		PlayerShip_eventMulticastPlayerKillChange_Parms Parms;
		Parms.CaptainStatePlayerKillChange=CaptainStatePlayerKillChange;
		Parms.PlayerKills=PlayerKills;
		ProcessEvent(FindFunctionChecked(NAME_APlayerShip_MulticastPlayerKillChange),&Parms);
	}
	static FName NAME_APlayerShip_MulticastTowerKillChange = FName(TEXT("MulticastTowerKillChange"));
	void APlayerShip::MulticastTowerKillChange(ACaptainState* CaptainStateTowerKillChange, int32 TowerKills)
	{
		PlayerShip_eventMulticastTowerKillChange_Parms Parms;
		Parms.CaptainStateTowerKillChange=CaptainStateTowerKillChange;
		Parms.TowerKills=TowerKills;
		ProcessEvent(FindFunctionChecked(NAME_APlayerShip_MulticastTowerKillChange),&Parms);
	}
	static FName NAME_APlayerShip_ServerActivateSlotAction = FName(TEXT("ServerActivateSlotAction"));
	void APlayerShip::ServerActivateSlotAction(EAbilitySlot AbilitySlot)
	{
		PlayerShip_eventServerActivateSlotAction_Parms Parms;
		Parms.AbilitySlot=AbilitySlot;
		ProcessEvent(FindFunctionChecked(NAME_APlayerShip_ServerActivateSlotAction),&Parms);
	}
	static FName NAME_APlayerShip_ServerCaptainTurn = FName(TEXT("ServerCaptainTurn"));
	void APlayerShip::ServerCaptainTurn(bool bNewLeft, bool bNewRight)
	{
		PlayerShip_eventServerCaptainTurn_Parms Parms;
		Parms.bNewLeft=bNewLeft ? true : false;
		Parms.bNewRight=bNewRight ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_APlayerShip_ServerCaptainTurn),&Parms);
	}
	static FName NAME_APlayerShip_ServerCaptureChange = FName(TEXT("ServerCaptureChange"));
	void APlayerShip::ServerCaptureChange(ACaptainState* CaptainStateCaptureChange, int32 Captures)
	{
		PlayerShip_eventServerCaptureChange_Parms Parms;
		Parms.CaptainStateCaptureChange=CaptainStateCaptureChange;
		Parms.Captures=Captures;
		ProcessEvent(FindFunctionChecked(NAME_APlayerShip_ServerCaptureChange),&Parms);
	}
	static FName NAME_APlayerShip_ServerDropSails = FName(TEXT("ServerDropSails"));
	void APlayerShip::ServerDropSails()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerShip_ServerDropSails),NULL);
	}
	static FName NAME_APlayerShip_ServerFireAuxiliary = FName(TEXT("ServerFireAuxiliary"));
	void APlayerShip::ServerFireAuxiliary(TSubclassOf<USBGameplayAbility>  AuxAbilityToActivate)
	{
		PlayerShip_eventServerFireAuxiliary_Parms Parms;
		Parms.AuxAbilityToActivate=AuxAbilityToActivate;
		ProcessEvent(FindFunctionChecked(NAME_APlayerShip_ServerFireAuxiliary),&Parms);
	}
	static FName NAME_APlayerShip_ServerHoistSails = FName(TEXT("ServerHoistSails"));
	void APlayerShip::ServerHoistSails()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerShip_ServerHoistSails),NULL);
	}
	static FName NAME_APlayerShip_ServerPlayerBountyChange = FName(TEXT("ServerPlayerBountyChange"));
	void APlayerShip::ServerPlayerBountyChange(ACaptainState* CaptainStateBountyChange, int32 Bounty)
	{
		PlayerShip_eventServerPlayerBountyChange_Parms Parms;
		Parms.CaptainStateBountyChange=CaptainStateBountyChange;
		Parms.Bounty=Bounty;
		ProcessEvent(FindFunctionChecked(NAME_APlayerShip_ServerPlayerBountyChange),&Parms);
	}
	static FName NAME_APlayerShip_ServerPlayerKillChange = FName(TEXT("ServerPlayerKillChange"));
	void APlayerShip::ServerPlayerKillChange(ACaptainState* CaptainStatePlayerKillChange, int32 PlayerKills)
	{
		PlayerShip_eventServerPlayerKillChange_Parms Parms;
		Parms.CaptainStatePlayerKillChange=CaptainStatePlayerKillChange;
		Parms.PlayerKills=PlayerKills;
		ProcessEvent(FindFunctionChecked(NAME_APlayerShip_ServerPlayerKillChange),&Parms);
	}
	static FName NAME_APlayerShip_ServerReleaseAuxiliarycannons = FName(TEXT("ServerReleaseAuxiliarycannons"));
	void APlayerShip::ServerReleaseAuxiliarycannons()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerShip_ServerReleaseAuxiliarycannons),NULL);
	}
	static FName NAME_APlayerShip_ServerResetHealth = FName(TEXT("ServerResetHealth"));
	void APlayerShip::ServerResetHealth()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerShip_ServerResetHealth),NULL);
	}
	static FName NAME_APlayerShip_ServerStartInteracting = FName(TEXT("ServerStartInteracting"));
	void APlayerShip::ServerStartInteracting(APlayerController* ClientPlayerController)
	{
		PlayerShip_eventServerStartInteracting_Parms Parms;
		Parms.ClientPlayerController=ClientPlayerController;
		ProcessEvent(FindFunctionChecked(NAME_APlayerShip_ServerStartInteracting),&Parms);
	}
	static FName NAME_APlayerShip_ServerTowerKillChange = FName(TEXT("ServerTowerKillChange"));
	void APlayerShip::ServerTowerKillChange(ACaptainState* CaptainStateTowerKillChange, int32 TowerKills)
	{
		PlayerShip_eventServerTowerKillChange_Parms Parms;
		Parms.CaptainStateTowerKillChange=CaptainStateTowerKillChange;
		Parms.TowerKills=TowerKills;
		ProcessEvent(FindFunctionChecked(NAME_APlayerShip_ServerTowerKillChange),&Parms);
	}
	void APlayerShip::StaticRegisterNativesAPlayerShip()
	{
		UClass* Class = APlayerShip::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanInteract", &APlayerShip::execCanInteract },
			{ "ClientOnSpeedChanged", &APlayerShip::execClientOnSpeedChanged },
			{ "ClientStartInteracting", &APlayerShip::execClientStartInteracting },
			{ "EndInteract", &APlayerShip::execEndInteract },
			{ "GetCaptainState", &APlayerShip::execGetCaptainState },
			{ "HandleEndInteract", &APlayerShip::execHandleEndInteract },
			{ "MulticastCaptureChange", &APlayerShip::execMulticastCaptureChange },
			{ "MulticastOnSpeedChanged", &APlayerShip::execMulticastOnSpeedChanged },
			{ "MulticastPlayerBountyChanged", &APlayerShip::execMulticastPlayerBountyChanged },
			{ "MulticastPlayerKillChange", &APlayerShip::execMulticastPlayerKillChange },
			{ "MulticastTowerKillChange", &APlayerShip::execMulticastTowerKillChange },
			{ "NameplateVisibilityTimerFinished", &APlayerShip::execNameplateVisibilityTimerFinished },
			{ "OnBountyChange", &APlayerShip::execOnBountyChange },
			{ "OnCaptureChange", &APlayerShip::execOnCaptureChange },
			{ "OnManaChanged", &APlayerShip::execOnManaChanged },
			{ "OnPiecesOfEightChange", &APlayerShip::execOnPiecesOfEightChange },
			{ "OnPlayerKillChange", &APlayerShip::execOnPlayerKillChange },
			{ "OnRep_PortCannonRotationCalc", &APlayerShip::execOnRep_PortCannonRotationCalc },
			{ "OnRep_StarboardCannonRotationCalc", &APlayerShip::execOnRep_StarboardCannonRotationCalc },
			{ "OnSpeedChanged", &APlayerShip::execOnSpeedChanged },
			{ "OnTowerKillChange", &APlayerShip::execOnTowerKillChange },
			{ "ServerActivateSlotAction", &APlayerShip::execServerActivateSlotAction },
			{ "ServerCaptainTurn", &APlayerShip::execServerCaptainTurn },
			{ "ServerCaptureChange", &APlayerShip::execServerCaptureChange },
			{ "ServerDropSails", &APlayerShip::execServerDropSails },
			{ "ServerFireAuxiliary", &APlayerShip::execServerFireAuxiliary },
			{ "ServerHoistSails", &APlayerShip::execServerHoistSails },
			{ "ServerPlayerBountyChange", &APlayerShip::execServerPlayerBountyChange },
			{ "ServerPlayerKillChange", &APlayerShip::execServerPlayerKillChange },
			{ "ServerReleaseAuxiliarycannons", &APlayerShip::execServerReleaseAuxiliarycannons },
			{ "ServerResetHealth", &APlayerShip::execServerResetHealth },
			{ "ServerStartInteracting", &APlayerShip::execServerStartInteracting },
			{ "ServerTowerKillChange", &APlayerShip::execServerTowerKillChange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerShip_CanInteract_Statics
	{
		struct PlayerShip_eventCanInteract_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_CanInteract_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerShip_CanInteract_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventCanInteract_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_CanInteract_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_CanInteract_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerShip_CanInteract_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventCanInteract_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_CanInteract_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerShip_CanInteract_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventCanInteract_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_CanInteract_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_CanInteract_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerShip_CanInteract_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventCanInteract_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerShip_CanInteract_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((PlayerShip_eventCanInteract_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerShip_CanInteract_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayerShip_eventCanInteract_Parms), &Z_Construct_UFunction_APlayerShip_CanInteract_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_CanInteract_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerShip_CanInteract_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventCanInteract_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_CanInteract_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_CanInteract_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_CanInteract_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_CanInteract_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_CanInteract_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_CanInteract_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_CanInteract_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_CanInteract_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_CanInteract_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_CanInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_CanInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "CanInteract", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerShip_CanInteract_Statics::PlayerShip_eventCanInteract_Parms), Z_Construct_UFunction_APlayerShip_CanInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_CanInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_CanInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_CanInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_CanInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShip_CanInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_ClientOnSpeedChanged_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSpeed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewAcceleration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerShip_ClientOnSpeedChanged_Statics::NewProp_NewSpeed = { "NewSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventClientOnSpeedChanged_Parms, NewSpeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerShip_ClientOnSpeedChanged_Statics::NewProp_NewAcceleration = { "NewAcceleration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventClientOnSpeedChanged_Parms, NewAcceleration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_ClientOnSpeedChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_ClientOnSpeedChanged_Statics::NewProp_NewSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_ClientOnSpeedChanged_Statics::NewProp_NewAcceleration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_ClientOnSpeedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_ClientOnSpeedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "ClientOnSpeedChanged", nullptr, nullptr, sizeof(PlayerShip_eventClientOnSpeedChanged_Parms), Z_Construct_UFunction_APlayerShip_ClientOnSpeedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_ClientOnSpeedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_ClientOnSpeedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_ClientOnSpeedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_ClientOnSpeedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShip_ClientOnSpeedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_ClientStartInteracting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptInterface_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_ScriptInterface;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_ClientStartInteracting_Statics::NewProp_ScriptInterface_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_APlayerShip_ClientStartInteracting_Statics::NewProp_ScriptInterface = { "ScriptInterface", nullptr, (EPropertyFlags)0x0014000008000082, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventClientStartInteracting_Parms, ScriptInterface), Z_Construct_UClass_UInteractableInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_ClientStartInteracting_Statics::NewProp_ScriptInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_ClientStartInteracting_Statics::NewProp_ScriptInterface_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_ClientStartInteracting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_ClientStartInteracting_Statics::NewProp_ScriptInterface,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_ClientStartInteracting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_ClientStartInteracting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "ClientStartInteracting", nullptr, nullptr, sizeof(PlayerShip_eventClientStartInteracting_Parms), Z_Construct_UFunction_APlayerShip_ClientStartInteracting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_ClientStartInteracting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_ClientStartInteracting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_ClientStartInteracting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_ClientStartInteracting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShip_ClientStartInteracting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_EndInteract_Statics
	{
		struct PlayerShip_eventEndInteract_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_EndInteract_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerShip_EndInteract_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventEndInteract_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_EndInteract_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_EndInteract_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerShip_EndInteract_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventEndInteract_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_EndInteract_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerShip_EndInteract_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventEndInteract_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_EndInteract_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_EndInteract_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerShip_EndInteract_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventEndInteract_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_EndInteract_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_EndInteract_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_EndInteract_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_EndInteract_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_EndInteract_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_EndInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_EndInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "EndInteract", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerShip_EndInteract_Statics::PlayerShip_eventEndInteract_Parms), Z_Construct_UFunction_APlayerShip_EndInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_EndInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_EndInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_EndInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_EndInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShip_EndInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_GetCaptainState_Statics
	{
		struct PlayerShip_eventGetCaptainState_Parms
		{
			ACaptainState* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerShip_GetCaptainState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventGetCaptainState_Parms, ReturnValue), Z_Construct_UClass_ACaptainState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_GetCaptainState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_GetCaptainState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_GetCaptainState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_GetCaptainState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "GetCaptainState", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerShip_GetCaptainState_Statics::PlayerShip_eventGetCaptainState_Parms), Z_Construct_UFunction_APlayerShip_GetCaptainState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_GetCaptainState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_GetCaptainState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_GetCaptainState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_GetCaptainState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShip_GetCaptainState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_HandleEndInteract_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_HandleEndInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_HandleEndInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "HandleEndInteract", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_HandleEndInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_HandleEndInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_HandleEndInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShip_HandleEndInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_MulticastCaptureChange_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptainStateCaptureChange;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Captures;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerShip_MulticastCaptureChange_Statics::NewProp_CaptainStateCaptureChange = { "CaptainStateCaptureChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventMulticastCaptureChange_Parms, CaptainStateCaptureChange), Z_Construct_UClass_ACaptainState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerShip_MulticastCaptureChange_Statics::NewProp_Captures = { "Captures", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventMulticastCaptureChange_Parms, Captures), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_MulticastCaptureChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_MulticastCaptureChange_Statics::NewProp_CaptainStateCaptureChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_MulticastCaptureChange_Statics::NewProp_Captures,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_MulticastCaptureChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_MulticastCaptureChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "MulticastCaptureChange", nullptr, nullptr, sizeof(PlayerShip_eventMulticastCaptureChange_Parms), Z_Construct_UFunction_APlayerShip_MulticastCaptureChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_MulticastCaptureChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_MulticastCaptureChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_MulticastCaptureChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_MulticastCaptureChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShip_MulticastCaptureChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_MulticastOnSpeedChanged_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerShip_MulticastOnSpeedChanged_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventMulticastOnSpeedChanged_Parms, Speed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_MulticastOnSpeedChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_MulticastOnSpeedChanged_Statics::NewProp_Speed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_MulticastOnSpeedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_MulticastOnSpeedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "MulticastOnSpeedChanged", nullptr, nullptr, sizeof(PlayerShip_eventMulticastOnSpeedChanged_Parms), Z_Construct_UFunction_APlayerShip_MulticastOnSpeedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_MulticastOnSpeedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_MulticastOnSpeedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_MulticastOnSpeedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_MulticastOnSpeedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShip_MulticastOnSpeedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_MulticastPlayerBountyChanged_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptainStateBountyChange;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Bounty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerShip_MulticastPlayerBountyChanged_Statics::NewProp_CaptainStateBountyChange = { "CaptainStateBountyChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventMulticastPlayerBountyChanged_Parms, CaptainStateBountyChange), Z_Construct_UClass_ACaptainState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerShip_MulticastPlayerBountyChanged_Statics::NewProp_Bounty = { "Bounty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventMulticastPlayerBountyChanged_Parms, Bounty), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_MulticastPlayerBountyChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_MulticastPlayerBountyChanged_Statics::NewProp_CaptainStateBountyChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_MulticastPlayerBountyChanged_Statics::NewProp_Bounty,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_MulticastPlayerBountyChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_MulticastPlayerBountyChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "MulticastPlayerBountyChanged", nullptr, nullptr, sizeof(PlayerShip_eventMulticastPlayerBountyChanged_Parms), Z_Construct_UFunction_APlayerShip_MulticastPlayerBountyChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_MulticastPlayerBountyChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_MulticastPlayerBountyChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_MulticastPlayerBountyChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_MulticastPlayerBountyChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShip_MulticastPlayerBountyChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_MulticastPlayerKillChange_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptainStatePlayerKillChange;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerKills;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerShip_MulticastPlayerKillChange_Statics::NewProp_CaptainStatePlayerKillChange = { "CaptainStatePlayerKillChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventMulticastPlayerKillChange_Parms, CaptainStatePlayerKillChange), Z_Construct_UClass_ACaptainState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerShip_MulticastPlayerKillChange_Statics::NewProp_PlayerKills = { "PlayerKills", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventMulticastPlayerKillChange_Parms, PlayerKills), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_MulticastPlayerKillChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_MulticastPlayerKillChange_Statics::NewProp_CaptainStatePlayerKillChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_MulticastPlayerKillChange_Statics::NewProp_PlayerKills,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_MulticastPlayerKillChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_MulticastPlayerKillChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "MulticastPlayerKillChange", nullptr, nullptr, sizeof(PlayerShip_eventMulticastPlayerKillChange_Parms), Z_Construct_UFunction_APlayerShip_MulticastPlayerKillChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_MulticastPlayerKillChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_MulticastPlayerKillChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_MulticastPlayerKillChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_MulticastPlayerKillChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShip_MulticastPlayerKillChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_MulticastTowerKillChange_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptainStateTowerKillChange;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TowerKills;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerShip_MulticastTowerKillChange_Statics::NewProp_CaptainStateTowerKillChange = { "CaptainStateTowerKillChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventMulticastTowerKillChange_Parms, CaptainStateTowerKillChange), Z_Construct_UClass_ACaptainState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerShip_MulticastTowerKillChange_Statics::NewProp_TowerKills = { "TowerKills", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventMulticastTowerKillChange_Parms, TowerKills), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_MulticastTowerKillChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_MulticastTowerKillChange_Statics::NewProp_CaptainStateTowerKillChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_MulticastTowerKillChange_Statics::NewProp_TowerKills,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_MulticastTowerKillChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_MulticastTowerKillChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "MulticastTowerKillChange", nullptr, nullptr, sizeof(PlayerShip_eventMulticastTowerKillChange_Parms), Z_Construct_UFunction_APlayerShip_MulticastTowerKillChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_MulticastTowerKillChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_MulticastTowerKillChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_MulticastTowerKillChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_MulticastTowerKillChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShip_MulticastTowerKillChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_NameplateVisibilityTimerFinished_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_NameplateVisibilityTimerFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_NameplateVisibilityTimerFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "NameplateVisibilityTimerFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_NameplateVisibilityTimerFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_NameplateVisibilityTimerFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_NameplateVisibilityTimerFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShip_NameplateVisibilityTimerFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_OnBountyChange_Statics
	{
		struct PlayerShip_eventOnBountyChange_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerShip_OnBountyChange_Statics::NewProp_Bounty = { "Bounty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventOnBountyChange_Parms, Bounty), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerShip_OnBountyChange_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventOnBountyChange_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_OnBountyChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_OnBountyChange_Statics::NewProp_Bounty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_OnBountyChange_Statics::NewProp_DestroyedActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_OnBountyChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_OnBountyChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "OnBountyChange", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerShip_OnBountyChange_Statics::PlayerShip_eventOnBountyChange_Parms), Z_Construct_UFunction_APlayerShip_OnBountyChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_OnBountyChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_OnBountyChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_OnBountyChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_OnBountyChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShip_OnBountyChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_OnCaptureChange_Statics
	{
		struct PlayerShip_eventOnCaptureChange_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerShip_OnCaptureChange_Statics::NewProp_Captures = { "Captures", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventOnCaptureChange_Parms, Captures), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_OnCaptureChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_OnCaptureChange_Statics::NewProp_Captures,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_OnCaptureChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_OnCaptureChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "OnCaptureChange", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerShip_OnCaptureChange_Statics::PlayerShip_eventOnCaptureChange_Parms), Z_Construct_UFunction_APlayerShip_OnCaptureChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_OnCaptureChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_OnCaptureChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_OnCaptureChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_OnCaptureChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShip_OnCaptureChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_OnManaChanged_Statics
	{
		struct PlayerShip_eventOnManaChanged_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerShip_OnManaChanged_Statics::NewProp_Mana = { "Mana", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventOnManaChanged_Parms, Mana), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerShip_OnManaChanged_Statics::NewProp_MaxMana = { "MaxMana", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventOnManaChanged_Parms, MaxMana), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_OnManaChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_OnManaChanged_Statics::NewProp_Mana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_OnManaChanged_Statics::NewProp_MaxMana,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_OnManaChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_OnManaChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "OnManaChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerShip_OnManaChanged_Statics::PlayerShip_eventOnManaChanged_Parms), Z_Construct_UFunction_APlayerShip_OnManaChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_OnManaChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_OnManaChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_OnManaChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_OnManaChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShip_OnManaChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_OnPiecesOfEightChange_Statics
	{
		struct PlayerShip_eventOnPiecesOfEightChange_Parms
		{
			int32 PiecesOfEight;
			AActor* DestroyedActor;
			int32 Bounty;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PiecesOfEight;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Bounty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerShip_OnPiecesOfEightChange_Statics::NewProp_PiecesOfEight = { "PiecesOfEight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventOnPiecesOfEightChange_Parms, PiecesOfEight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerShip_OnPiecesOfEightChange_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventOnPiecesOfEightChange_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerShip_OnPiecesOfEightChange_Statics::NewProp_Bounty = { "Bounty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventOnPiecesOfEightChange_Parms, Bounty), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_OnPiecesOfEightChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_OnPiecesOfEightChange_Statics::NewProp_PiecesOfEight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_OnPiecesOfEightChange_Statics::NewProp_DestroyedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_OnPiecesOfEightChange_Statics::NewProp_Bounty,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_OnPiecesOfEightChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_OnPiecesOfEightChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "OnPiecesOfEightChange", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerShip_OnPiecesOfEightChange_Statics::PlayerShip_eventOnPiecesOfEightChange_Parms), Z_Construct_UFunction_APlayerShip_OnPiecesOfEightChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_OnPiecesOfEightChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_OnPiecesOfEightChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_OnPiecesOfEightChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_OnPiecesOfEightChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShip_OnPiecesOfEightChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_OnPlayerKillChange_Statics
	{
		struct PlayerShip_eventOnPlayerKillChange_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerShip_OnPlayerKillChange_Statics::NewProp_PlayerKills = { "PlayerKills", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventOnPlayerKillChange_Parms, PlayerKills), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_OnPlayerKillChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_OnPlayerKillChange_Statics::NewProp_PlayerKills,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_OnPlayerKillChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_OnPlayerKillChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "OnPlayerKillChange", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerShip_OnPlayerKillChange_Statics::PlayerShip_eventOnPlayerKillChange_Parms), Z_Construct_UFunction_APlayerShip_OnPlayerKillChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_OnPlayerKillChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_OnPlayerKillChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_OnPlayerKillChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_OnPlayerKillChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShip_OnPlayerKillChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_OnRep_PortCannonRotationCalc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_OnRep_PortCannonRotationCalc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_OnRep_PortCannonRotationCalc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "OnRep_PortCannonRotationCalc", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_OnRep_PortCannonRotationCalc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_OnRep_PortCannonRotationCalc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_OnRep_PortCannonRotationCalc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShip_OnRep_PortCannonRotationCalc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_OnRep_StarboardCannonRotationCalc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_OnRep_StarboardCannonRotationCalc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_OnRep_StarboardCannonRotationCalc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "OnRep_StarboardCannonRotationCalc", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_OnRep_StarboardCannonRotationCalc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_OnRep_StarboardCannonRotationCalc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_OnRep_StarboardCannonRotationCalc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShip_OnRep_StarboardCannonRotationCalc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_OnSpeedChanged_Statics
	{
		struct PlayerShip_eventOnSpeedChanged_Parms
		{
			float AttributeSpeed;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerShip_OnSpeedChanged_Statics::NewProp_AttributeSpeed = { "AttributeSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventOnSpeedChanged_Parms, AttributeSpeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_OnSpeedChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_OnSpeedChanged_Statics::NewProp_AttributeSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_OnSpeedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_OnSpeedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "OnSpeedChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerShip_OnSpeedChanged_Statics::PlayerShip_eventOnSpeedChanged_Parms), Z_Construct_UFunction_APlayerShip_OnSpeedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_OnSpeedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_OnSpeedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_OnSpeedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_OnSpeedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShip_OnSpeedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_OnTowerKillChange_Statics
	{
		struct PlayerShip_eventOnTowerKillChange_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerShip_OnTowerKillChange_Statics::NewProp_TowerKills = { "TowerKills", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventOnTowerKillChange_Parms, TowerKills), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_OnTowerKillChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_OnTowerKillChange_Statics::NewProp_TowerKills,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_OnTowerKillChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_OnTowerKillChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "OnTowerKillChange", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerShip_OnTowerKillChange_Statics::PlayerShip_eventOnTowerKillChange_Parms), Z_Construct_UFunction_APlayerShip_OnTowerKillChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_OnTowerKillChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_OnTowerKillChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_OnTowerKillChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_OnTowerKillChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShip_OnTowerKillChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_ServerActivateSlotAction_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_AbilitySlot_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AbilitySlot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerShip_ServerActivateSlotAction_Statics::NewProp_AbilitySlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APlayerShip_ServerActivateSlotAction_Statics::NewProp_AbilitySlot = { "AbilitySlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventServerActivateSlotAction_Parms, AbilitySlot), Z_Construct_UEnum_Swashbucklers_EAbilitySlot, METADATA_PARAMS(nullptr, 0) }; // 1220480195
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_ServerActivateSlotAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_ServerActivateSlotAction_Statics::NewProp_AbilitySlot_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_ServerActivateSlotAction_Statics::NewProp_AbilitySlot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_ServerActivateSlotAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_ServerActivateSlotAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "ServerActivateSlotAction", nullptr, nullptr, sizeof(PlayerShip_eventServerActivateSlotAction_Parms), Z_Construct_UFunction_APlayerShip_ServerActivateSlotAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_ServerActivateSlotAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_ServerActivateSlotAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_ServerActivateSlotAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_ServerActivateSlotAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShip_ServerActivateSlotAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_ServerCaptainTurn_Statics
	{
		static void NewProp_bNewLeft_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewLeft;
		static void NewProp_bNewRight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewRight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerShip_ServerCaptainTurn_Statics::NewProp_bNewLeft_SetBit(void* Obj)
	{
		((PlayerShip_eventServerCaptainTurn_Parms*)Obj)->bNewLeft = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerShip_ServerCaptainTurn_Statics::NewProp_bNewLeft = { "bNewLeft", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayerShip_eventServerCaptainTurn_Parms), &Z_Construct_UFunction_APlayerShip_ServerCaptainTurn_Statics::NewProp_bNewLeft_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerShip_ServerCaptainTurn_Statics::NewProp_bNewRight_SetBit(void* Obj)
	{
		((PlayerShip_eventServerCaptainTurn_Parms*)Obj)->bNewRight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerShip_ServerCaptainTurn_Statics::NewProp_bNewRight = { "bNewRight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayerShip_eventServerCaptainTurn_Parms), &Z_Construct_UFunction_APlayerShip_ServerCaptainTurn_Statics::NewProp_bNewRight_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_ServerCaptainTurn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_ServerCaptainTurn_Statics::NewProp_bNewLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_ServerCaptainTurn_Statics::NewProp_bNewRight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_ServerCaptainTurn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_ServerCaptainTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "ServerCaptainTurn", nullptr, nullptr, sizeof(PlayerShip_eventServerCaptainTurn_Parms), Z_Construct_UFunction_APlayerShip_ServerCaptainTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_ServerCaptainTurn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_ServerCaptainTurn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_ServerCaptainTurn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_ServerCaptainTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShip_ServerCaptainTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_ServerCaptureChange_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptainStateCaptureChange;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Captures;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerShip_ServerCaptureChange_Statics::NewProp_CaptainStateCaptureChange = { "CaptainStateCaptureChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventServerCaptureChange_Parms, CaptainStateCaptureChange), Z_Construct_UClass_ACaptainState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerShip_ServerCaptureChange_Statics::NewProp_Captures = { "Captures", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventServerCaptureChange_Parms, Captures), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_ServerCaptureChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_ServerCaptureChange_Statics::NewProp_CaptainStateCaptureChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_ServerCaptureChange_Statics::NewProp_Captures,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_ServerCaptureChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_ServerCaptureChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "ServerCaptureChange", nullptr, nullptr, sizeof(PlayerShip_eventServerCaptureChange_Parms), Z_Construct_UFunction_APlayerShip_ServerCaptureChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_ServerCaptureChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_ServerCaptureChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_ServerCaptureChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_ServerCaptureChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShip_ServerCaptureChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_ServerDropSails_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_ServerDropSails_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_ServerDropSails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "ServerDropSails", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_ServerDropSails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_ServerDropSails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_ServerDropSails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShip_ServerDropSails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_ServerFireAuxiliary_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_AuxAbilityToActivate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_APlayerShip_ServerFireAuxiliary_Statics::NewProp_AuxAbilityToActivate = { "AuxAbilityToActivate", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventServerFireAuxiliary_Parms, AuxAbilityToActivate), Z_Construct_UClass_UClass, Z_Construct_UClass_USBGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_ServerFireAuxiliary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_ServerFireAuxiliary_Statics::NewProp_AuxAbilityToActivate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_ServerFireAuxiliary_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_ServerFireAuxiliary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "ServerFireAuxiliary", nullptr, nullptr, sizeof(PlayerShip_eventServerFireAuxiliary_Parms), Z_Construct_UFunction_APlayerShip_ServerFireAuxiliary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_ServerFireAuxiliary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_ServerFireAuxiliary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_ServerFireAuxiliary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_ServerFireAuxiliary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShip_ServerFireAuxiliary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_ServerHoistSails_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_ServerHoistSails_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_ServerHoistSails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "ServerHoistSails", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_ServerHoistSails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_ServerHoistSails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_ServerHoistSails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShip_ServerHoistSails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_ServerPlayerBountyChange_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptainStateBountyChange;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Bounty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerShip_ServerPlayerBountyChange_Statics::NewProp_CaptainStateBountyChange = { "CaptainStateBountyChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventServerPlayerBountyChange_Parms, CaptainStateBountyChange), Z_Construct_UClass_ACaptainState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerShip_ServerPlayerBountyChange_Statics::NewProp_Bounty = { "Bounty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventServerPlayerBountyChange_Parms, Bounty), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_ServerPlayerBountyChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_ServerPlayerBountyChange_Statics::NewProp_CaptainStateBountyChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_ServerPlayerBountyChange_Statics::NewProp_Bounty,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_ServerPlayerBountyChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_ServerPlayerBountyChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "ServerPlayerBountyChange", nullptr, nullptr, sizeof(PlayerShip_eventServerPlayerBountyChange_Parms), Z_Construct_UFunction_APlayerShip_ServerPlayerBountyChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_ServerPlayerBountyChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_ServerPlayerBountyChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_ServerPlayerBountyChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_ServerPlayerBountyChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShip_ServerPlayerBountyChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_ServerPlayerKillChange_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptainStatePlayerKillChange;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerKills;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerShip_ServerPlayerKillChange_Statics::NewProp_CaptainStatePlayerKillChange = { "CaptainStatePlayerKillChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventServerPlayerKillChange_Parms, CaptainStatePlayerKillChange), Z_Construct_UClass_ACaptainState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerShip_ServerPlayerKillChange_Statics::NewProp_PlayerKills = { "PlayerKills", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventServerPlayerKillChange_Parms, PlayerKills), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_ServerPlayerKillChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_ServerPlayerKillChange_Statics::NewProp_CaptainStatePlayerKillChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_ServerPlayerKillChange_Statics::NewProp_PlayerKills,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_ServerPlayerKillChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_ServerPlayerKillChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "ServerPlayerKillChange", nullptr, nullptr, sizeof(PlayerShip_eventServerPlayerKillChange_Parms), Z_Construct_UFunction_APlayerShip_ServerPlayerKillChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_ServerPlayerKillChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_ServerPlayerKillChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_ServerPlayerKillChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_ServerPlayerKillChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShip_ServerPlayerKillChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_ServerReleaseAuxiliarycannons_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_ServerReleaseAuxiliarycannons_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_ServerReleaseAuxiliarycannons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "ServerReleaseAuxiliarycannons", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_ServerReleaseAuxiliarycannons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_ServerReleaseAuxiliarycannons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_ServerReleaseAuxiliarycannons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShip_ServerReleaseAuxiliarycannons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_ServerResetHealth_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_ServerResetHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_ServerResetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "ServerResetHealth", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_ServerResetHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_ServerResetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_ServerResetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShip_ServerResetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_ServerStartInteracting_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ClientPlayerController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerShip_ServerStartInteracting_Statics::NewProp_ClientPlayerController = { "ClientPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventServerStartInteracting_Parms, ClientPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_ServerStartInteracting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_ServerStartInteracting_Statics::NewProp_ClientPlayerController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_ServerStartInteracting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_ServerStartInteracting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "ServerStartInteracting", nullptr, nullptr, sizeof(PlayerShip_eventServerStartInteracting_Parms), Z_Construct_UFunction_APlayerShip_ServerStartInteracting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_ServerStartInteracting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_ServerStartInteracting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_ServerStartInteracting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_ServerStartInteracting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShip_ServerStartInteracting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerShip_ServerTowerKillChange_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptainStateTowerKillChange;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TowerKills;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerShip_ServerTowerKillChange_Statics::NewProp_CaptainStateTowerKillChange = { "CaptainStateTowerKillChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventServerTowerKillChange_Parms, CaptainStateTowerKillChange), Z_Construct_UClass_ACaptainState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerShip_ServerTowerKillChange_Statics::NewProp_TowerKills = { "TowerKills", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerShip_eventServerTowerKillChange_Parms, TowerKills), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerShip_ServerTowerKillChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_ServerTowerKillChange_Statics::NewProp_CaptainStateTowerKillChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerShip_ServerTowerKillChange_Statics::NewProp_TowerKills,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerShip_ServerTowerKillChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerShip_ServerTowerKillChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerShip, nullptr, "ServerTowerKillChange", nullptr, nullptr, sizeof(PlayerShip_eventServerTowerKillChange_Parms), Z_Construct_UFunction_APlayerShip_ServerTowerKillChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_ServerTowerKillChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerShip_ServerTowerKillChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerShip_ServerTowerKillChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerShip_ServerTowerKillChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerShip_ServerTowerKillChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerShip);
	UClass* Z_Construct_UClass_APlayerShip_NoRegister()
	{
		return APlayerShip::StaticClass();
	}
	struct Z_Construct_UClass_APlayerShip_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuxilaryCannonGEHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AuxilaryCannonGEHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseWheelAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseWheelAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirePortCannonsAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirePortCannonsAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireStarboardCannonsAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireStarboardCannonsAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireAuxiliaryCannonsAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireAuxiliaryCannonsAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuxiliaryCannonsReleasedAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AuxiliaryCannonsReleasedAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PortCannonsReleasedAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PortCannonsReleasedAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StarboardCannonsReleasedAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StarboardCannonsReleasedAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot1Action_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Slot1Action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot2Action_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Slot2Action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot3Action_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Slot3Action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot4Action_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Slot4Action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StarboardCannonRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StarboardCannonRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PortCannonRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PortCannonRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CannonCorrectionAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CannonCorrectionAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeginCannonCorrectionAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BeginCannonCorrectionAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CannonCorrectionSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CannonCorrectionSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RudderTurnSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RudderTurnSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTurningLeft_MetaData[];
#endif
		static void NewProp_bTurningLeft_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTurningLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTurningRight_MetaData[];
#endif
		static void NewProp_bTurningRight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTurningRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PirateCaptainMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PirateCaptainMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrivateerCaptainMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrivateerCaptainMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptainState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptainState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerNameplateComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerNameplateComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptainMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptainMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BountyWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BountyWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRollAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRollAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerShip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AShip,
		(UObject* (*)())Z_Construct_UPackage__Script_Swashbucklers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerShip_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerShip_CanInteract, "CanInteract" }, // 2477921892
		{ &Z_Construct_UFunction_APlayerShip_ClientOnSpeedChanged, "ClientOnSpeedChanged" }, // 2732547394
		{ &Z_Construct_UFunction_APlayerShip_ClientStartInteracting, "ClientStartInteracting" }, // 3829995345
		{ &Z_Construct_UFunction_APlayerShip_EndInteract, "EndInteract" }, // 2637751165
		{ &Z_Construct_UFunction_APlayerShip_GetCaptainState, "GetCaptainState" }, // 399698471
		{ &Z_Construct_UFunction_APlayerShip_HandleEndInteract, "HandleEndInteract" }, // 1597230994
		{ &Z_Construct_UFunction_APlayerShip_MulticastCaptureChange, "MulticastCaptureChange" }, // 2868963597
		{ &Z_Construct_UFunction_APlayerShip_MulticastOnSpeedChanged, "MulticastOnSpeedChanged" }, // 3957463941
		{ &Z_Construct_UFunction_APlayerShip_MulticastPlayerBountyChanged, "MulticastPlayerBountyChanged" }, // 4000656674
		{ &Z_Construct_UFunction_APlayerShip_MulticastPlayerKillChange, "MulticastPlayerKillChange" }, // 3835240061
		{ &Z_Construct_UFunction_APlayerShip_MulticastTowerKillChange, "MulticastTowerKillChange" }, // 4158811734
		{ &Z_Construct_UFunction_APlayerShip_NameplateVisibilityTimerFinished, "NameplateVisibilityTimerFinished" }, // 3536152441
		{ &Z_Construct_UFunction_APlayerShip_OnBountyChange, "OnBountyChange" }, // 3586286870
		{ &Z_Construct_UFunction_APlayerShip_OnCaptureChange, "OnCaptureChange" }, // 3977900094
		{ &Z_Construct_UFunction_APlayerShip_OnManaChanged, "OnManaChanged" }, // 4263084092
		{ &Z_Construct_UFunction_APlayerShip_OnPiecesOfEightChange, "OnPiecesOfEightChange" }, // 1123856127
		{ &Z_Construct_UFunction_APlayerShip_OnPlayerKillChange, "OnPlayerKillChange" }, // 335780903
		{ &Z_Construct_UFunction_APlayerShip_OnRep_PortCannonRotationCalc, "OnRep_PortCannonRotationCalc" }, // 548995373
		{ &Z_Construct_UFunction_APlayerShip_OnRep_StarboardCannonRotationCalc, "OnRep_StarboardCannonRotationCalc" }, // 1491531822
		{ &Z_Construct_UFunction_APlayerShip_OnSpeedChanged, "OnSpeedChanged" }, // 3643876919
		{ &Z_Construct_UFunction_APlayerShip_OnTowerKillChange, "OnTowerKillChange" }, // 3151342425
		{ &Z_Construct_UFunction_APlayerShip_ServerActivateSlotAction, "ServerActivateSlotAction" }, // 2153273640
		{ &Z_Construct_UFunction_APlayerShip_ServerCaptainTurn, "ServerCaptainTurn" }, // 479652884
		{ &Z_Construct_UFunction_APlayerShip_ServerCaptureChange, "ServerCaptureChange" }, // 1720521810
		{ &Z_Construct_UFunction_APlayerShip_ServerDropSails, "ServerDropSails" }, // 2366411984
		{ &Z_Construct_UFunction_APlayerShip_ServerFireAuxiliary, "ServerFireAuxiliary" }, // 1876618486
		{ &Z_Construct_UFunction_APlayerShip_ServerHoistSails, "ServerHoistSails" }, // 3454426848
		{ &Z_Construct_UFunction_APlayerShip_ServerPlayerBountyChange, "ServerPlayerBountyChange" }, // 3186373802
		{ &Z_Construct_UFunction_APlayerShip_ServerPlayerKillChange, "ServerPlayerKillChange" }, // 3411818382
		{ &Z_Construct_UFunction_APlayerShip_ServerReleaseAuxiliarycannons, "ServerReleaseAuxiliarycannons" }, // 3531460946
		{ &Z_Construct_UFunction_APlayerShip_ServerResetHealth, "ServerResetHealth" }, // 2249235060
		{ &Z_Construct_UFunction_APlayerShip_ServerStartInteracting, "ServerStartInteracting" }, // 1767071502
		{ &Z_Construct_UFunction_APlayerShip_ServerTowerKillChange, "ServerTowerKillChange" }, // 913724141
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Ships/PlayerShip.h" },
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_AuxilaryCannonGEHandle_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "PlayerShip" },
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_AuxilaryCannonGEHandle = { "AuxilaryCannonGEHandle", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, AuxilaryCannonGEHandle), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_AuxilaryCannonGEHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_AuxilaryCannonGEHandle_MetaData)) }; // 1303953225
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_PlayerContext_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "//Input\n" },
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
		{ "ToolTip", "Input" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_PlayerContext = { "PlayerContext", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, PlayerContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_PlayerContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_PlayerContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_MovementAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_MovementAction = { "MovementAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, MovementAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_MovementAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_MovementAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_TurnAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_TurnAction = { "TurnAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, TurnAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_TurnAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_TurnAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_LookAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_LookAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_InteractAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_InteractAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_InteractAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_MouseWheelAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_MouseWheelAction = { "MouseWheelAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, MouseWheelAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_MouseWheelAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_MouseWheelAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_FirePortCannonsAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_FirePortCannonsAction = { "FirePortCannonsAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, FirePortCannonsAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_FirePortCannonsAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_FirePortCannonsAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_FireStarboardCannonsAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_FireStarboardCannonsAction = { "FireStarboardCannonsAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, FireStarboardCannonsAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_FireStarboardCannonsAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_FireStarboardCannonsAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_FireAuxiliaryCannonsAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_FireAuxiliaryCannonsAction = { "FireAuxiliaryCannonsAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, FireAuxiliaryCannonsAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_FireAuxiliaryCannonsAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_FireAuxiliaryCannonsAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_AuxiliaryCannonsReleasedAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_AuxiliaryCannonsReleasedAction = { "AuxiliaryCannonsReleasedAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, AuxiliaryCannonsReleasedAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_AuxiliaryCannonsReleasedAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_AuxiliaryCannonsReleasedAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_PortCannonsReleasedAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_PortCannonsReleasedAction = { "PortCannonsReleasedAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, PortCannonsReleasedAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_PortCannonsReleasedAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_PortCannonsReleasedAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_StarboardCannonsReleasedAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_StarboardCannonsReleasedAction = { "StarboardCannonsReleasedAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, StarboardCannonsReleasedAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_StarboardCannonsReleasedAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_StarboardCannonsReleasedAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_Slot1Action_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_Slot1Action = { "Slot1Action", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, Slot1Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_Slot1Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_Slot1Action_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_Slot2Action_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_Slot2Action = { "Slot2Action", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, Slot2Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_Slot2Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_Slot2Action_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_Slot3Action_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_Slot3Action = { "Slot3Action", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, Slot3Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_Slot3Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_Slot3Action_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_Slot4Action_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_Slot4Action = { "Slot4Action", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, Slot4Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_Slot4Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_Slot4Action_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_StarboardCannonRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_StarboardCannonRotation = { "StarboardCannonRotation", "OnRep_StarboardCannonRotationCalc", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, StarboardCannonRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_StarboardCannonRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_StarboardCannonRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_PortCannonRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_PortCannonRotation = { "PortCannonRotation", "OnRep_PortCannonRotationCalc", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, PortCannonRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_PortCannonRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_PortCannonRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_CannonCorrectionAngle_MetaData[] = {
		{ "Category", "PlayerShip" },
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_CannonCorrectionAngle = { "CannonCorrectionAngle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, CannonCorrectionAngle), METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_CannonCorrectionAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_CannonCorrectionAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_BeginCannonCorrectionAngle_MetaData[] = {
		{ "Category", "PlayerShip" },
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_BeginCannonCorrectionAngle = { "BeginCannonCorrectionAngle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, BeginCannonCorrectionAngle), METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_BeginCannonCorrectionAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_BeginCannonCorrectionAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_CannonCorrectionSpeed_MetaData[] = {
		{ "Category", "PlayerShip" },
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_CannonCorrectionSpeed = { "CannonCorrectionSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, CannonCorrectionSpeed), METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_CannonCorrectionSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_CannonCorrectionSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_DefaultSpeed_MetaData[] = {
		{ "Category", "PlayerShip" },
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_DefaultSpeed = { "DefaultSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, DefaultSpeed), METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_DefaultSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_DefaultSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_DefaultAcceleration_MetaData[] = {
		{ "Category", "PlayerShip" },
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_DefaultAcceleration = { "DefaultAcceleration", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, DefaultAcceleration), METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_DefaultAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_DefaultAcceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_RotationMultiplier_MetaData[] = {
		{ "Category", "PlayerShip" },
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_RotationMultiplier = { "RotationMultiplier", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, RotationMultiplier), METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_RotationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_RotationMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_RudderTurnSpeed_MetaData[] = {
		{ "Category", "PlayerShip" },
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_RudderTurnSpeed = { "RudderTurnSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, RudderTurnSpeed), METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_RudderTurnSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_RudderTurnSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_bTurningLeft_MetaData[] = {
		{ "Category", "PlayerShip" },
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	void Z_Construct_UClass_APlayerShip_Statics::NewProp_bTurningLeft_SetBit(void* Obj)
	{
		((APlayerShip*)Obj)->bTurningLeft = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_bTurningLeft = { "bTurningLeft", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APlayerShip), &Z_Construct_UClass_APlayerShip_Statics::NewProp_bTurningLeft_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_bTurningLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_bTurningLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_bTurningRight_MetaData[] = {
		{ "Category", "PlayerShip" },
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	void Z_Construct_UClass_APlayerShip_Statics::NewProp_bTurningRight_SetBit(void* Obj)
	{
		((APlayerShip*)Obj)->bTurningRight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_bTurningRight = { "bTurningRight", nullptr, (EPropertyFlags)0x0020080000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APlayerShip), &Z_Construct_UClass_APlayerShip_Statics::NewProp_bTurningRight_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_bTurningRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_bTurningRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_PirateCaptainMaterial_MetaData[] = {
		{ "Category", "PlayerShip" },
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_PirateCaptainMaterial = { "PirateCaptainMaterial", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, PirateCaptainMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_PirateCaptainMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_PirateCaptainMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_PrivateerCaptainMaterial_MetaData[] = {
		{ "Category", "PlayerShip" },
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_PrivateerCaptainMaterial = { "PrivateerCaptainMaterial", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, PrivateerCaptainMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_PrivateerCaptainMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_PrivateerCaptainMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_CaptainState_MetaData[] = {
		{ "Comment", "//Playerstate\n" },
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
		{ "ToolTip", "Playerstate" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_CaptainState = { "CaptainState", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, CaptainState), Z_Construct_UClass_ACaptainState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_CaptainState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_CaptainState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "PlayerShip" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "PlayerShip" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_PlayerNameplateComponent_MetaData[] = {
		{ "Category", "PlayerShip" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_PlayerNameplateComponent = { "PlayerNameplateComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, PlayerNameplateComponent), Z_Construct_UClass_UPlayerNameplateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_PlayerNameplateComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_PlayerNameplateComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_CaptainMesh_MetaData[] = {
		{ "Category", "PlayerShip" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_CaptainMesh = { "CaptainMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, CaptainMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_CaptainMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_CaptainMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_BountyWidgetClass_MetaData[] = {
		{ "Category", "PlayerShip" },
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_BountyWidgetClass = { "BountyWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, BountyWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ABountyActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_BountyWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_BountyWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerShip_Statics::NewProp_TurnRollAmount_MetaData[] = {
		{ "Category", "PlayerShip" },
		{ "Comment", "//Movement Controls\n" },
		{ "ModuleRelativePath", "Public/Ships/PlayerShip.h" },
		{ "ToolTip", "Movement Controls" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerShip_Statics::NewProp_TurnRollAmount = { "TurnRollAmount", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerShip, TurnRollAmount), METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::NewProp_TurnRollAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::NewProp_TurnRollAmount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerShip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_AuxilaryCannonGEHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_PlayerContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_MovementAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_TurnAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_InteractAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_MouseWheelAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_FirePortCannonsAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_FireStarboardCannonsAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_FireAuxiliaryCannonsAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_AuxiliaryCannonsReleasedAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_PortCannonsReleasedAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_StarboardCannonsReleasedAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_Slot1Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_Slot2Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_Slot3Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_Slot4Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_StarboardCannonRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_PortCannonRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_CannonCorrectionAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_BeginCannonCorrectionAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_CannonCorrectionSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_DefaultSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_DefaultAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_RotationMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_RudderTurnSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_bTurningLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_bTurningRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_PirateCaptainMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_PrivateerCaptainMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_CaptainState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_PlayerNameplateComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_CaptainMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_BountyWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerShip_Statics::NewProp_TurnRollAmount,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APlayerShip_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPlayerInterface_NoRegister, (int32)VTABLE_OFFSET(APlayerShip, IPlayerInterface), false },  // 1201502451
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerShip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerShip>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerShip_Statics::ClassParams = {
		&APlayerShip::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerShip_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerShip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerShip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerShip()
	{
		if (!Z_Registration_Info_UClass_APlayerShip.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerShip.OuterSingleton, Z_Construct_UClass_APlayerShip_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerShip.OuterSingleton;
	}
	template<> SWASHBUCKLERS_API UClass* StaticClass<APlayerShip>()
	{
		return APlayerShip::StaticClass();
	}

	void APlayerShip::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_StarboardCannonRotation(TEXT("StarboardCannonRotation"));
		static const FName Name_PortCannonRotation(TEXT("PortCannonRotation"));
		static const FName Name_bTurningLeft(TEXT("bTurningLeft"));
		static const FName Name_bTurningRight(TEXT("bTurningRight"));

		const bool bIsValid = true
			&& Name_StarboardCannonRotation == ClassReps[(int32)ENetFields_Private::StarboardCannonRotation].Property->GetFName()
			&& Name_PortCannonRotation == ClassReps[(int32)ENetFields_Private::PortCannonRotation].Property->GetFName()
			&& Name_bTurningLeft == ClassReps[(int32)ENetFields_Private::bTurningLeft].Property->GetFName()
			&& Name_bTurningRight == ClassReps[(int32)ENetFields_Private::bTurningRight].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in APlayerShip"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerShip);
	APlayerShip::~APlayerShip() {}
	struct Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_PlayerShip_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_PlayerShip_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerShip, APlayerShip::StaticClass, TEXT("APlayerShip"), &Z_Registration_Info_UClass_APlayerShip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerShip), 3290075324U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_PlayerShip_h_3320194662(TEXT("/Script/Swashbucklers"),
		Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_PlayerShip_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Swashbucklers_Source_Swashbucklers_Public_Ships_PlayerShip_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
