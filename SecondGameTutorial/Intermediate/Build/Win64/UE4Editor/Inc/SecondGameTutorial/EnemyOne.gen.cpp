// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondGameTutorial/EnemyOne.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyOne() {}
// Cross Module References
	SECONDGAMETUTORIAL_API UClass* Z_Construct_UClass_AEnemyOne_NoRegister();
	SECONDGAMETUTORIAL_API UClass* Z_Construct_UClass_AEnemyOne();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SecondGameTutorial();
	SECONDGAMETUTORIAL_API UFunction* Z_Construct_UFunction_AEnemyOne_onTakeHit();
// End Cross Module References
	static FName NAME_AEnemyOne_onTakeHit = FName(TEXT("onTakeHit"));
	void AEnemyOne::onTakeHit()
	{
		ProcessEvent(FindFunctionChecked(NAME_AEnemyOne_onTakeHit),NULL);
	}
	void AEnemyOne::StaticRegisterNativesAEnemyOne()
	{
	}
	struct Z_Construct_UFunction_AEnemyOne_onTakeHit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyOne_onTakeHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "EnemyOne.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyOne_onTakeHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyOne, nullptr, "onTakeHit", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyOne_onTakeHit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnemyOne_onTakeHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyOne_onTakeHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemyOne_onTakeHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEnemyOne_NoRegister()
	{
		return AEnemyOne::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyOne_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isHittable_MetaData[];
#endif
		static void NewProp_isHittable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isHittable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyOne_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondGameTutorial,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemyOne_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyOne_onTakeHit, "onTakeHit" }, // 3385638072
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyOne_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemyOne.h" },
		{ "ModuleRelativePath", "EnemyOne.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyOne_Statics::NewProp_isHittable_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "EnemyOne.h" },
	};
#endif
	void Z_Construct_UClass_AEnemyOne_Statics::NewProp_isHittable_SetBit(void* Obj)
	{
		((AEnemyOne*)Obj)->isHittable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemyOne_Statics::NewProp_isHittable = { "isHittable", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEnemyOne), &Z_Construct_UClass_AEnemyOne_Statics::NewProp_isHittable_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEnemyOne_Statics::NewProp_isHittable_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemyOne_Statics::NewProp_isHittable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyOne_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyOne_Statics::NewProp_isHittable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyOne_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyOne>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyOne_Statics::ClassParams = {
		&AEnemyOne::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemyOne_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AEnemyOne_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyOne_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AEnemyOne_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyOne()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyOne_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyOne, 2955141750);
	template<> SECONDGAMETUTORIAL_API UClass* StaticClass<AEnemyOne>()
	{
		return AEnemyOne::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyOne(Z_Construct_UClass_AEnemyOne, &AEnemyOne::StaticClass, TEXT("/Script/SecondGameTutorial"), TEXT("AEnemyOne"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyOne);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
