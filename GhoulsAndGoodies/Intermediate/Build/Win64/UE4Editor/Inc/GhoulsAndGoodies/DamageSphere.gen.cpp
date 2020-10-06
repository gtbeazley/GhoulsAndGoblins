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
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_actorsToDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_actorsToDamage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_actorsToDamage_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_damageDefendingUnits_MetaData[];
#endif
		static void NewProp_m_damageDefendingUnits_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_damageDefendingUnits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_damageSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_damageSphere;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADamageSphere_Statics::NewProp_m_damage_MetaData[] = {
		{ "Category", "DamageSphere" },
		{ "ModuleRelativePath", "Public/DamageSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADamageSphere_Statics::NewProp_m_damage = { "m_damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADamageSphere, m_damage), METADATA_PARAMS(Z_Construct_UClass_ADamageSphere_Statics::NewProp_m_damage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADamageSphere_Statics::NewProp_m_damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADamageSphere_Statics::NewProp_m_actorsToDamage_MetaData[] = {
		{ "Category", "DamageSphere" },
		{ "ModuleRelativePath", "Public/DamageSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADamageSphere_Statics::NewProp_m_actorsToDamage = { "m_actorsToDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADamageSphere, m_actorsToDamage), METADATA_PARAMS(Z_Construct_UClass_ADamageSphere_Statics::NewProp_m_actorsToDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADamageSphere_Statics::NewProp_m_actorsToDamage_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADamageSphere_Statics::NewProp_m_actorsToDamage_Inner = { "m_actorsToDamage", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADamageSphere_Statics::NewProp_m_damageDefendingUnits_MetaData[] = {
		{ "Category", "DamageSphere" },
		{ "Comment", "//Determines who it can attack\n" },
		{ "ModuleRelativePath", "Public/DamageSphere.h" },
		{ "ToolTip", "Determines who it can attack" },
	};
#endif
	void Z_Construct_UClass_ADamageSphere_Statics::NewProp_m_damageDefendingUnits_SetBit(void* Obj)
	{
		((ADamageSphere*)Obj)->m_damageDefendingUnits = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADamageSphere_Statics::NewProp_m_damageDefendingUnits = { "m_damageDefendingUnits", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADamageSphere), &Z_Construct_UClass_ADamageSphere_Statics::NewProp_m_damageDefendingUnits_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADamageSphere_Statics::NewProp_m_damageDefendingUnits_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADamageSphere_Statics::NewProp_m_damageDefendingUnits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADamageSphere_Statics::NewProp_m_damageSphere_MetaData[] = {
		{ "Category", "DamageSphere" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DamageSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADamageSphere_Statics::NewProp_m_damageSphere = { "m_damageSphere", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADamageSphere, m_damageSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADamageSphere_Statics::NewProp_m_damageSphere_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADamageSphere_Statics::NewProp_m_damageSphere_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADamageSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADamageSphere_Statics::NewProp_m_damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADamageSphere_Statics::NewProp_m_actorsToDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADamageSphere_Statics::NewProp_m_actorsToDamage_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADamageSphere_Statics::NewProp_m_damageDefendingUnits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADamageSphere_Statics::NewProp_m_damageSphere,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADamageSphere_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADamageSphere>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADamageSphere_Statics::ClassParams = {
		&ADamageSphere::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADamageSphere_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ADamageSphere_Statics::PropPointers),
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
	IMPLEMENT_CLASS(ADamageSphere, 2479726347);
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
