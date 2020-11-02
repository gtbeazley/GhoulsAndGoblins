// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GHOULSANDGOODIES_Buddy_generated_h
#error "Buddy.generated.h already included, missing '#pragma once' in Buddy.h"
#endif
#define GHOULSANDGOODIES_Buddy_generated_h

#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Buddy_h_15_RPC_WRAPPERS
#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Buddy_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Buddy_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABuddy(); \
	friend struct Z_Construct_UClass_ABuddy_Statics; \
public: \
	DECLARE_CLASS(ABuddy, AEnemyUnit, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GhoulsAndGoodies"), NO_API) \
	DECLARE_SERIALIZER(ABuddy)


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Buddy_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABuddy(); \
	friend struct Z_Construct_UClass_ABuddy_Statics; \
public: \
	DECLARE_CLASS(ABuddy, AEnemyUnit, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GhoulsAndGoodies"), NO_API) \
	DECLARE_SERIALIZER(ABuddy)


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Buddy_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABuddy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABuddy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuddy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuddy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuddy(ABuddy&&); \
	NO_API ABuddy(const ABuddy&); \
public:


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Buddy_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuddy(ABuddy&&); \
	NO_API ABuddy(const ABuddy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuddy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuddy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABuddy)


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Buddy_h_15_PRIVATE_PROPERTY_OFFSET
#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Buddy_h_12_PROLOG
#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Buddy_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Buddy_h_15_PRIVATE_PROPERTY_OFFSET \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Buddy_h_15_RPC_WRAPPERS \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Buddy_h_15_INCLASS \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Buddy_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Buddy_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Buddy_h_15_PRIVATE_PROPERTY_OFFSET \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Buddy_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Buddy_h_15_INCLASS_NO_PURE_DECLS \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Buddy_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GHOULSANDGOODIES_API UClass* StaticClass<class ABuddy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GhoulsAndGoodies_Source_GhoulsAndGoodies_Public_Buddy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
