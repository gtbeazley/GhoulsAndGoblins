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
// End Cross Module References
	void AGhoulsAndGoodiesGameMode::StaticRegisterNativesAGhoulsAndGoodiesGameMode()
	{
	}
	UClass* Z_Construct_UClass_AGhoulsAndGoodiesGameMode_NoRegister()
	{
		return AGhoulsAndGoodiesGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GhoulsAndGoodies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GhoulsAndGoodiesGameMode.h" },
		{ "ModuleRelativePath", "GhoulsAndGoodiesGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGhoulsAndGoodiesGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGhoulsAndGoodiesGameMode_Statics::ClassParams = {
		&AGhoulsAndGoodiesGameMode::StaticClass,
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
	IMPLEMENT_CLASS(AGhoulsAndGoodiesGameMode, 2438286055);
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
