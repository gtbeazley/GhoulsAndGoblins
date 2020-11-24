// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GHOULSANDGOODIES_EnemySpawn_generated_h
#error "EnemySpawn.generated.h already included, missing '#pragma once' in EnemySpawn.h"
#endif
#define GHOULSANDGOODIES_EnemySpawn_generated_h

#define GhoulsAndGoodies_Source_GhoulsAndGoodies_EnemySpawn_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Reset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTurnLightOn) \
	{ \
		P_GET_UBOOL(Z_Param_a_turnOn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TurnLightOn(Z_Param_a_turnOn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQueueSpawn) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_a_enemyType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->QueueSpawn(EEnemyUnitType(Z_Param_a_enemyType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawn) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_a_enemyType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Spawn(EEnemyUnitType(Z_Param_a_enemyType)); \
		P_NATIVE_END; \
	}


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_EnemySpawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Reset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTurnLightOn) \
	{ \
		P_GET_UBOOL(Z_Param_a_turnOn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TurnLightOn(Z_Param_a_turnOn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQueueSpawn) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_a_enemyType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->QueueSpawn(EEnemyUnitType(Z_Param_a_enemyType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawn) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_a_enemyType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Spawn(EEnemyUnitType(Z_Param_a_enemyType)); \
		P_NATIVE_END; \
	}


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_EnemySpawn_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemySpawn(); \
	friend struct Z_Construct_UClass_AEnemySpawn_Statics; \
public: \
	DECLARE_CLASS(AEnemySpawn, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GhoulsAndGoodies"), NO_API) \
	DECLARE_SERIALIZER(AEnemySpawn)


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_EnemySpawn_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAEnemySpawn(); \
	friend struct Z_Construct_UClass_AEnemySpawn_Statics; \
public: \
	DECLARE_CLASS(AEnemySpawn, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GhoulsAndGoodies"), NO_API) \
	DECLARE_SERIALIZER(AEnemySpawn)


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_EnemySpawn_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemySpawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemySpawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemySpawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemySpawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemySpawn(AEnemySpawn&&); \
	NO_API AEnemySpawn(const AEnemySpawn&); \
public:


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_EnemySpawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemySpawn(AEnemySpawn&&); \
	NO_API AEnemySpawn(const AEnemySpawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemySpawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemySpawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemySpawn)


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_EnemySpawn_h_16_PRIVATE_PROPERTY_OFFSET
#define GhoulsAndGoodies_Source_GhoulsAndGoodies_EnemySpawn_h_13_PROLOG
#define GhoulsAndGoodies_Source_GhoulsAndGoodies_EnemySpawn_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_EnemySpawn_h_16_PRIVATE_PROPERTY_OFFSET \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_EnemySpawn_h_16_RPC_WRAPPERS \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_EnemySpawn_h_16_INCLASS \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_EnemySpawn_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_EnemySpawn_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_EnemySpawn_h_16_PRIVATE_PROPERTY_OFFSET \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_EnemySpawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_EnemySpawn_h_16_INCLASS_NO_PURE_DECLS \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_EnemySpawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GHOULSANDGOODIES_API UClass* StaticClass<class AEnemySpawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GhoulsAndGoodies_Source_GhoulsAndGoodies_EnemySpawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
