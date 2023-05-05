// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayAbilities/TickingTask.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameplayAbility;
class UTickingTask;
#ifdef SWASHBUCKLERS_TickingTask_generated_h
#error "TickingTask.generated.h already included, missing '#pragma once' in TickingTask.h"
#endif
#define SWASHBUCKLERS_TickingTask_generated_h

#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_TickingTask_h_9_DELEGATE \
struct _Script_Swashbucklers_eventOnTickTaskDelegate_Parms \
{ \
	float DeltaTime; \
}; \
static inline void FOnTickTaskDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnTickTaskDelegate, float DeltaTime) \
{ \
	_Script_Swashbucklers_eventOnTickTaskDelegate_Parms Parms; \
	Parms.DeltaTime=DeltaTime; \
	OnTickTaskDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_TickingTask_h_16_SPARSE_DATA
#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_TickingTask_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAbilityTaskOnTick);


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_TickingTask_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAbilityTaskOnTick);


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_TickingTask_h_16_ACCESSORS
#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_TickingTask_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTickingTask(); \
	friend struct Z_Construct_UClass_UTickingTask_Statics; \
public: \
	DECLARE_CLASS(UTickingTask, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(UTickingTask)


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_TickingTask_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUTickingTask(); \
	friend struct Z_Construct_UClass_UTickingTask_Statics; \
public: \
	DECLARE_CLASS(UTickingTask, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(UTickingTask)


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_TickingTask_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTickingTask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTickingTask) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTickingTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTickingTask); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTickingTask(UTickingTask&&); \
	NO_API UTickingTask(const UTickingTask&); \
public: \
	NO_API virtual ~UTickingTask();


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_TickingTask_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTickingTask(UTickingTask&&); \
	NO_API UTickingTask(const UTickingTask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTickingTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTickingTask); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTickingTask) \
	NO_API virtual ~UTickingTask();


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_TickingTask_h_13_PROLOG
#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_TickingTask_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_TickingTask_h_16_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_TickingTask_h_16_RPC_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_TickingTask_h_16_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_TickingTask_h_16_INCLASS \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_TickingTask_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_TickingTask_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_TickingTask_h_16_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_TickingTask_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_TickingTask_h_16_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_TickingTask_h_16_INCLASS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_TickingTask_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWASHBUCKLERS_API UClass* StaticClass<class UTickingTask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_TickingTask_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
