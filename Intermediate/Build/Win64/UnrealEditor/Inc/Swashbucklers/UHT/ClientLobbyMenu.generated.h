// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HUD/ClientLobbyMenu.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SWASHBUCKLERS_ClientLobbyMenu_generated_h
#error "ClientLobbyMenu.generated.h already included, missing '#pragma once' in ClientLobbyMenu.h"
#endif
#define SWASHBUCKLERS_ClientLobbyMenu_generated_h

#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ClientLobbyMenu_h_19_SPARSE_DATA
#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ClientLobbyMenu_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExitLobbyButtonPressed); \
	DECLARE_FUNCTION(execSwitchTeamsButtonPressed);


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ClientLobbyMenu_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExitLobbyButtonPressed); \
	DECLARE_FUNCTION(execSwitchTeamsButtonPressed);


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ClientLobbyMenu_h_19_ACCESSORS
#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ClientLobbyMenu_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClientLobbyMenu(); \
	friend struct Z_Construct_UClass_UClientLobbyMenu_Statics; \
public: \
	DECLARE_CLASS(UClientLobbyMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(UClientLobbyMenu)


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ClientLobbyMenu_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUClientLobbyMenu(); \
	friend struct Z_Construct_UClass_UClientLobbyMenu_Statics; \
public: \
	DECLARE_CLASS(UClientLobbyMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(UClientLobbyMenu)


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ClientLobbyMenu_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClientLobbyMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClientLobbyMenu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClientLobbyMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClientLobbyMenu); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClientLobbyMenu(UClientLobbyMenu&&); \
	NO_API UClientLobbyMenu(const UClientLobbyMenu&); \
public: \
	NO_API virtual ~UClientLobbyMenu();


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ClientLobbyMenu_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClientLobbyMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClientLobbyMenu(UClientLobbyMenu&&); \
	NO_API UClientLobbyMenu(const UClientLobbyMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClientLobbyMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClientLobbyMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClientLobbyMenu) \
	NO_API virtual ~UClientLobbyMenu();


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ClientLobbyMenu_h_16_PROLOG
#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ClientLobbyMenu_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ClientLobbyMenu_h_19_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ClientLobbyMenu_h_19_RPC_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ClientLobbyMenu_h_19_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ClientLobbyMenu_h_19_INCLASS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ClientLobbyMenu_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ClientLobbyMenu_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ClientLobbyMenu_h_19_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ClientLobbyMenu_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ClientLobbyMenu_h_19_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ClientLobbyMenu_h_19_INCLASS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ClientLobbyMenu_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWASHBUCKLERS_API UClass* StaticClass<class UClientLobbyMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ClientLobbyMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
