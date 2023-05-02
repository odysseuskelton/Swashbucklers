// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Ships/AIShip.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ETeam : uint8;
#ifdef SWASHBUCKLERS_AIShip_generated_h
#error "AIShip.generated.h already included, missing '#pragma once' in AIShip.h"
#endif
#define SWASHBUCKLERS_AIShip_generated_h

#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIShip_h_22_SPARSE_DATA
#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIShip_h_22_RPC_WRAPPERS \
	virtual void ServerMoveToLocation_Implementation(FVector LocationToMoveTo); \
 \
	DECLARE_FUNCTION(execOnRep_SetTeam); \
	DECLARE_FUNCTION(execSetTeam); \
	DECLARE_FUNCTION(execServerMoveToLocation);


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIShip_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerMoveToLocation_Implementation(FVector LocationToMoveTo); \
 \
	DECLARE_FUNCTION(execOnRep_SetTeam); \
	DECLARE_FUNCTION(execSetTeam); \
	DECLARE_FUNCTION(execServerMoveToLocation);


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIShip_h_22_ACCESSORS
#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIShip_h_22_CALLBACK_WRAPPERS
#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIShip_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIShip(); \
	friend struct Z_Construct_UClass_AAIShip_Statics; \
public: \
	DECLARE_CLASS(AAIShip, AShip, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(AAIShip) \
	virtual UObject* _getUObject() const override { return const_cast<AAIShip*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AITeam=NETFIELD_REP_START, \
		NETFIELD_REP_END=AITeam	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIShip_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAAIShip(); \
	friend struct Z_Construct_UClass_AAIShip_Statics; \
public: \
	DECLARE_CLASS(AAIShip, AShip, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(AAIShip) \
	virtual UObject* _getUObject() const override { return const_cast<AAIShip*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AITeam=NETFIELD_REP_START, \
		NETFIELD_REP_END=AITeam	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIShip_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIShip(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIShip) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIShip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIShip); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIShip(AAIShip&&); \
	NO_API AAIShip(const AAIShip&); \
public: \
	NO_API virtual ~AAIShip();


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIShip_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIShip(AAIShip&&); \
	NO_API AAIShip(const AAIShip&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIShip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIShip); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAIShip) \
	NO_API virtual ~AAIShip();


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIShip_h_19_PROLOG
#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIShip_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIShip_h_22_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIShip_h_22_RPC_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIShip_h_22_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIShip_h_22_CALLBACK_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIShip_h_22_INCLASS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIShip_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIShip_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIShip_h_22_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIShip_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIShip_h_22_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIShip_h_22_CALLBACK_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIShip_h_22_INCLASS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIShip_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWASHBUCKLERS_API UClass* StaticClass<class AAIShip>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Swashbucklers_Source_Swashbucklers_Public_Ships_AIShip_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
