// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Ships/ExplosiveShip.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SWASHBUCKLERS_ExplosiveShip_generated_h
#error "ExplosiveShip.generated.h already included, missing '#pragma once' in ExplosiveShip.h"
#endif
#define SWASHBUCKLERS_ExplosiveShip_generated_h

#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_ExplosiveShip_h_18_SPARSE_DATA
#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_ExplosiveShip_h_18_RPC_WRAPPERS \
	virtual void MulticastExplodeShip_Implementation(); \
	virtual void ServerExplodeShip_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticastExplodeShip); \
	DECLARE_FUNCTION(execServerExplodeShip); \
	DECLARE_FUNCTION(execAcquireTarget);


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_ExplosiveShip_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastExplodeShip_Implementation(); \
	virtual void ServerExplodeShip_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticastExplodeShip); \
	DECLARE_FUNCTION(execServerExplodeShip); \
	DECLARE_FUNCTION(execAcquireTarget);


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_ExplosiveShip_h_18_ACCESSORS
#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_ExplosiveShip_h_18_CALLBACK_WRAPPERS
#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_ExplosiveShip_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExplosiveShip(); \
	friend struct Z_Construct_UClass_AExplosiveShip_Statics; \
public: \
	DECLARE_CLASS(AExplosiveShip, AAIShip, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(AExplosiveShip) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PrivateerFuseColor=NETFIELD_REP_START, \
		PirateFuseColor, \
		NETFIELD_REP_END=PirateFuseColor	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_ExplosiveShip_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAExplosiveShip(); \
	friend struct Z_Construct_UClass_AExplosiveShip_Statics; \
public: \
	DECLARE_CLASS(AExplosiveShip, AAIShip, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(AExplosiveShip) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PrivateerFuseColor=NETFIELD_REP_START, \
		PirateFuseColor, \
		NETFIELD_REP_END=PirateFuseColor	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_ExplosiveShip_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AExplosiveShip(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExplosiveShip) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExplosiveShip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExplosiveShip); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExplosiveShip(AExplosiveShip&&); \
	NO_API AExplosiveShip(const AExplosiveShip&); \
public: \
	NO_API virtual ~AExplosiveShip();


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_ExplosiveShip_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExplosiveShip(AExplosiveShip&&); \
	NO_API AExplosiveShip(const AExplosiveShip&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExplosiveShip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExplosiveShip); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AExplosiveShip) \
	NO_API virtual ~AExplosiveShip();


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_ExplosiveShip_h_15_PROLOG
#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_ExplosiveShip_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_ExplosiveShip_h_18_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_ExplosiveShip_h_18_RPC_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_ExplosiveShip_h_18_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_ExplosiveShip_h_18_CALLBACK_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_ExplosiveShip_h_18_INCLASS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_ExplosiveShip_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_ExplosiveShip_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_ExplosiveShip_h_18_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_ExplosiveShip_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_ExplosiveShip_h_18_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_ExplosiveShip_h_18_CALLBACK_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_ExplosiveShip_h_18_INCLASS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_ExplosiveShip_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWASHBUCKLERS_API UClass* StaticClass<class AExplosiveShip>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Swashbucklers_Source_Swashbucklers_Public_Ships_ExplosiveShip_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
