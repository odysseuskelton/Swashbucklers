// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Ships/PlayerShip.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACaptainState;
class APlayerController;
class IInteractableInterface;
class UPrimitiveComponent;
class USBGameplayAbility;
enum class EAbilitySlot : uint8;
struct FHitResult;
#ifdef SWASHBUCKLERS_PlayerShip_generated_h
#error "PlayerShip.generated.h already included, missing '#pragma once' in PlayerShip.h"
#endif
#define SWASHBUCKLERS_PlayerShip_generated_h

#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_PlayerShip_h_26_SPARSE_DATA
#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_PlayerShip_h_26_RPC_WRAPPERS \
	virtual void MulticastPlayerBountyChanged_Implementation(ACaptainState* CaptainStateBountyChange, int32 Bounty); \
	virtual void ServerPlayerBountyChange_Implementation(ACaptainState* CaptainStateBountyChange, int32 Bounty); \
	virtual void MulticastTowerKillChange_Implementation(ACaptainState* CaptainStateTowerKillChange, int32 TowerKills); \
	virtual void ServerTowerKillChange_Implementation(ACaptainState* CaptainStateTowerKillChange, int32 TowerKills); \
	virtual void MulticastCaptureChange_Implementation(ACaptainState* CaptainStateCaptureChange, int32 Captures); \
	virtual void ServerCaptureChange_Implementation(ACaptainState* CaptainStateCaptureChange, int32 Captures); \
	virtual void MulticastPlayerKillChange_Implementation(ACaptainState* CaptainStatePlayerKillChange, int32 PlayerKills); \
	virtual void ServerPlayerKillChange_Implementation(ACaptainState* CaptainStatePlayerKillChange, int32 PlayerKills); \
	virtual void MulticastOnSpeedChanged_Implementation(float Speed); \
	virtual void ClientOnSpeedChanged_Implementation(float NewSpeed, float NewAcceleration); \
	virtual void ServerActivateSlotAction_Implementation(EAbilitySlot AbilitySlot); \
	virtual void ServerFireAuxiliary_Implementation(TSubclassOf<USBGameplayAbility>  AuxAbilityToActivate); \
	virtual void ServerReleaseAuxiliarycannons_Implementation(); \
	virtual void ServerHoistSails_Implementation(); \
	virtual void ServerDropSails_Implementation(); \
	virtual void ClientStartInteracting_Implementation(TScriptInterface<IInteractableInterface> const& ScriptInterface); \
	virtual void ServerStartInteracting_Implementation(APlayerController* ClientPlayerController); \
	virtual void ServerResetHealth_Implementation(); \
 \
	DECLARE_FUNCTION(execOnPiecesOfEightChange); \
	DECLARE_FUNCTION(execMulticastPlayerBountyChanged); \
	DECLARE_FUNCTION(execServerPlayerBountyChange); \
	DECLARE_FUNCTION(execMulticastTowerKillChange); \
	DECLARE_FUNCTION(execServerTowerKillChange); \
	DECLARE_FUNCTION(execMulticastCaptureChange); \
	DECLARE_FUNCTION(execServerCaptureChange); \
	DECLARE_FUNCTION(execOnCaptureChange); \
	DECLARE_FUNCTION(execOnTowerKillChange); \
	DECLARE_FUNCTION(execMulticastPlayerKillChange); \
	DECLARE_FUNCTION(execServerPlayerKillChange); \
	DECLARE_FUNCTION(execOnPlayerKillChange); \
	DECLARE_FUNCTION(execOnBountyChange); \
	DECLARE_FUNCTION(execMulticastOnSpeedChanged); \
	DECLARE_FUNCTION(execClientOnSpeedChanged); \
	DECLARE_FUNCTION(execOnSpeedChanged); \
	DECLARE_FUNCTION(execOnManaChanged); \
	DECLARE_FUNCTION(execGetCaptainState); \
	DECLARE_FUNCTION(execServerActivateSlotAction); \
	DECLARE_FUNCTION(execServerFireAuxiliary); \
	DECLARE_FUNCTION(execServerReleaseAuxiliarycannons); \
	DECLARE_FUNCTION(execServerHoistSails); \
	DECLARE_FUNCTION(execServerDropSails); \
	DECLARE_FUNCTION(execHandleEndInteract); \
	DECLARE_FUNCTION(execEndInteract); \
	DECLARE_FUNCTION(execClientStartInteracting); \
	DECLARE_FUNCTION(execServerStartInteracting); \
	DECLARE_FUNCTION(execCanInteract); \
	DECLARE_FUNCTION(execOnRep_PortCannonRotationCalc); \
	DECLARE_FUNCTION(execOnRep_StarboardCannonRotationCalc); \
	DECLARE_FUNCTION(execNameplateVisibilityTimerFinished); \
	DECLARE_FUNCTION(execServerResetHealth);


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_PlayerShip_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastPlayerBountyChanged_Implementation(ACaptainState* CaptainStateBountyChange, int32 Bounty); \
	virtual void ServerPlayerBountyChange_Implementation(ACaptainState* CaptainStateBountyChange, int32 Bounty); \
	virtual void MulticastTowerKillChange_Implementation(ACaptainState* CaptainStateTowerKillChange, int32 TowerKills); \
	virtual void ServerTowerKillChange_Implementation(ACaptainState* CaptainStateTowerKillChange, int32 TowerKills); \
	virtual void MulticastCaptureChange_Implementation(ACaptainState* CaptainStateCaptureChange, int32 Captures); \
	virtual void ServerCaptureChange_Implementation(ACaptainState* CaptainStateCaptureChange, int32 Captures); \
	virtual void MulticastPlayerKillChange_Implementation(ACaptainState* CaptainStatePlayerKillChange, int32 PlayerKills); \
	virtual void ServerPlayerKillChange_Implementation(ACaptainState* CaptainStatePlayerKillChange, int32 PlayerKills); \
	virtual void MulticastOnSpeedChanged_Implementation(float Speed); \
	virtual void ClientOnSpeedChanged_Implementation(float NewSpeed, float NewAcceleration); \
	virtual void ServerActivateSlotAction_Implementation(EAbilitySlot AbilitySlot); \
	virtual void ServerFireAuxiliary_Implementation(TSubclassOf<USBGameplayAbility>  AuxAbilityToActivate); \
	virtual void ServerReleaseAuxiliarycannons_Implementation(); \
	virtual void ServerHoistSails_Implementation(); \
	virtual void ServerDropSails_Implementation(); \
	virtual void ClientStartInteracting_Implementation(TScriptInterface<IInteractableInterface> const& ScriptInterface); \
	virtual void ServerStartInteracting_Implementation(APlayerController* ClientPlayerController); \
	virtual void ServerResetHealth_Implementation(); \
 \
	DECLARE_FUNCTION(execOnPiecesOfEightChange); \
	DECLARE_FUNCTION(execMulticastPlayerBountyChanged); \
	DECLARE_FUNCTION(execServerPlayerBountyChange); \
	DECLARE_FUNCTION(execMulticastTowerKillChange); \
	DECLARE_FUNCTION(execServerTowerKillChange); \
	DECLARE_FUNCTION(execMulticastCaptureChange); \
	DECLARE_FUNCTION(execServerCaptureChange); \
	DECLARE_FUNCTION(execOnCaptureChange); \
	DECLARE_FUNCTION(execOnTowerKillChange); \
	DECLARE_FUNCTION(execMulticastPlayerKillChange); \
	DECLARE_FUNCTION(execServerPlayerKillChange); \
	DECLARE_FUNCTION(execOnPlayerKillChange); \
	DECLARE_FUNCTION(execOnBountyChange); \
	DECLARE_FUNCTION(execMulticastOnSpeedChanged); \
	DECLARE_FUNCTION(execClientOnSpeedChanged); \
	DECLARE_FUNCTION(execOnSpeedChanged); \
	DECLARE_FUNCTION(execOnManaChanged); \
	DECLARE_FUNCTION(execGetCaptainState); \
	DECLARE_FUNCTION(execServerActivateSlotAction); \
	DECLARE_FUNCTION(execServerFireAuxiliary); \
	DECLARE_FUNCTION(execServerReleaseAuxiliarycannons); \
	DECLARE_FUNCTION(execServerHoistSails); \
	DECLARE_FUNCTION(execServerDropSails); \
	DECLARE_FUNCTION(execHandleEndInteract); \
	DECLARE_FUNCTION(execEndInteract); \
	DECLARE_FUNCTION(execClientStartInteracting); \
	DECLARE_FUNCTION(execServerStartInteracting); \
	DECLARE_FUNCTION(execCanInteract); \
	DECLARE_FUNCTION(execOnRep_PortCannonRotationCalc); \
	DECLARE_FUNCTION(execOnRep_StarboardCannonRotationCalc); \
	DECLARE_FUNCTION(execNameplateVisibilityTimerFinished); \
	DECLARE_FUNCTION(execServerResetHealth);


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_PlayerShip_h_26_ACCESSORS
#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_PlayerShip_h_26_CALLBACK_WRAPPERS
#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_PlayerShip_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerShip(); \
	friend struct Z_Construct_UClass_APlayerShip_Statics; \
public: \
	DECLARE_CLASS(APlayerShip, AShip, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(APlayerShip) \
	virtual UObject* _getUObject() const override { return const_cast<APlayerShip*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		StarboardCannonRotation=NETFIELD_REP_START, \
		PortCannonRotation, \
		NETFIELD_REP_END=PortCannonRotation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_PlayerShip_h_26_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerShip(); \
	friend struct Z_Construct_UClass_APlayerShip_Statics; \
public: \
	DECLARE_CLASS(APlayerShip, AShip, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(APlayerShip) \
	virtual UObject* _getUObject() const override { return const_cast<APlayerShip*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		StarboardCannonRotation=NETFIELD_REP_START, \
		PortCannonRotation, \
		NETFIELD_REP_END=PortCannonRotation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_PlayerShip_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerShip(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerShip) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerShip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerShip); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerShip(APlayerShip&&); \
	NO_API APlayerShip(const APlayerShip&); \
public: \
	NO_API virtual ~APlayerShip();


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_PlayerShip_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerShip(APlayerShip&&); \
	NO_API APlayerShip(const APlayerShip&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerShip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerShip); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerShip) \
	NO_API virtual ~APlayerShip();


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_PlayerShip_h_23_PROLOG
#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_PlayerShip_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_PlayerShip_h_26_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_PlayerShip_h_26_RPC_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_PlayerShip_h_26_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_PlayerShip_h_26_CALLBACK_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_PlayerShip_h_26_INCLASS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_PlayerShip_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_PlayerShip_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_PlayerShip_h_26_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_PlayerShip_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_PlayerShip_h_26_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_PlayerShip_h_26_CALLBACK_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_PlayerShip_h_26_INCLASS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_PlayerShip_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWASHBUCKLERS_API UClass* StaticClass<class APlayerShip>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Swashbucklers_Source_Swashbucklers_Public_Ships_PlayerShip_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
