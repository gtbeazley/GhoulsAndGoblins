// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GhoulsAndGoodies/TileBoard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileBoard() {}
// Cross Module References
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_ATileBoard_NoRegister();
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_ATileBoard();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GhoulsAndGoodies();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void ATileBoard::StaticRegisterNativesATileBoard()
	{
	}
	UClass* Z_Construct_UClass_ATileBoard_NoRegister()
	{
		return ATileBoard::StaticClass();
	}
	struct Z_Construct_UClass_ATileBoard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_tileSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_tileSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_columns_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_columns;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_rows_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_m_rows;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATileBoard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GhoulsAndGoodies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATileBoard_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TileBoard.h" },
		{ "ModuleRelativePath", "TileBoard.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATileBoard_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "Category", "TileBoard" },
		{ "Comment", "//Default Scene Component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TileBoard.h" },
		{ "ToolTip", "Default Scene Component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATileBoard_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATileBoard, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATileBoard_Statics::NewProp_SceneComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATileBoard_Statics::NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATileBoard_Statics::NewProp_m_tileSize_MetaData[] = {
		{ "Category", "TileBoard" },
		{ "Comment", "//The size of the tiles to be spawned\n" },
		{ "ModuleRelativePath", "TileBoard.h" },
		{ "ToolTip", "The size of the tiles to be spawned" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATileBoard_Statics::NewProp_m_tileSize = { "m_tileSize", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATileBoard, m_tileSize), METADATA_PARAMS(Z_Construct_UClass_ATileBoard_Statics::NewProp_m_tileSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATileBoard_Statics::NewProp_m_tileSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATileBoard_Statics::NewProp_m_columns_MetaData[] = {
		{ "Category", "TileBoard" },
		{ "Comment", "//The amount of coloumns in the tile board\n" },
		{ "ModuleRelativePath", "TileBoard.h" },
		{ "ToolTip", "The amount of coloumns in the tile board" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATileBoard_Statics::NewProp_m_columns = { "m_columns", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATileBoard, m_columns), METADATA_PARAMS(Z_Construct_UClass_ATileBoard_Statics::NewProp_m_columns_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATileBoard_Statics::NewProp_m_columns_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATileBoard_Statics::NewProp_m_rows_MetaData[] = {
		{ "Category", "TileBoard" },
		{ "Comment", "//The amount of rows in the tile board\n" },
		{ "ModuleRelativePath", "TileBoard.h" },
		{ "ToolTip", "The amount of rows in the tile board" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATileBoard_Statics::NewProp_m_rows = { "m_rows", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATileBoard, m_rows), METADATA_PARAMS(Z_Construct_UClass_ATileBoard_Statics::NewProp_m_rows_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATileBoard_Statics::NewProp_m_rows_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATileBoard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileBoard_Statics::NewProp_SceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileBoard_Statics::NewProp_m_tileSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileBoard_Statics::NewProp_m_columns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATileBoard_Statics::NewProp_m_rows,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATileBoard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATileBoard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATileBoard_Statics::ClassParams = {
		&ATileBoard::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATileBoard_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ATileBoard_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ATileBoard_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATileBoard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATileBoard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATileBoard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATileBoard, 802571866);
	template<> GHOULSANDGOODIES_API UClass* StaticClass<ATileBoard>()
	{
		return ATileBoard::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATileBoard(Z_Construct_UClass_ATileBoard, &ATileBoard::StaticClass, TEXT("/Script/GhoulsAndGoodies"), TEXT("ATileBoard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATileBoard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
