// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GhoulsAndGoodies/GNGSaveGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGNGSaveGame() {}
// Cross Module References
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_UGNGSaveGame_NoRegister();
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_UGNGSaveGame();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_GhoulsAndGoodies();
// End Cross Module References
	void UGNGSaveGame::StaticRegisterNativesUGNGSaveGame()
	{
	}
	UClass* Z_Construct_UClass_UGNGSaveGame_NoRegister()
	{
		return UGNGSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UGNGSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_spawnList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_spawnList;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_spawnList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_baseLockTiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_baseLockTiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_defHealths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_defHealths;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_defHealths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_owningTileNumbers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_owningTileNumbers;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_owningTileNumbers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_defUnitTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_defUnitTypes;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_defUnitTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_gameState_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_gameState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_candyCorn_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_candyCorn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_wave_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_wave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGNGSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_GhoulsAndGoodies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGNGSaveGame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GNGSaveGame.h" },
		{ "ModuleRelativePath", "GNGSaveGame.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_spawnList_MetaData[] = {
		{ "Category", "GNGSaveGame" },
		{ "ModuleRelativePath", "GNGSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_spawnList = { "m_spawnList", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGNGSaveGame, m_spawnList), METADATA_PARAMS(Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_spawnList_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_spawnList_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_spawnList_Inner = { "m_spawnList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_baseLockTiles_MetaData[] = {
		{ "Category", "GNGSaveGame" },
		{ "ModuleRelativePath", "GNGSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_baseLockTiles = { "m_baseLockTiles", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(m_baseLockTiles, UGNGSaveGame), STRUCT_OFFSET(UGNGSaveGame, m_baseLockTiles), METADATA_PARAMS(Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_baseLockTiles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_baseLockTiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_defHealths_MetaData[] = {
		{ "Category", "GNGSaveGame" },
		{ "ModuleRelativePath", "GNGSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_defHealths = { "m_defHealths", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGNGSaveGame, m_defHealths), METADATA_PARAMS(Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_defHealths_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_defHealths_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_defHealths_Inner = { "m_defHealths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_owningTileNumbers_MetaData[] = {
		{ "Category", "GNGSaveGame" },
		{ "ModuleRelativePath", "GNGSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_owningTileNumbers = { "m_owningTileNumbers", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGNGSaveGame, m_owningTileNumbers), METADATA_PARAMS(Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_owningTileNumbers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_owningTileNumbers_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_owningTileNumbers_Inner = { "m_owningTileNumbers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_defUnitTypes_MetaData[] = {
		{ "Category", "GNGSaveGame" },
		{ "ModuleRelativePath", "GNGSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_defUnitTypes = { "m_defUnitTypes", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGNGSaveGame, m_defUnitTypes), METADATA_PARAMS(Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_defUnitTypes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_defUnitTypes_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_defUnitTypes_Inner = { "m_defUnitTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_gameState_MetaData[] = {
		{ "Category", "GNGSaveGame" },
		{ "ModuleRelativePath", "GNGSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_gameState = { "m_gameState", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGNGSaveGame, m_gameState), METADATA_PARAMS(Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_gameState_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_gameState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_candyCorn_MetaData[] = {
		{ "Category", "GNGSaveGame" },
		{ "ModuleRelativePath", "GNGSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_candyCorn = { "m_candyCorn", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGNGSaveGame, m_candyCorn), METADATA_PARAMS(Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_candyCorn_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_candyCorn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_wave_MetaData[] = {
		{ "Category", "GNGSaveGame" },
		{ "ModuleRelativePath", "GNGSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_wave = { "m_wave", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGNGSaveGame, m_wave), METADATA_PARAMS(Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_wave_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_wave_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGNGSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_spawnList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_spawnList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_baseLockTiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_defHealths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_defHealths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_owningTileNumbers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_owningTileNumbers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_defUnitTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_defUnitTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_gameState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_candyCorn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGNGSaveGame_Statics::NewProp_m_wave,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGNGSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGNGSaveGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGNGSaveGame_Statics::ClassParams = {
		&UGNGSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGNGSaveGame_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UGNGSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGNGSaveGame_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGNGSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGNGSaveGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGNGSaveGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGNGSaveGame, 2315603532);
	template<> GHOULSANDGOODIES_API UClass* StaticClass<UGNGSaveGame>()
	{
		return UGNGSaveGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGNGSaveGame(Z_Construct_UClass_UGNGSaveGame, &UGNGSaveGame::StaticClass, TEXT("/Script/GhoulsAndGoodies"), TEXT("UGNGSaveGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGNGSaveGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
