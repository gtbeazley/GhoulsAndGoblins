// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GHOULSANDGOODIES_Marvin_generated_h
#error "Marvin.generated.h already included, missing '#pragma once' in Marvin.h"
#endif
#define GHOULSANDGOODIES_Marvin_generated_h

#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Marvin_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTick) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_a_deltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Tick(Z_Param_a_deltaTime); \
		P_NATIVE_END; \
	}


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Marvin_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTick) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_a_deltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Tick(Z_Param_a_deltaTime); \
		P_NATIVE_END; \
	}


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Marvin_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMarvin(); \
	friend struct Z_Construct_UClass_AMarvin_Statics; \
public: \
	DECLARE_CLASS(AMarvin, AEnemyUnit, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GhoulsAndGoodies"), NO_API) \
	DECLARE_SERIALIZER(AMarvin)


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Marvin_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMarvin(); \
	friend struct Z_Construct_UClass_AMarvin_Statics; \
public: \
	DECLARE_CLASS(AMarvin, AEnemyUnit, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GhoulsAndGoodies"), NO_API) \
	DECLARE_SERIALIZER(AMarvin)


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Marvin_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMarvin(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMarvin) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMarvin); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMarvin); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMarvin(AMarvin&&); \
	NO_API AMarvin(const AMarvin&); \
public:


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Marvin_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMarvin(AMarvin&&); \
	NO_API AMarvin(const AMarvin&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMarvin); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMarvin); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMarvin)


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Marvin_h_15_PRIVATE_PROPERTY_OFFSET
#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Marvin_h_12_PROLOG
#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Marvin_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_Marvin_h_15_PRIVATE_PROPERTY_OFFSET \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_Marvin_h_15_RPC_WRAPPERS \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_Marvin_h_15_INCLASS \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_Marvin_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Marvin_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_Marvin_h_15_PRIVATE_PROPERTY_OFFSET \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_Marvin_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_Marvin_h_15_INCLASS_NO_PURE_DECLS \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_Marvin_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GHOULSANDGOODIES_API UClass* StaticClass<class AMarvin>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GhoulsAndGoodies_Source_GhoulsAndGoodies_Marvin_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
