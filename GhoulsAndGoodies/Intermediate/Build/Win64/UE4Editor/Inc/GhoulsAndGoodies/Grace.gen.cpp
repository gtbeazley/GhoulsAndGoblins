// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GhoulsAndGoodies/Grace.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrace() {}
// Cross Module References
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_AGrace_NoRegister();
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_AGrace();
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_AEnemyUnit();
	UPackage* Z_Construct_UPackage__Script_GhoulsAndGoodies();
// End Cross Module References
	void AGrace::StaticRegisterNativesAGrace()
	{
	}
	UClass* Z_Construct_UClass_AGrace_NoRegister()
	{
		return AGrace::StaticClass();
	}
	struct Z_Construct_UClass_AGrace_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGrace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemyUnit,
		(UObject* (*)())Z_Construct_UPackage__Script_GhoulsAndGoodies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrace_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Grace.h" },
		{ "ModuleRelativePath", "Grace.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGrace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrace>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGrace_Statics::ClassParams = {
		&AGrace::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGrace_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGrace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGrace()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGrace_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGrace, 4231231122);
	template<> GHOULSANDGOODIES_API UClass* StaticClass<AGrace>()
	{
		return AGrace::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGrace(Z_Construct_UClass_AGrace, &AGrace::StaticClass, TEXT("/Script/GhoulsAndGoodies"), TEXT("AGrace"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrace);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
