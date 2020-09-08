// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GhoulsAndGoodies/DefendingUnit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefendingUnit() {}
// Cross Module References
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_ADefendingUnit_NoRegister();
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_ADefendingUnit();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GhoulsAndGoodies();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
// End Cross Module References
	void ADefendingUnit::StaticRegisterNativesADefendingUnit()
	{
	}
	UClass* Z_Construct_UClass_ADefendingUnit_NoRegister()
	{
		return ADefendingUnit::StaticClass();
	}
	struct Z_Construct_UClass_ADefendingUnit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_lifeBarComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_lifeBarComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_lifeBarColour_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_lifeBarColour;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADefendingUnit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GhoulsAndGoodies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefendingUnit_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DefendingUnit.h" },
		{ "ModuleRelativePath", "DefendingUnit.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_mesh_MetaData[] = {
		{ "Category", "DefendingUnit" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DefendingUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_mesh = { "m_mesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefendingUnit, m_mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_mesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_lifeBarComponent_MetaData[] = {
		{ "Category", "DefendingUnit" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DefendingUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_lifeBarComponent = { "m_lifeBarComponent", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefendingUnit, m_lifeBarComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_lifeBarComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_lifeBarComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_lifeBarColour_MetaData[] = {
		{ "Category", "DefendingUnit" },
		{ "ModuleRelativePath", "DefendingUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_lifeBarColour = { "m_lifeBarColour", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefendingUnit, m_lifeBarColour), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_lifeBarColour_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_lifeBarColour_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADefendingUnit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_lifeBarComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_lifeBarColour,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADefendingUnit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefendingUnit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADefendingUnit_Statics::ClassParams = {
		&ADefendingUnit::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADefendingUnit_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ADefendingUnit_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ADefendingUnit_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADefendingUnit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADefendingUnit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADefendingUnit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADefendingUnit, 4186852199);
	template<> GHOULSANDGOODIES_API UClass* StaticClass<ADefendingUnit>()
	{
		return ADefendingUnit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADefendingUnit(Z_Construct_UClass_ADefendingUnit, &ADefendingUnit::StaticClass, TEXT("/Script/GhoulsAndGoodies"), TEXT("ADefendingUnit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADefendingUnit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
