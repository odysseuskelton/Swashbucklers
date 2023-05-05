// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HUD/CaptainOverlay.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAbilitySlot : uint8;
#ifdef SWASHBUCKLERS_CaptainOverlay_generated_h
#error "CaptainOverlay.generated.h already included, missing '#pragma once' in CaptainOverlay.h"
#endif
#define SWASHBUCKLERS_CaptainOverlay_generated_h

#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptainOverlay_h_22_SPARSE_DATA
#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptainOverlay_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRotateTreasureArrow);


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptainOverlay_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRotateTreasureArrow);


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptainOverlay_h_22_ACCESSORS
#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptainOverlay_h_22_CALLBACK_WRAPPERS
#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptainOverlay_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCaptainOverlay(); \
	friend struct Z_Construct_UClass_UCaptainOverlay_Statics; \
public: \
	DECLARE_CLASS(UCaptainOverlay, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(UCaptainOverlay)


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptainOverlay_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUCaptainOverlay(); \
	friend struct Z_Construct_UClass_UCaptainOverlay_Statics; \
public: \
	DECLARE_CLASS(UCaptainOverlay, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(UCaptainOverlay)


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptainOverlay_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCaptainOverlay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCaptainOverlay) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCaptainOverlay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCaptainOverlay); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCaptainOverlay(UCaptainOverlay&&); \
	NO_API UCaptainOverlay(const UCaptainOverlay&); \
public: \
	NO_API virtual ~UCaptainOverlay();


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptainOverlay_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCaptainOverlay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCaptainOverlay(UCaptainOverlay&&); \
	NO_API UCaptainOverlay(const UCaptainOverlay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCaptainOverlay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCaptainOverlay); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCaptainOverlay) \
	NO_API virtual ~UCaptainOverlay();


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptainOverlay_h_19_PROLOG
#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptainOverlay_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptainOverlay_h_22_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptainOverlay_h_22_RPC_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptainOverlay_h_22_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptainOverlay_h_22_CALLBACK_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptainOverlay_h_22_INCLASS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptainOverlay_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptainOverlay_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptainOverlay_h_22_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptainOverlay_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptainOverlay_h_22_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptainOverlay_h_22_CALLBACK_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptainOverlay_h_22_INCLASS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptainOverlay_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWASHBUCKLERS_API UClass* StaticClass<class UCaptainOverlay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Swashbucklers_Source_Swashbucklers_Public_HUD_CaptainOverlay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
