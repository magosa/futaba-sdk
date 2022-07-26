// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class SearchParametersCondition : uint8;
#ifdef FUTABA_FutabaBPLibrary_generated_h
#error "FutabaBPLibrary.generated.h already included, missing '#pragma once' in FutabaBPLibrary.h"
#endif
#define FUTABA_FutabaBPLibrary_generated_h

#define FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaBPLibrary_h_21_SPARSE_DATA
#define FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaBPLibrary_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGenerateParameterWithFilter); \
	DECLARE_FUNCTION(execGenerateSearchParameters); \
	DECLARE_FUNCTION(execFutabaSampleFunction);


#define FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaBPLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGenerateParameterWithFilter); \
	DECLARE_FUNCTION(execGenerateSearchParameters); \
	DECLARE_FUNCTION(execFutabaSampleFunction);


#define FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaBPLibrary_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFutabaBPLibrary(); \
	friend struct Z_Construct_UClass_UFutabaBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UFutabaBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Futaba"), NO_API) \
	DECLARE_SERIALIZER(UFutabaBPLibrary)


#define FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaBPLibrary_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUFutabaBPLibrary(); \
	friend struct Z_Construct_UClass_UFutabaBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UFutabaBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Futaba"), NO_API) \
	DECLARE_SERIALIZER(UFutabaBPLibrary)


#define FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaBPLibrary_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFutabaBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFutabaBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFutabaBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFutabaBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFutabaBPLibrary(UFutabaBPLibrary&&); \
	NO_API UFutabaBPLibrary(const UFutabaBPLibrary&); \
public:


#define FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaBPLibrary_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFutabaBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFutabaBPLibrary(UFutabaBPLibrary&&); \
	NO_API UFutabaBPLibrary(const UFutabaBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFutabaBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFutabaBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFutabaBPLibrary)


#define FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaBPLibrary_h_18_PROLOG
#define FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaBPLibrary_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaBPLibrary_h_21_SPARSE_DATA \
	FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaBPLibrary_h_21_RPC_WRAPPERS \
	FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaBPLibrary_h_21_INCLASS \
	FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaBPLibrary_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaBPLibrary_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaBPLibrary_h_21_SPARSE_DATA \
	FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaBPLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaBPLibrary_h_21_INCLASS_NO_PURE_DECLS \
	FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaBPLibrary_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FutabaBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FUTABA_API UClass* StaticClass<class UFutabaBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaBPLibrary_h


#define FOREACH_ENUM_SEARCHPARAMETERSCONDITION(op) \
	op(SearchParametersCondition::SP_None) \
	op(SearchParametersCondition::SP_or) \
	op(SearchParametersCondition::SP_and) \
	op(SearchParametersCondition::SP_startswith) 

enum class SearchParametersCondition : uint8;
template<> FUTABA_API UEnum* StaticEnum<SearchParametersCondition>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
