// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GhoulsAndGoodies/LifeBar_W.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLifeBar_W() {}
// Cross Module References
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_ULifeBar_W_NoRegister();
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_ULifeBar_W();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GhoulsAndGoodies();
// End Cross Module References
	void ULifeBar_W::StaticRegisterNativesULifeBar_W()
	{
	}
	UClass* Z_Construct_UClass_ULifeBar_W_NoRegister()
	{
		return ULifeBar_W::StaticClass();
	}
	struct Z_Construct_UClass_ULifeBar_W_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_curHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_curHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_fullHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_fullHealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULifeBar_W_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GhoulsAndGoodies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeBar_W_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "LifeBar_W.h" },
		{ "ModuleRelativePath", "LifeBar_W.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeBar_W_Statics::NewProp_m_curHealth_MetaData[] = {
		{ "Category", "LifeBar_W" },
		{ "ModuleRelativePath", "LifeBar_W.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULifeBar_W_Statics::NewProp_m_curHealth = { "m_curHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeBar_W, m_curHealth), METADATA_PARAMS(Z_Construct_UClass_ULifeBar_W_Statics::NewProp_m_curHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULifeBar_W_Statics::NewProp_m_curHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULifeBar_W_Statics::NewProp_m_fullHealth_MetaData[] = {
		{ "Category", "LifeBar_W" },
		{ "ModuleRelativePath", "LifeBar_W.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULifeBar_W_Statics::NewProp_m_fullHealth = { "m_fullHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULifeBar_W, m_fullHealth), METADATA_PARAMS(Z_Construct_UClass_ULifeBar_W_Statics::NewProp_m_fullHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULifeBar_W_Statics::NewProp_m_fullHealth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULifeBar_W_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeBar_W_Statics::NewProp_m_curHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULifeBar_W_Statics::NewProp_m_fullHealth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULifeBar_W_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULifeBar_W>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULifeBar_W_Statics::ClassParams = {
		&ULifeBar_W::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULifeBar_W_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ULifeBar_W_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULifeBar_W_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULifeBar_W_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULifeBar_W()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULifeBar_W_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULifeBar_W, 771861309);
	template<> GHOULSANDGOODIES_API UClass* StaticClass<ULifeBar_W>()
	{
		return ULifeBar_W::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULifeBar_W(Z_Construct_UClass_ULifeBar_W, &ULifeBar_W::StaticClass, TEXT("/Script/GhoulsAndGoodies"), TEXT("ULifeBar_W"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULifeBar_W);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
