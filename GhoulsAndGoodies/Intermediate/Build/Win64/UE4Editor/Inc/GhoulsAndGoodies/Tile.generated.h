// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMeshComponent;
class UPrimitiveComponent;
struct FKey;
#ifdef GHOULSANDGOODIES_Tile_generated_h
#error "Tile.generated.h already included, missing '#pragma once' in Tile.h"
#endif
#define GHOULSANDGOODIES_Tile_generated_h

#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Tile_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetStaticMeshComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetStaticMeshComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSellUnit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SellUnit(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDespawnUnit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DespawnUnit(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMeshOnClick) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_a_primCom); \
		P_GET_STRUCT(FKey,Z_Param_a_inKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MeshOnClick(Z_Param_a_primCom,Z_Param_a_inKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMeshOnEndHover) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_a_primCom); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MeshOnEndHover(Z_Param_a_primCom); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMeshOnBeginHover) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_a_primCom); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MeshOnBeginHover(Z_Param_a_primCom); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDefenceUnitType) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_a_defType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDefenceUnitType(ETileDefenceType(Z_Param_a_defType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetupTileMaterial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetupTileMaterial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetupDefUnit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetupDefUnit(); \
		P_NATIVE_END; \
	}


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Tile_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStaticMeshComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetStaticMeshComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSellUnit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SellUnit(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDespawnUnit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DespawnUnit(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMeshOnClick) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_a_primCom); \
		P_GET_STRUCT(FKey,Z_Param_a_inKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MeshOnClick(Z_Param_a_primCom,Z_Param_a_inKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMeshOnEndHover) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_a_primCom); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MeshOnEndHover(Z_Param_a_primCom); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMeshOnBeginHover) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_a_primCom); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MeshOnBeginHover(Z_Param_a_primCom); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDefenceUnitType) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_a_defType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDefenceUnitType(ETileDefenceType(Z_Param_a_defType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetupTileMaterial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetupTileMaterial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetupDefUnit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetupDefUnit(); \
		P_NATIVE_END; \
	}


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Tile_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATile(); \
	friend struct Z_Construct_UClass_ATile_Statics; \
public: \
	DECLARE_CLASS(ATile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GhoulsAndGoodies"), NO_API) \
	DECLARE_SERIALIZER(ATile)


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Tile_h_17_INCLASS \
private: \
	static void StaticRegisterNativesATile(); \
	friend struct Z_Construct_UClass_ATile_Statics; \
public: \
	DECLARE_CLASS(ATile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GhoulsAndGoodies"), NO_API) \
	DECLARE_SERIALIZER(ATile)


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Tile_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATile(ATile&&); \
	NO_API ATile(const ATile&); \
public:


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Tile_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATile(ATile&&); \
	NO_API ATile(const ATile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATile)


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Tile_h_17_PRIVATE_PROPERTY_OFFSET
#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Tile_h_14_PROLOG
#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Tile_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_Tile_h_17_PRIVATE_PROPERTY_OFFSET \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_Tile_h_17_RPC_WRAPPERS \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_Tile_h_17_INCLASS \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_Tile_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GhoulsAndGoodies_Source_GhoulsAndGoodies_Tile_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_Tile_h_17_PRIVATE_PROPERTY_OFFSET \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_Tile_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_Tile_h_17_INCLASS_NO_PURE_DECLS \
	GhoulsAndGoodies_Source_GhoulsAndGoodies_Tile_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GHOULSANDGOODIES_API UClass* StaticClass<class ATile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GhoulsAndGoodies_Source_GhoulsAndGoodies_Tile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
