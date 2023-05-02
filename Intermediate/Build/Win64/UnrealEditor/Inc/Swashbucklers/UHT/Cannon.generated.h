// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapons/Cannon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SWASHBUCKLERS_Cannon_generated_h
#error "Cannon.generated.h already included, missing '#pragma once' in Cannon.h"
#endif
#define SWASHBUCKLERS_Cannon_generated_h

#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Cannon_h_18_SPARSE_DATA
#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Cannon_h_18_RPC_WRAPPERS \
	virtual void MulticastCannonFireEffects_Implementation(FTransform TransformToSpawnAt); \
	virtual void ServerCannonFireEffects_Implementation(FTransform TransformToSpawnAt); \
 \
	DECLARE_FUNCTION(execMulticastCannonFireEffects); \
	DECLARE_FUNCTION(execServerCannonFireEffects); \
	DECLARE_FUNCTION(execFireDragonsBreath); \
	DECLARE_FUNCTION(execFireCannon);


#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Cannon_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastCannonFireEffects_Implementation(FTransform TransformToSpawnAt); \
	virtual void ServerCannonFireEffects_Implementation(FTransform TransformToSpawnAt); \
 \
	DECLARE_FUNCTION(execMulticastCannonFireEffects); \
	DECLARE_FUNCTION(execServerCannonFireEffects); \
	DECLARE_FUNCTION(execFireDragonsBreath); \
	DECLARE_FUNCTION(execFireCannon);


#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Cannon_h_18_ACCESSORS
#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Cannon_h_18_CALLBACK_WRAPPERS
#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Cannon_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACannon(); \
	friend struct Z_Construct_UClass_ACannon_Statics; \
public: \
	DECLARE_CLASS(ACannon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(ACannon) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ExtraSoundsOnCannonball=NETFIELD_REP_START, \
		NETFIELD_REP_END=ExtraSoundsOnCannonball	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Cannon_h_18_INCLASS \
private: \
	static void StaticRegisterNativesACannon(); \
	friend struct Z_Construct_UClass_ACannon_Statics; \
public: \
	DECLARE_CLASS(ACannon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(ACannon) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ExtraSoundsOnCannonball=NETFIELD_REP_START, \
		NETFIELD_REP_END=ExtraSoundsOnCannonball	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Cannon_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACannon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACannon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACannon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACannon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACannon(ACannon&&); \
	NO_API ACannon(const ACannon&); \
public: \
	NO_API virtual ~ACannon();


#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Cannon_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACannon(ACannon&&); \
	NO_API ACannon(const ACannon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACannon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACannon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACannon) \
	NO_API virtual ~ACannon();


#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Cannon_h_15_PROLOG
#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Cannon_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Cannon_h_18_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Cannon_h_18_RPC_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Cannon_h_18_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Cannon_h_18_CALLBACK_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Cannon_h_18_INCLASS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Cannon_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Cannon_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Cannon_h_18_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Cannon_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Cannon_h_18_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Cannon_h_18_CALLBACK_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Cannon_h_18_INCLASS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Cannon_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWASHBUCKLERS_API UClass* StaticClass<class ACannon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Cannon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
