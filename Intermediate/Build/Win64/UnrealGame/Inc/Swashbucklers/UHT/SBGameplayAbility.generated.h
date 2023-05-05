// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayAbilities/SBGameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FGameplayAbilityInfo;
struct FGameplayEffectSpecHandle;
#ifdef SWASHBUCKLERS_SBGameplayAbility_generated_h
#error "SBGameplayAbility.generated.h already included, missing '#pragma once' in SBGameplayAbility.h"
#endif
#define SWASHBUCKLERS_SBGameplayAbility_generated_h

#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBGameplayAbility_h_16_SPARSE_DATA
#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBGameplayAbility_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyHealEffectToActorsInAOE); \
	DECLARE_FUNCTION(execGetAbilityInfo);


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBGameplayAbility_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyHealEffectToActorsInAOE); \
	DECLARE_FUNCTION(execGetAbilityInfo);


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBGameplayAbility_h_16_ACCESSORS
#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBGameplayAbility_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSBGameplayAbility(); \
	friend struct Z_Construct_UClass_USBGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(USBGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(USBGameplayAbility)


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBGameplayAbility_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSBGameplayAbility(); \
	friend struct Z_Construct_UClass_USBGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(USBGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(USBGameplayAbility)


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBGameplayAbility_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBGameplayAbility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBGameplayAbility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBGameplayAbility(USBGameplayAbility&&); \
	NO_API USBGameplayAbility(const USBGameplayAbility&); \
public: \
	NO_API virtual ~USBGameplayAbility();


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBGameplayAbility_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USBGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USBGameplayAbility(USBGameplayAbility&&); \
	NO_API USBGameplayAbility(const USBGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USBGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USBGameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USBGameplayAbility) \
	NO_API virtual ~USBGameplayAbility();


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBGameplayAbility_h_13_PROLOG
#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBGameplayAbility_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBGameplayAbility_h_16_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBGameplayAbility_h_16_RPC_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBGameplayAbility_h_16_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBGameplayAbility_h_16_INCLASS \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBGameplayAbility_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBGameplayAbility_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBGameplayAbility_h_16_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBGameplayAbility_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBGameplayAbility_h_16_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBGameplayAbility_h_16_INCLASS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBGameplayAbility_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWASHBUCKLERS_API UClass* StaticClass<class USBGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SBGameplayAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
