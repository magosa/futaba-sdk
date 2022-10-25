// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FLatentActionInfo;
enum class FutabaRequestStatus : uint8;
#ifdef FUTABA_FutabaActor_generated_h
#error "FutabaActor.generated.h already included, missing '#pragma once' in FutabaActor.h"
#endif
#define FUTABA_FutabaActor_generated_h

#define FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_30_DELEGATE \
static inline void FFutabaOnEventDispather_DelegateWrapper(const FMulticastScriptDelegate& FutabaOnEventDispather) \
{ \
	FutabaOnEventDispather.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_32_DELEGATE \
struct FutabaActor_eventOnHttpRequestCompleted_Parms \
{ \
	bool bSuccessful; \
	int32 ResponseCode; \
	FString Response; \
}; \
static inline void FOnHttpRequestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnHttpRequestCompleted, bool bSuccessful, int32 ResponseCode, const FString& Response) \
{ \
	FutabaActor_eventOnHttpRequestCompleted_Parms Parms; \
	Parms.bSuccessful=bSuccessful ? true : false; \
	Parms.ResponseCode=ResponseCode; \
	Parms.Response=Response; \
	OnHttpRequestCompleted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_24_SPARSE_DATA
#define FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeleteSharedDataLatent); \
	DECLARE_FUNCTION(execDeleteSharedData); \
	DECLARE_FUNCTION(execGetSharedDataLatent); \
	DECLARE_FUNCTION(execGetSharedData); \
	DECLARE_FUNCTION(execSetSharedDataLatent); \
	DECLARE_FUNCTION(execSetSharedData); \
	DECLARE_FUNCTION(execDeleteWebhookLatent); \
	DECLARE_FUNCTION(execDeleteWebhook); \
	DECLARE_FUNCTION(execSetWebhookLatent); \
	DECLARE_FUNCTION(execSetWebhook); \
	DECLARE_FUNCTION(execDeleteTaskLatent); \
	DECLARE_FUNCTION(execDeleteTask); \
	DECLARE_FUNCTION(execChangeTaskValidityLatent); \
	DECLARE_FUNCTION(execChangeTaskValidity); \
	DECLARE_FUNCTION(execGetTaskProgressLatent); \
	DECLARE_FUNCTION(execGetTaskProgress); \
	DECLARE_FUNCTION(execCreateTaskLatent); \
	DECLARE_FUNCTION(execCreateTask); \
	DECLARE_FUNCTION(execSetThingsPropertyStringLatent); \
	DECLARE_FUNCTION(execSetThingsPropertyString); \
	DECLARE_FUNCTION(execSetThingsPropertyFloatLatent); \
	DECLARE_FUNCTION(execSetThingsPropertyFloat); \
	DECLARE_FUNCTION(execSetThingsPropertyIntegerLatent); \
	DECLARE_FUNCTION(execSetThingsPropertyInteger); \
	DECLARE_FUNCTION(execGetThingsPropertyLatent); \
	DECLARE_FUNCTION(execGetThingsProperty); \
	DECLARE_FUNCTION(execGetThingsPropertiesLatent); \
	DECLARE_FUNCTION(execGetThingsProperties); \
	DECLARE_FUNCTION(execGetThingsByParameterLatent); \
	DECLARE_FUNCTION(execGetThingsByParameter); \
	DECLARE_FUNCTION(execGetThingsLatent); \
	DECLARE_FUNCTION(execGetThings); \
	DECLARE_FUNCTION(execCheckTelemetryStreamLatent); \
	DECLARE_FUNCTION(execCheckTelemetryStream); \
	DECLARE_FUNCTION(execDeleteTelemetryStreamLatent); \
	DECLARE_FUNCTION(execDeleteTelemetryStream); \
	DECLARE_FUNCTION(execSetTelemetryStreamLatent); \
	DECLARE_FUNCTION(execSetTelemetryStream); \
	DECLARE_FUNCTION(execSetTelemetryDataStringLatent); \
	DECLARE_FUNCTION(execSetTelemetryDataString); \
	DECLARE_FUNCTION(execSetTelemetryDataFloatLatent); \
	DECLARE_FUNCTION(execSetTelemetryDataFloat); \
	DECLARE_FUNCTION(execSetTelemetryDataIntegerLatent); \
	DECLARE_FUNCTION(execSetTelemetryDataInteger); \
	DECLARE_FUNCTION(execUpdateDigitalTwinDataLatent); \
	DECLARE_FUNCTION(execUpdateDigitalTwinData); \
	DECLARE_FUNCTION(execGetDigitalTwinDataLatent); \
	DECLARE_FUNCTION(execGetDigitalTwinData); \
	DECLARE_FUNCTION(execGetTelemetryDataLatent); \
	DECLARE_FUNCTION(execGetTelemetryData); \
	DECLARE_FUNCTION(execSaveConfiguration); \
	DECLARE_FUNCTION(execShowConfiguration); \
	DECLARE_FUNCTION(execSetAccessToken); \
	DECLARE_FUNCTION(execSetAccessTokenByConfigFile); \
	DECLARE_FUNCTION(execGetAccessTokenLatent); \
	DECLARE_FUNCTION(execGetAccessToken); \
	DECLARE_FUNCTION(execSetAPIURL);


#define FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeleteSharedDataLatent); \
	DECLARE_FUNCTION(execDeleteSharedData); \
	DECLARE_FUNCTION(execGetSharedDataLatent); \
	DECLARE_FUNCTION(execGetSharedData); \
	DECLARE_FUNCTION(execSetSharedDataLatent); \
	DECLARE_FUNCTION(execSetSharedData); \
	DECLARE_FUNCTION(execDeleteWebhookLatent); \
	DECLARE_FUNCTION(execDeleteWebhook); \
	DECLARE_FUNCTION(execSetWebhookLatent); \
	DECLARE_FUNCTION(execSetWebhook); \
	DECLARE_FUNCTION(execDeleteTaskLatent); \
	DECLARE_FUNCTION(execDeleteTask); \
	DECLARE_FUNCTION(execChangeTaskValidityLatent); \
	DECLARE_FUNCTION(execChangeTaskValidity); \
	DECLARE_FUNCTION(execGetTaskProgressLatent); \
	DECLARE_FUNCTION(execGetTaskProgress); \
	DECLARE_FUNCTION(execCreateTaskLatent); \
	DECLARE_FUNCTION(execCreateTask); \
	DECLARE_FUNCTION(execSetThingsPropertyStringLatent); \
	DECLARE_FUNCTION(execSetThingsPropertyString); \
	DECLARE_FUNCTION(execSetThingsPropertyFloatLatent); \
	DECLARE_FUNCTION(execSetThingsPropertyFloat); \
	DECLARE_FUNCTION(execSetThingsPropertyIntegerLatent); \
	DECLARE_FUNCTION(execSetThingsPropertyInteger); \
	DECLARE_FUNCTION(execGetThingsPropertyLatent); \
	DECLARE_FUNCTION(execGetThingsProperty); \
	DECLARE_FUNCTION(execGetThingsPropertiesLatent); \
	DECLARE_FUNCTION(execGetThingsProperties); \
	DECLARE_FUNCTION(execGetThingsByParameterLatent); \
	DECLARE_FUNCTION(execGetThingsByParameter); \
	DECLARE_FUNCTION(execGetThingsLatent); \
	DECLARE_FUNCTION(execGetThings); \
	DECLARE_FUNCTION(execCheckTelemetryStreamLatent); \
	DECLARE_FUNCTION(execCheckTelemetryStream); \
	DECLARE_FUNCTION(execDeleteTelemetryStreamLatent); \
	DECLARE_FUNCTION(execDeleteTelemetryStream); \
	DECLARE_FUNCTION(execSetTelemetryStreamLatent); \
	DECLARE_FUNCTION(execSetTelemetryStream); \
	DECLARE_FUNCTION(execSetTelemetryDataStringLatent); \
	DECLARE_FUNCTION(execSetTelemetryDataString); \
	DECLARE_FUNCTION(execSetTelemetryDataFloatLatent); \
	DECLARE_FUNCTION(execSetTelemetryDataFloat); \
	DECLARE_FUNCTION(execSetTelemetryDataIntegerLatent); \
	DECLARE_FUNCTION(execSetTelemetryDataInteger); \
	DECLARE_FUNCTION(execUpdateDigitalTwinDataLatent); \
	DECLARE_FUNCTION(execUpdateDigitalTwinData); \
	DECLARE_FUNCTION(execGetDigitalTwinDataLatent); \
	DECLARE_FUNCTION(execGetDigitalTwinData); \
	DECLARE_FUNCTION(execGetTelemetryDataLatent); \
	DECLARE_FUNCTION(execGetTelemetryData); \
	DECLARE_FUNCTION(execSaveConfiguration); \
	DECLARE_FUNCTION(execShowConfiguration); \
	DECLARE_FUNCTION(execSetAccessToken); \
	DECLARE_FUNCTION(execSetAccessTokenByConfigFile); \
	DECLARE_FUNCTION(execGetAccessTokenLatent); \
	DECLARE_FUNCTION(execGetAccessToken); \
	DECLARE_FUNCTION(execSetAPIURL);


#define FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFutabaActor(); \
	friend struct Z_Construct_UClass_AFutabaActor_Statics; \
public: \
	DECLARE_CLASS(AFutabaActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Futaba"), NO_API) \
	DECLARE_SERIALIZER(AFutabaActor)


#define FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAFutabaActor(); \
	friend struct Z_Construct_UClass_AFutabaActor_Statics; \
public: \
	DECLARE_CLASS(AFutabaActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Futaba"), NO_API) \
	DECLARE_SERIALIZER(AFutabaActor)


#define FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_24_STANDARD_CONSTRUCTORS \
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


#define FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFutabaActor(AFutabaActor&&); \
	NO_API AFutabaActor(const AFutabaActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFutabaActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFutabaActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFutabaActor)


#define FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_21_PROLOG
#define FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_24_SPARSE_DATA \
	FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_24_RPC_WRAPPERS \
	FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_24_INCLASS \
	FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_24_SPARSE_DATA \
	FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_24_INCLASS_NO_PURE_DECLS \
	FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FUTABA_API UClass* StaticClass<class AFutabaActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h


#define FOREACH_ENUM_FUTABAREQUESTSTATUS(op) \
	op(FutabaRequestStatus::Success) \
	op(FutabaRequestStatus::User_Error) \
	op(FutabaRequestStatus::Platform_Error) 

enum class FutabaRequestStatus : uint8;
template<> FUTABA_API UEnum* StaticEnum<FutabaRequestStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
