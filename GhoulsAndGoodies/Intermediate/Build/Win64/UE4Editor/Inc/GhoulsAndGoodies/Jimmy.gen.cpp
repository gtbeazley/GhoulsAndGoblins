// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GhoulsAndGoodies/Jimmy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJimmy() {}
// Cross Module References
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_AJimmy_NoRegister();
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_AJimmy();
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_ADefendingUnit();
	UPackage* Z_Construct_UPackage__Script_GhoulsAndGoodies();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AJimmy::StaticRegisterNativesAJimmy()
	{
	}
	UClass* Z_Construct_UClass_AJimmy_NoRegister()
	{
		return AJimmy::StaticClass();
	}
	struct Z_Construct_UClass_AJimmy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJimmy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADefendingUnit,
		(UObject* (*)())Z_Construct_UPackage__Script_GhoulsAndGoodies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJimmy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Jimmy.h" },
		{ "ModuleRelativePath", "Jimmy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJimmy_Statics::NewProp_m_mesh_MetaData[] = {
		{ "Category", "Jimmy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Jimmy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJimmy_Statics::NewProp_m_mesh = { "m_mesh", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJimmy, m_mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJimmy_Statics::NewProp_m_mesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AJimmy_Statics::NewProp_m_mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AJimmy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJimmy_Statics::NewProp_m_mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJimmy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJimmy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AJimmy_Statics::ClassParams = {
		&AJimmy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AJimmy_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AJimmy_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AJimmy_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AJimmy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJimmy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AJimmy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AJimmy, 76077559);
	template<> GHOULSANDGOODIES_API UClass* StaticClass<AJimmy>()
	{
		return AJimmy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJimmy(Z_Construct_UClass_AJimmy, &AJimmy::StaticClass, TEXT("/Script/GhoulsAndGoodies"), TEXT("AJimmy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJimmy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
