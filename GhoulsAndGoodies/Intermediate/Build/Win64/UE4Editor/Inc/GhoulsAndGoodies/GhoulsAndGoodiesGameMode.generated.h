// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATile;
#ifdef GHOULSANDGOODIES_GhoulsAndGoodiesGameMode_generated_h
#error "GhoulsAndGoodiesGameMode.generated.h already included, missing '#pragma once' in GhoulsAndGoodiesGameMode.h"
#endif
#define GHOULSANDGOODIES_GhoulsAndGoodiesGameMode_generated_h

#define GhoulsAndGoodies_Source_GhoulsAndGoodies_GhoulsAndGoodiesGameMode_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSaveGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTileInFocus) \
	{ \
		P_GET_OBJECT(ATile,Z_Param_a_tile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTileInFocus(Z_Param_a_tile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNextWave) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NextWave(); \
		P_NATIVE_END; \
	}


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_GhoulsAndGoodiesGameMode_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTileInFocus) \
	{ \
		P_GET_OBJECT(ATile,Z_Param_a_tile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTileInFocus(Z_Param_a_tile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNextWave) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NextWave(); \
		P_NATIVE_END; \
	}


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_GhoulsAndGoodiesGameMode_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGhoulsAndGoodiesGameMode(); \
	friend struct Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics; \
public: \
	DECLARE_CLASS(AGhoulsAndGoodiesGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GhoulsAndGoodies"), GHOULSANDGOODIES_API) \
	DECLARE_SERIALIZER(AGhoulsAndGoodiesGameMode)


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_GhoulsAndGoodiesGameMode_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAGhoulsAndGoodiesGameMode(); \
	friend struct Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics; \
public: \
	DECLARE_CLASS(AGhoulsAndGoodiesGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GhoulsAndGoodies"), GHOULSANDGOODIES_API) \
	DECLARE_SERIALIZER(AGhoulsAndGoodiesGameMode)


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_GhoulsAndGoodiesGameMode_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GHOULSANDGOODIES_API AGhoulsAndGoodiesGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGhoulsAndGoodiesGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GHOULSANDGOODIES_API, AGhoulsAndGoodiesGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGhoulsAndGoodiesGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GHOULSANDGOODIES_API AGhoulsAndGoodiesGameMode(AGhoulsAndGoodiesGameMode&&); \
	GHOULSANDGOODIES_API AGhoulsAndGoodiesGameMode(const AGhoulsAndGoodiesGameMode&); \
public:


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_GhoulsAndGoodiesGameMode_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GHOULSANDGOODIES_API AGhoulsAndGoodiesGameMode(AGhoulsAndGoodiesGameMode&&); \
	GHOULSANDGOODIES_API AGhoulsAndGoodiesGameMode(const AGhoulsAndGoodiesGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GHOULSANDGOODIES_API, AGhoulsAndGoodiesGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGhoulsAndGoodiesGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGhoulsAndGoodiesGameMode)


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_GhoulsAndGoodiesGameMode_h_19_PRIVATE_PROPERTY_OFFSET
#define GhoulsAndGoodies_Source_GhoulsAndGoodies_GhoulsAndGoodiesGameMode_h_16_PROLOG
#define GhoulsAndGoodies_Source_GhoulsAndGoodies_GhoulsAndGoodiesGameMode_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_GhoulsAndGoodiesGameMode_h_19_PRIVATE_PROPERTY_OFFSET \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_GhoulsAndGoodiesGameMode_h_19_RPC_WRAPPERS \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_GhoulsAndGoodiesGameMode_h_19_INCLASS \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_GhoulsAndGoodiesGameMode_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_GhoulsAndGoodiesGameMode_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_GhoulsAndGoodiesGameMode_h_19_PRIVATE_PROPERTY_OFFSET \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_GhoulsAndGoodiesGameMode_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_GhoulsAndGoodiesGameMode_h_19_INCLASS_NO_PURE_DECLS \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_GhoulsAndGoodiesGameMode_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GHOULSANDGOODIES_API UClass* StaticClass<class AGhoulsAndGoodiesGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GhoulsAndGoodies_Source_GhoulsAndGoodies_GhoulsAndGoodiesGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
