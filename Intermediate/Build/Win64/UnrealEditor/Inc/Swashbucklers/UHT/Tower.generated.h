// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Buildings/Tower.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SWASHBUCKLERS_Tower_generated_h
#error "Tower.generated.h already included, missing '#pragma once' in Tower.h"
#endif
#define SWASHBUCKLERS_Tower_generated_h

#define FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Tower_h_19_SPARSE_DATA
#define FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Tower_h_19_RPC_WRAPPERS \
	virtual void MulticastTurretCannonFireEffects_Implementation(FTransform TransformToSpawnAt); \
	virtual void ServerTurretCannonFireEffects_Implementation(FTransform TransformToSpawnAt); \
 \
	DECLARE_FUNCTION(execOnRep_RotateCannonMesh); \
	DECLARE_FUNCTION(execOnRep_RotateTurret); \
	DECLARE_FUNCTION(execMulticastTurretCannonFireEffects); \
	DECLARE_FUNCTION(execServerTurretCannonFireEffects); \
	DECLARE_FUNCTION(execFireTowerCannon); \
	DECLARE_FUNCTION(execOutAggroRange); \
	DECLARE_FUNCTION(execInAggroRange);


#define FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Tower_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastTurretCannonFireEffects_Implementation(FTransform TransformToSpawnAt); \
	virtual void ServerTurretCannonFireEffects_Implementation(FTransform TransformToSpawnAt); \
 \
	DECLARE_FUNCTION(execOnRep_RotateCannonMesh); \
	DECLARE_FUNCTION(execOnRep_RotateTurret); \
	DECLARE_FUNCTION(execMulticastTurretCannonFireEffects); \
	DECLARE_FUNCTION(execServerTurretCannonFireEffects); \
	DECLARE_FUNCTION(execFireTowerCannon); \
	DECLARE_FUNCTION(execOutAggroRange); \
	DECLARE_FUNCTION(execInAggroRange);


#define FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Tower_h_19_ACCESSORS
#define FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Tower_h_19_CALLBACK_WRAPPERS
#define FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Tower_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATower(); \
	friend struct Z_Construct_UClass_ATower_Statics; \
public: \
	DECLARE_CLASS(ATower, ABuilding, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(ATower) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TurretBaseMeshRotation=NETFIELD_REP_START, \
		TurretCannonMeshRotation, \
		NETFIELD_REP_END=TurretCannonMeshRotation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Tower_h_19_INCLASS \
private: \
	static void StaticRegisterNativesATower(); \
	friend struct Z_Construct_UClass_ATower_Statics; \
public: \
	DECLARE_CLASS(ATower, ABuilding, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(ATower) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TurretBaseMeshRotation=NETFIELD_REP_START, \
		TurretCannonMeshRotation, \
		NETFIELD_REP_END=TurretCannonMeshRotation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Tower_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATower(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATower) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATower); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATower); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATower(ATower&&); \
	NO_API ATower(const ATower&); \
public: \
	NO_API virtual ~ATower();


#define FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Tower_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATower(ATower&&); \
	NO_API ATower(const ATower&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATower); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATower); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATower) \
	NO_API virtual ~ATower();


#define FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Tower_h_16_PROLOG
#define FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Tower_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Tower_h_19_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Tower_h_19_RPC_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Tower_h_19_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Tower_h_19_CALLBACK_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Tower_h_19_INCLASS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Tower_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Tower_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Tower_h_19_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Tower_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Tower_h_19_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Tower_h_19_CALLBACK_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Tower_h_19_INCLASS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Tower_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWASHBUCKLERS_API UClass* StaticClass<class ATower>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Tower_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
