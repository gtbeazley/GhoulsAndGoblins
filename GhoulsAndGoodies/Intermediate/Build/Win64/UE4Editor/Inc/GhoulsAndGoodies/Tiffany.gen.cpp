// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GhoulsAndGoodies/Tiffany.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTiffany() {}
// Cross Module References
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_ATiffany_NoRegister();
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_ATiffany();
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_ADefendingUnit();
	UPackage* Z_Construct_UPackage__Script_GhoulsAndGoodies();
	GHOULSANDGOODIES_API UFunction* Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapBegin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GHOULSANDGOODIES_API UFunction* Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapEnd();
	GHOULSANDGOODIES_API UClass* Z_Construct_UClass_AEnemyUnit_NoRegister();
// End Cross Module References
	void ATiffany::StaticRegisterNativesATiffany()
	{
		UClass* Class = ATiffany::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDetectionSphereOverlapBegin", &ATiffany::execOnDetectionSphereOverlapBegin },
			{ "OnDetectionSphereOverlapEnd", &ATiffany::execOnDetectionSphereOverlapEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapBegin_Statics
	{
		struct Tiffany_eventOnDetectionSphereOverlapBegin_Parms
		{
			UPrimitiveComponent* a_overlappedComp;
			AActor* a_otherActor;
			UPrimitiveComponent* a_otherComp;
			int32 a_otherBodyIndex;
			bool a_fromSweep;
			FHitResult a_sweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_a_sweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_a_sweepResult;
		static void NewProp_a_fromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_a_fromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_a_otherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_a_otherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_a_otherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_a_otherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_a_overlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_a_overlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapBegin_Statics::NewProp_a_sweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapBegin_Statics::NewProp_a_sweepResult = { "a_sweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tiffany_eventOnDetectionSphereOverlapBegin_Parms, a_sweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapBegin_Statics::NewProp_a_sweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapBegin_Statics::NewProp_a_sweepResult_MetaData)) };
	void Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapBegin_Statics::NewProp_a_fromSweep_SetBit(void* Obj)
	{
		((Tiffany_eventOnDetectionSphereOverlapBegin_Parms*)Obj)->a_fromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapBegin_Statics::NewProp_a_fromSweep = { "a_fromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Tiffany_eventOnDetectionSphereOverlapBegin_Parms), &Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapBegin_Statics::NewProp_a_fromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapBegin_Statics::NewProp_a_otherBodyIndex = { "a_otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tiffany_eventOnDetectionSphereOverlapBegin_Parms, a_otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapBegin_Statics::NewProp_a_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapBegin_Statics::NewProp_a_otherComp = { "a_otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tiffany_eventOnDetectionSphereOverlapBegin_Parms, a_otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapBegin_Statics::NewProp_a_otherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapBegin_Statics::NewProp_a_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapBegin_Statics::NewProp_a_otherActor = { "a_otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tiffany_eventOnDetectionSphereOverlapBegin_Parms, a_otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapBegin_Statics::NewProp_a_overlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapBegin_Statics::NewProp_a_overlappedComp = { "a_overlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tiffany_eventOnDetectionSphereOverlapBegin_Parms, a_overlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapBegin_Statics::NewProp_a_overlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapBegin_Statics::NewProp_a_overlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapBegin_Statics::NewProp_a_sweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapBegin_Statics::NewProp_a_fromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapBegin_Statics::NewProp_a_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapBegin_Statics::NewProp_a_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapBegin_Statics::NewProp_a_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapBegin_Statics::NewProp_a_overlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tiffany.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATiffany, nullptr, "OnDetectionSphereOverlapBegin", nullptr, nullptr, sizeof(Tiffany_eventOnDetectionSphereOverlapBegin_Parms), Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapBegin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapBegin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapEnd_Statics
	{
		struct Tiffany_eventOnDetectionSphereOverlapEnd_Parms
		{
			UPrimitiveComponent* a_overlappedComp;
			AActor* a_otherActor;
			UPrimitiveComponent* a_otherComp;
			int32 a_otherBodyIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_a_otherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_a_otherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_a_otherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_a_otherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_a_overlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_a_overlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapEnd_Statics::NewProp_a_otherBodyIndex = { "a_otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tiffany_eventOnDetectionSphereOverlapEnd_Parms, a_otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapEnd_Statics::NewProp_a_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapEnd_Statics::NewProp_a_otherComp = { "a_otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tiffany_eventOnDetectionSphereOverlapEnd_Parms, a_otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapEnd_Statics::NewProp_a_otherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapEnd_Statics::NewProp_a_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapEnd_Statics::NewProp_a_otherActor = { "a_otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tiffany_eventOnDetectionSphereOverlapEnd_Parms, a_otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapEnd_Statics::NewProp_a_overlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapEnd_Statics::NewProp_a_overlappedComp = { "a_overlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tiffany_eventOnDetectionSphereOverlapEnd_Parms, a_overlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapEnd_Statics::NewProp_a_overlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapEnd_Statics::NewProp_a_overlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapEnd_Statics::NewProp_a_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapEnd_Statics::NewProp_a_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapEnd_Statics::NewProp_a_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapEnd_Statics::NewProp_a_overlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tiffany.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATiffany, nullptr, "OnDetectionSphereOverlapEnd", nullptr, nullptr, sizeof(Tiffany_eventOnDetectionSphereOverlapEnd_Parms), Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapEnd_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapEnd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATiffany_NoRegister()
	{
		return ATiffany::StaticClass();
	}
	struct Z_Construct_UClass_ATiffany_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_detectedEnemies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_detectedEnemies;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_detectedEnemies_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATiffany_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADefendingUnit,
		(UObject* (*)())Z_Construct_UPackage__Script_GhoulsAndGoodies,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATiffany_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapBegin, "OnDetectionSphereOverlapBegin" }, // 485493352
		{ &Z_Construct_UFunction_ATiffany_OnDetectionSphereOverlapEnd, "OnDetectionSphereOverlapEnd" }, // 4115010619
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATiffany_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Tiffany.h" },
		{ "ModuleRelativePath", "Tiffany.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATiffany_Statics::NewProp_m_detectedEnemies_MetaData[] = {
		{ "Category", "Tiffany" },
		{ "ModuleRelativePath", "Tiffany.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATiffany_Statics::NewProp_m_detectedEnemies = { "m_detectedEnemies", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATiffany, m_detectedEnemies), METADATA_PARAMS(Z_Construct_UClass_ATiffany_Statics::NewProp_m_detectedEnemies_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATiffany_Statics::NewProp_m_detectedEnemies_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATiffany_Statics::NewProp_m_detectedEnemies_Inner = { "m_detectedEnemies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AEnemyUnit_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATiffany_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATiffany_Statics::NewProp_m_detectedEnemies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATiffany_Statics::NewProp_m_detectedEnemies_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATiffany_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATiffany>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATiffany_Statics::ClassParams = {
		&ATiffany::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATiffany_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ATiffany_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ATiffany_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATiffany_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATiffany()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATiffany_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATiffany, 2096985529);
	template<> GHOULSANDGOODIES_API UClass* StaticClass<ATiffany>()
	{
		return ATiffany::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATiffany(Z_Construct_UClass_ATiffany, &ATiffany::StaticClass, TEXT("/Script/GhoulsAndGoodies"), TEXT("ATiffany"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATiffany);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
