// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Buildings/Store.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SWASHBUCKLERS_Store_generated_h
#error "Store.generated.h already included, missing '#pragma once' in Store.h"
#endif
#define SWASHBUCKLERS_Store_generated_h

#define FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Store_h_26_SPARSE_DATA
#define FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Store_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execItemPurchased); \
	DECLARE_FUNCTION(execExitStore); \
	DECLARE_FUNCTION(execEnterStore);


#define FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Store_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execItemPurchased); \
	DECLARE_FUNCTION(execExitStore); \
	DECLARE_FUNCTION(execEnterStore);


#define FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Store_h_26_ACCESSORS
#define FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Store_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStore(); \
	friend struct Z_Construct_UClass_AStore_Statics; \
public: \
	DECLARE_CLASS(AStore, ABuilding, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(AStore) \
	virtual UObject* _getUObject() const override { return const_cast<AStore*>(this); }


#define FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Store_h_26_INCLASS \
private: \
	static void StaticRegisterNativesAStore(); \
	friend struct Z_Construct_UClass_AStore_Statics; \
public: \
	DECLARE_CLASS(AStore, ABuilding, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(AStore) \
	virtual UObject* _getUObject() const override { return const_cast<AStore*>(this); }


#define FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Store_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStore(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStore) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStore); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStore); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStore(AStore&&); \
	NO_API AStore(const AStore&); \
public: \
	NO_API virtual ~AStore();


#define FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Store_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStore(AStore&&); \
	NO_API AStore(const AStore&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStore); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStore); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStore) \
	NO_API virtual ~AStore();


#define FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Store_h_23_PROLOG
#define FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Store_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Store_h_26_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Store_h_26_RPC_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Store_h_26_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Store_h_26_INCLASS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Store_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Store_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Store_h_26_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Store_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Store_h_26_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Store_h_26_INCLASS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Store_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWASHBUCKLERS_API UClass* StaticClass<class AStore>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Swashbucklers_Source_Swashbucklers_Public_Buildings_Store_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
