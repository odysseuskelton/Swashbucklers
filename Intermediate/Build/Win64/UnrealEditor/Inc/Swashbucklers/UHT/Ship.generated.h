// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Ships/Ship.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
class USBGameplayAbility;
struct FHitResult;
#ifdef SWASHBUCKLERS_Ship_generated_h
#error "Ship.generated.h already included, missing '#pragma once' in Ship.h"
#endif
#define SWASHBUCKLERS_Ship_generated_h

#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_Ship_h_31_SPARSE_DATA
#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_Ship_h_31_RPC_WRAPPERS \
	virtual void ServerFireCannons_Implementation(TSubclassOf<USBGameplayAbility>  CannonAbilityToActivate); \
	virtual void MulticastOnHealthChanged_Implementation(float Health, float MaxHealth, AActor* InstigatorActor); \
	virtual void MulticastShipCollision_Implementation(AActor* OtherActor, FHitResult const& Hit, float SpeedOfImpact, FVector ForceOfImpact); \
	virtual void ServerShipCollision_Implementation(AActor* OtherActor, FHitResult const& Hit, float SpeedOfImpact); \
 \
	DECLARE_FUNCTION(execServerFireCannons); \
	DECLARE_FUNCTION(execSwitchCannonAbilities); \
	DECLARE_FUNCTION(execMulticastOnHealthChanged); \
	DECLARE_FUNCTION(execOnHealthChanged); \
	DECLARE_FUNCTION(execMulticastShipCollision); \
	DECLARE_FUNCTION(execServerShipCollision); \
	DECLARE_FUNCTION(execShipBeginOverlap); \
	DECLARE_FUNCTION(execShipCollision);


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_Ship_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerFireCannons_Implementation(TSubclassOf<USBGameplayAbility>  CannonAbilityToActivate); \
	virtual void MulticastOnHealthChanged_Implementation(float Health, float MaxHealth, AActor* InstigatorActor); \
	virtual void MulticastShipCollision_Implementation(AActor* OtherActor, FHitResult const& Hit, float SpeedOfImpact, FVector ForceOfImpact); \
	virtual void ServerShipCollision_Implementation(AActor* OtherActor, FHitResult const& Hit, float SpeedOfImpact); \
 \
	DECLARE_FUNCTION(execServerFireCannons); \
	DECLARE_FUNCTION(execSwitchCannonAbilities); \
	DECLARE_FUNCTION(execMulticastOnHealthChanged); \
	DECLARE_FUNCTION(execOnHealthChanged); \
	DECLARE_FUNCTION(execMulticastShipCollision); \
	DECLARE_FUNCTION(execServerShipCollision); \
	DECLARE_FUNCTION(execShipBeginOverlap); \
	DECLARE_FUNCTION(execShipCollision);


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_Ship_h_31_ACCESSORS
#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_Ship_h_31_CALLBACK_WRAPPERS
#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_Ship_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShip(); \
	friend struct Z_Construct_UClass_AShip_Statics; \
public: \
	DECLARE_CLASS(AShip, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(AShip) \
	virtual UObject* _getUObject() const override { return const_cast<AShip*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsDead=NETFIELD_REP_START, \
		PortCannons, \
		StarboardCannons, \
		PortCannonAbility, \
		StarboardCannonAbility, \
		bOpenSails, \
		NETFIELD_REP_END=bOpenSails	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_Ship_h_31_INCLASS \
private: \
	static void StaticRegisterNativesAShip(); \
	friend struct Z_Construct_UClass_AShip_Statics; \
public: \
	DECLARE_CLASS(AShip, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(AShip) \
	virtual UObject* _getUObject() const override { return const_cast<AShip*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsDead=NETFIELD_REP_START, \
		PortCannons, \
		StarboardCannons, \
		PortCannonAbility, \
		StarboardCannonAbility, \
		bOpenSails, \
		NETFIELD_REP_END=bOpenSails	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_Ship_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShip(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShip) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShip); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShip(AShip&&); \
	NO_API AShip(const AShip&); \
public: \
	NO_API virtual ~AShip();


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_Ship_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShip(AShip&&); \
	NO_API AShip(const AShip&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShip); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShip) \
	NO_API virtual ~AShip();


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_Ship_h_28_PROLOG
#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_Ship_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_Ship_h_31_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_Ship_h_31_RPC_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_Ship_h_31_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_Ship_h_31_CALLBACK_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_Ship_h_31_INCLASS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_Ship_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_Ship_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_Ship_h_31_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_Ship_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_Ship_h_31_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_Ship_h_31_CALLBACK_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_Ship_h_31_INCLASS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_Ship_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWASHBUCKLERS_API UClass* StaticClass<class AShip>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Swashbucklers_Source_Swashbucklers_Public_Ships_Ship_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
