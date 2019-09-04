// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef COINCOLLECTOR_BaseCoin_generated_h
#error "BaseCoin.generated.h already included, missing '#pragma once' in BaseCoin.h"
#endif
#define COINCOLLECTOR_BaseCoin_generated_h

#define CoinCollectorStarter_Source_CoinCollector_BaseCoin_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define CoinCollectorStarter_Source_CoinCollector_BaseCoin_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define CoinCollectorStarter_Source_CoinCollector_BaseCoin_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseCoin(); \
	friend struct Z_Construct_UClass_ABaseCoin_Statics; \
public: \
	DECLARE_CLASS(ABaseCoin, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoinCollector"), NO_API) \
	DECLARE_SERIALIZER(ABaseCoin)


#define CoinCollectorStarter_Source_CoinCollector_BaseCoin_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABaseCoin(); \
	friend struct Z_Construct_UClass_ABaseCoin_Statics; \
public: \
	DECLARE_CLASS(ABaseCoin, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoinCollector"), NO_API) \
	DECLARE_SERIALIZER(ABaseCoin)


#define CoinCollectorStarter_Source_CoinCollector_BaseCoin_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseCoin(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseCoin) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCoin); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCoin); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCoin(ABaseCoin&&); \
	NO_API ABaseCoin(const ABaseCoin&); \
public:


#define CoinCollectorStarter_Source_CoinCollector_BaseCoin_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCoin(ABaseCoin&&); \
	NO_API ABaseCoin(const ABaseCoin&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCoin); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCoin); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseCoin)


#define CoinCollectorStarter_Source_CoinCollector_BaseCoin_h_13_PRIVATE_PROPERTY_OFFSET
#define CoinCollectorStarter_Source_CoinCollector_BaseCoin_h_10_PROLOG
#define CoinCollectorStarter_Source_CoinCollector_BaseCoin_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoinCollectorStarter_Source_CoinCollector_BaseCoin_h_13_PRIVATE_PROPERTY_OFFSET \
	CoinCollectorStarter_Source_CoinCollector_BaseCoin_h_13_RPC_WRAPPERS \
	CoinCollectorStarter_Source_CoinCollector_BaseCoin_h_13_INCLASS \
	CoinCollectorStarter_Source_CoinCollector_BaseCoin_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoinCollectorStarter_Source_CoinCollector_BaseCoin_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoinCollectorStarter_Source_CoinCollector_BaseCoin_h_13_PRIVATE_PROPERTY_OFFSET \
	CoinCollectorStarter_Source_CoinCollector_BaseCoin_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	CoinCollectorStarter_Source_CoinCollector_BaseCoin_h_13_INCLASS_NO_PURE_DECLS \
	CoinCollectorStarter_Source_CoinCollector_BaseCoin_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COINCOLLECTOR_API UClass* StaticClass<class ABaseCoin>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoinCollectorStarter_Source_CoinCollector_BaseCoin_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
