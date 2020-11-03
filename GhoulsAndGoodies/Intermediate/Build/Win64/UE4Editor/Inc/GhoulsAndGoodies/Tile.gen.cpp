// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GhoulsAndGoodies/Tile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTile() {}
// Cross Module References
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_ATile_NoRegister();
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_ATile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GhoulsAndGoodies();
	GHOULSANDGOODIES_API UFunction* Z_Construct_UFunction_ATile_DespawnUnit();
	GHOULSANDGOODIES_API UFunction* Z_Construct_UFunction_ATile_GetStaticMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GHOULSANDGOODIES_API UFunction* Z_Construct_UFunction_ATile_MeshOnBeginHover();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	GHOULSANDGOODIES_API UFunction* Z_Construct_UFunction_ATile_MeshOnClick();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	GHOULSANDGOODIES_API UFunction* Z_Construct_UFunction_ATile_MeshOnEndHover();
	GHOULSANDGOODIES_API UFunction* Z_Construct_UFunction_ATile_SellUnit();
	GHOULSANDGOODIES_API UFunction* Z_Construct_UFunction_ATile_SetDefenceUnitType();
	GHOULSANDGOODIES_API UEnum* Z_Construct_UEnum_GhoulsAndGoodies_ETileDefenceType();
	GHOULSANDGOODIES_API UFunction* Z_Construct_UFunction_ATile_SetupDefUnit();
	GHOULSANDGOODIES_API UFunction* Z_Construct_UFunction_ATile_SetupTileMaterial();
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_AGhoulsAndGoodiesGameMode_NoRegister();
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_ADefendingUnit_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
	void ATile::StaticRegisterNativesATile()
	{
		UClass* Class = ATile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DespawnUnit", &ATile::execDespawnUnit },
			{ "GetStaticMeshComponent", &ATile::execGetStaticMeshComponent },
			{ "MeshOnBeginHover", &ATile::execMeshOnBeginHover },
			{ "MeshOnClick", &ATile::execMeshOnClick },
			{ "MeshOnEndHover", &ATile::execMeshOnEndHover },
			{ "SellUnit", &ATile::execSellUnit },
			{ "SetDefenceUnitType", &ATile::execSetDefenceUnitType },
			{ "SetupDefUnit", &ATile::execSetupDefUnit },
			{ "SetupTileMaterial", &ATile::execSetupTileMaterial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATile_DespawnUnit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_DespawnUnit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_DespawnUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, nullptr, "DespawnUnit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATile_DespawnUnit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATile_DespawnUnit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATile_DespawnUnit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATile_DespawnUnit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATile_GetStaticMeshComponent_Statics
	{
		struct Tile_eventGetStaticMeshComponent_Parms
		{
			UStaticMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_GetStaticMeshComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATile_GetStaticMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tile_eventGetStaticMeshComponent_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATile_GetStaticMeshComponent_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATile_GetStaticMeshComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATile_GetStaticMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_GetStaticMeshComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_GetStaticMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_GetStaticMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, nullptr, "GetStaticMeshComponent", nullptr, nullptr, sizeof(Tile_eventGetStaticMeshComponent_Parms), Z_Construct_UFunction_ATile_GetStaticMeshComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATile_GetStaticMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATile_GetStaticMeshComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATile_GetStaticMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATile_GetStaticMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATile_GetStaticMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATile_MeshOnBeginHover_Statics
	{
		struct Tile_eventMeshOnBeginHover_Parms
		{
			UPrimitiveComponent* a_primCom;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_a_primCom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_a_primCom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_MeshOnBeginHover_Statics::NewProp_a_primCom_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATile_MeshOnBeginHover_Statics::NewProp_a_primCom = { "a_primCom", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tile_eventMeshOnBeginHover_Parms, a_primCom), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATile_MeshOnBeginHover_Statics::NewProp_a_primCom_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATile_MeshOnBeginHover_Statics::NewProp_a_primCom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATile_MeshOnBeginHover_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_MeshOnBeginHover_Statics::NewProp_a_primCom,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_MeshOnBeginHover_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_MeshOnBeginHover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, nullptr, "MeshOnBeginHover", nullptr, nullptr, sizeof(Tile_eventMeshOnBeginHover_Parms), Z_Construct_UFunction_ATile_MeshOnBeginHover_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATile_MeshOnBeginHover_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATile_MeshOnBeginHover_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATile_MeshOnBeginHover_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATile_MeshOnBeginHover()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATile_MeshOnBeginHover_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATile_MeshOnClick_Statics
	{
		struct Tile_eventMeshOnClick_Parms
		{
			UPrimitiveComponent* a_primCom;
			FKey a_inKey;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_a_inKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_a_primCom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_a_primCom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATile_MeshOnClick_Statics::NewProp_a_inKey = { "a_inKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tile_eventMeshOnClick_Parms, a_inKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_MeshOnClick_Statics::NewProp_a_primCom_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATile_MeshOnClick_Statics::NewProp_a_primCom = { "a_primCom", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tile_eventMeshOnClick_Parms, a_primCom), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATile_MeshOnClick_Statics::NewProp_a_primCom_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATile_MeshOnClick_Statics::NewProp_a_primCom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATile_MeshOnClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_MeshOnClick_Statics::NewProp_a_inKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_MeshOnClick_Statics::NewProp_a_primCom,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_MeshOnClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_MeshOnClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, nullptr, "MeshOnClick", nullptr, nullptr, sizeof(Tile_eventMeshOnClick_Parms), Z_Construct_UFunction_ATile_MeshOnClick_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATile_MeshOnClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATile_MeshOnClick_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATile_MeshOnClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATile_MeshOnClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATile_MeshOnClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATile_MeshOnEndHover_Statics
	{
		struct Tile_eventMeshOnEndHover_Parms
		{
			UPrimitiveComponent* a_primCom;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_a_primCom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_a_primCom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_MeshOnEndHover_Statics::NewProp_a_primCom_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATile_MeshOnEndHover_Statics::NewProp_a_primCom = { "a_primCom", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tile_eventMeshOnEndHover_Parms, a_primCom), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATile_MeshOnEndHover_Statics::NewProp_a_primCom_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATile_MeshOnEndHover_Statics::NewProp_a_primCom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATile_MeshOnEndHover_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_MeshOnEndHover_Statics::NewProp_a_primCom,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_MeshOnEndHover_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_MeshOnEndHover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, nullptr, "MeshOnEndHover", nullptr, nullptr, sizeof(Tile_eventMeshOnEndHover_Parms), Z_Construct_UFunction_ATile_MeshOnEndHover_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATile_MeshOnEndHover_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATile_MeshOnEndHover_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATile_MeshOnEndHover_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATile_MeshOnEndHover()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATile_MeshOnEndHover_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATile_SellUnit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_SellUnit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_SellUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, nullptr, "SellUnit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATile_SellUnit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATile_SellUnit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATile_SellUnit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATile_SellUnit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATile_SetDefenceUnitType_Statics
	{
		struct Tile_eventSetDefenceUnitType_Parms
		{
			TEnumAsByte<ETileDefenceType> a_defType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_a_defType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATile_SetDefenceUnitType_Statics::NewProp_a_defType = { "a_defType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tile_eventSetDefenceUnitType_Parms, a_defType), Z_Construct_UEnum_GhoulsAndGoodies_ETileDefenceType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATile_SetDefenceUnitType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_SetDefenceUnitType_Statics::NewProp_a_defType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_SetDefenceUnitType_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Sets the defence unit type according to whats on the tile\n" },
		{ "ModuleRelativePath", "Tile.h" },
		{ "ToolTip", "Sets the defence unit type according to whats on the tile" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_SetDefenceUnitType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, nullptr, "SetDefenceUnitType", nullptr, nullptr, sizeof(Tile_eventSetDefenceUnitType_Parms), Z_Construct_UFunction_ATile_SetDefenceUnitType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATile_SetDefenceUnitType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATile_SetDefenceUnitType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATile_SetDefenceUnitType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATile_SetDefenceUnitType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATile_SetDefenceUnitType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATile_SetupDefUnit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_SetupDefUnit_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Spawns Defending Unit\n" },
		{ "ModuleRelativePath", "Tile.h" },
		{ "ToolTip", "Spawns Defending Unit" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_SetupDefUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, nullptr, "SetupDefUnit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATile_SetupDefUnit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATile_SetupDefUnit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATile_SetupDefUnit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATile_SetupDefUnit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATile_SetupTileMaterial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_SetupTileMaterial_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Sets the material of the tile according to the defence unit type\n" },
		{ "ModuleRelativePath", "Tile.h" },
		{ "ToolTip", "Sets the material of the tile according to the defence unit type" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_SetupTileMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, nullptr, "SetupTileMaterial", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATile_SetupTileMaterial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATile_SetupTileMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATile_SetupTileMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATile_SetupTileMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATile_NoRegister()
	{
		return ATile::StaticClass();
	}
	struct Z_Construct_UClass_ATile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_plannedToDeploy_MetaData[];
#endif
		static void NewProp_m_plannedToDeploy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_plannedToDeploy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_gNGGameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_gNGGameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_neighbours_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_neighbours;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_neighbours_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_lastDefType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_lastDefType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_defType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_defType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_fakeSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_fakeSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_defenceUnit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_defenceUnit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_unhighlightedMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_unhighlightedMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_highlightedMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_highlightedMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GhoulsAndGoodies,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATile_DespawnUnit, "DespawnUnit" }, // 3911153302
		{ &Z_Construct_UFunction_ATile_GetStaticMeshComponent, "GetStaticMeshComponent" }, // 2264009078
		{ &Z_Construct_UFunction_ATile_MeshOnBeginHover, "MeshOnBeginHover" }, // 215298941
		{ &Z_Construct_UFunction_ATile_MeshOnClick, "MeshOnClick" }, // 2386218728
		{ &Z_Construct_UFunction_ATile_MeshOnEndHover, "MeshOnEndHover" }, // 4270299322
		{ &Z_Construct_UFunction_ATile_SellUnit, "SellUnit" }, // 2038428990
		{ &Z_Construct_UFunction_ATile_SetDefenceUnitType, "SetDefenceUnitType" }, // 130675544
		{ &Z_Construct_UFunction_ATile_SetupDefUnit, "SetupDefUnit" }, // 2101584550
		{ &Z_Construct_UFunction_ATile_SetupTileMaterial, "SetupTileMaterial" }, // 3525212611
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tile.h" },
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_m_plannedToDeploy_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif
	void Z_Construct_UClass_ATile_Statics::NewProp_m_plannedToDeploy_SetBit(void* Obj)
	{
		((ATile*)Obj)->m_plannedToDeploy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_m_plannedToDeploy = { "m_plannedToDeploy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATile), &Z_Construct_UClass_ATile_Statics::NewProp_m_plannedToDeploy_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_m_plannedToDeploy_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_m_plannedToDeploy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_m_gNGGameMode_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_m_gNGGameMode = { "m_gNGGameMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, m_gNGGameMode), Z_Construct_UClass_AGhoulsAndGoodiesGameMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_m_gNGGameMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_m_gNGGameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_m_neighbours_MetaData[] = {
		{ "Category", "Tile" },
		{ "Comment", "//List of neighbours for the ai traverse through\n" },
		{ "ModuleRelativePath", "Tile.h" },
		{ "ToolTip", "List of neighbours for the ai traverse through" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_m_neighbours = { "m_neighbours", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, m_neighbours), METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_m_neighbours_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_m_neighbours_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_m_neighbours_Inner = { "m_neighbours", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_m_lastDefType_MetaData[] = {
		{ "Category", "Tile" },
		{ "Comment", "//Type to determine which unit to spawn and whether to add to the path\n" },
		{ "ModuleRelativePath", "Tile.h" },
		{ "ToolTip", "Type to determine which unit to spawn and whether to add to the path" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATile_Statics::NewProp_m_lastDefType = { "m_lastDefType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, m_lastDefType), Z_Construct_UEnum_GhoulsAndGoodies_ETileDefenceType, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_m_lastDefType_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_m_lastDefType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_m_defType_MetaData[] = {
		{ "Category", "Tile" },
		{ "Comment", "//Type to determine which unit to spawn and whether to add to the path\n" },
		{ "ModuleRelativePath", "Tile.h" },
		{ "ToolTip", "Type to determine which unit to spawn and whether to add to the path" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATile_Statics::NewProp_m_defType = { "m_defType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, m_defType), Z_Construct_UEnum_GhoulsAndGoodies_ETileDefenceType, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_m_defType_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_m_defType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_m_fakeSpawn_MetaData[] = {
		{ "Category", "Tile" },
		{ "Comment", "//Reference to the defence unit that this tile owns\n" },
		{ "ModuleRelativePath", "Tile.h" },
		{ "ToolTip", "Reference to the defence unit that this tile owns" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_m_fakeSpawn = { "m_fakeSpawn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, m_fakeSpawn), Z_Construct_UClass_ADefendingUnit_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_m_fakeSpawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_m_fakeSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_m_defenceUnit_MetaData[] = {
		{ "Category", "Tile" },
		{ "Comment", "//Reference to the defence unit that this tile owns\n" },
		{ "ModuleRelativePath", "Tile.h" },
		{ "ToolTip", "Reference to the defence unit that this tile owns" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_m_defenceUnit = { "m_defenceUnit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, m_defenceUnit), Z_Construct_UClass_ADefendingUnit_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_m_defenceUnit_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_m_defenceUnit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_m_mesh_MetaData[] = {
		{ "Category", "Tile" },
		{ "Comment", "//Static mesh of the tile\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Tile.h" },
		{ "ToolTip", "Static mesh of the tile" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_m_mesh = { "m_mesh", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, m_mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_m_mesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_m_mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_m_unhighlightedMaterial_MetaData[] = {
		{ "Category", "Tile" },
		{ "Comment", "//Material used when not hovering over this tile\n" },
		{ "ModuleRelativePath", "Tile.h" },
		{ "ToolTip", "Material used when not hovering over this tile" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_m_unhighlightedMaterial = { "m_unhighlightedMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, m_unhighlightedMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_m_unhighlightedMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_m_unhighlightedMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_m_highlightedMaterial_MetaData[] = {
		{ "Category", "Tile" },
		{ "Comment", "//Material used when hovering over this\n" },
		{ "ModuleRelativePath", "Tile.h" },
		{ "ToolTip", "Material used when hovering over this" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_m_highlightedMaterial = { "m_highlightedMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, m_highlightedMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_m_highlightedMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_m_highlightedMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_m_plannedToDeploy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_m_gNGGameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_m_neighbours,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_m_neighbours_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_m_lastDefType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_m_defType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_m_fakeSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_m_defenceUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_m_mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_m_unhighlightedMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_m_highlightedMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATile_Statics::ClassParams = {
		&ATile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATile_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATile, 1980056293);
	template<> GHOULSANDGOODIES_API UClass* StaticClass<ATile>()
	{
		return ATile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATile(Z_Construct_UClass_ATile, &ATile::StaticClass, TEXT("/Script/GhoulsAndGoodies"), TEXT("ATile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
