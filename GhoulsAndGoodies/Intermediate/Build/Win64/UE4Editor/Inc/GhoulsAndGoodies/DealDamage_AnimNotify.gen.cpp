// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GhoulsAndGoodies/Public/DealDamage_AnimNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDealDamage_AnimNotify() {}
// Cross Module References
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_UDealDamage_AnimNotify_NoRegister();
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_UDealDamage_AnimNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_GhoulsAndGoodies();
// End Cross Module References
	void UDealDamage_AnimNotify::StaticRegisterNativesUDealDamage_AnimNotify()
	{
	}
	UClass* Z_Construct_UClass_UDealDamage_AnimNotify_NoRegister()
	{
		return UDealDamage_AnimNotify::StaticClass();
	}
	struct Z_Construct_UClass_UDealDamage_AnimNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDealDamage_AnimNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_GhoulsAndGoodies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDealDamage_AnimNotify_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "DealDamage_AnimNotify.h" },
		{ "ModuleRelativePath", "Public/DealDamage_AnimNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDealDamage_AnimNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDealDamage_AnimNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDealDamage_AnimNotify_Statics::ClassParams = {
		&UDealDamage_AnimNotify::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDealDamage_AnimNotify_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDealDamage_AnimNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDealDamage_AnimNotify()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDealDamage_AnimNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDealDamage_AnimNotify, 2572189769);
	template<> GHOULSANDGOODIES_API UClass* StaticClass<UDealDamage_AnimNotify>()
	{
		return UDealDamage_AnimNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDealDamage_AnimNotify(Z_Construct_UClass_UDealDamage_AnimNotify, &UDealDamage_AnimNotify::StaticClass, TEXT("/Script/GhoulsAndGoodies"), TEXT("UDealDamage_AnimNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDealDamage_AnimNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
