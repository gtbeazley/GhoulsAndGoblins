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
	GHOULSANDGOODIES_API UFunction* Z_Construct_UFunction_ADefendingUnit_DealDamage();
	GHOULSANDGOODIES_API UFunction* Z_Construct_UFunction_ADefendingUnit_Despawn();
	GHOULSANDGOODIES_API UFunction* Z_Construct_UFunction_ADefendingUnit_GetMesh();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void ADefendingUnit::StaticRegisterNativesADefendingUnit()
	{
		UClass* Class = ADefendingUnit::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DealDamage", &ADefendingUnit::execDealDamage },
			{ "Despawn", &ADefendingUnit::execDespawn },
			{ "GetMesh", &ADefendingUnit::execGetMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADefendingUnit_DealDamage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefendingUnit_DealDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DefendingUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefendingUnit_DealDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefendingUnit, nullptr, "DealDamage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefendingUnit_DealDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADefendingUnit_DealDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefendingUnit_DealDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefendingUnit_DealDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefendingUnit_Despawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefendingUnit_Despawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DefendingUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefendingUnit_Despawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefendingUnit, nullptr, "Despawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefendingUnit_Despawn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADefendingUnit_Despawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefendingUnit_Despawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefendingUnit_Despawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefendingUnit_GetMesh_Statics
	{
		struct DefendingUnit_eventGetMesh_Parms
		{
			USkeletalMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefendingUnit_GetMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADefendingUnit_GetMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefendingUnit_eventGetMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADefendingUnit_GetMesh_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ADefendingUnit_GetMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefendingUnit_GetMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefendingUnit_GetMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefendingUnit_GetMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DefendingUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefendingUnit_GetMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefendingUnit, nullptr, "GetMesh", nullptr, nullptr, sizeof(DefendingUnit_eventGetMesh_Parms), Z_Construct_UFunction_ADefendingUnit_GetMesh_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADefendingUnit_GetMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefendingUnit_GetMesh_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADefendingUnit_GetMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefendingUnit_GetMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefendingUnit_GetMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADefendingUnit_NoRegister()
	{
		return ADefendingUnit::StaticClass();
	}
	struct Z_Construct_UClass_ADefendingUnit_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_detectionSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_detectionSphere;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADefendingUnit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GhoulsAndGoodies,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADefendingUnit_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADefendingUnit_DealDamage, "DealDamage" }, // 2724591250
		{ &Z_Construct_UFunction_ADefendingUnit_Despawn, "Despawn" }, // 1268386680
		{ &Z_Construct_UFunction_ADefendingUnit_GetMesh, "GetMesh" }, // 2538256725
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefendingUnit_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DefendingUnit.h" },
		{ "ModuleRelativePath", "DefendingUnit.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_curHealth_MetaData[] = {
		{ "Category", "DefendingUnit" },
		{ "ModuleRelativePath", "DefendingUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_curHealth = { "m_curHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefendingUnit, m_curHealth), METADATA_PARAMS(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_curHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_curHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_fullHealth_MetaData[] = {
		{ "Category", "DefendingUnit" },
		{ "ModuleRelativePath", "DefendingUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_fullHealth = { "m_fullHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefendingUnit, m_fullHealth), METADATA_PARAMS(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_fullHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_fullHealth_MetaData)) };
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_detectionSphere_MetaData[] = {
		{ "Category", "DefendingUnit" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DefendingUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_detectionSphere = { "m_detectionSphere", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefendingUnit, m_detectionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_detectionSphere_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_detectionSphere_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADefendingUnit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_curHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_fullHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_lifeBarComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_lifeBarColour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefendingUnit_Statics::NewProp_m_detectionSphere,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADefendingUnit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefendingUnit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADefendingUnit_Statics::ClassParams = {
		&ADefendingUnit::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADefendingUnit_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(ADefendingUnit, 3581431637);
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
