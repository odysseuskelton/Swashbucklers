// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapons/Projectiles/Grapple.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SWASHBUCKLERS_Grapple_generated_h
#error "Grapple.generated.h already included, missing '#pragma once' in Grapple.h"
#endif
#define SWASHBUCKLERS_Grapple_generated_h

#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Grapple_h_17_SPARSE_DATA
#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Grapple_h_17_RPC_WRAPPERS \
	virtual void MulticastAttachGrapple_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticastAttachGrapple);


#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Grapple_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastAttachGrapple_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticastAttachGrapple);


#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Grapple_h_17_ACCESSORS
#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Grapple_h_17_CALLBACK_WRAPPERS
#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Grapple_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGrapple(); \
	friend struct Z_Construct_UClass_AGrapple_Statics; \
public: \
	DECLARE_CLASS(AGrapple, AProjectile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(AGrapple)


#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Grapple_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAGrapple(); \
	friend struct Z_Construct_UClass_AGrapple_Statics; \
public: \
	DECLARE_CLASS(AGrapple, AProjectile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(AGrapple)


#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Grapple_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGrapple(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGrapple) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGrapple); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGrapple); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGrapple(AGrapple&&); \
	NO_API AGrapple(const AGrapple&); \
public: \
	NO_API virtual ~AGrapple();


#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Grapple_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGrapple(AGrapple&&); \
	NO_API AGrapple(const AGrapple&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGrapple); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGrapple); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGrapple) \
	NO_API virtual ~AGrapple();


#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Grapple_h_14_PROLOG
#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Grapple_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Grapple_h_17_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Grapple_h_17_RPC_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Grapple_h_17_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Grapple_h_17_CALLBACK_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Grapple_h_17_INCLASS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Grapple_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Grapple_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Grapple_h_17_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Grapple_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Grapple_h_17_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Grapple_h_17_CALLBACK_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Grapple_h_17_INCLASS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Grapple_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWASHBUCKLERS_API UClass* StaticClass<class AGrapple>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Grapple_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
