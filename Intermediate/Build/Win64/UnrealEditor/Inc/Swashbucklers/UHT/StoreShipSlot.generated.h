// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HUD/StoreShipSlot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SWASHBUCKLERS_StoreShipSlot_generated_h
#error "StoreShipSlot.generated.h already included, missing '#pragma once' in StoreShipSlot.h"
#endif
#define SWASHBUCKLERS_StoreShipSlot_generated_h

#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_StoreShipSlot_h_9_DELEGATE \
static inline void FOnShipPurchaseDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnShipPurchaseDelegate) \
{ \
	OnShipPurchaseDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_StoreShipSlot_h_23_SPARSE_DATA
#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_StoreShipSlot_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBuyShip);


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_StoreShipSlot_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBuyShip);


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_StoreShipSlot_h_23_ACCESSORS
#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_StoreShipSlot_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStoreShipSlot(); \
	friend struct Z_Construct_UClass_UStoreShipSlot_Statics; \
public: \
	DECLARE_CLASS(UStoreShipSlot, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(UStoreShipSlot)


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_StoreShipSlot_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUStoreShipSlot(); \
	friend struct Z_Construct_UClass_UStoreShipSlot_Statics; \
public: \
	DECLARE_CLASS(UStoreShipSlot, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(UStoreShipSlot)


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_StoreShipSlot_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStoreShipSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStoreShipSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoreShipSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoreShipSlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStoreShipSlot(UStoreShipSlot&&); \
	NO_API UStoreShipSlot(const UStoreShipSlot&); \
public: \
	NO_API virtual ~UStoreShipSlot();


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_StoreShipSlot_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStoreShipSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStoreShipSlot(UStoreShipSlot&&); \
	NO_API UStoreShipSlot(const UStoreShipSlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoreShipSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoreShipSlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStoreShipSlot) \
	NO_API virtual ~UStoreShipSlot();


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_StoreShipSlot_h_20_PROLOG
#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_StoreShipSlot_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_StoreShipSlot_h_23_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_StoreShipSlot_h_23_RPC_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_StoreShipSlot_h_23_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_StoreShipSlot_h_23_INCLASS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_StoreShipSlot_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_StoreShipSlot_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_StoreShipSlot_h_23_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_StoreShipSlot_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_StoreShipSlot_h_23_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_StoreShipSlot_h_23_INCLASS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_StoreShipSlot_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWASHBUCKLERS_API UClass* StaticClass<class UStoreShipSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Swashbucklers_Source_Swashbucklers_Public_HUD_StoreShipSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
