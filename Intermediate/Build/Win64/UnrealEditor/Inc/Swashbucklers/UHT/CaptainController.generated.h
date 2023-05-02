// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerControllers/CaptainController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACaptainState;
#ifdef SWASHBUCKLERS_CaptainController_generated_h
#error "CaptainController.generated.h already included, missing '#pragma once' in CaptainController.h"
#endif
#define SWASHBUCKLERS_CaptainController_generated_h

#define FID_Swashbucklers_Source_Swashbucklers_Public_PlayerControllers_CaptainController_h_24_SPARSE_DATA
#define FID_Swashbucklers_Source_Swashbucklers_Public_PlayerControllers_CaptainController_h_24_RPC_WRAPPERS \
	virtual void ClientJoinMidgame_Implementation(FName StateOfMatch, float Warmup, float TimeToSpawnTreasure, float StartingTime, float ActiveTreasureTime, int32 NumCaps); \
	virtual void ServerCheckMatchState_Implementation(); \
	virtual void ClientReportServerTime_Implementation(float TimeOfClientRequest, float TimeServerReceivedClientRequest); \
	virtual void ServerRequestServerTime_Implementation(float TimeOfClientRequest); \
	virtual void ServerRequestSwitchTeam_Implementation(ACaptainState* StateRequesting); \
 \
	DECLARE_FUNCTION(execOnRep_MatchStateSet); \
	DECLARE_FUNCTION(execClientJoinMidgame); \
	DECLARE_FUNCTION(execServerCheckMatchState); \
	DECLARE_FUNCTION(execClientReportServerTime); \
	DECLARE_FUNCTION(execServerRequestServerTime); \
	DECLARE_FUNCTION(execOpenInGameMenu); \
	DECLARE_FUNCTION(execOnBountyChange); \
	DECLARE_FUNCTION(execServerRequestSwitchTeam);


#define FID_Swashbucklers_Source_Swashbucklers_Public_PlayerControllers_CaptainController_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientJoinMidgame_Implementation(FName StateOfMatch, float Warmup, float TimeToSpawnTreasure, float StartingTime, float ActiveTreasureTime, int32 NumCaps); \
	virtual void ServerCheckMatchState_Implementation(); \
	virtual void ClientReportServerTime_Implementation(float TimeOfClientRequest, float TimeServerReceivedClientRequest); \
	virtual void ServerRequestServerTime_Implementation(float TimeOfClientRequest); \
 \
	DECLARE_FUNCTION(execOnRep_MatchStateSet); \
	DECLARE_FUNCTION(execClientJoinMidgame); \
	DECLARE_FUNCTION(execServerCheckMatchState); \
	DECLARE_FUNCTION(execClientReportServerTime); \
	DECLARE_FUNCTION(execServerRequestServerTime); \
	DECLARE_FUNCTION(execOpenInGameMenu); \
	DECLARE_FUNCTION(execOnBountyChange); \
	DECLARE_FUNCTION(execServerRequestSwitchTeam);


#define FID_Swashbucklers_Source_Swashbucklers_Public_PlayerControllers_CaptainController_h_24_ACCESSORS
#define FID_Swashbucklers_Source_Swashbucklers_Public_PlayerControllers_CaptainController_h_24_CALLBACK_WRAPPERS
#define FID_Swashbucklers_Source_Swashbucklers_Public_PlayerControllers_CaptainController_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACaptainController(); \
	friend struct Z_Construct_UClass_ACaptainController_Statics; \
public: \
	DECLARE_CLASS(ACaptainController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(ACaptainController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MatchState=NETFIELD_REP_START, \
		NETFIELD_REP_END=MatchState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Swashbucklers_Source_Swashbucklers_Public_PlayerControllers_CaptainController_h_24_INCLASS \
private: \
	static void StaticRegisterNativesACaptainController(); \
	friend struct Z_Construct_UClass_ACaptainController_Statics; \
public: \
	DECLARE_CLASS(ACaptainController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(ACaptainController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MatchState=NETFIELD_REP_START, \
		NETFIELD_REP_END=MatchState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Swashbucklers_Source_Swashbucklers_Public_PlayerControllers_CaptainController_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACaptainController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACaptainController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACaptainController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACaptainController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACaptainController(ACaptainController&&); \
	NO_API ACaptainController(const ACaptainController&); \
public: \
	NO_API virtual ~ACaptainController();


#define FID_Swashbucklers_Source_Swashbucklers_Public_PlayerControllers_CaptainController_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACaptainController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACaptainController(ACaptainController&&); \
	NO_API ACaptainController(const ACaptainController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACaptainController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACaptainController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACaptainController) \
	NO_API virtual ~ACaptainController();


#define FID_Swashbucklers_Source_Swashbucklers_Public_PlayerControllers_CaptainController_h_21_PROLOG
#define FID_Swashbucklers_Source_Swashbucklers_Public_PlayerControllers_CaptainController_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_PlayerControllers_CaptainController_h_24_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_PlayerControllers_CaptainController_h_24_RPC_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_PlayerControllers_CaptainController_h_24_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_PlayerControllers_CaptainController_h_24_CALLBACK_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_PlayerControllers_CaptainController_h_24_INCLASS \
	FID_Swashbucklers_Source_Swashbucklers_Public_PlayerControllers_CaptainController_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Swashbucklers_Source_Swashbucklers_Public_PlayerControllers_CaptainController_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_PlayerControllers_CaptainController_h_24_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_PlayerControllers_CaptainController_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_PlayerControllers_CaptainController_h_24_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_PlayerControllers_CaptainController_h_24_CALLBACK_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_PlayerControllers_CaptainController_h_24_INCLASS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_PlayerControllers_CaptainController_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWASHBUCKLERS_API UClass* StaticClass<class ACaptainController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Swashbucklers_Source_Swashbucklers_Public_PlayerControllers_CaptainController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
