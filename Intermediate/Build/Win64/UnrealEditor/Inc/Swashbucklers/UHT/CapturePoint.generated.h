// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CapturePoints/CapturePoint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SWASHBUCKLERS_CapturePoint_generated_h
#error "CapturePoint.generated.h already included, missing '#pragma once' in CapturePoint.h"
#endif
#define SWASHBUCKLERS_CapturePoint_generated_h

#define FID_Swashbucklers_Source_Swashbucklers_Public_CapturePoints_CapturePoint_h_16_SPARSE_DATA
#define FID_Swashbucklers_Source_Swashbucklers_Public_CapturePoints_CapturePoint_h_16_RPC_WRAPPERS \
	virtual void MulticastSetCapturePointVisibility_Implementation(bool bVisibility); \
 \
	DECLARE_FUNCTION(execOnRep_CaptureProgress); \
	DECLARE_FUNCTION(execMulticastSetCapturePointVisibility); \
	DECLARE_FUNCTION(execCapturePointEndOverlap); \
	DECLARE_FUNCTION(execCapturePointOverlap); \
	DECLARE_FUNCTION(execOnRep_CapturePointMaterialChange);


#define FID_Swashbucklers_Source_Swashbucklers_Public_CapturePoints_CapturePoint_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastSetCapturePointVisibility_Implementation(bool bVisibility); \
 \
	DECLARE_FUNCTION(execOnRep_CaptureProgress); \
	DECLARE_FUNCTION(execMulticastSetCapturePointVisibility); \
	DECLARE_FUNCTION(execCapturePointEndOverlap); \
	DECLARE_FUNCTION(execCapturePointOverlap); \
	DECLARE_FUNCTION(execOnRep_CapturePointMaterialChange);


#define FID_Swashbucklers_Source_Swashbucklers_Public_CapturePoints_CapturePoint_h_16_ACCESSORS
#define FID_Swashbucklers_Source_Swashbucklers_Public_CapturePoints_CapturePoint_h_16_CALLBACK_WRAPPERS
#define FID_Swashbucklers_Source_Swashbucklers_Public_CapturePoints_CapturePoint_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACapturePoint(); \
	friend struct Z_Construct_UClass_ACapturePoint_Statics; \
public: \
	DECLARE_CLASS(ACapturePoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(ACapturePoint) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentMaterial=NETFIELD_REP_START, \
		CaptureProgress, \
		bCaptured, \
		NETFIELD_REP_END=bCaptured	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Swashbucklers_Source_Swashbucklers_Public_CapturePoints_CapturePoint_h_16_INCLASS \
private: \
	static void StaticRegisterNativesACapturePoint(); \
	friend struct Z_Construct_UClass_ACapturePoint_Statics; \
public: \
	DECLARE_CLASS(ACapturePoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(ACapturePoint) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentMaterial=NETFIELD_REP_START, \
		CaptureProgress, \
		bCaptured, \
		NETFIELD_REP_END=bCaptured	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Swashbucklers_Source_Swashbucklers_Public_CapturePoints_CapturePoint_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACapturePoint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACapturePoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACapturePoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACapturePoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACapturePoint(ACapturePoint&&); \
	NO_API ACapturePoint(const ACapturePoint&); \
public: \
	NO_API virtual ~ACapturePoint();


#define FID_Swashbucklers_Source_Swashbucklers_Public_CapturePoints_CapturePoint_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACapturePoint(ACapturePoint&&); \
	NO_API ACapturePoint(const ACapturePoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACapturePoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACapturePoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACapturePoint) \
	NO_API virtual ~ACapturePoint();


#define FID_Swashbucklers_Source_Swashbucklers_Public_CapturePoints_CapturePoint_h_13_PROLOG
#define FID_Swashbucklers_Source_Swashbucklers_Public_CapturePoints_CapturePoint_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_CapturePoints_CapturePoint_h_16_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_CapturePoints_CapturePoint_h_16_RPC_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_CapturePoints_CapturePoint_h_16_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_CapturePoints_CapturePoint_h_16_CALLBACK_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_CapturePoints_CapturePoint_h_16_INCLASS \
	FID_Swashbucklers_Source_Swashbucklers_Public_CapturePoints_CapturePoint_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Swashbucklers_Source_Swashbucklers_Public_CapturePoints_CapturePoint_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_CapturePoints_CapturePoint_h_16_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_CapturePoints_CapturePoint_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_CapturePoints_CapturePoint_h_16_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_CapturePoints_CapturePoint_h_16_CALLBACK_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_CapturePoints_CapturePoint_h_16_INCLASS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_CapturePoints_CapturePoint_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWASHBUCKLERS_API UClass* StaticClass<class ACapturePoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Swashbucklers_Source_Swashbucklers_Public_CapturePoints_CapturePoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
