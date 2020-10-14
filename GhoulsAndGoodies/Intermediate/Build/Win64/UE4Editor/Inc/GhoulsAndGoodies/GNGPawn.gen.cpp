// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GhoulsAndGoodies/GNGPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGNGPawn() {}
// Cross Module References
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_AGNGPawn_NoRegister();
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_AGNGPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_GhoulsAndGoodies();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AGNGPawn::StaticRegisterNativesAGNGPawn()
	{
	}
	UClass* Z_Construct_UClass_AGNGPawn_NoRegister()
	{
		return AGNGPawn::StaticClass();
	}
	struct Z_Construct_UClass_AGNGPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainCamera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGNGPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_GhoulsAndGoodies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGNGPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GNGPawn.h" },
		{ "ModuleRelativePath", "GNGPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGNGPawn_Statics::NewProp_MainCamera_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GNGPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGNGPawn_Statics::NewProp_MainCamera = { "MainCamera", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGNGPawn, MainCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGNGPawn_Statics::NewProp_MainCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGNGPawn_Statics::NewProp_MainCamera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGNGPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGNGPawn_Statics::NewProp_MainCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGNGPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGNGPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGNGPawn_Statics::ClassParams = {
		&AGNGPawn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGNGPawn_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AGNGPawn_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AGNGPawn_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGNGPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGNGPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGNGPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGNGPawn, 2502675127);
	template<> GHOULSANDGOODIES_API UClass* StaticClass<AGNGPawn>()
	{
		return AGNGPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGNGPawn(Z_Construct_UClass_AGNGPawn, &AGNGPawn::StaticClass, TEXT("/Script/GhoulsAndGoodies"), TEXT("AGNGPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGNGPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
