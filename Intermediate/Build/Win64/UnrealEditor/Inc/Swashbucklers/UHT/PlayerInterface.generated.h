// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/PlayerInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SWASHBUCKLERS_PlayerInterface_generated_h
#error "PlayerInterface.generated.h already included, missing '#pragma once' in PlayerInterface.h"
#endif
#define SWASHBUCKLERS_PlayerInterface_generated_h

#define FID_Swashbucklers_Source_Swashbucklers_Public_Interfaces_PlayerInterface_h_16_SPARSE_DATA
#define FID_Swashbucklers_Source_Swashbucklers_Public_Interfaces_PlayerInterface_h_16_RPC_WRAPPERS
#define FID_Swashbucklers_Source_Swashbucklers_Public_Interfaces_PlayerInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Swashbucklers_Source_Swashbucklers_Public_Interfaces_PlayerInterface_h_16_ACCESSORS
#define FID_Swashbucklers_Source_Swashbucklers_Public_Interfaces_PlayerInterface_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SWASHBUCKLERS_API UPlayerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SWASHBUCKLERS_API, UPlayerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SWASHBUCKLERS_API UPlayerInterface(UPlayerInterface&&); \
	SWASHBUCKLERS_API UPlayerInterface(const UPlayerInterface&); \
public: \
	SWASHBUCKLERS_API virtual ~UPlayerInterface();


#define FID_Swashbucklers_Source_Swashbucklers_Public_Interfaces_PlayerInterface_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SWASHBUCKLERS_API UPlayerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SWASHBUCKLERS_API UPlayerInterface(UPlayerInterface&&); \
	SWASHBUCKLERS_API UPlayerInterface(const UPlayerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SWASHBUCKLERS_API, UPlayerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerInterface) \
	SWASHBUCKLERS_API virtual ~UPlayerInterface();


#define FID_Swashbucklers_Source_Swashbucklers_Public_Interfaces_PlayerInterface_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPlayerInterface(); \
	friend struct Z_Construct_UClass_UPlayerInterface_Statics; \
public: \
	DECLARE_CLASS(UPlayerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Swashbucklers"), SWASHBUCKLERS_API) \
	DECLARE_SERIALIZER(UPlayerInterface)


#define FID_Swashbucklers_Source_Swashbucklers_Public_Interfaces_PlayerInterface_h_16_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Interfaces_PlayerInterface_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Swashbucklers_Source_Swashbucklers_Public_Interfaces_PlayerInterface_h_16_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Swashbucklers_Source_Swashbucklers_Public_Interfaces_PlayerInterface_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Interfaces_PlayerInterface_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Swashbucklers_Source_Swashbucklers_Public_Interfaces_PlayerInterface_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Swashbucklers_Source_Swashbucklers_Public_Interfaces_PlayerInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPlayerInterface() {} \
public: \
	typedef UPlayerInterface UClassType; \
	typedef IPlayerInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Swashbucklers_Source_Swashbucklers_Public_Interfaces_PlayerInterface_h_16_INCLASS_IINTERFACE \
protected: \
	virtual ~IPlayerInterface() {} \
public: \
	typedef UPlayerInterface UClassType; \
	typedef IPlayerInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Swashbucklers_Source_Swashbucklers_Public_Interfaces_PlayerInterface_h_13_PROLOG
#define FID_Swashbucklers_Source_Swashbucklers_Public_Interfaces_PlayerInterface_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_Interfaces_PlayerInterface_h_16_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_Interfaces_PlayerInterface_h_16_RPC_WRAPPERS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Interfaces_PlayerInterface_h_16_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Interfaces_PlayerInterface_h_16_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Swashbucklers_Source_Swashbucklers_Public_Interfaces_PlayerInterface_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Swashbucklers_Source_Swashbucklers_Public_Interfaces_PlayerInterface_h_16_SPARSE_DATA \
	FID_Swashbucklers_Source_Swashbucklers_Public_Interfaces_PlayerInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Interfaces_PlayerInterface_h_16_ACCESSORS \
	FID_Swashbucklers_Source_Swashbucklers_Public_Interfaces_PlayerInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SWASHBUCKLERS_API UClass* StaticClass<class UPlayerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Swashbucklers_Source_Swashbucklers_Public_Interfaces_PlayerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
