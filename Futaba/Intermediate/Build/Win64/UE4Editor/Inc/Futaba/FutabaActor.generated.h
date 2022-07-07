// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class FutabaRequestStatus : uint8;
#ifdef FUTABA_FutabaActor_generated_h
#error "FutabaActor.generated.h already included, missing '#pragma once' in FutabaActor.h"
#endif
#define FUTABA_FutabaActor_generated_h

#define FutabaPlugins_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_13_DELEGATE \
struct _Script_Futaba_eventOnHttpRequestCompleted_Parms \
{ \
	bool bSuccessful; \
	int32 ResponseCode; \
	FString Response; \
}; \
static inline void FOnHttpRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnHttpRequestCompleted, bool bSuccessful, int32 ResponseCode, const FString& Response) \
{ \
	_Script_Futaba_eventOnHttpRequestCompleted_Parms Parms; \
	Parms.bSuccessful=bSuccessful ? true : false; \
	Parms.ResponseCode=ResponseCode; \
	Parms.Response=Response; \
	OnHttpRequestCompleted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FutabaPlugins_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_11_DELEGATE \
static inline void FFutabaOnEventDispather_DelegateWrapper(const FMulticastScriptDelegate& FutabaOnEventDispather) \
{ \
	FutabaOnEventDispather.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FutabaPlugins_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_26_SPARSE_DATA
#define FutabaPlugins_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetThingsProperty); \
	DECLARE_FUNCTION(execGetThingsProperty); \
	DECLARE_FUNCTION(execGetThingsProperties); \
	DECLARE_FUNCTION(execGetThingsByParameter); \
	DECLARE_FUNCTION(execGetThings); \
	DECLARE_FUNCTION(execGetMetadagetTelemetryDatata); \
	DECLARE_FUNCTION(execSetAccessToken); \
	DECLARE_FUNCTION(execSetAccessTokenByConfigFile); \
	DECLARE_FUNCTION(execGetAccessToken); \
	DECLARE_FUNCTION(execShowConfiguration); \
	DECLARE_FUNCTION(execSetAPIURL);


#define FutabaPlugins_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetThingsProperty); \
	DECLARE_FUNCTION(execGetThingsProperty); \
	DECLARE_FUNCTION(execGetThingsProperties); \
	DECLARE_FUNCTION(execGetThingsByParameter); \
	DECLARE_FUNCTION(execGetThings); \
	DECLARE_FUNCTION(execGetMetadagetTelemetryDatata); \
	DECLARE_FUNCTION(execSetAccessToken); \
	DECLARE_FUNCTION(execSetAccessTokenByConfigFile); \
	DECLARE_FUNCTION(execGetAccessToken); \
	DECLARE_FUNCTION(execShowConfiguration); \
	DECLARE_FUNCTION(execSetAPIURL);


#define FutabaPlugins_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFutabaActor(); \
	friend struct Z_Construct_UClass_AFutabaActor_Statics; \
public: \
	DECLARE_CLASS(AFutabaActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Futaba"), NO_API) \
	DECLARE_SERIALIZER(AFutabaActor)


#define FutabaPlugins_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_26_INCLASS \
private: \
	static void StaticRegisterNativesAFutabaActor(); \
	friend struct Z_Construct_UClass_AFutabaActor_Statics; \
public: \
	DECLARE_CLASS(AFutabaActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Futaba"), NO_API) \
	DECLARE_SERIALIZER(AFutabaActor)


#define FutabaPlugins_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFutabaActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFutabaActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFutabaActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFutabaActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFutabaActor(AFutabaActor&&); \
	NO_API AFutabaActor(const AFutabaActor&); \
public:


#define FutabaPlugins_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFutabaActor(AFutabaActor&&); \
	NO_API AFutabaActor(const AFutabaActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFutabaActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFutabaActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFutabaActor)


#define FutabaPlugins_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_26_PRIVATE_PROPERTY_OFFSET
#define FutabaPlugins_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_23_PROLOG
#define FutabaPlugins_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FutabaPlugins_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_26_PRIVATE_PROPERTY_OFFSET \
	FutabaPlugins_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_26_SPARSE_DATA \
	FutabaPlugins_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_26_RPC_WRAPPERS \
	FutabaPlugins_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_26_INCLASS \
	FutabaPlugins_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FutabaPlugins_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FutabaPlugins_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_26_PRIVATE_PROPERTY_OFFSET \
	FutabaPlugins_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_26_SPARSE_DATA \
	FutabaPlugins_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FutabaPlugins_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_26_INCLASS_NO_PURE_DECLS \
	FutabaPlugins_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FUTABA_API UClass* StaticClass<class AFutabaActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FutabaPlugins_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h


#define FOREACH_ENUM_FUTABAREQUESTSTATUS(op) \
	op(FutabaRequestStatus::Success) \
	op(FutabaRequestStatus::User_Error) \
	op(FutabaRequestStatus::Platform_Error) 

enum class FutabaRequestStatus : uint8;
template<> FUTABA_API UEnum* StaticEnum<FutabaRequestStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
