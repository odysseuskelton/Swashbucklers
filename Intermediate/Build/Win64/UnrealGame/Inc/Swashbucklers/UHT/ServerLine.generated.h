// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HUD/ServerLine.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SWASHBUCKLERS_ServerLine_generated_h
#error "ServerLine.generated.h already included, missing '#pragma once' in ServerLine.h"
#endif
#define SWASHBUCKLERS_ServerLine_generated_h

#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ServerLine_h_18_SPARSE_DATA
#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ServerLine_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnClicked);


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ServerLine_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnClicked);


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ServerLine_h_18_ACCESSORS
#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ServerLine_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUServerLine(); \
	friend struct Z_Construct_UClass_UServerLine_Statics; \
public: \
	DECLARE_CLASS(UServerLine, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(UServerLine)


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ServerLine_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUServerLine(); \
	friend struct Z_Construct_UClass_UServerLine_Statics; \
public: \
	DECLARE_CLASS(UServerLine, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Swashbucklers"), NO_API) \
	DECLARE_SERIALIZER(UServerLine)


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ServerLine_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UServerLine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UServerLine) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UServerLine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UServerLine); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UServerLine(UServerLine&&); \
	NO_API UServerLine(const UServerLine&); \
public: \
	NO_API virtual ~UServerLine();


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ServerLine_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UServerLine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UServerLine(UServerLine&&); \
	NO_API UServerLine(const UServerLine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UServerLine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UServerLine); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UServerLine) \
	NO_API virtual ~UServerLine();


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ServerLine_h_15_PROLOG
#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ServerLine_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ServerLine_h_18_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ServerLine_h_18_RPC_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ServerLine_h_18_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ServerLine_h_18_INCLASS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ServerLine_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ServerLine_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ServerLine_h_18_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ServerLine_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ServerLine_h_18_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ServerLine_h_18_INCLASS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ServerLine_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWASHBUCKLERS_API UClass* StaticClass<class UServerLine>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Swashbucklers_Source_Swashbucklers_Public_HUD_ServerLine_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
