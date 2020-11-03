// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GhoulsAndGoodies/Public/Buddy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuddy() {}
// Cross Module References
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_ABuddy_NoRegister();
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_ABuddy();
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_AEnemyUnit();
	UPackage* Z_Construct_UPackage__Script_GhoulsAndGoodies();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ABuddy::StaticRegisterNativesABuddy()
	{
	}
	UClass* Z_Construct_UClass_ABuddy_NoRegister()
	{
		return ABuddy::StaticClass();
	}
	struct Z_Construct_UClass_ABuddy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_attackDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_attackDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_facingTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_facingTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_attackInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_attackInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_attackTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_attackTimer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuddy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemyUnit,
		(UObject* (*)())Z_Construct_UPackage__Script_GhoulsAndGoodies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuddy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Buddy.h" },
		{ "ModuleRelativePath", "Public/Buddy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuddy_Statics::NewProp_m_attackDamage_MetaData[] = {
		{ "Category", "Buddy" },
		{ "ModuleRelativePath", "Public/Buddy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABuddy_Statics::NewProp_m_attackDamage = { "m_attackDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuddy, m_attackDamage), METADATA_PARAMS(Z_Construct_UClass_ABuddy_Statics::NewProp_m_attackDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABuddy_Statics::NewProp_m_attackDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuddy_Statics::NewProp_m_facingTarget_MetaData[] = {
		{ "Category", "Buddy" },
		{ "ModuleRelativePath", "Public/Buddy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABuddy_Statics::NewProp_m_facingTarget = { "m_facingTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuddy, m_facingTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABuddy_Statics::NewProp_m_facingTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABuddy_Statics::NewProp_m_facingTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuddy_Statics::NewProp_m_attackInterval_MetaData[] = {
		{ "Category", "Buddy" },
		{ "ModuleRelativePath", "Public/Buddy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABuddy_Statics::NewProp_m_attackInterval = { "m_attackInterval", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuddy, m_attackInterval), METADATA_PARAMS(Z_Construct_UClass_ABuddy_Statics::NewProp_m_attackInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABuddy_Statics::NewProp_m_attackInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuddy_Statics::NewProp_m_attackTimer_MetaData[] = {
		{ "Category", "Buddy" },
		{ "ModuleRelativePath", "Public/Buddy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABuddy_Statics::NewProp_m_attackTimer = { "m_attackTimer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuddy, m_attackTimer), METADATA_PARAMS(Z_Construct_UClass_ABuddy_Statics::NewProp_m_attackTimer_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABuddy_Statics::NewProp_m_attackTimer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuddy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuddy_Statics::NewProp_m_attackDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuddy_Statics::NewProp_m_facingTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuddy_Statics::NewProp_m_attackInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuddy_Statics::NewProp_m_attackTimer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuddy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuddy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuddy_Statics::ClassParams = {
		&ABuddy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABuddy_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ABuddy_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABuddy_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABuddy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuddy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuddy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuddy, 3565389144);
	template<> GHOULSANDGOODIES_API UClass* StaticClass<ABuddy>()
	{
		return ABuddy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuddy(Z_Construct_UClass_ABuddy, &ABuddy::StaticClass, TEXT("/Script/GhoulsAndGoodies"), TEXT("ABuddy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuddy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
