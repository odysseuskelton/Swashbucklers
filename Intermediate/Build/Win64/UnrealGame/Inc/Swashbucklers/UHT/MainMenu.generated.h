// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HUD/MainMenu.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FServerData;
#ifdef SWASHBUCKLERS_MainMenu_generated_h
#error "MainMenu.generated.h already included, missing '#pragma once' in MainMenu.h"
#endif
#define SWASHBUCKLERS_MainMenu_generated_h

#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_MainMenu_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FServerData_Statics; \
	SWASHBUCKLERS_API static class UScriptStruct* StaticStruct();


template<> SWASHBUCKLERS_API UScriptStruct* StaticStruct<struct FServerData>();

#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_MainMenu_h_38_SPARSE_DATA
#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_MainMenu_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execQuitPressed); \
	DECLARE_FUNCTION(execOpenMainMenu); \
	DECLARE_FUNCTION(execOpenSettingsMenu); \
	DECLARE_FUNCTION(execOpenJoinMenu); \
	DECLARE_FUNCTION(execJoinServer); \
	DECLARE_FUNCTION(execSwitchTeamsButtonPressed); \
	DECLARE_FUNCTION(execHostServer); \
	DECLARE_FUNCTION(execOpenHostMenu); \
	DECLARE_FUNCTION(execCloseLobbyMenu); \
	DECLARE_FUNCTION(execStartGame); \
	DECLARE_FUNCTION(execOpenLobbyMenu); \
	DECLARE_FUNCTION(execSetFindServerStatusText); \
	DECLARE_FUNCTION(execRefreshServers); \
	DECLARE_FUNCTION(execCreateServerLines);


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_MainMenu_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execQuitPressed); \
	DECLARE_FUNCTION(execOpenMainMenu); \
	DECLARE_FUNCTION(execOpenSettingsMenu); \
	DECLARE_FUNCTION(execOpenJoinMenu); \
	DECLARE_FUNCTION(execJoinServer); \
	DECLARE_FUNCTION(execSwitchTeamsButtonPressed); \
	DECLARE_FUNCTION(execHostServer); \
	DECLARE_FUNCTION(execOpenHostMenu); \
	DECLARE_FUNCTION(execCloseLobbyMenu); \
	DECLARE_FUNCTION(execStartGame); \
	DECLARE_FUNCTION(execOpenLobbyMenu); \
	DECLARE_FUNCTION(execSetFindServerStatusText); \
	DECLARE_FUNCTION(execRefreshServers); \
	DECLARE_FUNCTION(execCreateServerLines);


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_MainMenu_h_38_ACCESSORS
#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_MainMenu_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainMenu(); \
	friend struct Z_Construct_UClass_UMainMenu_Statics; \
public: \
	DECLARE_CLASS(UMainMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(UMainMenu)


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_MainMenu_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUMainMenu(); \
	friend struct Z_Construct_UClass_UMainMenu_Statics; \
public: \
	DECLARE_CLASS(UMainMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(UMainMenu)


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_MainMenu_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenu); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenu(UMainMenu&&); \
	NO_API UMainMenu(const UMainMenu&); \
public: \
	NO_API virtual ~UMainMenu();


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_MainMenu_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenu(UMainMenu&&); \
	NO_API UMainMenu(const UMainMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenu) \
	NO_API virtual ~UMainMenu();


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_MainMenu_h_35_PROLOG
#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_MainMenu_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_MainMenu_h_38_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_MainMenu_h_38_RPC_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_MainMenu_h_38_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_MainMenu_h_38_INCLASS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_MainMenu_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_MainMenu_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_MainMenu_h_38_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_MainMenu_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_MainMenu_h_38_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_MainMenu_h_38_INCLASS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_MainMenu_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWASHBUCKLERS_API UClass* StaticClass<class UMainMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Swashbucklers_Source_Swashbucklers_Public_HUD_MainMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
