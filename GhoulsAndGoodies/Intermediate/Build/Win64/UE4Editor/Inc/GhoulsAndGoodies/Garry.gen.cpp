// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GhoulsAndGoodies/Garry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGarry() {}
// Cross Module References
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_AGarry_NoRegister();
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_AGarry();
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_ADefendingUnit();
	UPackage* Z_Construct_UPackage__Script_GhoulsAndGoodies();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void AGarry::StaticRegisterNativesAGarry()
	{
	}
	UClass* Z_Construct_UClass_AGarry_NoRegister()
	{
		return AGarry::StaticClass();
	}
	struct Z_Construct_UClass_AGarry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_detectionSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_detectionSphere;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGarry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADefendingUnit,
		(UObject* (*)())Z_Construct_UPackage__Script_GhoulsAndGoodies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGarry_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Garry.h" },
		{ "ModuleRelativePath", "Garry.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGarry_Statics::NewProp_m_detectionSphere_MetaData[] = {
		{ "Category", "Garry" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Garry.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGarry_Statics::NewProp_m_detectionSphere = { "m_detectionSphere", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGarry, m_detectionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGarry_Statics::NewProp_m_detectionSphere_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGarry_Statics::NewProp_m_detectionSphere_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGarry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGarry_Statics::NewProp_m_detectionSphere,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGarry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGarry>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGarry_Statics::ClassParams = {
		&AGarry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGarry_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AGarry_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AGarry_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGarry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGarry()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGarry_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGarry, 4036716663);
	template<> GHOULSANDGOODIES_API UClass* StaticClass<AGarry>()
	{
		return AGarry::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGarry(Z_Construct_UClass_AGarry, &AGarry::StaticClass, TEXT("/Script/GhoulsAndGoodies"), TEXT("AGarry"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGarry);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
