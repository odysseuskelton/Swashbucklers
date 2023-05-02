// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/StaticNPC.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SWASHBUCKLERS_StaticNPC_generated_h
#error "StaticNPC.generated.h already included, missing '#pragma once' in StaticNPC.h"
#endif
#define SWASHBUCKLERS_StaticNPC_generated_h

#define FID_Swashbucklers_Source_Swashbucklers_Public_AI_StaticNPC_h_21_SPARSE_DATA
#define FID_Swashbucklers_Source_Swashbucklers_Public_AI_StaticNPC_h_21_RPC_WRAPPERS \
	virtual void MulticastOnHealthChanged_Implementation(float Health, float MaxHealth, AActor* InstigatorActor); \
 \
	DECLARE_FUNCTION(execMulticastOnHealthChanged); \
	DECLARE_FUNCTION(execOnHealthChanged); \
	DECLARE_FUNCTION(execSetCanRotate); \
	DECLARE_FUNCTION(execAttackFinished); \
	DECLARE_FUNCTION(execExitAggroRange); \
	DECLARE_FUNCTION(execEnterAggroRange); \
	DECLARE_FUNCTION(execOnMeshOverlap);


#define FID_Swashbucklers_Source_Swashbucklers_Public_AI_StaticNPC_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastOnHealthChanged_Implementation(float Health, float MaxHealth, AActor* InstigatorActor); \
 \
	DECLARE_FUNCTION(execMulticastOnHealthChanged); \
	DECLARE_FUNCTION(execOnHealthChanged); \
	DECLARE_FUNCTION(execSetCanRotate); \
	DECLARE_FUNCTION(execAttackFinished); \
	DECLARE_FUNCTION(execExitAggroRange); \
	DECLARE_FUNCTION(execEnterAggroRange); \
	DECLARE_FUNCTION(execOnMeshOverlap);


#define FID_Swashbucklers_Source_Swashbucklers_Public_AI_StaticNPC_h_21_ACCESSORS
#define FID_Swashbucklers_Source_Swashbucklers_Public_AI_StaticNPC_h_21_CALLBACK_WRAPPERS
#define FID_Swashbucklers_Source_Swashbucklers_Public_AI_StaticNPC_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStaticNPC(); \
	friend struct Z_Construct_UClass_AStaticNPC_Statics; \
public: \
	DECLARE_CLASS(AStaticNPC, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(AStaticNPC) \
	virtual UObject* _getUObject() const override { return const_cast<AStaticNPC*>(this); }


#define FID_Swashbucklers_Source_Swashbucklers_Public_AI_StaticNPC_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAStaticNPC(); \
	friend struct Z_Construct_UClass_AStaticNPC_Statics; \
public: \
	DECLARE_CLASS(AStaticNPC, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(AStaticNPC) \
	virtual UObject* _getUObject() const override { return const_cast<AStaticNPC*>(this); }


#define FID_Swashbucklers_Source_Swashbucklers_Public_AI_StaticNPC_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStaticNPC(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStaticNPC) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStaticNPC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStaticNPC); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStaticNPC(AStaticNPC&&); \
	NO_API AStaticNPC(const AStaticNPC&); \
public: \
	NO_API virtual ~AStaticNPC();


#define FID_Swashbucklers_Source_Swashbucklers_Public_AI_StaticNPC_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStaticNPC(AStaticNPC&&); \
	NO_API AStaticNPC(const AStaticNPC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStaticNPC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStaticNPC); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStaticNPC) \
	NO_API virtual ~AStaticNPC();


#define FID_Swashbucklers_Source_Swashbucklers_Public_AI_StaticNPC_h_18_PROLOG
#define FID_Swashbucklers_Source_Swashbucklers_Public_AI_StaticNPC_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_AI_StaticNPC_h_21_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_AI_StaticNPC_h_21_RPC_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_AI_StaticNPC_h_21_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_AI_StaticNPC_h_21_CALLBACK_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_AI_StaticNPC_h_21_INCLASS \
	FID_Swashbucklers_Source_Swashbucklers_Public_AI_StaticNPC_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Swashbucklers_Source_Swashbucklers_Public_AI_StaticNPC_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_AI_StaticNPC_h_21_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_AI_StaticNPC_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_AI_StaticNPC_h_21_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_AI_StaticNPC_h_21_CALLBACK_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_AI_StaticNPC_h_21_INCLASS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_AI_StaticNPC_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWASHBUCKLERS_API UClass* StaticClass<class AStaticNPC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Swashbucklers_Source_Swashbucklers_Public_AI_StaticNPC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
