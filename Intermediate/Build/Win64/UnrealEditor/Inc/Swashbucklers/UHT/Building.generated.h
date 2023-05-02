// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Buildings/Building.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef SWASHBUCKLERS_Building_generated_h
#error "Building.generated.h already included, missing '#pragma once' in Building.h"
#endif
#define SWASHBUCKLERS_Building_generated_h

#define FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Building_h_24_SPARSE_DATA
#define FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Building_h_24_RPC_WRAPPERS \
	virtual void MulticastOnBuildingHealthChange_Implementation(float Health, float MaxHealth, AActor* InstigatorActor); \
 \
	DECLARE_FUNCTION(execMulticastOnBuildingHealthChange); \
	DECLARE_FUNCTION(execOnBuildingHealthChange);


#define FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Building_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastOnBuildingHealthChange_Implementation(float Health, float MaxHealth, AActor* InstigatorActor); \
 \
	DECLARE_FUNCTION(execMulticastOnBuildingHealthChange); \
	DECLARE_FUNCTION(execOnBuildingHealthChange);


#define FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Building_h_24_ACCESSORS
#define FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Building_h_24_CALLBACK_WRAPPERS
#define FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Building_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABuilding(); \
	friend struct Z_Construct_UClass_ABuilding_Statics; \
public: \
	DECLARE_CLASS(ABuilding, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(ABuilding) \
	virtual UObject* _getUObject() const override { return const_cast<ABuilding*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsDead=NETFIELD_REP_START, \
		Team, \
		BuildingType, \
		StartingBuildingHealth, \
		NETFIELD_REP_END=StartingBuildingHealth	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Building_h_24_INCLASS \
private: \
	static void StaticRegisterNativesABuilding(); \
	friend struct Z_Construct_UClass_ABuilding_Statics; \
public: \
	DECLARE_CLASS(ABuilding, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(ABuilding) \
	virtual UObject* _getUObject() const override { return const_cast<ABuilding*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsDead=NETFIELD_REP_START, \
		Team, \
		BuildingType, \
		StartingBuildingHealth, \
		NETFIELD_REP_END=StartingBuildingHealth	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Building_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABuilding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABuilding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuilding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuilding); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuilding(ABuilding&&); \
	NO_API ABuilding(const ABuilding&); \
public: \
	NO_API virtual ~ABuilding();


#define FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Building_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuilding(ABuilding&&); \
	NO_API ABuilding(const ABuilding&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuilding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuilding); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABuilding) \
	NO_API virtual ~ABuilding();


#define FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Building_h_21_PROLOG
#define FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Building_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Building_h_24_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Building_h_24_RPC_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Building_h_24_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Building_h_24_CALLBACK_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Building_h_24_INCLASS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Building_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Building_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Building_h_24_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Building_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Building_h_24_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Building_h_24_CALLBACK_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Building_h_24_INCLASS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Building_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWASHBUCKLERS_API UClass* StaticClass<class ABuilding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Building_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
