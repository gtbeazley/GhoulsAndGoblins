// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GHOULSANDGOODIES_EnemyUnit_generated_h
#error "EnemyUnit.generated.h already included, missing '#pragma once' in EnemyUnit.h"
#endif
#define GHOULSANDGOODIES_EnemyUnit_generated_h

#define GhoulsAndGoodies_Source_GhoulsAndGoodies_EnemyUnit_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateLifeBar) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateLifeBar(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDespawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Despawn(); \
		P_NATIVE_END; \
	}


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_EnemyUnit_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateLifeBar) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateLifeBar(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDespawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Despawn(); \
		P_NATIVE_END; \
	}


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_EnemyUnit_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyUnit(); \
	friend struct Z_Construct_UClass_AEnemyUnit_Statics; \
public: \
	DECLARE_CLASS(AEnemyUnit, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GhoulsAndGoodies"), NO_API) \
	DECLARE_SERIALIZER(AEnemyUnit)


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_EnemyUnit_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyUnit(); \
	friend struct Z_Construct_UClass_AEnemyUnit_Statics; \
public: \
	DECLARE_CLASS(AEnemyUnit, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GhoulsAndGoodies"), NO_API) \
	DECLARE_SERIALIZER(AEnemyUnit)


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_EnemyUnit_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyUnit(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyUnit) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyUnit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyUnit); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyUnit(AEnemyUnit&&); \
	NO_API AEnemyUnit(const AEnemyUnit&); \
public:


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_EnemyUnit_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyUnit(AEnemyUnit&&); \
	NO_API AEnemyUnit(const AEnemyUnit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyUnit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyUnit); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyUnit)


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_EnemyUnit_h_18_PRIVATE_PROPERTY_OFFSET
#define GhoulsAndGoodies_Source_GhoulsAndGoodies_EnemyUnit_h_15_PROLOG
#define GhoulsAndGoodies_Source_GhoulsAndGoodies_EnemyUnit_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_EnemyUnit_h_18_PRIVATE_PROPERTY_OFFSET \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_EnemyUnit_h_18_RPC_WRAPPERS \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_EnemyUnit_h_18_INCLASS \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_EnemyUnit_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_EnemyUnit_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_EnemyUnit_h_18_PRIVATE_PROPERTY_OFFSET \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_EnemyUnit_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_EnemyUnit_h_18_INCLASS_NO_PURE_DECLS \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_EnemyUnit_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GHOULSANDGOODIES_API UClass* StaticClass<class AEnemyUnit>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GhoulsAndGoodies_Source_GhoulsAndGoodies_EnemyUnit_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
