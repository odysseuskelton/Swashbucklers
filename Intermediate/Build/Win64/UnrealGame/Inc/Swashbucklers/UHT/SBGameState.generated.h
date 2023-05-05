// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameStates/SBGameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ABuilding;
class ACaptainState;
enum class EBuildingType : uint8;
#ifdef SWASHBUCKLERS_SBGameState_generated_h
#error "SBGameState.generated.h already included, missing '#pragma once' in SBGameState.h"
#endif
#define SWASHBUCKLERS_SBGameState_generated_h

#define FID_Swashbucklers_Source_Swashbucklers_Public_GameStates_SBGameState_h_11_DELEGATE \
struct _Script_Swashbucklers_eventOnBuildingDestroyedDelegate_Parms \
{ \
	EBuildingType BuildingType; \
}; \
static inline void FOnBuildingDestroyedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnBuildingDestroyedDelegate, EBuildingType BuildingType) \
{ \
	_Script_Swashbucklers_eventOnBuildingDestroyedDelegate_Parms Parms; \
	Parms.BuildingType=BuildingType; \
	OnBuildingDestroyedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameStates_SBGameState_h_20_SPARSE_DATA
#define FID_Swashbucklers_Source_Swashbucklers_Public_GameStates_SBGameState_h_20_RPC_WRAPPERS \
	virtual void ClientUpdateHUDCaptures_Implementation(ACaptainState* CaptainState, int32 Captures); \
	virtual void MulticastExtraHeartPiece_Implementation(); \
	virtual void ClientPlayerKilled_Implementation(ACaptainState* SunkCaptainState, ACaptainState* InstigatorCaptainState); \
	virtual void ClientPlayerBountyChanged_Implementation(ACaptainState* CapState, int32 Bounty); \
	virtual void ClientUpdateTowerKills_Implementation(ACaptainState* CaptainState, int32 TowerKills); \
	virtual void ClientUpdatePlayerKills_Implementation(ACaptainState* CaptainState, int32 PlayerKills); \
	virtual void MulticastBuildingDestroyed_Implementation(EBuildingType BuildingType, ABuilding* BuildingDestroyed, AActor* InstigatorActor); \
 \
	DECLARE_FUNCTION(execOnRep_TeamCapturedTreasure); \
	DECLARE_FUNCTION(execOnRep_TreasureCapturesUpdate); \
	DECLARE_FUNCTION(execClientUpdateHUDCaptures); \
	DECLARE_FUNCTION(execMulticastExtraHeartPiece); \
	DECLARE_FUNCTION(execExtraHeartPiece); \
	DECLARE_FUNCTION(execClientPlayerKilled); \
	DECLARE_FUNCTION(execClientPlayerBountyChanged); \
	DECLARE_FUNCTION(execClientUpdateTowerKills); \
	DECLARE_FUNCTION(execClientUpdatePlayerKills); \
	DECLARE_FUNCTION(execMulticastBuildingDestroyed); \
	DECLARE_FUNCTION(execOnRep_RegisterCaptainState); \
	DECLARE_FUNCTION(execOnRep_UpdateTeams);


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameStates_SBGameState_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientUpdateHUDCaptures_Implementation(ACaptainState* CaptainState, int32 Captures); \
	virtual void MulticastExtraHeartPiece_Implementation(); \
	virtual void ClientPlayerKilled_Implementation(ACaptainState* SunkCaptainState, ACaptainState* InstigatorCaptainState); \
	virtual void ClientPlayerBountyChanged_Implementation(ACaptainState* CapState, int32 Bounty); \
	virtual void ClientUpdateTowerKills_Implementation(ACaptainState* CaptainState, int32 TowerKills); \
	virtual void ClientUpdatePlayerKills_Implementation(ACaptainState* CaptainState, int32 PlayerKills); \
	virtual void MulticastBuildingDestroyed_Implementation(EBuildingType BuildingType, ABuilding* BuildingDestroyed, AActor* InstigatorActor); \
 \
	DECLARE_FUNCTION(execOnRep_TeamCapturedTreasure); \
	DECLARE_FUNCTION(execOnRep_TreasureCapturesUpdate); \
	DECLARE_FUNCTION(execClientUpdateHUDCaptures); \
	DECLARE_FUNCTION(execMulticastExtraHeartPiece); \
	DECLARE_FUNCTION(execExtraHeartPiece); \
	DECLARE_FUNCTION(execClientPlayerKilled); \
	DECLARE_FUNCTION(execClientPlayerBountyChanged); \
	DECLARE_FUNCTION(execClientUpdateTowerKills); \
	DECLARE_FUNCTION(execClientUpdatePlayerKills); \
	DECLARE_FUNCTION(execMulticastBuildingDestroyed); \
	DECLARE_FUNCTION(execOnRep_RegisterCaptainState); \
	DECLARE_FUNCTION(execOnRep_UpdateTeams);


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameStates_SBGameState_h_20_ACCESSORS
#define FID_Swashbucklers_Source_Swashbucklers_Public_GameStates_SBGameState_h_20_CALLBACK_WRAPPERS
#define FID_Swashbucklers_Source_Swashbucklers_Public_GameStates_SBGameState_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBGameState(); \
	friend struct Z_Construct_UClass_ASBGameState_Statics; \
public: \
	DECLARE_CLASS(ASBGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(ASBGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PirateTeam=NETFIELD_REP_START, \
		PrivateerTeam, \
		NewestCaptainState, \
		CaptainStates, \
		bIsInLobby, \
		TeamCapturingTreasure, \
		TreasureActiveTime, \
		TreasuresCaptured, \
		TreasureLocation, \
		NETFIELD_REP_END=TreasureLocation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameStates_SBGameState_h_20_INCLASS \
private: \
	static void StaticRegisterNativesASBGameState(); \
	friend struct Z_Construct_UClass_ASBGameState_Statics; \
public: \
	DECLARE_CLASS(ASBGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(ASBGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PirateTeam=NETFIELD_REP_START, \
		PrivateerTeam, \
		NewestCaptainState, \
		CaptainStates, \
		bIsInLobby, \
		TeamCapturingTreasure, \
		TreasureActiveTime, \
		TreasuresCaptured, \
		TreasureLocation, \
		NETFIELD_REP_END=TreasureLocation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameStates_SBGameState_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBGameState(ASBGameState&&); \
	NO_API ASBGameState(const ASBGameState&); \
public: \
	NO_API virtual ~ASBGameState();


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameStates_SBGameState_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBGameState(ASBGameState&&); \
	NO_API ASBGameState(const ASBGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBGameState) \
	NO_API virtual ~ASBGameState();


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameStates_SBGameState_h_17_PROLOG
#define FID_Swashbucklers_Source_Swashbucklers_Public_GameStates_SBGameState_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameStates_SBGameState_h_20_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameStates_SBGameState_h_20_RPC_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameStates_SBGameState_h_20_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameStates_SBGameState_h_20_CALLBACK_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameStates_SBGameState_h_20_INCLASS \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameStates_SBGameState_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameStates_SBGameState_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameStates_SBGameState_h_20_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameStates_SBGameState_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameStates_SBGameState_h_20_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameStates_SBGameState_h_20_CALLBACK_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameStates_SBGameState_h_20_INCLASS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameStates_SBGameState_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWASHBUCKLERS_API UClass* StaticClass<class ASBGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Swashbucklers_Source_Swashbucklers_Public_GameStates_SBGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
