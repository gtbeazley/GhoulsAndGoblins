// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GhoulsAndGoodies/GhoulsAndGoodiesPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGhoulsAndGoodiesPlayerController() {}
// Cross Module References
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_AGhoulsAndGoodiesPlayerController_NoRegister();
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_AGhoulsAndGoodiesPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_GhoulsAndGoodies();
// End Cross Module References
	void AGhoulsAndGoodiesPlayerController::StaticRegisterNativesAGhoulsAndGoodiesPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AGhoulsAndGoodiesPlayerController_NoRegister()
	{
		return AGhoulsAndGoodiesPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AGhoulsAndGoodiesPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGhoulsAndGoodiesPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_GhoulsAndGoodies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGhoulsAndGoodiesPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GhoulsAndGoodiesPlayerController.h" },
		{ "ModuleRelativePath", "GhoulsAndGoodiesPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGhoulsAndGoodiesPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGhoulsAndGoodiesPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGhoulsAndGoodiesPlayerController_Statics::ClassParams = {
		&AGhoulsAndGoodiesPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGhoulsAndGoodiesPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGhoulsAndGoodiesPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGhoulsAndGoodiesPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGhoulsAndGoodiesPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGhoulsAndGoodiesPlayerController, 2294508064);
	template<> GHOULSANDGOODIES_API UClass* StaticClass<AGhoulsAndGoodiesPlayerController>()
	{
		return AGhoulsAndGoodiesPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGhoulsAndGoodiesPlayerController(Z_Construct_UClass_AGhoulsAndGoodiesPlayerController, &AGhoulsAndGoodiesPlayerController::StaticClass, TEXT("/Script/GhoulsAndGoodies"), TEXT("AGhoulsAndGoodiesPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGhoulsAndGoodiesPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
