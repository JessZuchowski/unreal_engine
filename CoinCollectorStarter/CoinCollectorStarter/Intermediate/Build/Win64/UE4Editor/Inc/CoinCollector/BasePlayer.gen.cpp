// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoinCollector/BasePlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasePlayer() {}
// Cross Module References
	COINCOLLECTOR_API UClass* Z_Construct_UClass_ABasePlayer_NoRegister();
	COINCOLLECTOR_API UClass* Z_Construct_UClass_ABasePlayer();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_CoinCollector();
// End Cross Module References
	void ABasePlayer::StaticRegisterNativesABasePlayer()
	{
	}
	UClass* Z_Construct_UClass_ABasePlayer_NoRegister()
	{
		return ABasePlayer::StaticClass();
	}
	struct Z_Construct_UClass_ABasePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_CoinCollector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BasePlayer.h" },
		{ "ModuleRelativePath", "BasePlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasePlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABasePlayer_Statics::ClassParams = {
		&ABasePlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABasePlayer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABasePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasePlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABasePlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABasePlayer, 4201516604);
	template<> COINCOLLECTOR_API UClass* StaticClass<ABasePlayer>()
	{
		return ABasePlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABasePlayer(Z_Construct_UClass_ABasePlayer, &ABasePlayer::StaticClass, TEXT("/Script/CoinCollector"), TEXT("ABasePlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasePlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
