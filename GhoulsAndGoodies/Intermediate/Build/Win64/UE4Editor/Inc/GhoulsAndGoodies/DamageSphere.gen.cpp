// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GhoulsAndGoodies/Public/DamageSphere.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageSphere() {}
// Cross Module References
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_ADamageSphere_NoRegister();
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_ADamageSphere();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GhoulsAndGoodies();
// End Cross Module References
	void ADamageSphere::StaticRegisterNativesADamageSphere()
	{
	}
	UClass* Z_Construct_UClass_ADamageSphere_NoRegister()
	{
		return ADamageSphere::StaticClass();
	}
	struct Z_Construct_UClass_ADamageSphere_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADamageSphere_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GhoulsAndGoodies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADamageSphere_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DamageSphere.h" },
		{ "ModuleRelativePath", "Public/DamageSphere.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADamageSphere_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADamageSphere>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADamageSphere_Statics::ClassParams = {
		&ADamageSphere::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADamageSphere_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADamageSphere_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADamageSphere()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADamageSphere_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADamageSphere, 2979827947);
	template<> GHOULSANDGOODIES_API UClass* StaticClass<ADamageSphere>()
	{
		return ADamageSphere::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADamageSphere(Z_Construct_UClass_ADamageSphere, &ADamageSphere::StaticClass, TEXT("/Script/GhoulsAndGoodies"), TEXT("ADamageSphere"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADamageSphere);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
