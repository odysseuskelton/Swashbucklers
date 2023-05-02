// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapons/Projectiles/Explosive.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
enum class ETeam : uint8;
struct FHitResult;
#ifdef SWASHBUCKLERS_Explosive_generated_h
#error "Explosive.generated.h already included, missing '#pragma once' in Explosive.h"
#endif
#define SWASHBUCKLERS_Explosive_generated_h

#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Explosive_h_18_SPARSE_DATA
#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Explosive_h_18_RPC_WRAPPERS \
	virtual void MulticastExplosion_Implementation(); \
	virtual void ServerDetonate_Implementation(); \
	virtual void MulticastActivate_Implementation(); \
	virtual void ServerSetTeam_Implementation(ETeam TeamToSet); \
	virtual void MulticastSetMaterial_Implementation(ETeam TeamOfOwner); \
	virtual void MulticastWaterSplash_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticastExplosion); \
	DECLARE_FUNCTION(execServerDetonate); \
	DECLARE_FUNCTION(execMulticastActivate); \
	DECLARE_FUNCTION(execServerSetTeam); \
	DECLARE_FUNCTION(execMulticastSetMaterial); \
	DECLARE_FUNCTION(execSetMaterial); \
	DECLARE_FUNCTION(execMulticastWaterSplash); \
	DECLARE_FUNCTION(execExplosiveOverlap);


#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Explosive_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastExplosion_Implementation(); \
	virtual void ServerDetonate_Implementation(); \
	virtual void MulticastActivate_Implementation(); \
	virtual void ServerSetTeam_Implementation(ETeam TeamToSet); \
	virtual void MulticastSetMaterial_Implementation(ETeam TeamOfOwner); \
	virtual void MulticastWaterSplash_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticastExplosion); \
	DECLARE_FUNCTION(execServerDetonate); \
	DECLARE_FUNCTION(execMulticastActivate); \
	DECLARE_FUNCTION(execServerSetTeam); \
	DECLARE_FUNCTION(execMulticastSetMaterial); \
	DECLARE_FUNCTION(execSetMaterial); \
	DECLARE_FUNCTION(execMulticastWaterSplash); \
	DECLARE_FUNCTION(execExplosiveOverlap);


#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Explosive_h_18_ACCESSORS
#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Explosive_h_18_CALLBACK_WRAPPERS
#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Explosive_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExplosive(); \
	friend struct Z_Construct_UClass_AExplosive_Statics; \
public: \
	DECLARE_CLASS(AExplosive, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(AExplosive) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ExplosiveTeam=NETFIELD_REP_START, \
		bActivated, \
		NETFIELD_REP_END=bActivated	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Explosive_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAExplosive(); \
	friend struct Z_Construct_UClass_AExplosive_Statics; \
public: \
	DECLARE_CLASS(AExplosive, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(AExplosive) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ExplosiveTeam=NETFIELD_REP_START, \
		bActivated, \
		NETFIELD_REP_END=bActivated	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Explosive_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AExplosive(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExplosive) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExplosive); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExplosive); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExplosive(AExplosive&&); \
	NO_API AExplosive(const AExplosive&); \
public: \
	NO_API virtual ~AExplosive();


#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Explosive_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExplosive(AExplosive&&); \
	NO_API AExplosive(const AExplosive&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExplosive); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExplosive); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AExplosive) \
	NO_API virtual ~AExplosive();


#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Explosive_h_15_PROLOG
#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Explosive_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Explosive_h_18_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Explosive_h_18_RPC_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Explosive_h_18_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Explosive_h_18_CALLBACK_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Explosive_h_18_INCLASS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Explosive_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Explosive_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Explosive_h_18_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Explosive_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Explosive_h_18_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Explosive_h_18_CALLBACK_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Explosive_h_18_INCLASS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Explosive_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWASHBUCKLERS_API UClass* StaticClass<class AExplosive>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Explosive_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
