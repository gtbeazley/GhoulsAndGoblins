// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GhoulsAndGoodies/Marvin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMarvin() {}
// Cross Module References
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_AMarvin_NoRegister();
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_AMarvin();
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_AEnemyUnit();
	UPackage* Z_Construct_UPackage__Script_GhoulsAndGoodies();
	GHOULSANDGOODIES_API UFunction* Z_Construct_UFunction_AMarvin_Tick();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AMarvin::StaticRegisterNativesAMarvin()
	{
		UClass* Class = AMarvin::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Tick", &AMarvin::execTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMarvin_Tick_Statics
	{
		struct Marvin_eventTick_Parms
		{
			float a_deltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_a_deltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMarvin_Tick_Statics::NewProp_a_deltaTime = { "a_deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Marvin_eventTick_Parms, a_deltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMarvin_Tick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMarvin_Tick_Statics::NewProp_a_deltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMarvin_Tick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Marvin.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMarvin_Tick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMarvin, nullptr, "Tick", nullptr, nullptr, sizeof(Marvin_eventTick_Parms), Z_Construct_UFunction_AMarvin_Tick_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMarvin_Tick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMarvin_Tick_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMarvin_Tick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMarvin_Tick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMarvin_Tick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMarvin_NoRegister()
	{
		return AMarvin::StaticClass();
	}
	struct Z_Construct_UClass_AMarvin_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	UObject* (*const Z_Construct_UClass_AMarvin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemyUnit,
		(UObject* (*)())Z_Construct_UPackage__Script_GhoulsAndGoodies,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMarvin_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMarvin_Tick, "Tick" }, // 1497661891
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarvin_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Marvin.h" },
		{ "ModuleRelativePath", "Marvin.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarvin_Statics::NewProp_m_attackDamage_MetaData[] = {
		{ "Category", "Marvin" },
		{ "ModuleRelativePath", "Marvin.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMarvin_Statics::NewProp_m_attackDamage = { "m_attackDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMarvin, m_attackDamage), METADATA_PARAMS(Z_Construct_UClass_AMarvin_Statics::NewProp_m_attackDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMarvin_Statics::NewProp_m_attackDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarvin_Statics::NewProp_m_facingTarget_MetaData[] = {
		{ "Category", "Marvin" },
		{ "ModuleRelativePath", "Marvin.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMarvin_Statics::NewProp_m_facingTarget = { "m_facingTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMarvin, m_facingTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMarvin_Statics::NewProp_m_facingTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMarvin_Statics::NewProp_m_facingTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarvin_Statics::NewProp_m_attackInterval_MetaData[] = {
		{ "Category", "Marvin" },
		{ "ModuleRelativePath", "Marvin.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMarvin_Statics::NewProp_m_attackInterval = { "m_attackInterval", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMarvin, m_attackInterval), METADATA_PARAMS(Z_Construct_UClass_AMarvin_Statics::NewProp_m_attackInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMarvin_Statics::NewProp_m_attackInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarvin_Statics::NewProp_m_attackTimer_MetaData[] = {
		{ "Category", "Marvin" },
		{ "ModuleRelativePath", "Marvin.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMarvin_Statics::NewProp_m_attackTimer = { "m_attackTimer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMarvin, m_attackTimer), METADATA_PARAMS(Z_Construct_UClass_AMarvin_Statics::NewProp_m_attackTimer_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMarvin_Statics::NewProp_m_attackTimer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMarvin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarvin_Statics::NewProp_m_attackDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarvin_Statics::NewProp_m_facingTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarvin_Statics::NewProp_m_attackInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarvin_Statics::NewProp_m_attackTimer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMarvin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMarvin>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMarvin_Statics::ClassParams = {
		&AMarvin::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMarvin_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AMarvin_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMarvin_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMarvin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMarvin()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMarvin_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMarvin, 4242055961);
	template<> GHOULSANDGOODIES_API UClass* StaticClass<AMarvin>()
	{
		return AMarvin::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMarvin(Z_Construct_UClass_AMarvin, &AMarvin::StaticClass, TEXT("/Script/GhoulsAndGoodies"), TEXT("AMarvin"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMarvin);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
