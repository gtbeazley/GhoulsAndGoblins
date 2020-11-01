// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
#ifdef GHOULSANDGOODIES_DefendingUnit_generated_h
#error "DefendingUnit.generated.h already included, missing '#pragma once' in DefendingUnit.h"
#endif
#define GHOULSANDGOODIES_DefendingUnit_generated_h

#define GhoulsAndGoodies_Source_GhoulsAndGoodies_DefendingUnit_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetMesh(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDealDamage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DealDamage(); \
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


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_DefendingUnit_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetMesh(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDealDamage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DealDamage(); \
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


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_DefendingUnit_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADefendingUnit(); \
	friend struct Z_Construct_UClass_ADefendingUnit_Statics; \
public: \
	DECLARE_CLASS(ADefendingUnit, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GhoulsAndGoodies"), NO_API) \
	DECLARE_SERIALIZER(ADefendingUnit)


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_DefendingUnit_h_17_INCLASS \
private: \
	static void StaticRegisterNativesADefendingUnit(); \
	friend struct Z_Construct_UClass_ADefendingUnit_Statics; \
public: \
	DECLARE_CLASS(ADefendingUnit, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GhoulsAndGoodies"), NO_API) \
	DECLARE_SERIALIZER(ADefendingUnit)


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_DefendingUnit_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADefendingUnit(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADefendingUnit) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefendingUnit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefendingUnit); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADefendingUnit(ADefendingUnit&&); \
	NO_API ADefendingUnit(const ADefendingUnit&); \
public:


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_DefendingUnit_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADefendingUnit(ADefendingUnit&&); \
	NO_API ADefendingUnit(const ADefendingUnit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefendingUnit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefendingUnit); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADefendingUnit)


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_DefendingUnit_h_17_PRIVATE_PROPERTY_OFFSET
#define GhoulsAndGoodies_Source_GhoulsAndGoodies_DefendingUnit_h_14_PROLOG
#define GhoulsAndGoodies_Source_GhoulsAndGoodies_DefendingUnit_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_DefendingUnit_h_17_PRIVATE_PROPERTY_OFFSET \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_DefendingUnit_h_17_RPC_WRAPPERS \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_DefendingUnit_h_17_INCLASS \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_DefendingUnit_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_DefendingUnit_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_DefendingUnit_h_17_PRIVATE_PROPERTY_OFFSET \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_DefendingUnit_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_DefendingUnit_h_17_INCLASS_NO_PURE_DECLS \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_DefendingUnit_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GHOULSANDGOODIES_API UClass* StaticClass<class ADefendingUnit>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GhoulsAndGoodies_Source_GhoulsAndGoodies_DefendingUnit_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
