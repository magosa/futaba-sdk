// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Futaba/Public/FutabaActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFutabaActor() {}
// Cross Module References
	FUTABA_API UEnum* Z_Construct_UEnum_Futaba_FutabaRequestStatus();
	UPackage* Z_Construct_UPackage__Script_Futaba();
	FUTABA_API UFunction* Z_Construct_UDelegateFunction_AFutabaActor_FutabaOnEventDispather__DelegateSignature();
	FUTABA_API UClass* Z_Construct_UClass_AFutabaActor();
	FUTABA_API UFunction* Z_Construct_UDelegateFunction_AFutabaActor_OnHttpRequestCompleted__DelegateSignature();
	FUTABA_API UClass* Z_Construct_UClass_AFutabaActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_FutabaRequestStatus;
	static UEnum* FutabaRequestStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_FutabaRequestStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_FutabaRequestStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Futaba_FutabaRequestStatus, Z_Construct_UPackage__Script_Futaba(), TEXT("FutabaRequestStatus"));
		}
		return Z_Registration_Info_UEnum_FutabaRequestStatus.OuterSingleton;
	}
	template<> FUTABA_API UEnum* StaticEnum<FutabaRequestStatus>()
	{
		return FutabaRequestStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_Futaba_FutabaRequestStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Futaba_FutabaRequestStatus_Statics::Enumerators[] = {
		{ "FutabaRequestStatus::Success", (int64)FutabaRequestStatus::Success },
		{ "FutabaRequestStatus::User_Error", (int64)FutabaRequestStatus::User_Error },
		{ "FutabaRequestStatus::Platform_Error", (int64)FutabaRequestStatus::Platform_Error },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Futaba_FutabaRequestStatus_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
		{ "Platform_Error.Name", "FutabaRequestStatus::Platform_Error" },
		{ "Success.Name", "FutabaRequestStatus::Success" },
		{ "User_Error.Name", "FutabaRequestStatus::User_Error" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Futaba_FutabaRequestStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Futaba,
		nullptr,
		"FutabaRequestStatus",
		"FutabaRequestStatus",
		Z_Construct_UEnum_Futaba_FutabaRequestStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Futaba_FutabaRequestStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Futaba_FutabaRequestStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Futaba_FutabaRequestStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Futaba_FutabaRequestStatus()
	{
		if (!Z_Registration_Info_UEnum_FutabaRequestStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FutabaRequestStatus.InnerSingleton, Z_Construct_UEnum_Futaba_FutabaRequestStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_FutabaRequestStatus.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_AFutabaActor_FutabaOnEventDispather__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AFutabaActor_FutabaOnEventDispather__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AFutabaActor_FutabaOnEventDispather__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "FutabaOnEventDispather__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AFutabaActor_FutabaOnEventDispather__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AFutabaActor_FutabaOnEventDispather__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AFutabaActor_FutabaOnEventDispather__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AFutabaActor_FutabaOnEventDispather__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AFutabaActor_OnHttpRequestCompleted__DelegateSignature_Statics
	{
		struct FutabaActor_eventOnHttpRequestCompleted_Parms
		{
			bool bSuccessful;
			int32 ResponseCode;
			FString Response;
		};
		static void NewProp_bSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccessful;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ResponseCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_AFutabaActor_OnHttpRequestCompleted__DelegateSignature_Statics::NewProp_bSuccessful_SetBit(void* Obj)
	{
		((FutabaActor_eventOnHttpRequestCompleted_Parms*)Obj)->bSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AFutabaActor_OnHttpRequestCompleted__DelegateSignature_Statics::NewProp_bSuccessful = { "bSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FutabaActor_eventOnHttpRequestCompleted_Parms), &Z_Construct_UDelegateFunction_AFutabaActor_OnHttpRequestCompleted__DelegateSignature_Statics::NewProp_bSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AFutabaActor_OnHttpRequestCompleted__DelegateSignature_Statics::NewProp_ResponseCode = { "ResponseCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventOnHttpRequestCompleted_Parms, ResponseCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AFutabaActor_OnHttpRequestCompleted__DelegateSignature_Statics::NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AFutabaActor_OnHttpRequestCompleted__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventOnHttpRequestCompleted_Parms, Response), METADATA_PARAMS(Z_Construct_UDelegateFunction_AFutabaActor_OnHttpRequestCompleted__DelegateSignature_Statics::NewProp_Response_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AFutabaActor_OnHttpRequestCompleted__DelegateSignature_Statics::NewProp_Response_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AFutabaActor_OnHttpRequestCompleted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AFutabaActor_OnHttpRequestCompleted__DelegateSignature_Statics::NewProp_bSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AFutabaActor_OnHttpRequestCompleted__DelegateSignature_Statics::NewProp_ResponseCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AFutabaActor_OnHttpRequestCompleted__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AFutabaActor_OnHttpRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AFutabaActor_OnHttpRequestCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "OnHttpRequestCompleted__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AFutabaActor_OnHttpRequestCompleted__DelegateSignature_Statics::FutabaActor_eventOnHttpRequestCompleted_Parms), Z_Construct_UDelegateFunction_AFutabaActor_OnHttpRequestCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AFutabaActor_OnHttpRequestCompleted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AFutabaActor_OnHttpRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AFutabaActor_OnHttpRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AFutabaActor_OnHttpRequestCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AFutabaActor_OnHttpRequestCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AFutabaActor::execDeleteSharedDataLatent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_dataTypeId);
		P_GET_PROPERTY(FStrProperty,Z_Param_targetBuilding);
		P_GET_PROPERTY(FStrProperty,Z_Param_filter);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_jsonString);
		P_GET_ENUM_REF(FutabaRequestStatus,Z_Param_Out_requestStatus);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_statusCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteSharedDataLatent(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_dataTypeId,Z_Param_targetBuilding,Z_Param_filter,Z_Param_Out_jsonString,(FutabaRequestStatus&)(Z_Param_Out_requestStatus),Z_Param_Out_statusCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execDeleteSharedData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_dataTypeId);
		P_GET_PROPERTY(FStrProperty,Z_Param_targetBuilding);
		P_GET_PROPERTY(FStrProperty,Z_Param_filter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteSharedData(Z_Param_dataTypeId,Z_Param_targetBuilding,Z_Param_filter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execGetSharedDataLatent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_dataTypeId);
		P_GET_PROPERTY(FStrProperty,Z_Param_targetBuilding);
		P_GET_PROPERTY(FStrProperty,Z_Param_filter);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_jsonString);
		P_GET_ENUM_REF(FutabaRequestStatus,Z_Param_Out_requestStatus);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_statusCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSharedDataLatent(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_dataTypeId,Z_Param_targetBuilding,Z_Param_filter,Z_Param_Out_jsonString,(FutabaRequestStatus&)(Z_Param_Out_requestStatus),Z_Param_Out_statusCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execGetSharedData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_dataTypeId);
		P_GET_PROPERTY(FStrProperty,Z_Param_targetBuilding);
		P_GET_PROPERTY(FStrProperty,Z_Param_filter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSharedData(Z_Param_dataTypeId,Z_Param_targetBuilding,Z_Param_filter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execSetSharedDataLatent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_dataTypeId);
		P_GET_PROPERTY(FStrProperty,Z_Param_targetBuilding);
		P_GET_PROPERTY(FStrProperty,Z_Param_values);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_jsonString);
		P_GET_ENUM_REF(FutabaRequestStatus,Z_Param_Out_requestStatus);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_statusCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSharedDataLatent(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_dataTypeId,Z_Param_targetBuilding,Z_Param_values,Z_Param_Out_jsonString,(FutabaRequestStatus&)(Z_Param_Out_requestStatus),Z_Param_Out_statusCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execSetSharedData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_dataTypeId);
		P_GET_PROPERTY(FStrProperty,Z_Param_targetBuilding);
		P_GET_PROPERTY(FStrProperty,Z_Param_values);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSharedData(Z_Param_dataTypeId,Z_Param_targetBuilding,Z_Param_values);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execDeleteWebhookLatent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_jsonString);
		P_GET_ENUM_REF(FutabaRequestStatus,Z_Param_Out_requestStatus);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_statusCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteWebhookLatent(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_jsonString,(FutabaRequestStatus&)(Z_Param_Out_requestStatus),Z_Param_Out_statusCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execDeleteWebhook)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteWebhook();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execSetWebhookLatent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_url);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_jsonString);
		P_GET_ENUM_REF(FutabaRequestStatus,Z_Param_Out_requestStatus);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_statusCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWebhookLatent(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_url,Z_Param_Out_jsonString,(FutabaRequestStatus&)(Z_Param_Out_requestStatus),Z_Param_Out_statusCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execSetWebhook)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_url);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWebhook(Z_Param_url);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execDeleteTaskLatent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FIntProperty,Z_Param_taskId);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_jsonString);
		P_GET_ENUM_REF(FutabaRequestStatus,Z_Param_Out_requestStatus);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_statusCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteTaskLatent(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_taskId,Z_Param_Out_jsonString,(FutabaRequestStatus&)(Z_Param_Out_requestStatus),Z_Param_Out_statusCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execDeleteTask)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_taskId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteTask(Z_Param_taskId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execChangeTaskValidityLatent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FIntProperty,Z_Param_taskId);
		P_GET_UBOOL(Z_Param_status);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_jsonString);
		P_GET_ENUM_REF(FutabaRequestStatus,Z_Param_Out_requestStatus);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_statusCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeTaskValidityLatent(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_taskId,Z_Param_status,Z_Param_Out_jsonString,(FutabaRequestStatus&)(Z_Param_Out_requestStatus),Z_Param_Out_statusCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execChangeTaskValidity)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_taskId);
		P_GET_UBOOL(Z_Param_status);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeTaskValidity(Z_Param_taskId,Z_Param_status);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execGetTaskProgressLatent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FIntProperty,Z_Param_taskId);
		P_GET_PROPERTY(FStrProperty,Z_Param_status);
		P_GET_PROPERTY(FStrProperty,Z_Param_createDatetime);
		P_GET_UBOOL(Z_Param_includeRequestInfo);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_jsonString);
		P_GET_ENUM_REF(FutabaRequestStatus,Z_Param_Out_requestStatus);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_statusCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTaskProgressLatent(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_taskId,Z_Param_status,Z_Param_createDatetime,Z_Param_includeRequestInfo,Z_Param_Out_jsonString,(FutabaRequestStatus&)(Z_Param_Out_requestStatus),Z_Param_Out_statusCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execGetTaskProgress)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_taskId);
		P_GET_PROPERTY(FStrProperty,Z_Param_status);
		P_GET_PROPERTY(FStrProperty,Z_Param_createDatetime);
		P_GET_UBOOL(Z_Param_includeRequestInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTaskProgress(Z_Param_taskId,Z_Param_status,Z_Param_createDatetime,Z_Param_includeRequestInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execCreateTaskLatent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_task);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_jsonString);
		P_GET_ENUM_REF(FutabaRequestStatus,Z_Param_Out_requestStatus);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_statusCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateTaskLatent(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_task,Z_Param_Out_jsonString,(FutabaRequestStatus&)(Z_Param_Out_requestStatus),Z_Param_Out_statusCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execCreateTask)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_task);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateTask(Z_Param_task);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execSetThingsPropertyStringLatent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_rootId);
		P_GET_PROPERTY(FStrProperty,Z_Param_tdId);
		P_GET_PROPERTY(FStrProperty,Z_Param_property);
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_GET_PROPERTY(FIntProperty,Z_Param_priority);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_jsonString);
		P_GET_ENUM_REF(FutabaRequestStatus,Z_Param_Out_requestStatus);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_statusCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetThingsPropertyStringLatent(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_rootId,Z_Param_tdId,Z_Param_property,Z_Param_value,Z_Param_priority,Z_Param_Out_jsonString,(FutabaRequestStatus&)(Z_Param_Out_requestStatus),Z_Param_Out_statusCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execSetThingsPropertyString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_rootId);
		P_GET_PROPERTY(FStrProperty,Z_Param_tdId);
		P_GET_PROPERTY(FStrProperty,Z_Param_property);
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_GET_PROPERTY(FIntProperty,Z_Param_priority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetThingsPropertyString(Z_Param_rootId,Z_Param_tdId,Z_Param_property,Z_Param_value,Z_Param_priority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execSetThingsPropertyFloatLatent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_rootId);
		P_GET_PROPERTY(FStrProperty,Z_Param_tdId);
		P_GET_PROPERTY(FStrProperty,Z_Param_property);
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_GET_PROPERTY(FIntProperty,Z_Param_priority);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_jsonString);
		P_GET_ENUM_REF(FutabaRequestStatus,Z_Param_Out_requestStatus);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_statusCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetThingsPropertyFloatLatent(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_rootId,Z_Param_tdId,Z_Param_property,Z_Param_value,Z_Param_priority,Z_Param_Out_jsonString,(FutabaRequestStatus&)(Z_Param_Out_requestStatus),Z_Param_Out_statusCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execSetThingsPropertyFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_rootId);
		P_GET_PROPERTY(FStrProperty,Z_Param_tdId);
		P_GET_PROPERTY(FStrProperty,Z_Param_property);
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_GET_PROPERTY(FIntProperty,Z_Param_priority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetThingsPropertyFloat(Z_Param_rootId,Z_Param_tdId,Z_Param_property,Z_Param_value,Z_Param_priority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execSetThingsPropertyIntegerLatent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_rootId);
		P_GET_PROPERTY(FStrProperty,Z_Param_tdId);
		P_GET_PROPERTY(FStrProperty,Z_Param_property);
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_GET_PROPERTY(FIntProperty,Z_Param_priority);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_jsonString);
		P_GET_ENUM_REF(FutabaRequestStatus,Z_Param_Out_requestStatus);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_statusCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetThingsPropertyIntegerLatent(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_rootId,Z_Param_tdId,Z_Param_property,Z_Param_value,Z_Param_priority,Z_Param_Out_jsonString,(FutabaRequestStatus&)(Z_Param_Out_requestStatus),Z_Param_Out_statusCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execSetThingsPropertyInteger)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_rootId);
		P_GET_PROPERTY(FStrProperty,Z_Param_tdId);
		P_GET_PROPERTY(FStrProperty,Z_Param_property);
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_GET_PROPERTY(FIntProperty,Z_Param_priority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetThingsPropertyInteger(Z_Param_rootId,Z_Param_tdId,Z_Param_property,Z_Param_value,Z_Param_priority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execGetThingsPropertyLatent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_rootId);
		P_GET_PROPERTY(FStrProperty,Z_Param_tdId);
		P_GET_PROPERTY(FStrProperty,Z_Param_property);
		P_GET_UBOOL(Z_Param_useIdKey);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_jsonString);
		P_GET_ENUM_REF(FutabaRequestStatus,Z_Param_Out_requestStatus);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_statusCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetThingsPropertyLatent(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_rootId,Z_Param_tdId,Z_Param_property,Z_Param_useIdKey,Z_Param_Out_jsonString,(FutabaRequestStatus&)(Z_Param_Out_requestStatus),Z_Param_Out_statusCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execGetThingsProperty)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_rootId);
		P_GET_PROPERTY(FStrProperty,Z_Param_tdId);
		P_GET_PROPERTY(FStrProperty,Z_Param_property);
		P_GET_UBOOL(Z_Param_useIdKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetThingsProperty(Z_Param_rootId,Z_Param_tdId,Z_Param_property,Z_Param_useIdKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execGetThingsPropertiesLatent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_rootId);
		P_GET_PROPERTY(FStrProperty,Z_Param_tdId);
		P_GET_UBOOL(Z_Param_useIdKey);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_jsonString);
		P_GET_ENUM_REF(FutabaRequestStatus,Z_Param_Out_requestStatus);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_statusCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetThingsPropertiesLatent(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_rootId,Z_Param_tdId,Z_Param_useIdKey,Z_Param_Out_jsonString,(FutabaRequestStatus&)(Z_Param_Out_requestStatus),Z_Param_Out_statusCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execGetThingsProperties)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_rootId);
		P_GET_PROPERTY(FStrProperty,Z_Param_tdId);
		P_GET_UBOOL(Z_Param_useIdKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetThingsProperties(Z_Param_rootId,Z_Param_tdId,Z_Param_useIdKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execGetThingsByParameterLatent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_searchParameters);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_jsonString);
		P_GET_ENUM_REF(FutabaRequestStatus,Z_Param_Out_requestStatus);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_statusCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetThingsByParameterLatent(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_searchParameters,Z_Param_Out_jsonString,(FutabaRequestStatus&)(Z_Param_Out_requestStatus),Z_Param_Out_statusCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execGetThingsByParameter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_searchParameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetThingsByParameter(Z_Param_searchParameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execGetThingsLatent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_botPath);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_jsonString);
		P_GET_ENUM_REF(FutabaRequestStatus,Z_Param_Out_requestStatus);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_statusCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetThingsLatent(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_botPath,Z_Param_Out_jsonString,(FutabaRequestStatus&)(Z_Param_Out_requestStatus),Z_Param_Out_statusCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execGetThings)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_botPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetThings(Z_Param_botPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execCheckTelemetryStreamLatent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_jsonString);
		P_GET_ENUM_REF(FutabaRequestStatus,Z_Param_Out_requestStatus);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_statusCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckTelemetryStreamLatent(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_jsonString,(FutabaRequestStatus&)(Z_Param_Out_requestStatus),Z_Param_Out_statusCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execCheckTelemetryStream)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckTelemetryStream();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execDeleteTelemetryStreamLatent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_searchParameters);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_jsonString);
		P_GET_ENUM_REF(FutabaRequestStatus,Z_Param_Out_requestStatus);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_statusCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteTelemetryStreamLatent(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_searchParameters,Z_Param_Out_jsonString,(FutabaRequestStatus&)(Z_Param_Out_requestStatus),Z_Param_Out_statusCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execDeleteTelemetryStream)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_searchParameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteTelemetryStream(Z_Param_searchParameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execSetTelemetryStreamLatent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_surveillanceParameters);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_jsonString);
		P_GET_ENUM_REF(FutabaRequestStatus,Z_Param_Out_requestStatus);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_statusCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTelemetryStreamLatent(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_surveillanceParameters,Z_Param_Out_jsonString,(FutabaRequestStatus&)(Z_Param_Out_requestStatus),Z_Param_Out_statusCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execSetTelemetryStream)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_surveillanceParameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTelemetryStream(Z_Param_surveillanceParameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execSetTelemetryDataStringLatent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_targetBuilding);
		P_GET_PROPERTY(FStrProperty,Z_Param_dtid);
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_GET_PROPERTY(FIntProperty,Z_Param_priority);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_jsonString);
		P_GET_ENUM_REF(FutabaRequestStatus,Z_Param_Out_requestStatus);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_statusCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTelemetryDataStringLatent(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_targetBuilding,Z_Param_dtid,Z_Param_value,Z_Param_priority,Z_Param_Out_jsonString,(FutabaRequestStatus&)(Z_Param_Out_requestStatus),Z_Param_Out_statusCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execSetTelemetryDataString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_targetBuilding);
		P_GET_PROPERTY(FStrProperty,Z_Param_dtid);
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_GET_PROPERTY(FIntProperty,Z_Param_priority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTelemetryDataString(Z_Param_targetBuilding,Z_Param_dtid,Z_Param_value,Z_Param_priority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execSetTelemetryDataFloatLatent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_targetBuilding);
		P_GET_PROPERTY(FStrProperty,Z_Param_dtid);
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_GET_PROPERTY(FIntProperty,Z_Param_priority);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_jsonString);
		P_GET_ENUM_REF(FutabaRequestStatus,Z_Param_Out_requestStatus);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_statusCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTelemetryDataFloatLatent(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_targetBuilding,Z_Param_dtid,Z_Param_value,Z_Param_priority,Z_Param_Out_jsonString,(FutabaRequestStatus&)(Z_Param_Out_requestStatus),Z_Param_Out_statusCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execSetTelemetryDataFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_targetBuilding);
		P_GET_PROPERTY(FStrProperty,Z_Param_dtid);
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_GET_PROPERTY(FIntProperty,Z_Param_priority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTelemetryDataFloat(Z_Param_targetBuilding,Z_Param_dtid,Z_Param_value,Z_Param_priority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execSetTelemetryDataIntegerLatent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_targetBuilding);
		P_GET_PROPERTY(FStrProperty,Z_Param_dtid);
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_GET_PROPERTY(FIntProperty,Z_Param_priority);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_jsonString);
		P_GET_ENUM_REF(FutabaRequestStatus,Z_Param_Out_requestStatus);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_statusCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTelemetryDataIntegerLatent(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_targetBuilding,Z_Param_dtid,Z_Param_value,Z_Param_priority,Z_Param_Out_jsonString,(FutabaRequestStatus&)(Z_Param_Out_requestStatus),Z_Param_Out_statusCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execSetTelemetryDataInteger)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_targetBuilding);
		P_GET_PROPERTY(FStrProperty,Z_Param_dtid);
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_GET_PROPERTY(FIntProperty,Z_Param_priority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTelemetryDataInteger(Z_Param_targetBuilding,Z_Param_dtid,Z_Param_value,Z_Param_priority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execUpdateDigitalTwinDataLatent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_updateParameters);
		P_GET_PROPERTY(FStrProperty,Z_Param_property);
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_jsonString);
		P_GET_ENUM_REF(FutabaRequestStatus,Z_Param_Out_requestStatus);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_statusCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateDigitalTwinDataLatent(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_updateParameters,Z_Param_property,Z_Param_value,Z_Param_Out_jsonString,(FutabaRequestStatus&)(Z_Param_Out_requestStatus),Z_Param_Out_statusCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execUpdateDigitalTwinData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_updateParameters);
		P_GET_PROPERTY(FStrProperty,Z_Param_property);
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateDigitalTwinData(Z_Param_updateParameters,Z_Param_property,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execGetDigitalTwinDataLatent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_searchParameters);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_jsonString);
		P_GET_ENUM_REF(FutabaRequestStatus,Z_Param_Out_requestStatus);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_statusCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetDigitalTwinDataLatent(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_searchParameters,Z_Param_Out_jsonString,(FutabaRequestStatus&)(Z_Param_Out_requestStatus),Z_Param_Out_statusCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execGetDigitalTwinData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_searchParameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetDigitalTwinData(Z_Param_searchParameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execGetTelemetryDataLatent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_searchParameters);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_jsonString);
		P_GET_ENUM_REF(FutabaRequestStatus,Z_Param_Out_requestStatus);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_statusCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTelemetryDataLatent(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_searchParameters,Z_Param_Out_jsonString,(FutabaRequestStatus&)(Z_Param_Out_requestStatus),Z_Param_Out_statusCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execGetTelemetryData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_searchParameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTelemetryData(Z_Param_searchParameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execSaveConfiguration)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ConfigFilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveConfiguration(Z_Param_ConfigFilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execShowConfiguration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowConfiguration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execSetAccessToken)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Target);
		P_GET_PROPERTY(FStrProperty,Z_Param_Id);
		P_GET_PROPERTY(FStrProperty,Z_Param_Secret);
		P_GET_PROPERTY(FStrProperty,Z_Param_Access_Token);
		P_GET_PROPERTY(FStrProperty,Z_Param_Refresh_Token);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAccessToken(Z_Param_Target,Z_Param_Id,Z_Param_Secret,Z_Param_Access_Token,Z_Param_Refresh_Token);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execSetAccessTokenByConfigFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ConfigFilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAccessTokenByConfigFile(Z_Param_ConfigFilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execGetAccessTokenLatent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_ConfigFilePath);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_contentString);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_statusCode);
		P_GET_ENUM_REF(FutabaRequestStatus,Z_Param_Out_futabaStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAccessTokenLatent(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_ConfigFilePath,Z_Param_Out_contentString,Z_Param_Out_statusCode,(FutabaRequestStatus&)(Z_Param_Out_futabaStatus));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execGetAccessToken)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ConfigFilePath);
		P_GET_ENUM_REF(FutabaRequestStatus,Z_Param_Out_FutabaStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAccessToken(Z_Param_ConfigFilePath,(FutabaRequestStatus&)(Z_Param_Out_FutabaStatus));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execSetAPIURL)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAPIURL(Z_Param_target);
		P_NATIVE_END;
	}
	void AFutabaActor::StaticRegisterNativesAFutabaActor()
	{
		UClass* Class = AFutabaActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeTaskValidity", &AFutabaActor::execChangeTaskValidity },
			{ "ChangeTaskValidityLatent", &AFutabaActor::execChangeTaskValidityLatent },
			{ "CheckTelemetryStream", &AFutabaActor::execCheckTelemetryStream },
			{ "CheckTelemetryStreamLatent", &AFutabaActor::execCheckTelemetryStreamLatent },
			{ "CreateTask", &AFutabaActor::execCreateTask },
			{ "CreateTaskLatent", &AFutabaActor::execCreateTaskLatent },
			{ "DeleteSharedData", &AFutabaActor::execDeleteSharedData },
			{ "DeleteSharedDataLatent", &AFutabaActor::execDeleteSharedDataLatent },
			{ "DeleteTask", &AFutabaActor::execDeleteTask },
			{ "DeleteTaskLatent", &AFutabaActor::execDeleteTaskLatent },
			{ "DeleteTelemetryStream", &AFutabaActor::execDeleteTelemetryStream },
			{ "DeleteTelemetryStreamLatent", &AFutabaActor::execDeleteTelemetryStreamLatent },
			{ "DeleteWebhook", &AFutabaActor::execDeleteWebhook },
			{ "DeleteWebhookLatent", &AFutabaActor::execDeleteWebhookLatent },
			{ "GetAccessToken", &AFutabaActor::execGetAccessToken },
			{ "GetAccessTokenLatent", &AFutabaActor::execGetAccessTokenLatent },
			{ "GetDigitalTwinData", &AFutabaActor::execGetDigitalTwinData },
			{ "GetDigitalTwinDataLatent", &AFutabaActor::execGetDigitalTwinDataLatent },
			{ "GetSharedData", &AFutabaActor::execGetSharedData },
			{ "GetSharedDataLatent", &AFutabaActor::execGetSharedDataLatent },
			{ "GetTaskProgress", &AFutabaActor::execGetTaskProgress },
			{ "GetTaskProgressLatent", &AFutabaActor::execGetTaskProgressLatent },
			{ "GetTelemetryData", &AFutabaActor::execGetTelemetryData },
			{ "GetTelemetryDataLatent", &AFutabaActor::execGetTelemetryDataLatent },
			{ "GetThings", &AFutabaActor::execGetThings },
			{ "GetThingsByParameter", &AFutabaActor::execGetThingsByParameter },
			{ "GetThingsByParameterLatent", &AFutabaActor::execGetThingsByParameterLatent },
			{ "GetThingsLatent", &AFutabaActor::execGetThingsLatent },
			{ "GetThingsProperties", &AFutabaActor::execGetThingsProperties },
			{ "GetThingsPropertiesLatent", &AFutabaActor::execGetThingsPropertiesLatent },
			{ "GetThingsProperty", &AFutabaActor::execGetThingsProperty },
			{ "GetThingsPropertyLatent", &AFutabaActor::execGetThingsPropertyLatent },
			{ "SaveConfiguration", &AFutabaActor::execSaveConfiguration },
			{ "SetAccessToken", &AFutabaActor::execSetAccessToken },
			{ "SetAccessTokenByConfigFile", &AFutabaActor::execSetAccessTokenByConfigFile },
			{ "SetAPIURL", &AFutabaActor::execSetAPIURL },
			{ "SetSharedData", &AFutabaActor::execSetSharedData },
			{ "SetSharedDataLatent", &AFutabaActor::execSetSharedDataLatent },
			{ "SetTelemetryDataFloat", &AFutabaActor::execSetTelemetryDataFloat },
			{ "SetTelemetryDataFloatLatent", &AFutabaActor::execSetTelemetryDataFloatLatent },
			{ "SetTelemetryDataInteger", &AFutabaActor::execSetTelemetryDataInteger },
			{ "SetTelemetryDataIntegerLatent", &AFutabaActor::execSetTelemetryDataIntegerLatent },
			{ "SetTelemetryDataString", &AFutabaActor::execSetTelemetryDataString },
			{ "SetTelemetryDataStringLatent", &AFutabaActor::execSetTelemetryDataStringLatent },
			{ "SetTelemetryStream", &AFutabaActor::execSetTelemetryStream },
			{ "SetTelemetryStreamLatent", &AFutabaActor::execSetTelemetryStreamLatent },
			{ "SetThingsPropertyFloat", &AFutabaActor::execSetThingsPropertyFloat },
			{ "SetThingsPropertyFloatLatent", &AFutabaActor::execSetThingsPropertyFloatLatent },
			{ "SetThingsPropertyInteger", &AFutabaActor::execSetThingsPropertyInteger },
			{ "SetThingsPropertyIntegerLatent", &AFutabaActor::execSetThingsPropertyIntegerLatent },
			{ "SetThingsPropertyString", &AFutabaActor::execSetThingsPropertyString },
			{ "SetThingsPropertyStringLatent", &AFutabaActor::execSetThingsPropertyStringLatent },
			{ "SetWebhook", &AFutabaActor::execSetWebhook },
			{ "SetWebhookLatent", &AFutabaActor::execSetWebhookLatent },
			{ "ShowConfiguration", &AFutabaActor::execShowConfiguration },
			{ "UpdateDigitalTwinData", &AFutabaActor::execUpdateDigitalTwinData },
			{ "UpdateDigitalTwinDataLatent", &AFutabaActor::execUpdateDigitalTwinDataLatent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFutabaActor_ChangeTaskValidity_Statics
	{
		struct FutabaActor_eventChangeTaskValidity_Parms
		{
			int32 taskId;
			bool status;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_taskId;
		static void NewProp_status_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_status;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFutabaActor_ChangeTaskValidity_Statics::NewProp_taskId = { "taskId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventChangeTaskValidity_Parms, taskId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFutabaActor_ChangeTaskValidity_Statics::NewProp_status_SetBit(void* Obj)
	{
		((FutabaActor_eventChangeTaskValidity_Parms*)Obj)->status = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFutabaActor_ChangeTaskValidity_Statics::NewProp_status = { "status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FutabaActor_eventChangeTaskValidity_Parms), &Z_Construct_UFunction_AFutabaActor_ChangeTaskValidity_Statics::NewProp_status_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_ChangeTaskValidity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_ChangeTaskValidity_Statics::NewProp_taskId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_ChangeTaskValidity_Statics::NewProp_status,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_ChangeTaskValidity_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Building dataset API" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_ChangeTaskValidity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "ChangeTaskValidity", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_ChangeTaskValidity_Statics::FutabaActor_eventChangeTaskValidity_Parms), Z_Construct_UFunction_AFutabaActor_ChangeTaskValidity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_ChangeTaskValidity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_ChangeTaskValidity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_ChangeTaskValidity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_ChangeTaskValidity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_ChangeTaskValidity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_ChangeTaskValidityLatent_Statics
	{
		struct FutabaActor_eventChangeTaskValidityLatent_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			int32 taskId;
			bool status;
			FString jsonString;
			FutabaRequestStatus requestStatus;
			int32 statusCode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_taskId;
		static void NewProp_status_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_status;
		static const UECodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_requestStatus_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_requestStatus;
		static const UECodeGen_Private::FIntPropertyParams NewProp_statusCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFutabaActor_ChangeTaskValidityLatent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventChangeTaskValidityLatent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFutabaActor_ChangeTaskValidityLatent_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventChangeTaskValidityLatent_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 4072181092
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFutabaActor_ChangeTaskValidityLatent_Statics::NewProp_taskId = { "taskId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventChangeTaskValidityLatent_Parms, taskId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFutabaActor_ChangeTaskValidityLatent_Statics::NewProp_status_SetBit(void* Obj)
	{
		((FutabaActor_eventChangeTaskValidityLatent_Parms*)Obj)->status = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFutabaActor_ChangeTaskValidityLatent_Statics::NewProp_status = { "status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FutabaActor_eventChangeTaskValidityLatent_Parms), &Z_Construct_UFunction_AFutabaActor_ChangeTaskValidityLatent_Statics::NewProp_status_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_ChangeTaskValidityLatent_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventChangeTaskValidityLatent_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFutabaActor_ChangeTaskValidityLatent_Statics::NewProp_requestStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFutabaActor_ChangeTaskValidityLatent_Statics::NewProp_requestStatus = { "requestStatus", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventChangeTaskValidityLatent_Parms, requestStatus), Z_Construct_UEnum_Futaba_FutabaRequestStatus, METADATA_PARAMS(nullptr, 0) }; // 1425841634
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFutabaActor_ChangeTaskValidityLatent_Statics::NewProp_statusCode = { "statusCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventChangeTaskValidityLatent_Parms, statusCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_ChangeTaskValidityLatent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_ChangeTaskValidityLatent_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_ChangeTaskValidityLatent_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_ChangeTaskValidityLatent_Statics::NewProp_taskId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_ChangeTaskValidityLatent_Statics::NewProp_status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_ChangeTaskValidityLatent_Statics::NewProp_jsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_ChangeTaskValidityLatent_Statics::NewProp_requestStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_ChangeTaskValidityLatent_Statics::NewProp_requestStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_ChangeTaskValidityLatent_Statics::NewProp_statusCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_ChangeTaskValidityLatent_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Building dataset API" },
		{ "DisplayName", "Change Task Validity <Latent>" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_ChangeTaskValidityLatent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "ChangeTaskValidityLatent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_ChangeTaskValidityLatent_Statics::FutabaActor_eventChangeTaskValidityLatent_Parms), Z_Construct_UFunction_AFutabaActor_ChangeTaskValidityLatent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_ChangeTaskValidityLatent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_ChangeTaskValidityLatent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_ChangeTaskValidityLatent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_ChangeTaskValidityLatent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_ChangeTaskValidityLatent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_CheckTelemetryStream_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_CheckTelemetryStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Digital Twin API" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_CheckTelemetryStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "CheckTelemetryStream", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_CheckTelemetryStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_CheckTelemetryStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_CheckTelemetryStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_CheckTelemetryStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_CheckTelemetryStreamLatent_Statics
	{
		struct FutabaActor_eventCheckTelemetryStreamLatent_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString jsonString;
			FutabaRequestStatus requestStatus;
			int32 statusCode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_requestStatus_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_requestStatus;
		static const UECodeGen_Private::FIntPropertyParams NewProp_statusCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFutabaActor_CheckTelemetryStreamLatent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventCheckTelemetryStreamLatent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFutabaActor_CheckTelemetryStreamLatent_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventCheckTelemetryStreamLatent_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 4072181092
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_CheckTelemetryStreamLatent_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventCheckTelemetryStreamLatent_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFutabaActor_CheckTelemetryStreamLatent_Statics::NewProp_requestStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFutabaActor_CheckTelemetryStreamLatent_Statics::NewProp_requestStatus = { "requestStatus", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventCheckTelemetryStreamLatent_Parms, requestStatus), Z_Construct_UEnum_Futaba_FutabaRequestStatus, METADATA_PARAMS(nullptr, 0) }; // 1425841634
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFutabaActor_CheckTelemetryStreamLatent_Statics::NewProp_statusCode = { "statusCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventCheckTelemetryStreamLatent_Parms, statusCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_CheckTelemetryStreamLatent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_CheckTelemetryStreamLatent_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_CheckTelemetryStreamLatent_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_CheckTelemetryStreamLatent_Statics::NewProp_jsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_CheckTelemetryStreamLatent_Statics::NewProp_requestStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_CheckTelemetryStreamLatent_Statics::NewProp_requestStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_CheckTelemetryStreamLatent_Statics::NewProp_statusCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_CheckTelemetryStreamLatent_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Digital Twin API" },
		{ "DisplayName", "Check Telemetry Stream <Latent>" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_CheckTelemetryStreamLatent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "CheckTelemetryStreamLatent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_CheckTelemetryStreamLatent_Statics::FutabaActor_eventCheckTelemetryStreamLatent_Parms), Z_Construct_UFunction_AFutabaActor_CheckTelemetryStreamLatent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_CheckTelemetryStreamLatent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_CheckTelemetryStreamLatent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_CheckTelemetryStreamLatent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_CheckTelemetryStreamLatent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_CheckTelemetryStreamLatent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_CreateTask_Statics
	{
		struct FutabaActor_eventCreateTask_Parms
		{
			FString task;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_task;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_CreateTask_Statics::NewProp_task = { "task", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventCreateTask_Parms, task), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_CreateTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_CreateTask_Statics::NewProp_task,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_CreateTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Building dataset API" },
		{ "Comment", "//Building dataset API\n" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
		{ "ToolTip", "Building dataset API" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_CreateTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "CreateTask", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_CreateTask_Statics::FutabaActor_eventCreateTask_Parms), Z_Construct_UFunction_AFutabaActor_CreateTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_CreateTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_CreateTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_CreateTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_CreateTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_CreateTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_CreateTaskLatent_Statics
	{
		struct FutabaActor_eventCreateTaskLatent_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString task;
			FString jsonString;
			FutabaRequestStatus requestStatus;
			int32 statusCode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_task;
		static const UECodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_requestStatus_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_requestStatus;
		static const UECodeGen_Private::FIntPropertyParams NewProp_statusCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFutabaActor_CreateTaskLatent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventCreateTaskLatent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFutabaActor_CreateTaskLatent_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventCreateTaskLatent_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 4072181092
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_CreateTaskLatent_Statics::NewProp_task = { "task", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventCreateTaskLatent_Parms, task), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_CreateTaskLatent_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventCreateTaskLatent_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFutabaActor_CreateTaskLatent_Statics::NewProp_requestStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFutabaActor_CreateTaskLatent_Statics::NewProp_requestStatus = { "requestStatus", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventCreateTaskLatent_Parms, requestStatus), Z_Construct_UEnum_Futaba_FutabaRequestStatus, METADATA_PARAMS(nullptr, 0) }; // 1425841634
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFutabaActor_CreateTaskLatent_Statics::NewProp_statusCode = { "statusCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventCreateTaskLatent_Parms, statusCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_CreateTaskLatent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_CreateTaskLatent_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_CreateTaskLatent_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_CreateTaskLatent_Statics::NewProp_task,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_CreateTaskLatent_Statics::NewProp_jsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_CreateTaskLatent_Statics::NewProp_requestStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_CreateTaskLatent_Statics::NewProp_requestStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_CreateTaskLatent_Statics::NewProp_statusCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_CreateTaskLatent_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Building dataset API" },
		{ "DisplayName", "Create Task <Latent>" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_CreateTaskLatent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "CreateTaskLatent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_CreateTaskLatent_Statics::FutabaActor_eventCreateTaskLatent_Parms), Z_Construct_UFunction_AFutabaActor_CreateTaskLatent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_CreateTaskLatent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_CreateTaskLatent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_CreateTaskLatent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_CreateTaskLatent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_CreateTaskLatent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_DeleteSharedData_Statics
	{
		struct FutabaActor_eventDeleteSharedData_Parms
		{
			FString dataTypeId;
			FString targetBuilding;
			FString filter;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_dataTypeId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_targetBuilding;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_DeleteSharedData_Statics::NewProp_dataTypeId = { "dataTypeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventDeleteSharedData_Parms, dataTypeId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_DeleteSharedData_Statics::NewProp_targetBuilding = { "targetBuilding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventDeleteSharedData_Parms, targetBuilding), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_DeleteSharedData_Statics::NewProp_filter = { "filter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventDeleteSharedData_Parms, filter), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_DeleteSharedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_DeleteSharedData_Statics::NewProp_dataTypeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_DeleteSharedData_Statics::NewProp_targetBuilding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_DeleteSharedData_Statics::NewProp_filter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_DeleteSharedData_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Data share API" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_DeleteSharedData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "DeleteSharedData", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_DeleteSharedData_Statics::FutabaActor_eventDeleteSharedData_Parms), Z_Construct_UFunction_AFutabaActor_DeleteSharedData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_DeleteSharedData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_DeleteSharedData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_DeleteSharedData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_DeleteSharedData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_DeleteSharedData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_DeleteSharedDataLatent_Statics
	{
		struct FutabaActor_eventDeleteSharedDataLatent_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString dataTypeId;
			FString targetBuilding;
			FString filter;
			FString jsonString;
			FutabaRequestStatus requestStatus;
			int32 statusCode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_dataTypeId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_targetBuilding;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filter;
		static const UECodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_requestStatus_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_requestStatus;
		static const UECodeGen_Private::FIntPropertyParams NewProp_statusCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFutabaActor_DeleteSharedDataLatent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventDeleteSharedDataLatent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFutabaActor_DeleteSharedDataLatent_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventDeleteSharedDataLatent_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 4072181092
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_DeleteSharedDataLatent_Statics::NewProp_dataTypeId = { "dataTypeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventDeleteSharedDataLatent_Parms, dataTypeId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_DeleteSharedDataLatent_Statics::NewProp_targetBuilding = { "targetBuilding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventDeleteSharedDataLatent_Parms, targetBuilding), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_DeleteSharedDataLatent_Statics::NewProp_filter = { "filter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventDeleteSharedDataLatent_Parms, filter), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_DeleteSharedDataLatent_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventDeleteSharedDataLatent_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFutabaActor_DeleteSharedDataLatent_Statics::NewProp_requestStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFutabaActor_DeleteSharedDataLatent_Statics::NewProp_requestStatus = { "requestStatus", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventDeleteSharedDataLatent_Parms, requestStatus), Z_Construct_UEnum_Futaba_FutabaRequestStatus, METADATA_PARAMS(nullptr, 0) }; // 1425841634
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFutabaActor_DeleteSharedDataLatent_Statics::NewProp_statusCode = { "statusCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventDeleteSharedDataLatent_Parms, statusCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_DeleteSharedDataLatent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_DeleteSharedDataLatent_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_DeleteSharedDataLatent_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_DeleteSharedDataLatent_Statics::NewProp_dataTypeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_DeleteSharedDataLatent_Statics::NewProp_targetBuilding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_DeleteSharedDataLatent_Statics::NewProp_filter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_DeleteSharedDataLatent_Statics::NewProp_jsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_DeleteSharedDataLatent_Statics::NewProp_requestStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_DeleteSharedDataLatent_Statics::NewProp_requestStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_DeleteSharedDataLatent_Statics::NewProp_statusCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_DeleteSharedDataLatent_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Data share API" },
		{ "DisplayName", "Delete Shared Data <Latent>" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_DeleteSharedDataLatent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "DeleteSharedDataLatent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_DeleteSharedDataLatent_Statics::FutabaActor_eventDeleteSharedDataLatent_Parms), Z_Construct_UFunction_AFutabaActor_DeleteSharedDataLatent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_DeleteSharedDataLatent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_DeleteSharedDataLatent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_DeleteSharedDataLatent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_DeleteSharedDataLatent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_DeleteSharedDataLatent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_DeleteTask_Statics
	{
		struct FutabaActor_eventDeleteTask_Parms
		{
			int32 taskId;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_taskId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFutabaActor_DeleteTask_Statics::NewProp_taskId = { "taskId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventDeleteTask_Parms, taskId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_DeleteTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_DeleteTask_Statics::NewProp_taskId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_DeleteTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Building dataset API" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_DeleteTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "DeleteTask", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_DeleteTask_Statics::FutabaActor_eventDeleteTask_Parms), Z_Construct_UFunction_AFutabaActor_DeleteTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_DeleteTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_DeleteTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_DeleteTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_DeleteTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_DeleteTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_DeleteTaskLatent_Statics
	{
		struct FutabaActor_eventDeleteTaskLatent_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			int32 taskId;
			FString jsonString;
			FutabaRequestStatus requestStatus;
			int32 statusCode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_taskId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_requestStatus_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_requestStatus;
		static const UECodeGen_Private::FIntPropertyParams NewProp_statusCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFutabaActor_DeleteTaskLatent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventDeleteTaskLatent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFutabaActor_DeleteTaskLatent_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventDeleteTaskLatent_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 4072181092
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFutabaActor_DeleteTaskLatent_Statics::NewProp_taskId = { "taskId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventDeleteTaskLatent_Parms, taskId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_DeleteTaskLatent_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventDeleteTaskLatent_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFutabaActor_DeleteTaskLatent_Statics::NewProp_requestStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFutabaActor_DeleteTaskLatent_Statics::NewProp_requestStatus = { "requestStatus", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventDeleteTaskLatent_Parms, requestStatus), Z_Construct_UEnum_Futaba_FutabaRequestStatus, METADATA_PARAMS(nullptr, 0) }; // 1425841634
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFutabaActor_DeleteTaskLatent_Statics::NewProp_statusCode = { "statusCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventDeleteTaskLatent_Parms, statusCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_DeleteTaskLatent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_DeleteTaskLatent_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_DeleteTaskLatent_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_DeleteTaskLatent_Statics::NewProp_taskId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_DeleteTaskLatent_Statics::NewProp_jsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_DeleteTaskLatent_Statics::NewProp_requestStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_DeleteTaskLatent_Statics::NewProp_requestStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_DeleteTaskLatent_Statics::NewProp_statusCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_DeleteTaskLatent_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Building dataset API" },
		{ "DisplayName", "Delete Task <Latent>" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_DeleteTaskLatent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "DeleteTaskLatent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_DeleteTaskLatent_Statics::FutabaActor_eventDeleteTaskLatent_Parms), Z_Construct_UFunction_AFutabaActor_DeleteTaskLatent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_DeleteTaskLatent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_DeleteTaskLatent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_DeleteTaskLatent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_DeleteTaskLatent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_DeleteTaskLatent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_DeleteTelemetryStream_Statics
	{
		struct FutabaActor_eventDeleteTelemetryStream_Parms
		{
			FString searchParameters;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_searchParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_DeleteTelemetryStream_Statics::NewProp_searchParameters = { "searchParameters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventDeleteTelemetryStream_Parms, searchParameters), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_DeleteTelemetryStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_DeleteTelemetryStream_Statics::NewProp_searchParameters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_DeleteTelemetryStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Digital Twin API" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_DeleteTelemetryStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "DeleteTelemetryStream", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_DeleteTelemetryStream_Statics::FutabaActor_eventDeleteTelemetryStream_Parms), Z_Construct_UFunction_AFutabaActor_DeleteTelemetryStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_DeleteTelemetryStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_DeleteTelemetryStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_DeleteTelemetryStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_DeleteTelemetryStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_DeleteTelemetryStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_DeleteTelemetryStreamLatent_Statics
	{
		struct FutabaActor_eventDeleteTelemetryStreamLatent_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString searchParameters;
			FString jsonString;
			FutabaRequestStatus requestStatus;
			int32 statusCode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_searchParameters;
		static const UECodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_requestStatus_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_requestStatus;
		static const UECodeGen_Private::FIntPropertyParams NewProp_statusCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFutabaActor_DeleteTelemetryStreamLatent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventDeleteTelemetryStreamLatent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFutabaActor_DeleteTelemetryStreamLatent_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventDeleteTelemetryStreamLatent_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 4072181092
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_DeleteTelemetryStreamLatent_Statics::NewProp_searchParameters = { "searchParameters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventDeleteTelemetryStreamLatent_Parms, searchParameters), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_DeleteTelemetryStreamLatent_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventDeleteTelemetryStreamLatent_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFutabaActor_DeleteTelemetryStreamLatent_Statics::NewProp_requestStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFutabaActor_DeleteTelemetryStreamLatent_Statics::NewProp_requestStatus = { "requestStatus", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventDeleteTelemetryStreamLatent_Parms, requestStatus), Z_Construct_UEnum_Futaba_FutabaRequestStatus, METADATA_PARAMS(nullptr, 0) }; // 1425841634
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFutabaActor_DeleteTelemetryStreamLatent_Statics::NewProp_statusCode = { "statusCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventDeleteTelemetryStreamLatent_Parms, statusCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_DeleteTelemetryStreamLatent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_DeleteTelemetryStreamLatent_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_DeleteTelemetryStreamLatent_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_DeleteTelemetryStreamLatent_Statics::NewProp_searchParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_DeleteTelemetryStreamLatent_Statics::NewProp_jsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_DeleteTelemetryStreamLatent_Statics::NewProp_requestStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_DeleteTelemetryStreamLatent_Statics::NewProp_requestStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_DeleteTelemetryStreamLatent_Statics::NewProp_statusCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_DeleteTelemetryStreamLatent_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Digital Twin API" },
		{ "DisplayName", "Delete Telemetry Stream <Latent>" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_DeleteTelemetryStreamLatent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "DeleteTelemetryStreamLatent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_DeleteTelemetryStreamLatent_Statics::FutabaActor_eventDeleteTelemetryStreamLatent_Parms), Z_Construct_UFunction_AFutabaActor_DeleteTelemetryStreamLatent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_DeleteTelemetryStreamLatent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_DeleteTelemetryStreamLatent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_DeleteTelemetryStreamLatent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_DeleteTelemetryStreamLatent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_DeleteTelemetryStreamLatent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_DeleteWebhook_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_DeleteWebhook_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Building dataset API" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_DeleteWebhook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "DeleteWebhook", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_DeleteWebhook_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_DeleteWebhook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_DeleteWebhook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_DeleteWebhook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_DeleteWebhookLatent_Statics
	{
		struct FutabaActor_eventDeleteWebhookLatent_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString jsonString;
			FutabaRequestStatus requestStatus;
			int32 statusCode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_requestStatus_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_requestStatus;
		static const UECodeGen_Private::FIntPropertyParams NewProp_statusCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFutabaActor_DeleteWebhookLatent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventDeleteWebhookLatent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFutabaActor_DeleteWebhookLatent_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventDeleteWebhookLatent_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 4072181092
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_DeleteWebhookLatent_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventDeleteWebhookLatent_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFutabaActor_DeleteWebhookLatent_Statics::NewProp_requestStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFutabaActor_DeleteWebhookLatent_Statics::NewProp_requestStatus = { "requestStatus", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventDeleteWebhookLatent_Parms, requestStatus), Z_Construct_UEnum_Futaba_FutabaRequestStatus, METADATA_PARAMS(nullptr, 0) }; // 1425841634
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFutabaActor_DeleteWebhookLatent_Statics::NewProp_statusCode = { "statusCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventDeleteWebhookLatent_Parms, statusCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_DeleteWebhookLatent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_DeleteWebhookLatent_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_DeleteWebhookLatent_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_DeleteWebhookLatent_Statics::NewProp_jsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_DeleteWebhookLatent_Statics::NewProp_requestStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_DeleteWebhookLatent_Statics::NewProp_requestStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_DeleteWebhookLatent_Statics::NewProp_statusCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_DeleteWebhookLatent_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Building dataset API" },
		{ "DisplayName", "Delete Webhook <Latent>" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_DeleteWebhookLatent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "DeleteWebhookLatent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_DeleteWebhookLatent_Statics::FutabaActor_eventDeleteWebhookLatent_Parms), Z_Construct_UFunction_AFutabaActor_DeleteWebhookLatent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_DeleteWebhookLatent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_DeleteWebhookLatent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_DeleteWebhookLatent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_DeleteWebhookLatent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_DeleteWebhookLatent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_GetAccessToken_Statics
	{
		struct FutabaActor_eventGetAccessToken_Parms
		{
			FString ConfigFilePath;
			FutabaRequestStatus FutabaStatus;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConfigFilePath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FutabaStatus_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FutabaStatus;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetAccessToken_Statics::NewProp_ConfigFilePath = { "ConfigFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetAccessToken_Parms, ConfigFilePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFutabaActor_GetAccessToken_Statics::NewProp_FutabaStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFutabaActor_GetAccessToken_Statics::NewProp_FutabaStatus = { "FutabaStatus", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetAccessToken_Parms, FutabaStatus), Z_Construct_UEnum_Futaba_FutabaRequestStatus, METADATA_PARAMS(nullptr, 0) }; // 1425841634
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetAccessToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetAccessToken_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_GetAccessToken_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetAccessToken_Statics::NewProp_ConfigFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetAccessToken_Statics::NewProp_FutabaStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetAccessToken_Statics::NewProp_FutabaStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetAccessToken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_GetAccessToken_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Configuration Management" },
		{ "ExpandEnumAsExecs", "FutabaStatus" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_GetAccessToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "GetAccessToken", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_GetAccessToken_Statics::FutabaActor_eventGetAccessToken_Parms), Z_Construct_UFunction_AFutabaActor_GetAccessToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetAccessToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_GetAccessToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetAccessToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_GetAccessToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_GetAccessToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_GetAccessTokenLatent_Statics
	{
		struct FutabaActor_eventGetAccessTokenLatent_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString ConfigFilePath;
			FString contentString;
			int32 statusCode;
			FutabaRequestStatus futabaStatus;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConfigFilePath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_contentString;
		static const UECodeGen_Private::FIntPropertyParams NewProp_statusCode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_futabaStatus_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_futabaStatus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFutabaActor_GetAccessTokenLatent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetAccessTokenLatent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFutabaActor_GetAccessTokenLatent_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetAccessTokenLatent_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 4072181092
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetAccessTokenLatent_Statics::NewProp_ConfigFilePath = { "ConfigFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetAccessTokenLatent_Parms, ConfigFilePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetAccessTokenLatent_Statics::NewProp_contentString = { "contentString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetAccessTokenLatent_Parms, contentString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFutabaActor_GetAccessTokenLatent_Statics::NewProp_statusCode = { "statusCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetAccessTokenLatent_Parms, statusCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFutabaActor_GetAccessTokenLatent_Statics::NewProp_futabaStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFutabaActor_GetAccessTokenLatent_Statics::NewProp_futabaStatus = { "futabaStatus", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetAccessTokenLatent_Parms, futabaStatus), Z_Construct_UEnum_Futaba_FutabaRequestStatus, METADATA_PARAMS(nullptr, 0) }; // 1425841634
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_GetAccessTokenLatent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetAccessTokenLatent_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetAccessTokenLatent_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetAccessTokenLatent_Statics::NewProp_ConfigFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetAccessTokenLatent_Statics::NewProp_contentString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetAccessTokenLatent_Statics::NewProp_statusCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetAccessTokenLatent_Statics::NewProp_futabaStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetAccessTokenLatent_Statics::NewProp_futabaStatus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_GetAccessTokenLatent_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Configuration Management" },
		{ "DisplayName", "Get Access Token <Latent>" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_GetAccessTokenLatent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "GetAccessTokenLatent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_GetAccessTokenLatent_Statics::FutabaActor_eventGetAccessTokenLatent_Parms), Z_Construct_UFunction_AFutabaActor_GetAccessTokenLatent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetAccessTokenLatent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_GetAccessTokenLatent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetAccessTokenLatent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_GetAccessTokenLatent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_GetAccessTokenLatent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_GetDigitalTwinData_Statics
	{
		struct FutabaActor_eventGetDigitalTwinData_Parms
		{
			FString searchParameters;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_searchParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetDigitalTwinData_Statics::NewProp_searchParameters = { "searchParameters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetDigitalTwinData_Parms, searchParameters), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_GetDigitalTwinData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetDigitalTwinData_Statics::NewProp_searchParameters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_GetDigitalTwinData_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Digital Twin API" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_GetDigitalTwinData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "GetDigitalTwinData", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_GetDigitalTwinData_Statics::FutabaActor_eventGetDigitalTwinData_Parms), Z_Construct_UFunction_AFutabaActor_GetDigitalTwinData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetDigitalTwinData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_GetDigitalTwinData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetDigitalTwinData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_GetDigitalTwinData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_GetDigitalTwinData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_GetDigitalTwinDataLatent_Statics
	{
		struct FutabaActor_eventGetDigitalTwinDataLatent_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString searchParameters;
			FString jsonString;
			FutabaRequestStatus requestStatus;
			int32 statusCode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_searchParameters;
		static const UECodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_requestStatus_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_requestStatus;
		static const UECodeGen_Private::FIntPropertyParams NewProp_statusCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFutabaActor_GetDigitalTwinDataLatent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetDigitalTwinDataLatent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFutabaActor_GetDigitalTwinDataLatent_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetDigitalTwinDataLatent_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 4072181092
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetDigitalTwinDataLatent_Statics::NewProp_searchParameters = { "searchParameters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetDigitalTwinDataLatent_Parms, searchParameters), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetDigitalTwinDataLatent_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetDigitalTwinDataLatent_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFutabaActor_GetDigitalTwinDataLatent_Statics::NewProp_requestStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFutabaActor_GetDigitalTwinDataLatent_Statics::NewProp_requestStatus = { "requestStatus", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetDigitalTwinDataLatent_Parms, requestStatus), Z_Construct_UEnum_Futaba_FutabaRequestStatus, METADATA_PARAMS(nullptr, 0) }; // 1425841634
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFutabaActor_GetDigitalTwinDataLatent_Statics::NewProp_statusCode = { "statusCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetDigitalTwinDataLatent_Parms, statusCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_GetDigitalTwinDataLatent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetDigitalTwinDataLatent_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetDigitalTwinDataLatent_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetDigitalTwinDataLatent_Statics::NewProp_searchParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetDigitalTwinDataLatent_Statics::NewProp_jsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetDigitalTwinDataLatent_Statics::NewProp_requestStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetDigitalTwinDataLatent_Statics::NewProp_requestStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetDigitalTwinDataLatent_Statics::NewProp_statusCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_GetDigitalTwinDataLatent_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Digital Twin API" },
		{ "DisplayName", "Get Digital Twin Data <Latent>" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_GetDigitalTwinDataLatent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "GetDigitalTwinDataLatent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_GetDigitalTwinDataLatent_Statics::FutabaActor_eventGetDigitalTwinDataLatent_Parms), Z_Construct_UFunction_AFutabaActor_GetDigitalTwinDataLatent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetDigitalTwinDataLatent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_GetDigitalTwinDataLatent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetDigitalTwinDataLatent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_GetDigitalTwinDataLatent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_GetDigitalTwinDataLatent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_GetSharedData_Statics
	{
		struct FutabaActor_eventGetSharedData_Parms
		{
			FString dataTypeId;
			FString targetBuilding;
			FString filter;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_dataTypeId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_targetBuilding;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetSharedData_Statics::NewProp_dataTypeId = { "dataTypeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetSharedData_Parms, dataTypeId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetSharedData_Statics::NewProp_targetBuilding = { "targetBuilding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetSharedData_Parms, targetBuilding), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetSharedData_Statics::NewProp_filter = { "filter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetSharedData_Parms, filter), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_GetSharedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetSharedData_Statics::NewProp_dataTypeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetSharedData_Statics::NewProp_targetBuilding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetSharedData_Statics::NewProp_filter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_GetSharedData_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Data share API" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_GetSharedData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "GetSharedData", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_GetSharedData_Statics::FutabaActor_eventGetSharedData_Parms), Z_Construct_UFunction_AFutabaActor_GetSharedData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetSharedData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_GetSharedData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetSharedData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_GetSharedData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_GetSharedData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_GetSharedDataLatent_Statics
	{
		struct FutabaActor_eventGetSharedDataLatent_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString dataTypeId;
			FString targetBuilding;
			FString filter;
			FString jsonString;
			FutabaRequestStatus requestStatus;
			int32 statusCode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_dataTypeId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_targetBuilding;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filter;
		static const UECodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_requestStatus_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_requestStatus;
		static const UECodeGen_Private::FIntPropertyParams NewProp_statusCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFutabaActor_GetSharedDataLatent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetSharedDataLatent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFutabaActor_GetSharedDataLatent_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetSharedDataLatent_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 4072181092
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetSharedDataLatent_Statics::NewProp_dataTypeId = { "dataTypeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetSharedDataLatent_Parms, dataTypeId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetSharedDataLatent_Statics::NewProp_targetBuilding = { "targetBuilding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetSharedDataLatent_Parms, targetBuilding), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetSharedDataLatent_Statics::NewProp_filter = { "filter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetSharedDataLatent_Parms, filter), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetSharedDataLatent_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetSharedDataLatent_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFutabaActor_GetSharedDataLatent_Statics::NewProp_requestStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFutabaActor_GetSharedDataLatent_Statics::NewProp_requestStatus = { "requestStatus", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetSharedDataLatent_Parms, requestStatus), Z_Construct_UEnum_Futaba_FutabaRequestStatus, METADATA_PARAMS(nullptr, 0) }; // 1425841634
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFutabaActor_GetSharedDataLatent_Statics::NewProp_statusCode = { "statusCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetSharedDataLatent_Parms, statusCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_GetSharedDataLatent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetSharedDataLatent_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetSharedDataLatent_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetSharedDataLatent_Statics::NewProp_dataTypeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetSharedDataLatent_Statics::NewProp_targetBuilding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetSharedDataLatent_Statics::NewProp_filter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetSharedDataLatent_Statics::NewProp_jsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetSharedDataLatent_Statics::NewProp_requestStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetSharedDataLatent_Statics::NewProp_requestStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetSharedDataLatent_Statics::NewProp_statusCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_GetSharedDataLatent_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Data share API" },
		{ "DisplayName", "Get Shared Data <Latent>" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_GetSharedDataLatent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "GetSharedDataLatent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_GetSharedDataLatent_Statics::FutabaActor_eventGetSharedDataLatent_Parms), Z_Construct_UFunction_AFutabaActor_GetSharedDataLatent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetSharedDataLatent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_GetSharedDataLatent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetSharedDataLatent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_GetSharedDataLatent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_GetSharedDataLatent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_GetTaskProgress_Statics
	{
		struct FutabaActor_eventGetTaskProgress_Parms
		{
			int32 taskId;
			FString status;
			FString createDatetime;
			bool includeRequestInfo;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_taskId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_status;
		static const UECodeGen_Private::FStrPropertyParams NewProp_createDatetime;
		static void NewProp_includeRequestInfo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_includeRequestInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFutabaActor_GetTaskProgress_Statics::NewProp_taskId = { "taskId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetTaskProgress_Parms, taskId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetTaskProgress_Statics::NewProp_status = { "status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetTaskProgress_Parms, status), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetTaskProgress_Statics::NewProp_createDatetime = { "createDatetime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetTaskProgress_Parms, createDatetime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFutabaActor_GetTaskProgress_Statics::NewProp_includeRequestInfo_SetBit(void* Obj)
	{
		((FutabaActor_eventGetTaskProgress_Parms*)Obj)->includeRequestInfo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFutabaActor_GetTaskProgress_Statics::NewProp_includeRequestInfo = { "includeRequestInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FutabaActor_eventGetTaskProgress_Parms), &Z_Construct_UFunction_AFutabaActor_GetTaskProgress_Statics::NewProp_includeRequestInfo_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_GetTaskProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetTaskProgress_Statics::NewProp_taskId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetTaskProgress_Statics::NewProp_status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetTaskProgress_Statics::NewProp_createDatetime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetTaskProgress_Statics::NewProp_includeRequestInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_GetTaskProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Building dataset API" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_GetTaskProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "GetTaskProgress", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_GetTaskProgress_Statics::FutabaActor_eventGetTaskProgress_Parms), Z_Construct_UFunction_AFutabaActor_GetTaskProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetTaskProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_GetTaskProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetTaskProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_GetTaskProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_GetTaskProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_GetTaskProgressLatent_Statics
	{
		struct FutabaActor_eventGetTaskProgressLatent_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			int32 taskId;
			FString status;
			FString createDatetime;
			bool includeRequestInfo;
			FString jsonString;
			FutabaRequestStatus requestStatus;
			int32 statusCode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_taskId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_status;
		static const UECodeGen_Private::FStrPropertyParams NewProp_createDatetime;
		static void NewProp_includeRequestInfo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_includeRequestInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_requestStatus_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_requestStatus;
		static const UECodeGen_Private::FIntPropertyParams NewProp_statusCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFutabaActor_GetTaskProgressLatent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetTaskProgressLatent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFutabaActor_GetTaskProgressLatent_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetTaskProgressLatent_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 4072181092
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFutabaActor_GetTaskProgressLatent_Statics::NewProp_taskId = { "taskId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetTaskProgressLatent_Parms, taskId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetTaskProgressLatent_Statics::NewProp_status = { "status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetTaskProgressLatent_Parms, status), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetTaskProgressLatent_Statics::NewProp_createDatetime = { "createDatetime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetTaskProgressLatent_Parms, createDatetime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFutabaActor_GetTaskProgressLatent_Statics::NewProp_includeRequestInfo_SetBit(void* Obj)
	{
		((FutabaActor_eventGetTaskProgressLatent_Parms*)Obj)->includeRequestInfo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFutabaActor_GetTaskProgressLatent_Statics::NewProp_includeRequestInfo = { "includeRequestInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FutabaActor_eventGetTaskProgressLatent_Parms), &Z_Construct_UFunction_AFutabaActor_GetTaskProgressLatent_Statics::NewProp_includeRequestInfo_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetTaskProgressLatent_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetTaskProgressLatent_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFutabaActor_GetTaskProgressLatent_Statics::NewProp_requestStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFutabaActor_GetTaskProgressLatent_Statics::NewProp_requestStatus = { "requestStatus", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetTaskProgressLatent_Parms, requestStatus), Z_Construct_UEnum_Futaba_FutabaRequestStatus, METADATA_PARAMS(nullptr, 0) }; // 1425841634
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFutabaActor_GetTaskProgressLatent_Statics::NewProp_statusCode = { "statusCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetTaskProgressLatent_Parms, statusCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_GetTaskProgressLatent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetTaskProgressLatent_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetTaskProgressLatent_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetTaskProgressLatent_Statics::NewProp_taskId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetTaskProgressLatent_Statics::NewProp_status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetTaskProgressLatent_Statics::NewProp_createDatetime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetTaskProgressLatent_Statics::NewProp_includeRequestInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetTaskProgressLatent_Statics::NewProp_jsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetTaskProgressLatent_Statics::NewProp_requestStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetTaskProgressLatent_Statics::NewProp_requestStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetTaskProgressLatent_Statics::NewProp_statusCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_GetTaskProgressLatent_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Building dataset API" },
		{ "DisplayName", "Get Task Progress <Latent>" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_GetTaskProgressLatent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "GetTaskProgressLatent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_GetTaskProgressLatent_Statics::FutabaActor_eventGetTaskProgressLatent_Parms), Z_Construct_UFunction_AFutabaActor_GetTaskProgressLatent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetTaskProgressLatent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_GetTaskProgressLatent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetTaskProgressLatent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_GetTaskProgressLatent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_GetTaskProgressLatent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_GetTelemetryData_Statics
	{
		struct FutabaActor_eventGetTelemetryData_Parms
		{
			FString searchParameters;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_searchParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetTelemetryData_Statics::NewProp_searchParameters = { "searchParameters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetTelemetryData_Parms, searchParameters), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_GetTelemetryData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetTelemetryData_Statics::NewProp_searchParameters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_GetTelemetryData_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Digital Twin API" },
		{ "Comment", "//Digital Twin API\n" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
		{ "ToolTip", "Digital Twin API" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_GetTelemetryData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "GetTelemetryData", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_GetTelemetryData_Statics::FutabaActor_eventGetTelemetryData_Parms), Z_Construct_UFunction_AFutabaActor_GetTelemetryData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetTelemetryData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_GetTelemetryData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetTelemetryData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_GetTelemetryData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_GetTelemetryData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_GetTelemetryDataLatent_Statics
	{
		struct FutabaActor_eventGetTelemetryDataLatent_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString searchParameters;
			FString jsonString;
			FutabaRequestStatus requestStatus;
			int32 statusCode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_searchParameters;
		static const UECodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_requestStatus_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_requestStatus;
		static const UECodeGen_Private::FIntPropertyParams NewProp_statusCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFutabaActor_GetTelemetryDataLatent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetTelemetryDataLatent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFutabaActor_GetTelemetryDataLatent_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetTelemetryDataLatent_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 4072181092
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetTelemetryDataLatent_Statics::NewProp_searchParameters = { "searchParameters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetTelemetryDataLatent_Parms, searchParameters), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetTelemetryDataLatent_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetTelemetryDataLatent_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFutabaActor_GetTelemetryDataLatent_Statics::NewProp_requestStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFutabaActor_GetTelemetryDataLatent_Statics::NewProp_requestStatus = { "requestStatus", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetTelemetryDataLatent_Parms, requestStatus), Z_Construct_UEnum_Futaba_FutabaRequestStatus, METADATA_PARAMS(nullptr, 0) }; // 1425841634
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFutabaActor_GetTelemetryDataLatent_Statics::NewProp_statusCode = { "statusCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetTelemetryDataLatent_Parms, statusCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_GetTelemetryDataLatent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetTelemetryDataLatent_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetTelemetryDataLatent_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetTelemetryDataLatent_Statics::NewProp_searchParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetTelemetryDataLatent_Statics::NewProp_jsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetTelemetryDataLatent_Statics::NewProp_requestStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetTelemetryDataLatent_Statics::NewProp_requestStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetTelemetryDataLatent_Statics::NewProp_statusCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_GetTelemetryDataLatent_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Digital Twin API" },
		{ "DisplayName", "Get Telemetry Data <Latent>" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_GetTelemetryDataLatent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "GetTelemetryDataLatent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_GetTelemetryDataLatent_Statics::FutabaActor_eventGetTelemetryDataLatent_Parms), Z_Construct_UFunction_AFutabaActor_GetTelemetryDataLatent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetTelemetryDataLatent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_GetTelemetryDataLatent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetTelemetryDataLatent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_GetTelemetryDataLatent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_GetTelemetryDataLatent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_GetThings_Statics
	{
		struct FutabaActor_eventGetThings_Parms
		{
			FString botPath;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_botPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetThings_Statics::NewProp_botPath = { "botPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThings_Parms, botPath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_GetThings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThings_Statics::NewProp_botPath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_GetThings_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Web of Things API" },
		{ "Comment", "//Web of Things API\n" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
		{ "ToolTip", "Web of Things API" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_GetThings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "GetThings", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_GetThings_Statics::FutabaActor_eventGetThings_Parms), Z_Construct_UFunction_AFutabaActor_GetThings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetThings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_GetThings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetThings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_GetThings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_GetThings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_GetThingsByParameter_Statics
	{
		struct FutabaActor_eventGetThingsByParameter_Parms
		{
			FString searchParameters;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_searchParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsByParameter_Statics::NewProp_searchParameters = { "searchParameters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThingsByParameter_Parms, searchParameters), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_GetThingsByParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsByParameter_Statics::NewProp_searchParameters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_GetThingsByParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Web of Things API" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_GetThingsByParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "GetThingsByParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_GetThingsByParameter_Statics::FutabaActor_eventGetThingsByParameter_Parms), Z_Construct_UFunction_AFutabaActor_GetThingsByParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetThingsByParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_GetThingsByParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetThingsByParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_GetThingsByParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_GetThingsByParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_GetThingsByParameterLatent_Statics
	{
		struct FutabaActor_eventGetThingsByParameterLatent_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString searchParameters;
			FString jsonString;
			FutabaRequestStatus requestStatus;
			int32 statusCode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_searchParameters;
		static const UECodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_requestStatus_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_requestStatus;
		static const UECodeGen_Private::FIntPropertyParams NewProp_statusCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsByParameterLatent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThingsByParameterLatent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsByParameterLatent_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThingsByParameterLatent_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 4072181092
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsByParameterLatent_Statics::NewProp_searchParameters = { "searchParameters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThingsByParameterLatent_Parms, searchParameters), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsByParameterLatent_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThingsByParameterLatent_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsByParameterLatent_Statics::NewProp_requestStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsByParameterLatent_Statics::NewProp_requestStatus = { "requestStatus", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThingsByParameterLatent_Parms, requestStatus), Z_Construct_UEnum_Futaba_FutabaRequestStatus, METADATA_PARAMS(nullptr, 0) }; // 1425841634
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsByParameterLatent_Statics::NewProp_statusCode = { "statusCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThingsByParameterLatent_Parms, statusCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_GetThingsByParameterLatent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsByParameterLatent_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsByParameterLatent_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsByParameterLatent_Statics::NewProp_searchParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsByParameterLatent_Statics::NewProp_jsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsByParameterLatent_Statics::NewProp_requestStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsByParameterLatent_Statics::NewProp_requestStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsByParameterLatent_Statics::NewProp_statusCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_GetThingsByParameterLatent_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Web of Things API" },
		{ "DisplayName", "Get Things by Parameter <Latent>" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_GetThingsByParameterLatent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "GetThingsByParameterLatent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_GetThingsByParameterLatent_Statics::FutabaActor_eventGetThingsByParameterLatent_Parms), Z_Construct_UFunction_AFutabaActor_GetThingsByParameterLatent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetThingsByParameterLatent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_GetThingsByParameterLatent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetThingsByParameterLatent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_GetThingsByParameterLatent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_GetThingsByParameterLatent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_GetThingsLatent_Statics
	{
		struct FutabaActor_eventGetThingsLatent_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString botPath;
			FString jsonString;
			FutabaRequestStatus requestStatus;
			int32 statusCode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_botPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_requestStatus_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_requestStatus;
		static const UECodeGen_Private::FIntPropertyParams NewProp_statusCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsLatent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThingsLatent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsLatent_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThingsLatent_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 4072181092
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsLatent_Statics::NewProp_botPath = { "botPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThingsLatent_Parms, botPath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsLatent_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThingsLatent_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsLatent_Statics::NewProp_requestStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsLatent_Statics::NewProp_requestStatus = { "requestStatus", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThingsLatent_Parms, requestStatus), Z_Construct_UEnum_Futaba_FutabaRequestStatus, METADATA_PARAMS(nullptr, 0) }; // 1425841634
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsLatent_Statics::NewProp_statusCode = { "statusCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThingsLatent_Parms, statusCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_GetThingsLatent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsLatent_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsLatent_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsLatent_Statics::NewProp_botPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsLatent_Statics::NewProp_jsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsLatent_Statics::NewProp_requestStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsLatent_Statics::NewProp_requestStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsLatent_Statics::NewProp_statusCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_GetThingsLatent_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Web of Things API" },
		{ "DisplayName", "Get Things <Latent>" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_GetThingsLatent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "GetThingsLatent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_GetThingsLatent_Statics::FutabaActor_eventGetThingsLatent_Parms), Z_Construct_UFunction_AFutabaActor_GetThingsLatent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetThingsLatent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_GetThingsLatent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetThingsLatent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_GetThingsLatent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_GetThingsLatent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_GetThingsProperties_Statics
	{
		struct FutabaActor_eventGetThingsProperties_Parms
		{
			FString rootId;
			FString tdId;
			bool useIdKey;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_rootId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_tdId;
		static void NewProp_useIdKey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_useIdKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsProperties_Statics::NewProp_rootId = { "rootId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThingsProperties_Parms, rootId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsProperties_Statics::NewProp_tdId = { "tdId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThingsProperties_Parms, tdId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFutabaActor_GetThingsProperties_Statics::NewProp_useIdKey_SetBit(void* Obj)
	{
		((FutabaActor_eventGetThingsProperties_Parms*)Obj)->useIdKey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsProperties_Statics::NewProp_useIdKey = { "useIdKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FutabaActor_eventGetThingsProperties_Parms), &Z_Construct_UFunction_AFutabaActor_GetThingsProperties_Statics::NewProp_useIdKey_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_GetThingsProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsProperties_Statics::NewProp_rootId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsProperties_Statics::NewProp_tdId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsProperties_Statics::NewProp_useIdKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_GetThingsProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Web of Things API" },
		{ "CPP_Default_useIdKey", "false" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_GetThingsProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "GetThingsProperties", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_GetThingsProperties_Statics::FutabaActor_eventGetThingsProperties_Parms), Z_Construct_UFunction_AFutabaActor_GetThingsProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetThingsProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_GetThingsProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetThingsProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_GetThingsProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_GetThingsProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_GetThingsPropertiesLatent_Statics
	{
		struct FutabaActor_eventGetThingsPropertiesLatent_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString rootId;
			FString tdId;
			bool useIdKey;
			FString jsonString;
			FutabaRequestStatus requestStatus;
			int32 statusCode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_rootId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_tdId;
		static void NewProp_useIdKey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_useIdKey;
		static const UECodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_requestStatus_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_requestStatus;
		static const UECodeGen_Private::FIntPropertyParams NewProp_statusCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsPropertiesLatent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThingsPropertiesLatent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsPropertiesLatent_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThingsPropertiesLatent_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 4072181092
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsPropertiesLatent_Statics::NewProp_rootId = { "rootId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThingsPropertiesLatent_Parms, rootId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsPropertiesLatent_Statics::NewProp_tdId = { "tdId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThingsPropertiesLatent_Parms, tdId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFutabaActor_GetThingsPropertiesLatent_Statics::NewProp_useIdKey_SetBit(void* Obj)
	{
		((FutabaActor_eventGetThingsPropertiesLatent_Parms*)Obj)->useIdKey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsPropertiesLatent_Statics::NewProp_useIdKey = { "useIdKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FutabaActor_eventGetThingsPropertiesLatent_Parms), &Z_Construct_UFunction_AFutabaActor_GetThingsPropertiesLatent_Statics::NewProp_useIdKey_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsPropertiesLatent_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThingsPropertiesLatent_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsPropertiesLatent_Statics::NewProp_requestStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsPropertiesLatent_Statics::NewProp_requestStatus = { "requestStatus", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThingsPropertiesLatent_Parms, requestStatus), Z_Construct_UEnum_Futaba_FutabaRequestStatus, METADATA_PARAMS(nullptr, 0) }; // 1425841634
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsPropertiesLatent_Statics::NewProp_statusCode = { "statusCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThingsPropertiesLatent_Parms, statusCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_GetThingsPropertiesLatent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsPropertiesLatent_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsPropertiesLatent_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsPropertiesLatent_Statics::NewProp_rootId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsPropertiesLatent_Statics::NewProp_tdId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsPropertiesLatent_Statics::NewProp_useIdKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsPropertiesLatent_Statics::NewProp_jsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsPropertiesLatent_Statics::NewProp_requestStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsPropertiesLatent_Statics::NewProp_requestStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsPropertiesLatent_Statics::NewProp_statusCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_GetThingsPropertiesLatent_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Web of Things API" },
		{ "DisplayName", "Get Things Properties <Latent>" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
		{ "useIdKey", "FALSE" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_GetThingsPropertiesLatent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "GetThingsPropertiesLatent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_GetThingsPropertiesLatent_Statics::FutabaActor_eventGetThingsPropertiesLatent_Parms), Z_Construct_UFunction_AFutabaActor_GetThingsPropertiesLatent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetThingsPropertiesLatent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_GetThingsPropertiesLatent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetThingsPropertiesLatent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_GetThingsPropertiesLatent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_GetThingsPropertiesLatent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_GetThingsProperty_Statics
	{
		struct FutabaActor_eventGetThingsProperty_Parms
		{
			FString rootId;
			FString tdId;
			FString property;
			bool useIdKey;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_rootId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_tdId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_property;
		static void NewProp_useIdKey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_useIdKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsProperty_Statics::NewProp_rootId = { "rootId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThingsProperty_Parms, rootId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsProperty_Statics::NewProp_tdId = { "tdId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThingsProperty_Parms, tdId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsProperty_Statics::NewProp_property = { "property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThingsProperty_Parms, property), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFutabaActor_GetThingsProperty_Statics::NewProp_useIdKey_SetBit(void* Obj)
	{
		((FutabaActor_eventGetThingsProperty_Parms*)Obj)->useIdKey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsProperty_Statics::NewProp_useIdKey = { "useIdKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FutabaActor_eventGetThingsProperty_Parms), &Z_Construct_UFunction_AFutabaActor_GetThingsProperty_Statics::NewProp_useIdKey_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_GetThingsProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsProperty_Statics::NewProp_rootId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsProperty_Statics::NewProp_tdId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsProperty_Statics::NewProp_property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsProperty_Statics::NewProp_useIdKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_GetThingsProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Web of Things API" },
		{ "CPP_Default_useIdKey", "false" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_GetThingsProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "GetThingsProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_GetThingsProperty_Statics::FutabaActor_eventGetThingsProperty_Parms), Z_Construct_UFunction_AFutabaActor_GetThingsProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetThingsProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_GetThingsProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetThingsProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_GetThingsProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_GetThingsProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_GetThingsPropertyLatent_Statics
	{
		struct FutabaActor_eventGetThingsPropertyLatent_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString rootId;
			FString tdId;
			FString property;
			bool useIdKey;
			FString jsonString;
			FutabaRequestStatus requestStatus;
			int32 statusCode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_rootId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_tdId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_property;
		static void NewProp_useIdKey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_useIdKey;
		static const UECodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_requestStatus_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_requestStatus;
		static const UECodeGen_Private::FIntPropertyParams NewProp_statusCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsPropertyLatent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThingsPropertyLatent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsPropertyLatent_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThingsPropertyLatent_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 4072181092
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsPropertyLatent_Statics::NewProp_rootId = { "rootId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThingsPropertyLatent_Parms, rootId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsPropertyLatent_Statics::NewProp_tdId = { "tdId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThingsPropertyLatent_Parms, tdId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsPropertyLatent_Statics::NewProp_property = { "property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThingsPropertyLatent_Parms, property), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFutabaActor_GetThingsPropertyLatent_Statics::NewProp_useIdKey_SetBit(void* Obj)
	{
		((FutabaActor_eventGetThingsPropertyLatent_Parms*)Obj)->useIdKey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsPropertyLatent_Statics::NewProp_useIdKey = { "useIdKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FutabaActor_eventGetThingsPropertyLatent_Parms), &Z_Construct_UFunction_AFutabaActor_GetThingsPropertyLatent_Statics::NewProp_useIdKey_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsPropertyLatent_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThingsPropertyLatent_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsPropertyLatent_Statics::NewProp_requestStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsPropertyLatent_Statics::NewProp_requestStatus = { "requestStatus", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThingsPropertyLatent_Parms, requestStatus), Z_Construct_UEnum_Futaba_FutabaRequestStatus, METADATA_PARAMS(nullptr, 0) }; // 1425841634
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsPropertyLatent_Statics::NewProp_statusCode = { "statusCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThingsPropertyLatent_Parms, statusCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_GetThingsPropertyLatent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsPropertyLatent_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsPropertyLatent_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsPropertyLatent_Statics::NewProp_rootId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsPropertyLatent_Statics::NewProp_tdId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsPropertyLatent_Statics::NewProp_property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsPropertyLatent_Statics::NewProp_useIdKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsPropertyLatent_Statics::NewProp_jsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsPropertyLatent_Statics::NewProp_requestStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsPropertyLatent_Statics::NewProp_requestStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsPropertyLatent_Statics::NewProp_statusCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_GetThingsPropertyLatent_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Web of Things API" },
		{ "DisplayName", "Get Things Property <Latent>" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
		{ "useIdKey", "FALSE" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_GetThingsPropertyLatent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "GetThingsPropertyLatent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_GetThingsPropertyLatent_Statics::FutabaActor_eventGetThingsPropertyLatent_Parms), Z_Construct_UFunction_AFutabaActor_GetThingsPropertyLatent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetThingsPropertyLatent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_GetThingsPropertyLatent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetThingsPropertyLatent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_GetThingsPropertyLatent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_GetThingsPropertyLatent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_SaveConfiguration_Statics
	{
		struct FutabaActor_eventSaveConfiguration_Parms
		{
			FString ConfigFilePath;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConfigFilePath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SaveConfiguration_Statics::NewProp_ConfigFilePath = { "ConfigFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSaveConfiguration_Parms, ConfigFilePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_SaveConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SaveConfiguration_Statics::NewProp_ConfigFilePath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_SaveConfiguration_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Configuration Management" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_SaveConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "SaveConfiguration", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_SaveConfiguration_Statics::FutabaActor_eventSaveConfiguration_Parms), Z_Construct_UFunction_AFutabaActor_SaveConfiguration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SaveConfiguration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_SaveConfiguration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SaveConfiguration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_SaveConfiguration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_SaveConfiguration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_SetAccessToken_Statics
	{
		struct FutabaActor_eventSetAccessToken_Parms
		{
			FString Target;
			FString Id;
			FString Secret;
			FString Access_Token;
			FString Refresh_Token;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Target;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Secret;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Access_Token;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Refresh_Token;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetAccessToken_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetAccessToken_Parms, Target), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetAccessToken_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetAccessToken_Parms, Id), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetAccessToken_Statics::NewProp_Secret = { "Secret", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetAccessToken_Parms, Secret), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetAccessToken_Statics::NewProp_Access_Token = { "Access_Token", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetAccessToken_Parms, Access_Token), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetAccessToken_Statics::NewProp_Refresh_Token = { "Refresh_Token", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetAccessToken_Parms, Refresh_Token), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_SetAccessToken_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetAccessToken_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetAccessToken_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetAccessToken_Statics::NewProp_Secret,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetAccessToken_Statics::NewProp_Access_Token,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetAccessToken_Statics::NewProp_Refresh_Token,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_SetAccessToken_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Configuration Management" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_SetAccessToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "SetAccessToken", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_SetAccessToken_Statics::FutabaActor_eventSetAccessToken_Parms), Z_Construct_UFunction_AFutabaActor_SetAccessToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetAccessToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_SetAccessToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetAccessToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_SetAccessToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_SetAccessToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_SetAccessTokenByConfigFile_Statics
	{
		struct FutabaActor_eventSetAccessTokenByConfigFile_Parms
		{
			FString ConfigFilePath;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConfigFilePath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetAccessTokenByConfigFile_Statics::NewProp_ConfigFilePath = { "ConfigFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetAccessTokenByConfigFile_Parms, ConfigFilePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_SetAccessTokenByConfigFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetAccessTokenByConfigFile_Statics::NewProp_ConfigFilePath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_SetAccessTokenByConfigFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Configuration Management" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_SetAccessTokenByConfigFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "SetAccessTokenByConfigFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_SetAccessTokenByConfigFile_Statics::FutabaActor_eventSetAccessTokenByConfigFile_Parms), Z_Construct_UFunction_AFutabaActor_SetAccessTokenByConfigFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetAccessTokenByConfigFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_SetAccessTokenByConfigFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetAccessTokenByConfigFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_SetAccessTokenByConfigFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_SetAccessTokenByConfigFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_SetAPIURL_Statics
	{
		struct FutabaActor_eventSetAPIURL_Parms
		{
			FString target;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetAPIURL_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetAPIURL_Parms, target), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_SetAPIURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetAPIURL_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_SetAPIURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Configuration Management" },
		{ "Comment", "//Configuration Management API\n" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
		{ "ToolTip", "Configuration Management API" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_SetAPIURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "SetAPIURL", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_SetAPIURL_Statics::FutabaActor_eventSetAPIURL_Parms), Z_Construct_UFunction_AFutabaActor_SetAPIURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetAPIURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_SetAPIURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetAPIURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_SetAPIURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_SetAPIURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_SetSharedData_Statics
	{
		struct FutabaActor_eventSetSharedData_Parms
		{
			FString dataTypeId;
			FString targetBuilding;
			FString values;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_dataTypeId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_targetBuilding;
		static const UECodeGen_Private::FStrPropertyParams NewProp_values;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetSharedData_Statics::NewProp_dataTypeId = { "dataTypeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetSharedData_Parms, dataTypeId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetSharedData_Statics::NewProp_targetBuilding = { "targetBuilding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetSharedData_Parms, targetBuilding), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetSharedData_Statics::NewProp_values = { "values", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetSharedData_Parms, values), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_SetSharedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetSharedData_Statics::NewProp_dataTypeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetSharedData_Statics::NewProp_targetBuilding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetSharedData_Statics::NewProp_values,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_SetSharedData_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Data share API" },
		{ "Comment", "//Data share API\n" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
		{ "ToolTip", "Data share API" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_SetSharedData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "SetSharedData", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_SetSharedData_Statics::FutabaActor_eventSetSharedData_Parms), Z_Construct_UFunction_AFutabaActor_SetSharedData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetSharedData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_SetSharedData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetSharedData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_SetSharedData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_SetSharedData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_SetSharedDataLatent_Statics
	{
		struct FutabaActor_eventSetSharedDataLatent_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString dataTypeId;
			FString targetBuilding;
			FString values;
			FString jsonString;
			FutabaRequestStatus requestStatus;
			int32 statusCode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_dataTypeId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_targetBuilding;
		static const UECodeGen_Private::FStrPropertyParams NewProp_values;
		static const UECodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_requestStatus_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_requestStatus;
		static const UECodeGen_Private::FIntPropertyParams NewProp_statusCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFutabaActor_SetSharedDataLatent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetSharedDataLatent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFutabaActor_SetSharedDataLatent_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetSharedDataLatent_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 4072181092
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetSharedDataLatent_Statics::NewProp_dataTypeId = { "dataTypeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetSharedDataLatent_Parms, dataTypeId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetSharedDataLatent_Statics::NewProp_targetBuilding = { "targetBuilding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetSharedDataLatent_Parms, targetBuilding), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetSharedDataLatent_Statics::NewProp_values = { "values", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetSharedDataLatent_Parms, values), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetSharedDataLatent_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetSharedDataLatent_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFutabaActor_SetSharedDataLatent_Statics::NewProp_requestStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFutabaActor_SetSharedDataLatent_Statics::NewProp_requestStatus = { "requestStatus", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetSharedDataLatent_Parms, requestStatus), Z_Construct_UEnum_Futaba_FutabaRequestStatus, METADATA_PARAMS(nullptr, 0) }; // 1425841634
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFutabaActor_SetSharedDataLatent_Statics::NewProp_statusCode = { "statusCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetSharedDataLatent_Parms, statusCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_SetSharedDataLatent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetSharedDataLatent_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetSharedDataLatent_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetSharedDataLatent_Statics::NewProp_dataTypeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetSharedDataLatent_Statics::NewProp_targetBuilding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetSharedDataLatent_Statics::NewProp_values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetSharedDataLatent_Statics::NewProp_jsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetSharedDataLatent_Statics::NewProp_requestStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetSharedDataLatent_Statics::NewProp_requestStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetSharedDataLatent_Statics::NewProp_statusCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_SetSharedDataLatent_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Data share API" },
		{ "DisplayName", "Set Shared Data <Latent>" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_SetSharedDataLatent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "SetSharedDataLatent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_SetSharedDataLatent_Statics::FutabaActor_eventSetSharedDataLatent_Parms), Z_Construct_UFunction_AFutabaActor_SetSharedDataLatent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetSharedDataLatent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_SetSharedDataLatent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetSharedDataLatent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_SetSharedDataLatent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_SetSharedDataLatent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloat_Statics
	{
		struct FutabaActor_eventSetTelemetryDataFloat_Parms
		{
			FString targetBuilding;
			FString dtid;
			float value;
			int32 priority;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_targetBuilding;
		static const UECodeGen_Private::FStrPropertyParams NewProp_dtid;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_priority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloat_Statics::NewProp_targetBuilding = { "targetBuilding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryDataFloat_Parms, targetBuilding), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloat_Statics::NewProp_dtid = { "dtid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryDataFloat_Parms, dtid), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloat_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryDataFloat_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloat_Statics::NewProp_priority = { "priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryDataFloat_Parms, priority), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloat_Statics::NewProp_targetBuilding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloat_Statics::NewProp_dtid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloat_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloat_Statics::NewProp_priority,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Digital Twin API" },
		{ "DisplayName", "Set Telemetry Data (float)" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "SetTelemetryDataFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloat_Statics::FutabaActor_eventSetTelemetryDataFloat_Parms), Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloatLatent_Statics
	{
		struct FutabaActor_eventSetTelemetryDataFloatLatent_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString targetBuilding;
			FString dtid;
			float value;
			int32 priority;
			FString jsonString;
			FutabaRequestStatus requestStatus;
			int32 statusCode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_targetBuilding;
		static const UECodeGen_Private::FStrPropertyParams NewProp_dtid;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_priority;
		static const UECodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_requestStatus_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_requestStatus;
		static const UECodeGen_Private::FIntPropertyParams NewProp_statusCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloatLatent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryDataFloatLatent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloatLatent_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryDataFloatLatent_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 4072181092
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloatLatent_Statics::NewProp_targetBuilding = { "targetBuilding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryDataFloatLatent_Parms, targetBuilding), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloatLatent_Statics::NewProp_dtid = { "dtid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryDataFloatLatent_Parms, dtid), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloatLatent_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryDataFloatLatent_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloatLatent_Statics::NewProp_priority = { "priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryDataFloatLatent_Parms, priority), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloatLatent_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryDataFloatLatent_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloatLatent_Statics::NewProp_requestStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloatLatent_Statics::NewProp_requestStatus = { "requestStatus", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryDataFloatLatent_Parms, requestStatus), Z_Construct_UEnum_Futaba_FutabaRequestStatus, METADATA_PARAMS(nullptr, 0) }; // 1425841634
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloatLatent_Statics::NewProp_statusCode = { "statusCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryDataFloatLatent_Parms, statusCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloatLatent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloatLatent_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloatLatent_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloatLatent_Statics::NewProp_targetBuilding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloatLatent_Statics::NewProp_dtid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloatLatent_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloatLatent_Statics::NewProp_priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloatLatent_Statics::NewProp_jsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloatLatent_Statics::NewProp_requestStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloatLatent_Statics::NewProp_requestStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloatLatent_Statics::NewProp_statusCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloatLatent_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Digital Twin API" },
		{ "DisplayName", "Set Telemetry Data (float) <Latent>" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloatLatent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "SetTelemetryDataFloatLatent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloatLatent_Statics::FutabaActor_eventSetTelemetryDataFloatLatent_Parms), Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloatLatent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloatLatent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloatLatent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloatLatent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloatLatent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloatLatent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_SetTelemetryDataInteger_Statics
	{
		struct FutabaActor_eventSetTelemetryDataInteger_Parms
		{
			FString targetBuilding;
			FString dtid;
			int32 value;
			int32 priority;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_targetBuilding;
		static const UECodeGen_Private::FStrPropertyParams NewProp_dtid;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_value;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_priority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataInteger_Statics::NewProp_targetBuilding = { "targetBuilding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryDataInteger_Parms, targetBuilding), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataInteger_Statics::NewProp_dtid = { "dtid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryDataInteger_Parms, dtid), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataInteger_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryDataInteger_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataInteger_Statics::NewProp_priority = { "priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryDataInteger_Parms, priority), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_SetTelemetryDataInteger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataInteger_Statics::NewProp_targetBuilding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataInteger_Statics::NewProp_dtid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataInteger_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataInteger_Statics::NewProp_priority,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_SetTelemetryDataInteger_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Digital Twin API" },
		{ "DisplayName", "Set Telemetry Data (float)" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "SetTelemetryDataInteger", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_SetTelemetryDataInteger_Statics::FutabaActor_eventSetTelemetryDataInteger_Parms), Z_Construct_UFunction_AFutabaActor_SetTelemetryDataInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetTelemetryDataInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_SetTelemetryDataInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetTelemetryDataInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_SetTelemetryDataInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_SetTelemetryDataInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_SetTelemetryDataIntegerLatent_Statics
	{
		struct FutabaActor_eventSetTelemetryDataIntegerLatent_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString targetBuilding;
			FString dtid;
			int32 value;
			int32 priority;
			FString jsonString;
			FutabaRequestStatus requestStatus;
			int32 statusCode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_targetBuilding;
		static const UECodeGen_Private::FStrPropertyParams NewProp_dtid;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_value;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_priority;
		static const UECodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_requestStatus_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_requestStatus;
		static const UECodeGen_Private::FIntPropertyParams NewProp_statusCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataIntegerLatent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryDataIntegerLatent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataIntegerLatent_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryDataIntegerLatent_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 4072181092
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataIntegerLatent_Statics::NewProp_targetBuilding = { "targetBuilding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryDataIntegerLatent_Parms, targetBuilding), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataIntegerLatent_Statics::NewProp_dtid = { "dtid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryDataIntegerLatent_Parms, dtid), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataIntegerLatent_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryDataIntegerLatent_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataIntegerLatent_Statics::NewProp_priority = { "priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryDataIntegerLatent_Parms, priority), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataIntegerLatent_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryDataIntegerLatent_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataIntegerLatent_Statics::NewProp_requestStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataIntegerLatent_Statics::NewProp_requestStatus = { "requestStatus", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryDataIntegerLatent_Parms, requestStatus), Z_Construct_UEnum_Futaba_FutabaRequestStatus, METADATA_PARAMS(nullptr, 0) }; // 1425841634
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataIntegerLatent_Statics::NewProp_statusCode = { "statusCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryDataIntegerLatent_Parms, statusCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_SetTelemetryDataIntegerLatent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataIntegerLatent_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataIntegerLatent_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataIntegerLatent_Statics::NewProp_targetBuilding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataIntegerLatent_Statics::NewProp_dtid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataIntegerLatent_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataIntegerLatent_Statics::NewProp_priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataIntegerLatent_Statics::NewProp_jsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataIntegerLatent_Statics::NewProp_requestStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataIntegerLatent_Statics::NewProp_requestStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataIntegerLatent_Statics::NewProp_statusCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_SetTelemetryDataIntegerLatent_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Digital Twin API" },
		{ "DisplayName", "Set Telemetry Data (float) <Latent>" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataIntegerLatent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "SetTelemetryDataIntegerLatent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_SetTelemetryDataIntegerLatent_Statics::FutabaActor_eventSetTelemetryDataIntegerLatent_Parms), Z_Construct_UFunction_AFutabaActor_SetTelemetryDataIntegerLatent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetTelemetryDataIntegerLatent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_SetTelemetryDataIntegerLatent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetTelemetryDataIntegerLatent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_SetTelemetryDataIntegerLatent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_SetTelemetryDataIntegerLatent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_SetTelemetryDataString_Statics
	{
		struct FutabaActor_eventSetTelemetryDataString_Parms
		{
			FString targetBuilding;
			FString dtid;
			FString value;
			int32 priority;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_targetBuilding;
		static const UECodeGen_Private::FStrPropertyParams NewProp_dtid;
		static const UECodeGen_Private::FStrPropertyParams NewProp_value;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_priority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataString_Statics::NewProp_targetBuilding = { "targetBuilding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryDataString_Parms, targetBuilding), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataString_Statics::NewProp_dtid = { "dtid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryDataString_Parms, dtid), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataString_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryDataString_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataString_Statics::NewProp_priority = { "priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryDataString_Parms, priority), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_SetTelemetryDataString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataString_Statics::NewProp_targetBuilding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataString_Statics::NewProp_dtid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataString_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataString_Statics::NewProp_priority,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_SetTelemetryDataString_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Digital Twin API" },
		{ "DisplayName", "Set Telemetry Data (string)" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "SetTelemetryDataString", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_SetTelemetryDataString_Statics::FutabaActor_eventSetTelemetryDataString_Parms), Z_Construct_UFunction_AFutabaActor_SetTelemetryDataString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetTelemetryDataString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_SetTelemetryDataString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetTelemetryDataString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_SetTelemetryDataString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_SetTelemetryDataString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_SetTelemetryDataStringLatent_Statics
	{
		struct FutabaActor_eventSetTelemetryDataStringLatent_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString targetBuilding;
			FString dtid;
			FString value;
			int32 priority;
			FString jsonString;
			FutabaRequestStatus requestStatus;
			int32 statusCode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_targetBuilding;
		static const UECodeGen_Private::FStrPropertyParams NewProp_dtid;
		static const UECodeGen_Private::FStrPropertyParams NewProp_value;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_priority;
		static const UECodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_requestStatus_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_requestStatus;
		static const UECodeGen_Private::FIntPropertyParams NewProp_statusCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataStringLatent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryDataStringLatent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataStringLatent_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryDataStringLatent_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 4072181092
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataStringLatent_Statics::NewProp_targetBuilding = { "targetBuilding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryDataStringLatent_Parms, targetBuilding), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataStringLatent_Statics::NewProp_dtid = { "dtid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryDataStringLatent_Parms, dtid), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataStringLatent_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryDataStringLatent_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataStringLatent_Statics::NewProp_priority = { "priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryDataStringLatent_Parms, priority), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataStringLatent_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryDataStringLatent_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataStringLatent_Statics::NewProp_requestStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataStringLatent_Statics::NewProp_requestStatus = { "requestStatus", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryDataStringLatent_Parms, requestStatus), Z_Construct_UEnum_Futaba_FutabaRequestStatus, METADATA_PARAMS(nullptr, 0) }; // 1425841634
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataStringLatent_Statics::NewProp_statusCode = { "statusCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryDataStringLatent_Parms, statusCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_SetTelemetryDataStringLatent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataStringLatent_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataStringLatent_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataStringLatent_Statics::NewProp_targetBuilding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataStringLatent_Statics::NewProp_dtid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataStringLatent_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataStringLatent_Statics::NewProp_priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataStringLatent_Statics::NewProp_jsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataStringLatent_Statics::NewProp_requestStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataStringLatent_Statics::NewProp_requestStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryDataStringLatent_Statics::NewProp_statusCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_SetTelemetryDataStringLatent_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Digital Twin API" },
		{ "DisplayName", "Set Telemetry Data (string) <Latent>" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_SetTelemetryDataStringLatent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "SetTelemetryDataStringLatent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_SetTelemetryDataStringLatent_Statics::FutabaActor_eventSetTelemetryDataStringLatent_Parms), Z_Construct_UFunction_AFutabaActor_SetTelemetryDataStringLatent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetTelemetryDataStringLatent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_SetTelemetryDataStringLatent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetTelemetryDataStringLatent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_SetTelemetryDataStringLatent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_SetTelemetryDataStringLatent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_SetTelemetryStream_Statics
	{
		struct FutabaActor_eventSetTelemetryStream_Parms
		{
			FString surveillanceParameters;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_surveillanceParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryStream_Statics::NewProp_surveillanceParameters = { "surveillanceParameters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryStream_Parms, surveillanceParameters), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_SetTelemetryStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryStream_Statics::NewProp_surveillanceParameters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_SetTelemetryStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Digital Twin API" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_SetTelemetryStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "SetTelemetryStream", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_SetTelemetryStream_Statics::FutabaActor_eventSetTelemetryStream_Parms), Z_Construct_UFunction_AFutabaActor_SetTelemetryStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetTelemetryStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_SetTelemetryStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetTelemetryStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_SetTelemetryStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_SetTelemetryStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_SetTelemetryStreamLatent_Statics
	{
		struct FutabaActor_eventSetTelemetryStreamLatent_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString surveillanceParameters;
			FString jsonString;
			FutabaRequestStatus requestStatus;
			int32 statusCode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_surveillanceParameters;
		static const UECodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_requestStatus_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_requestStatus;
		static const UECodeGen_Private::FIntPropertyParams NewProp_statusCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryStreamLatent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryStreamLatent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryStreamLatent_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryStreamLatent_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 4072181092
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryStreamLatent_Statics::NewProp_surveillanceParameters = { "surveillanceParameters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryStreamLatent_Parms, surveillanceParameters), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryStreamLatent_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryStreamLatent_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryStreamLatent_Statics::NewProp_requestStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryStreamLatent_Statics::NewProp_requestStatus = { "requestStatus", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryStreamLatent_Parms, requestStatus), Z_Construct_UEnum_Futaba_FutabaRequestStatus, METADATA_PARAMS(nullptr, 0) }; // 1425841634
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFutabaActor_SetTelemetryStreamLatent_Statics::NewProp_statusCode = { "statusCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetTelemetryStreamLatent_Parms, statusCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_SetTelemetryStreamLatent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryStreamLatent_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryStreamLatent_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryStreamLatent_Statics::NewProp_surveillanceParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryStreamLatent_Statics::NewProp_jsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryStreamLatent_Statics::NewProp_requestStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryStreamLatent_Statics::NewProp_requestStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetTelemetryStreamLatent_Statics::NewProp_statusCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_SetTelemetryStreamLatent_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Digital Twin API" },
		{ "DisplayName", "Set Telemetry Stream <Latent>" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_SetTelemetryStreamLatent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "SetTelemetryStreamLatent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_SetTelemetryStreamLatent_Statics::FutabaActor_eventSetTelemetryStreamLatent_Parms), Z_Construct_UFunction_AFutabaActor_SetTelemetryStreamLatent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetTelemetryStreamLatent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_SetTelemetryStreamLatent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetTelemetryStreamLatent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_SetTelemetryStreamLatent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_SetTelemetryStreamLatent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloat_Statics
	{
		struct FutabaActor_eventSetThingsPropertyFloat_Parms
		{
			FString rootId;
			FString tdId;
			FString property;
			float value;
			int32 priority;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_rootId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_tdId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_property;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_priority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloat_Statics::NewProp_rootId = { "rootId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyFloat_Parms, rootId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloat_Statics::NewProp_tdId = { "tdId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyFloat_Parms, tdId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloat_Statics::NewProp_property = { "property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyFloat_Parms, property), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloat_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyFloat_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloat_Statics::NewProp_priority = { "priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyFloat_Parms, priority), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloat_Statics::NewProp_rootId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloat_Statics::NewProp_tdId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloat_Statics::NewProp_property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloat_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloat_Statics::NewProp_priority,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Web of Things API" },
		{ "DisplayName", "Set Things Property (float)" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "SetThingsPropertyFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloat_Statics::FutabaActor_eventSetThingsPropertyFloat_Parms), Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloatLatent_Statics
	{
		struct FutabaActor_eventSetThingsPropertyFloatLatent_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString rootId;
			FString tdId;
			FString property;
			float value;
			int32 priority;
			FString jsonString;
			FutabaRequestStatus requestStatus;
			int32 statusCode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_rootId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_tdId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_property;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_priority;
		static const UECodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_requestStatus_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_requestStatus;
		static const UECodeGen_Private::FIntPropertyParams NewProp_statusCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloatLatent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyFloatLatent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloatLatent_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyFloatLatent_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 4072181092
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloatLatent_Statics::NewProp_rootId = { "rootId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyFloatLatent_Parms, rootId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloatLatent_Statics::NewProp_tdId = { "tdId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyFloatLatent_Parms, tdId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloatLatent_Statics::NewProp_property = { "property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyFloatLatent_Parms, property), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloatLatent_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyFloatLatent_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloatLatent_Statics::NewProp_priority = { "priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyFloatLatent_Parms, priority), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloatLatent_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyFloatLatent_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloatLatent_Statics::NewProp_requestStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloatLatent_Statics::NewProp_requestStatus = { "requestStatus", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyFloatLatent_Parms, requestStatus), Z_Construct_UEnum_Futaba_FutabaRequestStatus, METADATA_PARAMS(nullptr, 0) }; // 1425841634
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloatLatent_Statics::NewProp_statusCode = { "statusCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyFloatLatent_Parms, statusCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloatLatent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloatLatent_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloatLatent_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloatLatent_Statics::NewProp_rootId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloatLatent_Statics::NewProp_tdId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloatLatent_Statics::NewProp_property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloatLatent_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloatLatent_Statics::NewProp_priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloatLatent_Statics::NewProp_jsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloatLatent_Statics::NewProp_requestStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloatLatent_Statics::NewProp_requestStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloatLatent_Statics::NewProp_statusCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloatLatent_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Web of Things API" },
		{ "DisplayName", "Set Things Property (float) <Latent>" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloatLatent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "SetThingsPropertyFloatLatent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloatLatent_Statics::FutabaActor_eventSetThingsPropertyFloatLatent_Parms), Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloatLatent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloatLatent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloatLatent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloatLatent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloatLatent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloatLatent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_SetThingsPropertyInteger_Statics
	{
		struct FutabaActor_eventSetThingsPropertyInteger_Parms
		{
			FString rootId;
			FString tdId;
			FString property;
			int32 value;
			int32 priority;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_rootId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_tdId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_property;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_value;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_priority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyInteger_Statics::NewProp_rootId = { "rootId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyInteger_Parms, rootId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyInteger_Statics::NewProp_tdId = { "tdId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyInteger_Parms, tdId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyInteger_Statics::NewProp_property = { "property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyInteger_Parms, property), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyInteger_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyInteger_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyInteger_Statics::NewProp_priority = { "priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyInteger_Parms, priority), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_SetThingsPropertyInteger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyInteger_Statics::NewProp_rootId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyInteger_Statics::NewProp_tdId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyInteger_Statics::NewProp_property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyInteger_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyInteger_Statics::NewProp_priority,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_SetThingsPropertyInteger_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Web of Things API" },
		{ "DisplayName", "Set Things Property (float)" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "SetThingsPropertyInteger", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_SetThingsPropertyInteger_Statics::FutabaActor_eventSetThingsPropertyInteger_Parms), Z_Construct_UFunction_AFutabaActor_SetThingsPropertyInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetThingsPropertyInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_SetThingsPropertyInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetThingsPropertyInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_SetThingsPropertyInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_SetThingsPropertyInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_SetThingsPropertyIntegerLatent_Statics
	{
		struct FutabaActor_eventSetThingsPropertyIntegerLatent_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString rootId;
			FString tdId;
			FString property;
			int32 value;
			int32 priority;
			FString jsonString;
			FutabaRequestStatus requestStatus;
			int32 statusCode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_rootId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_tdId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_property;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_value;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_priority;
		static const UECodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_requestStatus_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_requestStatus;
		static const UECodeGen_Private::FIntPropertyParams NewProp_statusCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyIntegerLatent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyIntegerLatent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyIntegerLatent_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyIntegerLatent_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 4072181092
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyIntegerLatent_Statics::NewProp_rootId = { "rootId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyIntegerLatent_Parms, rootId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyIntegerLatent_Statics::NewProp_tdId = { "tdId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyIntegerLatent_Parms, tdId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyIntegerLatent_Statics::NewProp_property = { "property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyIntegerLatent_Parms, property), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyIntegerLatent_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyIntegerLatent_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyIntegerLatent_Statics::NewProp_priority = { "priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyIntegerLatent_Parms, priority), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyIntegerLatent_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyIntegerLatent_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyIntegerLatent_Statics::NewProp_requestStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyIntegerLatent_Statics::NewProp_requestStatus = { "requestStatus", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyIntegerLatent_Parms, requestStatus), Z_Construct_UEnum_Futaba_FutabaRequestStatus, METADATA_PARAMS(nullptr, 0) }; // 1425841634
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyIntegerLatent_Statics::NewProp_statusCode = { "statusCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyIntegerLatent_Parms, statusCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_SetThingsPropertyIntegerLatent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyIntegerLatent_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyIntegerLatent_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyIntegerLatent_Statics::NewProp_rootId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyIntegerLatent_Statics::NewProp_tdId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyIntegerLatent_Statics::NewProp_property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyIntegerLatent_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyIntegerLatent_Statics::NewProp_priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyIntegerLatent_Statics::NewProp_jsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyIntegerLatent_Statics::NewProp_requestStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyIntegerLatent_Statics::NewProp_requestStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyIntegerLatent_Statics::NewProp_statusCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_SetThingsPropertyIntegerLatent_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Web of Things API" },
		{ "DisplayName", "Set Things Property (float) <Latent>" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyIntegerLatent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "SetThingsPropertyIntegerLatent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_SetThingsPropertyIntegerLatent_Statics::FutabaActor_eventSetThingsPropertyIntegerLatent_Parms), Z_Construct_UFunction_AFutabaActor_SetThingsPropertyIntegerLatent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetThingsPropertyIntegerLatent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_SetThingsPropertyIntegerLatent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetThingsPropertyIntegerLatent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_SetThingsPropertyIntegerLatent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_SetThingsPropertyIntegerLatent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_SetThingsPropertyString_Statics
	{
		struct FutabaActor_eventSetThingsPropertyString_Parms
		{
			FString rootId;
			FString tdId;
			FString property;
			FString value;
			int32 priority;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_rootId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_tdId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_property;
		static const UECodeGen_Private::FStrPropertyParams NewProp_value;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_priority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyString_Statics::NewProp_rootId = { "rootId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyString_Parms, rootId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyString_Statics::NewProp_tdId = { "tdId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyString_Parms, tdId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyString_Statics::NewProp_property = { "property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyString_Parms, property), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyString_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyString_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyString_Statics::NewProp_priority = { "priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyString_Parms, priority), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_SetThingsPropertyString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyString_Statics::NewProp_rootId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyString_Statics::NewProp_tdId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyString_Statics::NewProp_property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyString_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyString_Statics::NewProp_priority,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_SetThingsPropertyString_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Web of Things API" },
		{ "DisplayName", "Set Things Property (string)" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "SetThingsPropertyString", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_SetThingsPropertyString_Statics::FutabaActor_eventSetThingsPropertyString_Parms), Z_Construct_UFunction_AFutabaActor_SetThingsPropertyString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetThingsPropertyString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_SetThingsPropertyString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetThingsPropertyString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_SetThingsPropertyString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_SetThingsPropertyString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_SetThingsPropertyStringLatent_Statics
	{
		struct FutabaActor_eventSetThingsPropertyStringLatent_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString rootId;
			FString tdId;
			FString property;
			FString value;
			int32 priority;
			FString jsonString;
			FutabaRequestStatus requestStatus;
			int32 statusCode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_rootId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_tdId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_property;
		static const UECodeGen_Private::FStrPropertyParams NewProp_value;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_priority;
		static const UECodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_requestStatus_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_requestStatus;
		static const UECodeGen_Private::FIntPropertyParams NewProp_statusCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyStringLatent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyStringLatent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyStringLatent_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyStringLatent_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 4072181092
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyStringLatent_Statics::NewProp_rootId = { "rootId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyStringLatent_Parms, rootId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyStringLatent_Statics::NewProp_tdId = { "tdId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyStringLatent_Parms, tdId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyStringLatent_Statics::NewProp_property = { "property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyStringLatent_Parms, property), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyStringLatent_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyStringLatent_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyStringLatent_Statics::NewProp_priority = { "priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyStringLatent_Parms, priority), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyStringLatent_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyStringLatent_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyStringLatent_Statics::NewProp_requestStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyStringLatent_Statics::NewProp_requestStatus = { "requestStatus", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyStringLatent_Parms, requestStatus), Z_Construct_UEnum_Futaba_FutabaRequestStatus, METADATA_PARAMS(nullptr, 0) }; // 1425841634
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyStringLatent_Statics::NewProp_statusCode = { "statusCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsPropertyStringLatent_Parms, statusCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_SetThingsPropertyStringLatent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyStringLatent_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyStringLatent_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyStringLatent_Statics::NewProp_rootId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyStringLatent_Statics::NewProp_tdId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyStringLatent_Statics::NewProp_property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyStringLatent_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyStringLatent_Statics::NewProp_priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyStringLatent_Statics::NewProp_jsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyStringLatent_Statics::NewProp_requestStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyStringLatent_Statics::NewProp_requestStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsPropertyStringLatent_Statics::NewProp_statusCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_SetThingsPropertyStringLatent_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Web of Things API" },
		{ "DisplayName", "Set Things Property (string) <Latent>" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_SetThingsPropertyStringLatent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "SetThingsPropertyStringLatent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_SetThingsPropertyStringLatent_Statics::FutabaActor_eventSetThingsPropertyStringLatent_Parms), Z_Construct_UFunction_AFutabaActor_SetThingsPropertyStringLatent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetThingsPropertyStringLatent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_SetThingsPropertyStringLatent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetThingsPropertyStringLatent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_SetThingsPropertyStringLatent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_SetThingsPropertyStringLatent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_SetWebhook_Statics
	{
		struct FutabaActor_eventSetWebhook_Parms
		{
			FString url;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_url;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetWebhook_Statics::NewProp_url = { "url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetWebhook_Parms, url), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_SetWebhook_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetWebhook_Statics::NewProp_url,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_SetWebhook_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Building dataset API" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_SetWebhook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "SetWebhook", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_SetWebhook_Statics::FutabaActor_eventSetWebhook_Parms), Z_Construct_UFunction_AFutabaActor_SetWebhook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetWebhook_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_SetWebhook_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetWebhook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_SetWebhook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_SetWebhook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_SetWebhookLatent_Statics
	{
		struct FutabaActor_eventSetWebhookLatent_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString url;
			FString jsonString;
			FutabaRequestStatus requestStatus;
			int32 statusCode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_url;
		static const UECodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_requestStatus_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_requestStatus;
		static const UECodeGen_Private::FIntPropertyParams NewProp_statusCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFutabaActor_SetWebhookLatent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetWebhookLatent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFutabaActor_SetWebhookLatent_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetWebhookLatent_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 4072181092
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetWebhookLatent_Statics::NewProp_url = { "url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetWebhookLatent_Parms, url), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetWebhookLatent_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetWebhookLatent_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFutabaActor_SetWebhookLatent_Statics::NewProp_requestStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFutabaActor_SetWebhookLatent_Statics::NewProp_requestStatus = { "requestStatus", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetWebhookLatent_Parms, requestStatus), Z_Construct_UEnum_Futaba_FutabaRequestStatus, METADATA_PARAMS(nullptr, 0) }; // 1425841634
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFutabaActor_SetWebhookLatent_Statics::NewProp_statusCode = { "statusCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetWebhookLatent_Parms, statusCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_SetWebhookLatent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetWebhookLatent_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetWebhookLatent_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetWebhookLatent_Statics::NewProp_url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetWebhookLatent_Statics::NewProp_jsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetWebhookLatent_Statics::NewProp_requestStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetWebhookLatent_Statics::NewProp_requestStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetWebhookLatent_Statics::NewProp_statusCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_SetWebhookLatent_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Building dataset API" },
		{ "DisplayName", "Set Webhook <Latent>" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_SetWebhookLatent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "SetWebhookLatent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_SetWebhookLatent_Statics::FutabaActor_eventSetWebhookLatent_Parms), Z_Construct_UFunction_AFutabaActor_SetWebhookLatent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetWebhookLatent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_SetWebhookLatent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetWebhookLatent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_SetWebhookLatent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_SetWebhookLatent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_ShowConfiguration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_ShowConfiguration_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Configuration Management" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_ShowConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "ShowConfiguration", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_ShowConfiguration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_ShowConfiguration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_ShowConfiguration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_ShowConfiguration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinData_Statics
	{
		struct FutabaActor_eventUpdateDigitalTwinData_Parms
		{
			FString updateParameters;
			FString property;
			FString value;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_updateParameters;
		static const UECodeGen_Private::FStrPropertyParams NewProp_property;
		static const UECodeGen_Private::FStrPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinData_Statics::NewProp_updateParameters = { "updateParameters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventUpdateDigitalTwinData_Parms, updateParameters), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinData_Statics::NewProp_property = { "property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventUpdateDigitalTwinData_Parms, property), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinData_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventUpdateDigitalTwinData_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinData_Statics::NewProp_updateParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinData_Statics::NewProp_property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinData_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinData_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Digital Twin API" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "UpdateDigitalTwinData", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinData_Statics::FutabaActor_eventUpdateDigitalTwinData_Parms), Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinDataLatent_Statics
	{
		struct FutabaActor_eventUpdateDigitalTwinDataLatent_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString updateParameters;
			FString property;
			FString value;
			FString jsonString;
			FutabaRequestStatus requestStatus;
			int32 statusCode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_updateParameters;
		static const UECodeGen_Private::FStrPropertyParams NewProp_property;
		static const UECodeGen_Private::FStrPropertyParams NewProp_value;
		static const UECodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_requestStatus_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_requestStatus;
		static const UECodeGen_Private::FIntPropertyParams NewProp_statusCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinDataLatent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventUpdateDigitalTwinDataLatent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinDataLatent_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventUpdateDigitalTwinDataLatent_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 4072181092
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinDataLatent_Statics::NewProp_updateParameters = { "updateParameters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventUpdateDigitalTwinDataLatent_Parms, updateParameters), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinDataLatent_Statics::NewProp_property = { "property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventUpdateDigitalTwinDataLatent_Parms, property), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinDataLatent_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventUpdateDigitalTwinDataLatent_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinDataLatent_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventUpdateDigitalTwinDataLatent_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinDataLatent_Statics::NewProp_requestStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinDataLatent_Statics::NewProp_requestStatus = { "requestStatus", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventUpdateDigitalTwinDataLatent_Parms, requestStatus), Z_Construct_UEnum_Futaba_FutabaRequestStatus, METADATA_PARAMS(nullptr, 0) }; // 1425841634
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinDataLatent_Statics::NewProp_statusCode = { "statusCode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventUpdateDigitalTwinDataLatent_Parms, statusCode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinDataLatent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinDataLatent_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinDataLatent_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinDataLatent_Statics::NewProp_updateParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinDataLatent_Statics::NewProp_property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinDataLatent_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinDataLatent_Statics::NewProp_jsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinDataLatent_Statics::NewProp_requestStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinDataLatent_Statics::NewProp_requestStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinDataLatent_Statics::NewProp_statusCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinDataLatent_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba|Digital Twin API" },
		{ "DisplayName", "Update Digital Twin Data <Latent>" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinDataLatent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "UpdateDigitalTwinDataLatent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinDataLatent_Statics::FutabaActor_eventUpdateDigitalTwinDataLatent_Parms), Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinDataLatent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinDataLatent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinDataLatent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinDataLatent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinDataLatent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinDataLatent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFutabaActor);
	UClass* Z_Construct_UClass_AFutabaActor_NoRegister()
	{
		return AFutabaActor::StaticClass();
	}
	struct Z_Construct_UClass_AFutabaActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectionTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClientId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientSecret_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClientSecret;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccessToken_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AccessToken;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RefreshToken_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RefreshToken;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEventDispather_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEventDispather;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRequestCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestCompleted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFutabaActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Futaba,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFutabaActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFutabaActor_ChangeTaskValidity, "ChangeTaskValidity" }, // 1549847757
		{ &Z_Construct_UFunction_AFutabaActor_ChangeTaskValidityLatent, "ChangeTaskValidityLatent" }, // 2514270535
		{ &Z_Construct_UFunction_AFutabaActor_CheckTelemetryStream, "CheckTelemetryStream" }, // 325538628
		{ &Z_Construct_UFunction_AFutabaActor_CheckTelemetryStreamLatent, "CheckTelemetryStreamLatent" }, // 2704810511
		{ &Z_Construct_UFunction_AFutabaActor_CreateTask, "CreateTask" }, // 2679603609
		{ &Z_Construct_UFunction_AFutabaActor_CreateTaskLatent, "CreateTaskLatent" }, // 1744691965
		{ &Z_Construct_UFunction_AFutabaActor_DeleteSharedData, "DeleteSharedData" }, // 2296425299
		{ &Z_Construct_UFunction_AFutabaActor_DeleteSharedDataLatent, "DeleteSharedDataLatent" }, // 3213799735
		{ &Z_Construct_UFunction_AFutabaActor_DeleteTask, "DeleteTask" }, // 2270464205
		{ &Z_Construct_UFunction_AFutabaActor_DeleteTaskLatent, "DeleteTaskLatent" }, // 1708267349
		{ &Z_Construct_UFunction_AFutabaActor_DeleteTelemetryStream, "DeleteTelemetryStream" }, // 73891938
		{ &Z_Construct_UFunction_AFutabaActor_DeleteTelemetryStreamLatent, "DeleteTelemetryStreamLatent" }, // 750571170
		{ &Z_Construct_UFunction_AFutabaActor_DeleteWebhook, "DeleteWebhook" }, // 3033572579
		{ &Z_Construct_UFunction_AFutabaActor_DeleteWebhookLatent, "DeleteWebhookLatent" }, // 2838197574
		{ &Z_Construct_UDelegateFunction_AFutabaActor_FutabaOnEventDispather__DelegateSignature, "FutabaOnEventDispather__DelegateSignature" }, // 256139547
		{ &Z_Construct_UFunction_AFutabaActor_GetAccessToken, "GetAccessToken" }, // 3319320736
		{ &Z_Construct_UFunction_AFutabaActor_GetAccessTokenLatent, "GetAccessTokenLatent" }, // 3962026572
		{ &Z_Construct_UFunction_AFutabaActor_GetDigitalTwinData, "GetDigitalTwinData" }, // 4181184886
		{ &Z_Construct_UFunction_AFutabaActor_GetDigitalTwinDataLatent, "GetDigitalTwinDataLatent" }, // 389000225
		{ &Z_Construct_UFunction_AFutabaActor_GetSharedData, "GetSharedData" }, // 2619747505
		{ &Z_Construct_UFunction_AFutabaActor_GetSharedDataLatent, "GetSharedDataLatent" }, // 3216520531
		{ &Z_Construct_UFunction_AFutabaActor_GetTaskProgress, "GetTaskProgress" }, // 904955444
		{ &Z_Construct_UFunction_AFutabaActor_GetTaskProgressLatent, "GetTaskProgressLatent" }, // 149249197
		{ &Z_Construct_UFunction_AFutabaActor_GetTelemetryData, "GetTelemetryData" }, // 3924131865
		{ &Z_Construct_UFunction_AFutabaActor_GetTelemetryDataLatent, "GetTelemetryDataLatent" }, // 2194825441
		{ &Z_Construct_UFunction_AFutabaActor_GetThings, "GetThings" }, // 1170533613
		{ &Z_Construct_UFunction_AFutabaActor_GetThingsByParameter, "GetThingsByParameter" }, // 3725406120
		{ &Z_Construct_UFunction_AFutabaActor_GetThingsByParameterLatent, "GetThingsByParameterLatent" }, // 2279748321
		{ &Z_Construct_UFunction_AFutabaActor_GetThingsLatent, "GetThingsLatent" }, // 1806093409
		{ &Z_Construct_UFunction_AFutabaActor_GetThingsProperties, "GetThingsProperties" }, // 3937467290
		{ &Z_Construct_UFunction_AFutabaActor_GetThingsPropertiesLatent, "GetThingsPropertiesLatent" }, // 559532575
		{ &Z_Construct_UFunction_AFutabaActor_GetThingsProperty, "GetThingsProperty" }, // 113672332
		{ &Z_Construct_UFunction_AFutabaActor_GetThingsPropertyLatent, "GetThingsPropertyLatent" }, // 817691831
		{ &Z_Construct_UDelegateFunction_AFutabaActor_OnHttpRequestCompleted__DelegateSignature, "OnHttpRequestCompleted__DelegateSignature" }, // 3650473503
		{ &Z_Construct_UFunction_AFutabaActor_SaveConfiguration, "SaveConfiguration" }, // 1746547262
		{ &Z_Construct_UFunction_AFutabaActor_SetAccessToken, "SetAccessToken" }, // 3041565969
		{ &Z_Construct_UFunction_AFutabaActor_SetAccessTokenByConfigFile, "SetAccessTokenByConfigFile" }, // 3957998402
		{ &Z_Construct_UFunction_AFutabaActor_SetAPIURL, "SetAPIURL" }, // 3348042541
		{ &Z_Construct_UFunction_AFutabaActor_SetSharedData, "SetSharedData" }, // 3691122852
		{ &Z_Construct_UFunction_AFutabaActor_SetSharedDataLatent, "SetSharedDataLatent" }, // 2295146567
		{ &Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloat, "SetTelemetryDataFloat" }, // 2285395844
		{ &Z_Construct_UFunction_AFutabaActor_SetTelemetryDataFloatLatent, "SetTelemetryDataFloatLatent" }, // 964288934
		{ &Z_Construct_UFunction_AFutabaActor_SetTelemetryDataInteger, "SetTelemetryDataInteger" }, // 785808631
		{ &Z_Construct_UFunction_AFutabaActor_SetTelemetryDataIntegerLatent, "SetTelemetryDataIntegerLatent" }, // 93157832
		{ &Z_Construct_UFunction_AFutabaActor_SetTelemetryDataString, "SetTelemetryDataString" }, // 1587457452
		{ &Z_Construct_UFunction_AFutabaActor_SetTelemetryDataStringLatent, "SetTelemetryDataStringLatent" }, // 2951606387
		{ &Z_Construct_UFunction_AFutabaActor_SetTelemetryStream, "SetTelemetryStream" }, // 1445789908
		{ &Z_Construct_UFunction_AFutabaActor_SetTelemetryStreamLatent, "SetTelemetryStreamLatent" }, // 2478492398
		{ &Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloat, "SetThingsPropertyFloat" }, // 1895575431
		{ &Z_Construct_UFunction_AFutabaActor_SetThingsPropertyFloatLatent, "SetThingsPropertyFloatLatent" }, // 1044180366
		{ &Z_Construct_UFunction_AFutabaActor_SetThingsPropertyInteger, "SetThingsPropertyInteger" }, // 3560874508
		{ &Z_Construct_UFunction_AFutabaActor_SetThingsPropertyIntegerLatent, "SetThingsPropertyIntegerLatent" }, // 1342075000
		{ &Z_Construct_UFunction_AFutabaActor_SetThingsPropertyString, "SetThingsPropertyString" }, // 858511405
		{ &Z_Construct_UFunction_AFutabaActor_SetThingsPropertyStringLatent, "SetThingsPropertyStringLatent" }, // 800528267
		{ &Z_Construct_UFunction_AFutabaActor_SetWebhook, "SetWebhook" }, // 3329092325
		{ &Z_Construct_UFunction_AFutabaActor_SetWebhookLatent, "SetWebhookLatent" }, // 816020326
		{ &Z_Construct_UFunction_AFutabaActor_ShowConfiguration, "ShowConfiguration" }, // 1574715341
		{ &Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinData, "UpdateDigitalTwinData" }, // 871927929
		{ &Z_Construct_UFunction_AFutabaActor_UpdateDigitalTwinDataLatent, "UpdateDigitalTwinDataLatent" }, // 2192579870
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFutabaActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FutabaActor.h" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFutabaActor_Statics::NewProp_ConnectionTarget_MetaData[] = {
		{ "Category", "futaba" },
		{ "DisplayName", "Prefix" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFutabaActor_Statics::NewProp_ConnectionTarget = { "ConnectionTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFutabaActor, ConnectionTarget), METADATA_PARAMS(Z_Construct_UClass_AFutabaActor_Statics::NewProp_ConnectionTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFutabaActor_Statics::NewProp_ConnectionTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFutabaActor_Statics::NewProp_ClientId_MetaData[] = {
		{ "Category", "futaba" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFutabaActor_Statics::NewProp_ClientId = { "ClientId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFutabaActor, ClientId), METADATA_PARAMS(Z_Construct_UClass_AFutabaActor_Statics::NewProp_ClientId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFutabaActor_Statics::NewProp_ClientId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFutabaActor_Statics::NewProp_ClientSecret_MetaData[] = {
		{ "Category", "futaba" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFutabaActor_Statics::NewProp_ClientSecret = { "ClientSecret", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFutabaActor, ClientSecret), METADATA_PARAMS(Z_Construct_UClass_AFutabaActor_Statics::NewProp_ClientSecret_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFutabaActor_Statics::NewProp_ClientSecret_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFutabaActor_Statics::NewProp_AccessToken_MetaData[] = {
		{ "Category", "futaba" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFutabaActor_Statics::NewProp_AccessToken = { "AccessToken", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFutabaActor, AccessToken), METADATA_PARAMS(Z_Construct_UClass_AFutabaActor_Statics::NewProp_AccessToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFutabaActor_Statics::NewProp_AccessToken_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFutabaActor_Statics::NewProp_RefreshToken_MetaData[] = {
		{ "Category", "futaba" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFutabaActor_Statics::NewProp_RefreshToken = { "RefreshToken", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFutabaActor, RefreshToken), METADATA_PARAMS(Z_Construct_UClass_AFutabaActor_Statics::NewProp_RefreshToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFutabaActor_Statics::NewProp_RefreshToken_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFutabaActor_Statics::NewProp_OnEventDispather_MetaData[] = {
		{ "Category", "futaba|Event" },
		{ "Comment", "//Event Node\n" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
		{ "ToolTip", "Event Node" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFutabaActor_Statics::NewProp_OnEventDispather = { "OnEventDispather", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFutabaActor, OnEventDispather), Z_Construct_UDelegateFunction_AFutabaActor_FutabaOnEventDispather__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFutabaActor_Statics::NewProp_OnEventDispather_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFutabaActor_Statics::NewProp_OnEventDispather_MetaData)) }; // 256139547
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFutabaActor_Statics::NewProp_OnRequestCompleted_MetaData[] = {
		{ "Category", "futaba|Event" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFutabaActor_Statics::NewProp_OnRequestCompleted = { "OnRequestCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFutabaActor, OnRequestCompleted), Z_Construct_UDelegateFunction_AFutabaActor_OnHttpRequestCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFutabaActor_Statics::NewProp_OnRequestCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFutabaActor_Statics::NewProp_OnRequestCompleted_MetaData)) }; // 3650473503
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFutabaActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFutabaActor_Statics::NewProp_ConnectionTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFutabaActor_Statics::NewProp_ClientId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFutabaActor_Statics::NewProp_ClientSecret,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFutabaActor_Statics::NewProp_AccessToken,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFutabaActor_Statics::NewProp_RefreshToken,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFutabaActor_Statics::NewProp_OnEventDispather,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFutabaActor_Statics::NewProp_OnRequestCompleted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFutabaActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFutabaActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFutabaActor_Statics::ClassParams = {
		&AFutabaActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFutabaActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFutabaActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFutabaActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFutabaActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFutabaActor()
	{
		if (!Z_Registration_Info_UClass_AFutabaActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFutabaActor.OuterSingleton, Z_Construct_UClass_AFutabaActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFutabaActor.OuterSingleton;
	}
	template<> FUTABA_API UClass* StaticClass<AFutabaActor>()
	{
		return AFutabaActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFutabaActor);
	struct Z_CompiledInDeferFile_FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_Statics::EnumInfo[] = {
		{ FutabaRequestStatus_StaticEnum, TEXT("FutabaRequestStatus"), &Z_Registration_Info_UEnum_FutabaRequestStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1425841634U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFutabaActor, AFutabaActor::StaticClass, TEXT("AFutabaActor"), &Z_Registration_Info_UClass_AFutabaActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFutabaActor), 1134736903U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_2524629160(TEXT("/Script/Futaba"),
		Z_CompiledInDeferFile_FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaActor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
