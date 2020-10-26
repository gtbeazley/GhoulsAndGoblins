// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GHOULSANDGOODIES_Base_generated_h
#error "Base.generated.h already included, missing '#pragma once' in Base.h"
#endif
#define GHOULSANDGOODIES_Base_generated_h

#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Base_h_17_RPC_WRAPPERS
#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Base_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Base_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABase(); \
	friend struct Z_Construct_UClass_ABase_Statics; \
public: \
	DECLARE_CLASS(ABase, ADefendingUnit, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GhoulsAndGoodies"), NO_API) \
	DECLARE_SERIALIZER(ABase)


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Base_h_17_INCLASS \
private: \
	static void StaticRegisterNativesABase(); \
	friend struct Z_Construct_UClass_ABase_Statics; \
public: \
	DECLARE_CLASS(ABase, ADefendingUnit, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GhoulsAndGoodies"), NO_API) \
	DECLARE_SERIALIZER(ABase)


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Base_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABase(ABase&&); \
	NO_API ABase(const ABase&); \
public:


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Base_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABase(ABase&&); \
	NO_API ABase(const ABase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABase)


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Base_h_17_PRIVATE_PROPERTY_OFFSET
#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Base_h_14_PROLOG
#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Base_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Base_h_17_PRIVATE_PROPERTY_OFFSET \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Base_h_17_RPC_WRAPPERS \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Base_h_17_INCLASS \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Base_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Base_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Base_h_17_PRIVATE_PROPERTY_OFFSET \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Base_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Base_h_17_INCLASS_NO_PURE_DECLS \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Base_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GHOULSANDGOODIES_API UClass* StaticClass<class ABase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
