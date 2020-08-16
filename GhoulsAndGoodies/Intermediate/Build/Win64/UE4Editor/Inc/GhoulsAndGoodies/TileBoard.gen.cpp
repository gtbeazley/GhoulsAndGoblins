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
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATileBoard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATileBoard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATileBoard_Statics::ClassParams = {
		&ATileBoard::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(ATileBoard, 3963420573);
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
