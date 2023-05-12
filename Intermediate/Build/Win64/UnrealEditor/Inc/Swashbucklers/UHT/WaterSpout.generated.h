// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayAbilities/SpellActors/WaterSpout.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SWASHBUCKLERS_WaterSpout_generated_h
#error "WaterSpout.generated.h already included, missing '#pragma once' in WaterSpout.h"
#endif
#define SWASHBUCKLERS_WaterSpout_generated_h

#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SpellActors_WaterSpout_h_17_SPARSE_DATA
#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SpellActors_WaterSpout_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCollisionBoxEndOverlap); \
	DECLARE_FUNCTION(execCollisionBoxOverlap);


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SpellActors_WaterSpout_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCollisionBoxEndOverlap); \
	DECLARE_FUNCTION(execCollisionBoxOverlap);


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SpellActors_WaterSpout_h_17_ACCESSORS
#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SpellActors_WaterSpout_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWaterSpout(); \
	friend struct Z_Construct_UClass_AWaterSpout_Statics; \
public: \
	DECLARE_CLASS(AWaterSpout, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(AWaterSpout)


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SpellActors_WaterSpout_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAWaterSpout(); \
	friend struct Z_Construct_UClass_AWaterSpout_Statics; \
public: \
	DECLARE_CLASS(AWaterSpout, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(AWaterSpout)


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SpellActors_WaterSpout_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWaterSpout(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaterSpout) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaterSpout); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaterSpout); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaterSpout(AWaterSpout&&); \
	NO_API AWaterSpout(const AWaterSpout&); \
public: \
	NO_API virtual ~AWaterSpout();


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SpellActors_WaterSpout_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaterSpout(AWaterSpout&&); \
	NO_API AWaterSpout(const AWaterSpout&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaterSpout); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaterSpout); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWaterSpout) \
	NO_API virtual ~AWaterSpout();


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SpellActors_WaterSpout_h_14_PROLOG
#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SpellActors_WaterSpout_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SpellActors_WaterSpout_h_17_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SpellActors_WaterSpout_h_17_RPC_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SpellActors_WaterSpout_h_17_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SpellActors_WaterSpout_h_17_INCLASS \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SpellActors_WaterSpout_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SpellActors_WaterSpout_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SpellActors_WaterSpout_h_17_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SpellActors_WaterSpout_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SpellActors_WaterSpout_h_17_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SpellActors_WaterSpout_h_17_INCLASS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SpellActors_WaterSpout_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWASHBUCKLERS_API UClass* StaticClass<class AWaterSpout>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Swashbucklers_Source_Swashbucklers_Public_GameplayAbilities_SpellActors_WaterSpout_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
