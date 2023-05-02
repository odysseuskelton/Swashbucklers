// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapons/Projectiles/Projectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
enum class ETeam : uint8;
struct FHitResult;
#ifdef SWASHBUCKLERS_Projectile_generated_h
#error "Projectile.generated.h already included, missing '#pragma once' in Projectile.h"
#endif
#define SWASHBUCKLERS_Projectile_generated_h

#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Projectile_h_19_SPARSE_DATA
#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Projectile_h_19_RPC_WRAPPERS \
	virtual void MulticastSetStencilValueOfCannonball_Implementation(ETeam TeamOfOwner); \
	virtual void MulticastShipHitEffects_Implementation(FHitResult ShipHit); \
	virtual void MulticastWaterSplash_Implementation(const FHitResult SphereHit); \
 \
	DECLARE_FUNCTION(execMulticastSetStencilValueOfCannonball); \
	DECLARE_FUNCTION(execMulticastShipHitEffects); \
	DECLARE_FUNCTION(execMulticastWaterSplash); \
	DECLARE_FUNCTION(execCollisionSphereOverlap);


#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Projectile_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastSetStencilValueOfCannonball_Implementation(ETeam TeamOfOwner); \
	virtual void MulticastShipHitEffects_Implementation(FHitResult ShipHit); \
	virtual void MulticastWaterSplash_Implementation(const FHitResult SphereHit); \
 \
	DECLARE_FUNCTION(execMulticastSetStencilValueOfCannonball); \
	DECLARE_FUNCTION(execMulticastShipHitEffects); \
	DECLARE_FUNCTION(execMulticastWaterSplash); \
	DECLARE_FUNCTION(execCollisionSphereOverlap);


#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Projectile_h_19_ACCESSORS
#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Projectile_h_19_CALLBACK_WRAPPERS
#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Projectile_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(AProjectile) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		EasterEggSounds=NETFIELD_REP_START, \
		NETFIELD_REP_END=EasterEggSounds	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Projectile_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(AProjectile) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		EasterEggSounds=NETFIELD_REP_START, \
		NETFIELD_REP_END=EasterEggSounds	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Projectile_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public: \
	NO_API virtual ~AProjectile();


#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Projectile_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectile) \
	NO_API virtual ~AProjectile();


#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Projectile_h_16_PROLOG
#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Projectile_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Projectile_h_19_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Projectile_h_19_RPC_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Projectile_h_19_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Projectile_h_19_CALLBACK_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Projectile_h_19_INCLASS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Projectile_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Projectile_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Projectile_h_19_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Projectile_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Projectile_h_19_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Projectile_h_19_CALLBACK_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Projectile_h_19_INCLASS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Projectile_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWASHBUCKLERS_API UClass* StaticClass<class AProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Swashbucklers_Source_Swashbucklers_Public_Weapons_Projectiles_Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
