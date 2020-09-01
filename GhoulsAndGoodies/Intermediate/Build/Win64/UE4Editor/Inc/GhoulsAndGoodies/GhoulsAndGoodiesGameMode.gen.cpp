// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GhoulsAndGoodies/GhoulsAndGoodiesGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGhoulsAndGoodiesGameMode() {}
// Cross Module References
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_AGhoulsAndGoodiesGameMode_NoRegister();
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_AGhoulsAndGoodiesGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GhoulsAndGoodies();
	GHOULSANDGOODIES_API UFunction* Z_Construct_UFunction_AGhoulsAndGoodiesGameMode_NextWave();
	GHOULSANDGOODIES_API UFunction* Z_Construct_UFunction_AGhoulsAndGoodiesGameMode_SaveGame();
	GHOULSANDGOODIES_API UFunction* Z_Construct_UFunction_AGhoulsAndGoodiesGameMode_SetTileInFocus();
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_ATile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	GHOULSANDGOODIES_API UEnum* Z_Construct_UEnum_GhoulsAndGoodies_EGNGGameState();
// End Cross Module References
	void AGhoulsAndGoodiesGameMode::StaticRegisterNativesAGhoulsAndGoodiesGameMode()
	{
		UClass* Class = AGhoulsAndGoodiesGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NextWave", &AGhoulsAndGoodiesGameMode::execNextWave },
			{ "SaveGame", &AGhoulsAndGoodiesGameMode::execSaveGame },
			{ "SetTileInFocus", &AGhoulsAndGoodiesGameMode::execSetTileInFocus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGhoulsAndGoodiesGameMode_NextWave_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGhoulsAndGoodiesGameMode_NextWave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GhoulsAndGoodiesGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGhoulsAndGoodiesGameMode_NextWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhoulsAndGoodiesGameMode, nullptr, "NextWave", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGhoulsAndGoodiesGameMode_NextWave_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGhoulsAndGoodiesGameMode_NextWave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGhoulsAndGoodiesGameMode_NextWave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGhoulsAndGoodiesGameMode_NextWave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGhoulsAndGoodiesGameMode_SaveGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGhoulsAndGoodiesGameMode_SaveGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GhoulsAndGoodiesGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGhoulsAndGoodiesGameMode_SaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhoulsAndGoodiesGameMode, nullptr, "SaveGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGhoulsAndGoodiesGameMode_SaveGame_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGhoulsAndGoodiesGameMode_SaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGhoulsAndGoodiesGameMode_SaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGhoulsAndGoodiesGameMode_SaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGhoulsAndGoodiesGameMode_SetTileInFocus_Statics
	{
		struct GhoulsAndGoodiesGameMode_eventSetTileInFocus_Parms
		{
			ATile* a_tile;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_a_tile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGhoulsAndGoodiesGameMode_SetTileInFocus_Statics::NewProp_a_tile = { "a_tile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GhoulsAndGoodiesGameMode_eventSetTileInFocus_Parms, a_tile), Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGhoulsAndGoodiesGameMode_SetTileInFocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGhoulsAndGoodiesGameMode_SetTileInFocus_Statics::NewProp_a_tile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGhoulsAndGoodiesGameMode_SetTileInFocus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GhoulsAndGoodiesGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGhoulsAndGoodiesGameMode_SetTileInFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGhoulsAndGoodiesGameMode, nullptr, "SetTileInFocus", nullptr, nullptr, sizeof(GhoulsAndGoodiesGameMode_eventSetTileInFocus_Parms), Z_Construct_UFunction_AGhoulsAndGoodiesGameMode_SetTileInFocus_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGhoulsAndGoodiesGameMode_SetTileInFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGhoulsAndGoodiesGameMode_SetTileInFocus_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGhoulsAndGoodiesGameMode_SetTileInFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGhoulsAndGoodiesGameMode_SetTileInFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGhoulsAndGoodiesGameMode_SetTileInFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGhoulsAndGoodiesGameMode_NoRegister()
	{
		return AGhoulsAndGoodiesGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_selectedTileMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_selectedTileMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_normalTileMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_normalTileMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_baseTileMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_baseTileMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_tiffanyTileMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_tiffanyTileMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_garryTileMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_garryTileMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_jimmyTileMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_jimmyTileMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_canSelectMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_canSelectMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_canNotSelectMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_canNotSelectMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_tileInFocus_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_tileInFocus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_candyCorn_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_candyCorn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_wave_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_wave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_afterWaveCostMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_afterWaveCostMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_TiffanyFullCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_TiffanyFullCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_GarryFullCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_GarryFullCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_JimmyFullCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_JimmyFullCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_potentialCut_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_potentialCut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_gameState_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_gameState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GhoulsAndGoodies,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGhoulsAndGoodiesGameMode_NextWave, "NextWave" }, // 3909590007
		{ &Z_Construct_UFunction_AGhoulsAndGoodiesGameMode_SaveGame, "SaveGame" }, // 412109579
		{ &Z_Construct_UFunction_AGhoulsAndGoodiesGameMode_SetTileInFocus, "SetTileInFocus" }, // 169358576
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GhoulsAndGoodiesGameMode.h" },
		{ "ModuleRelativePath", "GhoulsAndGoodiesGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_selectedTileMaterial_MetaData[] = {
		{ "Category", "GhoulsAndGoodiesGameMode" },
		{ "ModuleRelativePath", "GhoulsAndGoodiesGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_selectedTileMaterial = { "m_selectedTileMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGhoulsAndGoodiesGameMode, m_selectedTileMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_selectedTileMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_selectedTileMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_normalTileMaterial_MetaData[] = {
		{ "Category", "GhoulsAndGoodiesGameMode" },
		{ "ModuleRelativePath", "GhoulsAndGoodiesGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_normalTileMaterial = { "m_normalTileMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGhoulsAndGoodiesGameMode, m_normalTileMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_normalTileMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_normalTileMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_baseTileMaterial_MetaData[] = {
		{ "Category", "GhoulsAndGoodiesGameMode" },
		{ "ModuleRelativePath", "GhoulsAndGoodiesGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_baseTileMaterial = { "m_baseTileMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGhoulsAndGoodiesGameMode, m_baseTileMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_baseTileMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_baseTileMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_tiffanyTileMaterial_MetaData[] = {
		{ "Category", "GhoulsAndGoodiesGameMode" },
		{ "ModuleRelativePath", "GhoulsAndGoodiesGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_tiffanyTileMaterial = { "m_tiffanyTileMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGhoulsAndGoodiesGameMode, m_tiffanyTileMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_tiffanyTileMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_tiffanyTileMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_garryTileMaterial_MetaData[] = {
		{ "Category", "GhoulsAndGoodiesGameMode" },
		{ "ModuleRelativePath", "GhoulsAndGoodiesGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_garryTileMaterial = { "m_garryTileMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGhoulsAndGoodiesGameMode, m_garryTileMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_garryTileMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_garryTileMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_jimmyTileMaterial_MetaData[] = {
		{ "Category", "GhoulsAndGoodiesGameMode" },
		{ "ModuleRelativePath", "GhoulsAndGoodiesGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_jimmyTileMaterial = { "m_jimmyTileMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGhoulsAndGoodiesGameMode, m_jimmyTileMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_jimmyTileMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_jimmyTileMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_canSelectMaterial_MetaData[] = {
		{ "Category", "GhoulsAndGoodiesGameMode" },
		{ "ModuleRelativePath", "GhoulsAndGoodiesGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_canSelectMaterial = { "m_canSelectMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGhoulsAndGoodiesGameMode, m_canSelectMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_canSelectMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_canSelectMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_canNotSelectMaterial_MetaData[] = {
		{ "Category", "GhoulsAndGoodiesGameMode" },
		{ "ModuleRelativePath", "GhoulsAndGoodiesGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_canNotSelectMaterial = { "m_canNotSelectMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGhoulsAndGoodiesGameMode, m_canNotSelectMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_canNotSelectMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_canNotSelectMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_tileInFocus_MetaData[] = {
		{ "Category", "GhoulsAndGoodiesGameMode" },
		{ "ModuleRelativePath", "GhoulsAndGoodiesGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_tileInFocus = { "m_tileInFocus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGhoulsAndGoodiesGameMode, m_tileInFocus), Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_tileInFocus_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_tileInFocus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_candyCorn_MetaData[] = {
		{ "Category", "GhoulsAndGoodiesGameMode" },
		{ "ModuleRelativePath", "GhoulsAndGoodiesGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_candyCorn = { "m_candyCorn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGhoulsAndGoodiesGameMode, m_candyCorn), METADATA_PARAMS(Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_candyCorn_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_candyCorn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_wave_MetaData[] = {
		{ "Category", "GhoulsAndGoodiesGameMode" },
		{ "ModuleRelativePath", "GhoulsAndGoodiesGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_wave = { "m_wave", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGhoulsAndGoodiesGameMode, m_wave), METADATA_PARAMS(Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_wave_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_wave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_afterWaveCostMultiplier_MetaData[] = {
		{ "Category", "GhoulsAndGoodiesGameMode" },
		{ "ModuleRelativePath", "GhoulsAndGoodiesGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_afterWaveCostMultiplier = { "m_afterWaveCostMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGhoulsAndGoodiesGameMode, m_afterWaveCostMultiplier), METADATA_PARAMS(Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_afterWaveCostMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_afterWaveCostMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_TiffanyFullCost_MetaData[] = {
		{ "Category", "GhoulsAndGoodiesGameMode" },
		{ "ModuleRelativePath", "GhoulsAndGoodiesGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_TiffanyFullCost = { "m_TiffanyFullCost", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGhoulsAndGoodiesGameMode, m_TiffanyFullCost), METADATA_PARAMS(Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_TiffanyFullCost_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_TiffanyFullCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_GarryFullCost_MetaData[] = {
		{ "Category", "GhoulsAndGoodiesGameMode" },
		{ "ModuleRelativePath", "GhoulsAndGoodiesGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_GarryFullCost = { "m_GarryFullCost", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGhoulsAndGoodiesGameMode, m_GarryFullCost), METADATA_PARAMS(Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_GarryFullCost_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_GarryFullCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_JimmyFullCost_MetaData[] = {
		{ "Category", "GhoulsAndGoodiesGameMode" },
		{ "ModuleRelativePath", "GhoulsAndGoodiesGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_JimmyFullCost = { "m_JimmyFullCost", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGhoulsAndGoodiesGameMode, m_JimmyFullCost), METADATA_PARAMS(Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_JimmyFullCost_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_JimmyFullCost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_potentialCut_MetaData[] = {
		{ "Category", "GhoulsAndGoodiesGameMode" },
		{ "ModuleRelativePath", "GhoulsAndGoodiesGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_potentialCut = { "m_potentialCut", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGhoulsAndGoodiesGameMode, m_potentialCut), METADATA_PARAMS(Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_potentialCut_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_potentialCut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_gameState_MetaData[] = {
		{ "Category", "GhoulsAndGoodiesGameMode" },
		{ "ModuleRelativePath", "GhoulsAndGoodiesGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_gameState = { "m_gameState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGhoulsAndGoodiesGameMode, m_gameState), Z_Construct_UEnum_GhoulsAndGoodies_EGNGGameState, METADATA_PARAMS(Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_gameState_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_gameState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_selectedTileMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_normalTileMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_baseTileMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_tiffanyTileMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_garryTileMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_jimmyTileMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_canSelectMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_canNotSelectMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_tileInFocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_candyCorn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_wave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_afterWaveCostMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_TiffanyFullCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_GarryFullCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_JimmyFullCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_potentialCut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::NewProp_m_gameState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGhoulsAndGoodiesGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::ClassParams = {
		&AGhoulsAndGoodiesGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::PropPointers),
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGhoulsAndGoodiesGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGhoulsAndGoodiesGameMode, 1121860668);
	template<> GHOULSANDGOODIES_API UClass* StaticClass<AGhoulsAndGoodiesGameMode>()
	{
		return AGhoulsAndGoodiesGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGhoulsAndGoodiesGameMode(Z_Construct_UClass_AGhoulsAndGoodiesGameMode, &AGhoulsAndGoodiesGameMode::StaticClass, TEXT("/Script/GhoulsAndGoodies"), TEXT("AGhoulsAndGoodiesGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGhoulsAndGoodiesGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
