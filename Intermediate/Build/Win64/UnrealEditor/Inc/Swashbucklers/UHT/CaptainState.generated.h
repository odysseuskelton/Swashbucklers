// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerStates/CaptainState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACaptainState;
class AShip;
class USBGameplayAbility;
enum class EAbilitySlot : uint8;
enum class EBuildingType : uint8;
enum class ETeam : uint8;
#ifdef SWASHBUCKLERS_CaptainState_generated_h
#error "CaptainState.generated.h already included, missing '#pragma once' in CaptainState.h"
#endif
#define SWASHBUCKLERS_CaptainState_generated_h

#define FID_Swashbucklers_Source_Swashbucklers_Public_PlayerStates_CaptainState_h_31_SPARSE_DATA
#define FID_Swashbucklers_Source_Swashbucklers_Public_PlayerStates_CaptainState_h_31_RPC_WRAPPERS \
	virtual void ClientActivateSlotCooldown_Implementation(TSubclassOf<USBGameplayAbility>  AbilityInSlotToActivate); \
	virtual void ServerRegisterCaptainState_Implementation(ACaptainState* CaptainState); \
	virtual void ServerBuyAbility_Implementation(TSubclassOf<USBGameplayAbility>  AbilityToBuy, EAbilitySlot SlotSelected); \
	virtual void ServerSwitchShips_Implementation(TSubclassOf<AShip>  ShipToSwitchTo); \
	virtual void ServerBuyShip_Implementation(TSubclassOf<AShip>  ShipToBuy); \
 \
	DECLARE_FUNCTION(execClientActivateSlotCooldown); \
	DECLARE_FUNCTION(execGetPlayerTeam); \
	DECLARE_FUNCTION(execOnRep_Team); \
	DECLARE_FUNCTION(execServerRegisterCaptainState); \
	DECLARE_FUNCTION(execOnRep_Slot4Change); \
	DECLARE_FUNCTION(execOnRep_Slot3Change); \
	DECLARE_FUNCTION(execOnRep_Slot2Change); \
	DECLARE_FUNCTION(execOnRep_Slot1Change); \
	DECLARE_FUNCTION(execServerBuyAbility); \
	DECLARE_FUNCTION(execServerSwitchShips); \
	DECLARE_FUNCTION(execServerBuyShip); \
	DECLARE_FUNCTION(execBuildingDestroyedNotification);


#define FID_Swashbucklers_Source_Swashbucklers_Public_PlayerStates_CaptainState_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientActivateSlotCooldown_Implementation(TSubclassOf<USBGameplayAbility>  AbilityInSlotToActivate); \
	virtual void ServerRegisterCaptainState_Implementation(ACaptainState* CaptainState); \
	virtual void ServerBuyAbility_Implementation(TSubclassOf<USBGameplayAbility>  AbilityToBuy, EAbilitySlot SlotSelected); \
	virtual void ServerSwitchShips_Implementation(TSubclassOf<AShip>  ShipToSwitchTo); \
	virtual void ServerBuyShip_Implementation(TSubclassOf<AShip>  ShipToBuy); \
 \
	DECLARE_FUNCTION(execClientActivateSlotCooldown); \
	DECLARE_FUNCTION(execGetPlayerTeam); \
	DECLARE_FUNCTION(execOnRep_Team); \
	DECLARE_FUNCTION(execServerRegisterCaptainState); \
	DECLARE_FUNCTION(execOnRep_Slot4Change); \
	DECLARE_FUNCTION(execOnRep_Slot3Change); \
	DECLARE_FUNCTION(execOnRep_Slot2Change); \
	DECLARE_FUNCTION(execOnRep_Slot1Change); \
	DECLARE_FUNCTION(execServerBuyAbility); \
	DECLARE_FUNCTION(execServerSwitchShips); \
	DECLARE_FUNCTION(execServerBuyShip); \
	DECLARE_FUNCTION(execBuildingDestroyedNotification);


#define FID_Swashbucklers_Source_Swashbucklers_Public_PlayerStates_CaptainState_h_31_ACCESSORS
#define FID_Swashbucklers_Source_Swashbucklers_Public_PlayerStates_CaptainState_h_31_CALLBACK_WRAPPERS
#define FID_Swashbucklers_Source_Swashbucklers_Public_PlayerStates_CaptainState_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACaptainState(); \
	friend struct Z_Construct_UClass_ACaptainState_Statics; \
public: \
	DECLARE_CLASS(ACaptainState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(ACaptainState) \
	virtual UObject* _getUObject() const override { return const_cast<ACaptainState*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		StartingAbilities=NETFIELD_REP_START, \
		OwnedShips, \
		OwnedAbilities, \
		PlayerTeam, \
		Slot1, \
		Slot2, \
		Slot3, \
		Slot4, \
		NETFIELD_REP_END=Slot4	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Swashbucklers_Source_Swashbucklers_Public_PlayerStates_CaptainState_h_31_INCLASS \
private: \
	static void StaticRegisterNativesACaptainState(); \
	friend struct Z_Construct_UClass_ACaptainState_Statics; \
public: \
	DECLARE_CLASS(ACaptainState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(ACaptainState) \
	virtual UObject* _getUObject() const override { return const_cast<ACaptainState*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		StartingAbilities=NETFIELD_REP_START, \
		OwnedShips, \
		OwnedAbilities, \
		PlayerTeam, \
		Slot1, \
		Slot2, \
		Slot3, \
		Slot4, \
		NETFIELD_REP_END=Slot4	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Swashbucklers_Source_Swashbucklers_Public_PlayerStates_CaptainState_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACaptainState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACaptainState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACaptainState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACaptainState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACaptainState(ACaptainState&&); \
	NO_API ACaptainState(const ACaptainState&); \
public: \
	NO_API virtual ~ACaptainState();


#define FID_Swashbucklers_Source_Swashbucklers_Public_PlayerStates_CaptainState_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACaptainState(ACaptainState&&); \
	NO_API ACaptainState(const ACaptainState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACaptainState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACaptainState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACaptainState) \
	NO_API virtual ~ACaptainState();


#define FID_Swashbucklers_Source_Swashbucklers_Public_PlayerStates_CaptainState_h_28_PROLOG
#define FID_Swashbucklers_Source_Swashbucklers_Public_PlayerStates_CaptainState_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_PlayerStates_CaptainState_h_31_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_PlayerStates_CaptainState_h_31_RPC_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_PlayerStates_CaptainState_h_31_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_PlayerStates_CaptainState_h_31_CALLBACK_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_PlayerStates_CaptainState_h_31_INCLASS \
	FID_Swashbucklers_Source_Swashbucklers_Public_PlayerStates_CaptainState_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Swashbucklers_Source_Swashbucklers_Public_PlayerStates_CaptainState_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_PlayerStates_CaptainState_h_31_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_PlayerStates_CaptainState_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_PlayerStates_CaptainState_h_31_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_PlayerStates_CaptainState_h_31_CALLBACK_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_PlayerStates_CaptainState_h_31_INCLASS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_PlayerStates_CaptainState_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWASHBUCKLERS_API UClass* StaticClass<class ACaptainState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Swashbucklers_Source_Swashbucklers_Public_PlayerStates_CaptainState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
