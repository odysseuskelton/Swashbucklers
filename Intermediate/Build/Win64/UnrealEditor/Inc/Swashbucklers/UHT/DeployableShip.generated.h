// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Ships/DeployableShip.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USensorBase;
enum class ETeam : uint8;
struct FSensedStimulus;
#ifdef SWASHBUCKLERS_DeployableShip_generated_h
#error "DeployableShip.generated.h already included, missing '#pragma once' in DeployableShip.h"
#endif
#define SWASHBUCKLERS_DeployableShip_generated_h

#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_DeployableShip_h_22_SPARSE_DATA
#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_DeployableShip_h_22_RPC_WRAPPERS \
	virtual void MulticastSetMaterial_Implementation(ETeam TeamOfOwner); \
 \
	DECLARE_FUNCTION(execOnCurrentSense); \
	DECLARE_FUNCTION(execOnRep_TurretRotation); \
	DECLARE_FUNCTION(execMulticastSetMaterial);


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_DeployableShip_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastSetMaterial_Implementation(ETeam TeamOfOwner); \
 \
	DECLARE_FUNCTION(execOnCurrentSense); \
	DECLARE_FUNCTION(execOnRep_TurretRotation); \
	DECLARE_FUNCTION(execMulticastSetMaterial);


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_DeployableShip_h_22_ACCESSORS
#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_DeployableShip_h_22_CALLBACK_WRAPPERS
#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_DeployableShip_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADeployableShip(); \
	friend struct Z_Construct_UClass_ADeployableShip_Statics; \
public: \
	DECLARE_CLASS(ADeployableShip, AAIShip, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(ADeployableShip) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentRotation=NETFIELD_REP_START, \
		OwningCaptState, \
		NETFIELD_REP_END=OwningCaptState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_DeployableShip_h_22_INCLASS \
private: \
	static void StaticRegisterNativesADeployableShip(); \
	friend struct Z_Construct_UClass_ADeployableShip_Statics; \
public: \
	DECLARE_CLASS(ADeployableShip, AAIShip, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(ADeployableShip) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentRotation=NETFIELD_REP_START, \
		OwningCaptState, \
		NETFIELD_REP_END=OwningCaptState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_DeployableShip_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADeployableShip(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADeployableShip) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADeployableShip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADeployableShip); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADeployableShip(ADeployableShip&&); \
	NO_API ADeployableShip(const ADeployableShip&); \
public: \
	NO_API virtual ~ADeployableShip();


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_DeployableShip_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADeployableShip(ADeployableShip&&); \
	NO_API ADeployableShip(const ADeployableShip&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADeployableShip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADeployableShip); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADeployableShip) \
	NO_API virtual ~ADeployableShip();


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_DeployableShip_h_19_PROLOG
#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_DeployableShip_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_DeployableShip_h_22_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_DeployableShip_h_22_RPC_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_DeployableShip_h_22_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_DeployableShip_h_22_CALLBACK_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_DeployableShip_h_22_INCLASS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_DeployableShip_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_DeployableShip_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_DeployableShip_h_22_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_DeployableShip_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_DeployableShip_h_22_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_DeployableShip_h_22_CALLBACK_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_DeployableShip_h_22_INCLASS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_DeployableShip_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWASHBUCKLERS_API UClass* StaticClass<class ADeployableShip>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Swashbucklers_Source_Swashbucklers_Public_Ships_DeployableShip_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
