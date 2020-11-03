// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GhoulsAndGoodies/Public/Spawned_AnimNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawned_AnimNotify() {}
// Cross Module References
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_USpawned_AnimNotify_NoRegister();
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_USpawned_AnimNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_GhoulsAndGoodies();
// End Cross Module References
	void USpawned_AnimNotify::StaticRegisterNativesUSpawned_AnimNotify()
	{
	}
	UClass* Z_Construct_UClass_USpawned_AnimNotify_NoRegister()
	{
		return USpawned_AnimNotify::StaticClass();
	}
	struct Z_Construct_UClass_USpawned_AnimNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpawned_AnimNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_GhoulsAndGoodies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpawned_AnimNotify_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Spawned_AnimNotify.h" },
		{ "ModuleRelativePath", "Public/Spawned_AnimNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpawned_AnimNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpawned_AnimNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpawned_AnimNotify_Statics::ClassParams = {
		&USpawned_AnimNotify::StaticClass,
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
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_USpawned_AnimNotify_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USpawned_AnimNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpawned_AnimNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpawned_AnimNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpawned_AnimNotify, 2098890103);
	template<> GHOULSANDGOODIES_API UClass* StaticClass<USpawned_AnimNotify>()
	{
		return USpawned_AnimNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpawned_AnimNotify(Z_Construct_UClass_USpawned_AnimNotify, &USpawned_AnimNotify::StaticClass, TEXT("/Script/GhoulsAndGoodies"), TEXT("USpawned_AnimNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpawned_AnimNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
