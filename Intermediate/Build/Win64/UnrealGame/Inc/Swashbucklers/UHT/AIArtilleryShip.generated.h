// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Ships/AIArtilleryShip.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USensorBase;
struct FAIRequestID;
struct FSensedStimulus;
#ifdef SWASHBUCKLERS_AIArtilleryShip_generated_h
#error "AIArtilleryShip.generated.h already included, missing '#pragma once' in AIArtilleryShip.h"
#endif
#define SWASHBUCKLERS_AIArtilleryShip_generated_h

#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIArtilleryShip_h_23_SPARSE_DATA
#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIArtilleryShip_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFireArtilleryCannon); \
	DECLARE_FUNCTION(execOnLostSense); \
	DECLARE_FUNCTION(execOnCurrentSense); \
	DECLARE_FUNCTION(execOnMoveCompleted);


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIArtilleryShip_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFireArtilleryCannon); \
	DECLARE_FUNCTION(execOnLostSense); \
	DECLARE_FUNCTION(execOnCurrentSense); \
	DECLARE_FUNCTION(execOnMoveCompleted);


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIArtilleryShip_h_23_ACCESSORS
#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIArtilleryShip_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIArtilleryShip(); \
	friend struct Z_Construct_UClass_AAIArtilleryShip_Statics; \
public: \
	DECLARE_CLASS(AAIArtilleryShip, AAIShip, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(AAIArtilleryShip)


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIArtilleryShip_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAAIArtilleryShip(); \
	friend struct Z_Construct_UClass_AAIArtilleryShip_Statics; \
public: \
	DECLARE_CLASS(AAIArtilleryShip, AAIShip, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(AAIArtilleryShip)


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIArtilleryShip_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIArtilleryShip(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIArtilleryShip) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIArtilleryShip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIArtilleryShip); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIArtilleryShip(AAIArtilleryShip&&); \
	NO_API AAIArtilleryShip(const AAIArtilleryShip&); \
public: \
	NO_API virtual ~AAIArtilleryShip();


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIArtilleryShip_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIArtilleryShip(AAIArtilleryShip&&); \
	NO_API AAIArtilleryShip(const AAIArtilleryShip&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIArtilleryShip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIArtilleryShip); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAIArtilleryShip) \
	NO_API virtual ~AAIArtilleryShip();


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIArtilleryShip_h_20_PROLOG
#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIArtilleryShip_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIArtilleryShip_h_23_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIArtilleryShip_h_23_RPC_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIArtilleryShip_h_23_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIArtilleryShip_h_23_INCLASS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIArtilleryShip_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIArtilleryShip_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIArtilleryShip_h_23_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIArtilleryShip_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIArtilleryShip_h_23_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIArtilleryShip_h_23_INCLASS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIArtilleryShip_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWASHBUCKLERS_API UClass* StaticClass<class AAIArtilleryShip>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIArtilleryShip_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
