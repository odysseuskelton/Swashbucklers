// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayAbilities/SBAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FGameplayAttributeData;
#ifdef SWASHBUCKLERS_SBAttributeSet_generated_h
#error "SBAttributeSet.generated.h already included, missing '#pragma once' in SBAttributeSet.h"
#endif
#define SWASHBUCKLERS_SBAttributeSet_generated_h

#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBAttributeSet_h_17_DELEGATE \
struct _Script_Swashbucklers_eventOnHealthChangeDelegate_Parms \
{ \
	float Health; \
	float MaxHealth; \
	AActor* InstigatorActor; \
}; \
static inline void FOnHealthChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChangeDelegate, float Health, float MaxHealth, AActor* InstigatorActor) \
{ \
	_Script_Swashbucklers_eventOnHealthChangeDelegate_Parms Parms; \
	Parms.Health=Health; \
	Parms.MaxHealth=MaxHealth; \
	Parms.InstigatorActor=InstigatorActor; \
	OnHealthChangeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBAttributeSet_h_18_DELEGATE \
struct _Script_Swashbucklers_eventOnManaChangeDelegate_Parms \
{ \
	float Mana; \
	float MaxMana; \
}; \
static inline void FOnManaChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnManaChangeDelegate, float Mana, float MaxMana) \
{ \
	_Script_Swashbucklers_eventOnManaChangeDelegate_Parms Parms; \
	Parms.Mana=Mana; \
	Parms.MaxMana=MaxMana; \
	OnManaChangeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBAttributeSet_h_19_DELEGATE \
struct _Script_Swashbucklers_eventOnBountyChangeDelegate_Parms \
{ \
	int32 Bounty; \
	AActor* DestroyedActor; \
}; \
static inline void FOnBountyChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnBountyChangeDelegate, int32 Bounty, AActor* DestroyedActor) \
{ \
	_Script_Swashbucklers_eventOnBountyChangeDelegate_Parms Parms; \
	Parms.Bounty=Bounty; \
	Parms.DestroyedActor=DestroyedActor; \
	OnBountyChangeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBAttributeSet_h_20_DELEGATE \
struct _Script_Swashbucklers_eventOnSpeedChangeDelegate_Parms \
{ \
	float Speed; \
}; \
static inline void FOnSpeedChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSpeedChangeDelegate, float Speed) \
{ \
	_Script_Swashbucklers_eventOnSpeedChangeDelegate_Parms Parms; \
	Parms.Speed=Speed; \
	OnSpeedChangeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBAttributeSet_h_21_DELEGATE \
struct _Script_Swashbucklers_eventOnPiecesOfEightDelegate_Parms \
{ \
	int32 PiecesOfEight; \
	AActor* DestroyedActor; \
	int32 BountyToCollect; \
}; \
static inline void FOnPiecesOfEightDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPiecesOfEightDelegate, int32 PiecesOfEight, AActor* DestroyedActor, int32 BountyToCollect) \
{ \
	_Script_Swashbucklers_eventOnPiecesOfEightDelegate_Parms Parms; \
	Parms.PiecesOfEight=PiecesOfEight; \
	Parms.DestroyedActor=DestroyedActor; \
	Parms.BountyToCollect=BountyToCollect; \
	OnPiecesOfEightDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBAttributeSet_h_22_DELEGATE \
struct _Script_Swashbucklers_eventOnPlayerKillChangeDelegate_Parms \
{ \
	int32 PlayerKills; \
}; \
static inline void FOnPlayerKillChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerKillChangeDelegate, int32 PlayerKills) \
{ \
	_Script_Swashbucklers_eventOnPlayerKillChangeDelegate_Parms Parms; \
	Parms.PlayerKills=PlayerKills; \
	OnPlayerKillChangeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBAttributeSet_h_23_DELEGATE \
struct _Script_Swashbucklers_eventOnTowerKillChangeDelegate_Parms \
{ \
	int32 TowerKills; \
}; \
static inline void FOnTowerKillChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnTowerKillChangeDelegate, int32 TowerKills) \
{ \
	_Script_Swashbucklers_eventOnTowerKillChangeDelegate_Parms Parms; \
	Parms.TowerKills=TowerKills; \
	OnTowerKillChangeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBAttributeSet_h_24_DELEGATE \
struct _Script_Swashbucklers_eventOnCaptureChangeDelegate_Parms \
{ \
	int32 Captures; \
}; \
static inline void FOnCaptureChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnCaptureChangeDelegate, int32 Captures) \
{ \
	_Script_Swashbucklers_eventOnCaptureChangeDelegate_Parms Parms; \
	Parms.Captures=Captures; \
	OnCaptureChangeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBAttributeSet_h_32_SPARSE_DATA
#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBAttributeSet_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_PlayerKills); \
	DECLARE_FUNCTION(execOnRep_TowerKills); \
	DECLARE_FUNCTION(execOnRep_TreasureCaptures); \
	DECLARE_FUNCTION(execOnRep_PiecesOfEight); \
	DECLARE_FUNCTION(execOnRep_Bounty); \
	DECLARE_FUNCTION(execOnRep_Speed); \
	DECLARE_FUNCTION(execOnRep_MaxMana); \
	DECLARE_FUNCTION(execOnRep_Mana); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBAttributeSet_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_PlayerKills); \
	DECLARE_FUNCTION(execOnRep_TowerKills); \
	DECLARE_FUNCTION(execOnRep_TreasureCaptures); \
	DECLARE_FUNCTION(execOnRep_PiecesOfEight); \
	DECLARE_FUNCTION(execOnRep_Bounty); \
	DECLARE_FUNCTION(execOnRep_Speed); \
	DECLARE_FUNCTION(execOnRep_MaxMana); \
	DECLARE_FUNCTION(execOnRep_Mana); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBAttributeSet_h_32_ACCESSORS
#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBAttributeSet_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBAttributeSet(); \
	friend struct Z_Construct_UClass_USBAttributeSet_Statics; \
public: \
	DECLARE_CLASS(USBAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(USBAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		Mana, \
		MaxMana, \
		Speed, \
		Bounty, \
		PiecesOfEight, \
		TreasureCaptures, \
		TowerKills, \
		PlayerKills, \
		InstigatorActor, \
		DestroyedActor, \
		BountyCollected, \
		NETFIELD_REP_END=BountyCollected	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(USBAttributeSet) \
public:


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBAttributeSet_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUSBAttributeSet(); \
	friend struct Z_Construct_UClass_USBAttributeSet_Statics; \
public: \
	DECLARE_CLASS(USBAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(USBAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		Mana, \
		MaxMana, \
		Speed, \
		Bounty, \
		PiecesOfEight, \
		TreasureCaptures, \
		TowerKills, \
		PlayerKills, \
		InstigatorActor, \
		DestroyedActor, \
		BountyCollected, \
		NETFIELD_REP_END=BountyCollected	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(USBAttributeSet) \
public:


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBAttributeSet_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBAttributeSet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBAttributeSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBAttributeSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBAttributeSet(USBAttributeSet&&); \
	NO_API USBAttributeSet(const USBAttributeSet&); \
public: \
	NO_API virtual ~USBAttributeSet();


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBAttributeSet_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBAttributeSet(USBAttributeSet&&); \
	NO_API USBAttributeSet(const USBAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USBAttributeSet) \
	NO_API virtual ~USBAttributeSet();


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBAttributeSet_h_29_PROLOG
#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBAttributeSet_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBAttributeSet_h_32_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBAttributeSet_h_32_RPC_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBAttributeSet_h_32_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBAttributeSet_h_32_INCLASS \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBAttributeSet_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBAttributeSet_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBAttributeSet_h_32_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBAttributeSet_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBAttributeSet_h_32_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBAttributeSet_h_32_INCLASS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBAttributeSet_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWASHBUCKLERS_API UClass* StaticClass<class USBAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
