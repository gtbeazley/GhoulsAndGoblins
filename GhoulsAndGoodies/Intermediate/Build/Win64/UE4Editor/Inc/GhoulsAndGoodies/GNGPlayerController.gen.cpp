// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GhoulsAndGoodies/GNGPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGNGPlayerController() {}
// Cross Module References
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_AGNGPlayerController_NoRegister();
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_AGNGPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_GhoulsAndGoodies();
// End Cross Module References
	void AGNGPlayerController::StaticRegisterNativesAGNGPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AGNGPlayerController_NoRegister()
	{
		return AGNGPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AGNGPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGNGPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_GhoulsAndGoodies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGNGPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GNGPlayerController.h" },
		{ "ModuleRelativePath", "GNGPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGNGPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGNGPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGNGPlayerController_Statics::ClassParams = {
		&AGNGPlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGNGPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGNGPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGNGPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGNGPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGNGPlayerController, 13459460);
	template<> GHOULSANDGOODIES_API UClass* StaticClass<AGNGPlayerController>()
	{
		return AGNGPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGNGPlayerController(Z_Construct_UClass_AGNGPlayerController, &AGNGPlayerController::StaticClass, TEXT("/Script/GhoulsAndGoodies"), TEXT("AGNGPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGNGPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
