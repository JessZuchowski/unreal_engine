// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoinCollector/BaseCoin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseCoin() {}
// Cross Module References
	COINCOLLECTOR_API UClass* Z_Construct_UClass_ABaseCoin_NoRegister();
	COINCOLLECTOR_API UClass* Z_Construct_UClass_ABaseCoin();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CoinCollector();
	COINCOLLECTOR_API UFunction* Z_Construct_UFunction_ABaseCoin_OnOverlap();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COINCOLLECTOR_API UFunction* Z_Construct_UFunction_ABaseCoin_PlayCustomDeath();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	static FName NAME_ABaseCoin_OnOverlap = FName(TEXT("OnOverlap"));
	void ABaseCoin::OnOverlap(AActor* OverlappedActor, AActor* OtherActor)
	{
		BaseCoin_eventOnOverlap_Parms Parms;
		Parms.OverlappedActor=OverlappedActor;
		Parms.OtherActor=OtherActor;
		ProcessEvent(FindFunctionChecked(NAME_ABaseCoin_OnOverlap),&Parms);
	}
	void ABaseCoin::StaticRegisterNativesABaseCoin()
	{
		UClass* Class = ABaseCoin::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlap", &ABaseCoin::execOnOverlap },
			{ "PlayCustomDeath", &ABaseCoin::execPlayCustomDeath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseCoin_OnOverlap_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseCoin_OnOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseCoin_eventOnOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseCoin_OnOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseCoin_eventOnOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCoin_OnOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCoin_OnOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCoin_OnOverlap_Statics::NewProp_OverlappedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCoin_OnOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseCoin.h" },
		{ "ToolTip", "execute when coin overlaps with another actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCoin_OnOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCoin, nullptr, "OnOverlap", sizeof(BaseCoin_eventOnOverlap_Parms), Z_Construct_UFunction_ABaseCoin_OnOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABaseCoin_OnOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseCoin_OnOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABaseCoin_OnOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseCoin_OnOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseCoin_OnOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCoin_PlayCustomDeath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCoin_PlayCustomDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseCoin.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCoin_PlayCustomDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCoin, nullptr, "PlayCustomDeath", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseCoin_PlayCustomDeath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABaseCoin_PlayCustomDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseCoin_PlayCustomDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseCoin_PlayCustomDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseCoin_NoRegister()
	{
		return ABaseCoin::StaticClass();
	}
	struct Z_Construct_UClass_ABaseCoin_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoinMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CoinMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseCoin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CoinCollector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseCoin_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseCoin_OnOverlap, "OnOverlap" }, // 3608283445
		{ &Z_Construct_UFunction_ABaseCoin_PlayCustomDeath, "PlayCustomDeath" }, // 2036973419
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCoin_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseCoin.h" },
		{ "ModuleRelativePath", "BaseCoin.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCoin_Statics::NewProp_RotationRate_MetaData[] = {
		{ "Category", "BaseCoin" },
		{ "ModuleRelativePath", "BaseCoin.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseCoin_Statics::NewProp_RotationRate = { "RotationRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseCoin, RotationRate), METADATA_PARAMS(Z_Construct_UClass_ABaseCoin_Statics::NewProp_RotationRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseCoin_Statics::NewProp_RotationRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCoin_Statics::NewProp_CoinMesh_MetaData[] = {
		{ "Category", "BaseCoin" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseCoin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCoin_Statics::NewProp_CoinMesh = { "CoinMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseCoin, CoinMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseCoin_Statics::NewProp_CoinMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseCoin_Statics::NewProp_CoinMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCoin_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "BaseCoin" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseCoin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCoin_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseCoin, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseCoin_Statics::NewProp_Root_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseCoin_Statics::NewProp_Root_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseCoin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCoin_Statics::NewProp_RotationRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCoin_Statics::NewProp_CoinMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCoin_Statics::NewProp_Root,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseCoin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseCoin>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseCoin_Statics::ClassParams = {
		&ABaseCoin::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseCoin_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ABaseCoin_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseCoin_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABaseCoin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseCoin()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseCoin_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseCoin, 126247370);
	template<> COINCOLLECTOR_API UClass* StaticClass<ABaseCoin>()
	{
		return ABaseCoin::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseCoin(Z_Construct_UClass_ABaseCoin, &ABaseCoin::StaticClass, TEXT("/Script/CoinCollector"), TEXT("ABaseCoin"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseCoin);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
