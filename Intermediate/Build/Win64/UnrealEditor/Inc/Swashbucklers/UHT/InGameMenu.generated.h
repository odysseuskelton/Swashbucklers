// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HUD/InGameMenu.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SWASHBUCKLERS_InGameMenu_generated_h
#error "InGameMenu.generated.h already included, missing '#pragma once' in InGameMenu.h"
#endif
#define SWASHBUCKLERS_InGameMenu_generated_h

#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_InGameMenu_h_18_SPARSE_DATA
#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_InGameMenu_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReturnToInGameMenu); \
	DECLARE_FUNCTION(execExitGame); \
	DECLARE_FUNCTION(execExitToMainMenu); \
	DECLARE_FUNCTION(execOpenSettingsMenu); \
	DECLARE_FUNCTION(execTeardown);


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_InGameMenu_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReturnToInGameMenu); \
	DECLARE_FUNCTION(execExitGame); \
	DECLARE_FUNCTION(execExitToMainMenu); \
	DECLARE_FUNCTION(execOpenSettingsMenu); \
	DECLARE_FUNCTION(execTeardown);


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_InGameMenu_h_18_ACCESSORS
#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_InGameMenu_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInGameMenu(); \
	friend struct Z_Construct_UClass_UInGameMenu_Statics; \
public: \
	DECLARE_CLASS(UInGameMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(UInGameMenu)


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_InGameMenu_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUInGameMenu(); \
	friend struct Z_Construct_UClass_UInGameMenu_Statics; \
public: \
	DECLARE_CLASS(UInGameMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(UInGameMenu)


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_InGameMenu_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInGameMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInGameMenu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInGameMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInGameMenu); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInGameMenu(UInGameMenu&&); \
	NO_API UInGameMenu(const UInGameMenu&); \
public: \
	NO_API virtual ~UInGameMenu();


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_InGameMenu_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInGameMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInGameMenu(UInGameMenu&&); \
	NO_API UInGameMenu(const UInGameMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInGameMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInGameMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInGameMenu) \
	NO_API virtual ~UInGameMenu();


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_InGameMenu_h_15_PROLOG
#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_InGameMenu_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_InGameMenu_h_18_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_InGameMenu_h_18_RPC_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_InGameMenu_h_18_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_InGameMenu_h_18_INCLASS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_InGameMenu_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_InGameMenu_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_InGameMenu_h_18_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_InGameMenu_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_InGameMenu_h_18_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_InGameMenu_h_18_INCLASS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_InGameMenu_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWASHBUCKLERS_API UClass* StaticClass<class UInGameMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Swashbucklers_Source_Swashbucklers_Public_HUD_InGameMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
