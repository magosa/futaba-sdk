// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Futaba/Public/FutabaActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFutabaActor() {}
// Cross Module References
	FUTABA_API UFunction* Z_Construct_UDelegateFunction_Futaba_OnHttpRequestCompleted__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Futaba();
	FUTABA_API UFunction* Z_Construct_UDelegateFunction_Futaba_FutabaOnEventDispather__DelegateSignature();
	FUTABA_API UEnum* Z_Construct_UEnum_Futaba_FutabaRequestStatus();
	FUTABA_API UClass* Z_Construct_UClass_AFutabaActor_NoRegister();
	FUTABA_API UClass* Z_Construct_UClass_AFutabaActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Futaba_OnHttpRequestCompleted__DelegateSignature_Statics
	{
		struct _Script_Futaba_eventOnHttpRequestCompleted_Parms
		{
			bool bSuccessful;
			int32 ResponseCode;
			FString Response;
		};
		static void NewProp_bSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccessful;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ResponseCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Response;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_Futaba_OnHttpRequestCompleted__DelegateSignature_Statics::NewProp_bSuccessful_SetBit(void* Obj)
	{
		((_Script_Futaba_eventOnHttpRequestCompleted_Parms*)Obj)->bSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Futaba_OnHttpRequestCompleted__DelegateSignature_Statics::NewProp_bSuccessful = { "bSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_Futaba_eventOnHttpRequestCompleted_Parms), &Z_Construct_UDelegateFunction_Futaba_OnHttpRequestCompleted__DelegateSignature_Statics::NewProp_bSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Futaba_OnHttpRequestCompleted__DelegateSignature_Statics::NewProp_ResponseCode = { "ResponseCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Futaba_eventOnHttpRequestCompleted_Parms, ResponseCode), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Futaba_OnHttpRequestCompleted__DelegateSignature_Statics::NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Futaba_OnHttpRequestCompleted__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Futaba_eventOnHttpRequestCompleted_Parms, Response), METADATA_PARAMS(Z_Construct_UDelegateFunction_Futaba_OnHttpRequestCompleted__DelegateSignature_Statics::NewProp_Response_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Futaba_OnHttpRequestCompleted__DelegateSignature_Statics::NewProp_Response_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Futaba_OnHttpRequestCompleted__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Futaba_OnHttpRequestCompleted__DelegateSignature_Statics::NewProp_bSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Futaba_OnHttpRequestCompleted__DelegateSignature_Statics::NewProp_ResponseCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Futaba_OnHttpRequestCompleted__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Futaba_OnHttpRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Futaba_OnHttpRequestCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Futaba, nullptr, "OnHttpRequestCompleted__DelegateSignature", nullptr, nullptr, sizeof(_Script_Futaba_eventOnHttpRequestCompleted_Parms), Z_Construct_UDelegateFunction_Futaba_OnHttpRequestCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Futaba_OnHttpRequestCompleted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Futaba_OnHttpRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Futaba_OnHttpRequestCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Futaba_OnHttpRequestCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Futaba_OnHttpRequestCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Futaba_FutabaOnEventDispather__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Futaba_FutabaOnEventDispather__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Futaba_FutabaOnEventDispather__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Futaba, nullptr, "FutabaOnEventDispather__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Futaba_FutabaOnEventDispather__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Futaba_FutabaOnEventDispather__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Futaba_FutabaOnEventDispather__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Futaba_FutabaOnEventDispather__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* FutabaRequestStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Futaba_FutabaRequestStatus, Z_Construct_UPackage__Script_Futaba(), TEXT("FutabaRequestStatus"));
		}
		return Singleton;
	}
	template<> FUTABA_API UEnum* StaticEnum<FutabaRequestStatus>()
	{
		return FutabaRequestStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_FutabaRequestStatus(FutabaRequestStatus_StaticEnum, TEXT("/Script/Futaba"), TEXT("FutabaRequestStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Futaba_FutabaRequestStatus_Hash() { return 1904133425U; }
	UEnum* Z_Construct_UEnum_Futaba_FutabaRequestStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Futaba();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("FutabaRequestStatus"), 0, Get_Z_Construct_UEnum_Futaba_FutabaRequestStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FutabaRequestStatus::Success", (int64)FutabaRequestStatus::Success },
				{ "FutabaRequestStatus::User_Error", (int64)FutabaRequestStatus::User_Error },
				{ "FutabaRequestStatus::Platform_Error", (int64)FutabaRequestStatus::Platform_Error },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/FutabaActor.h" },
				{ "Platform_Error.Name", "FutabaRequestStatus::Platform_Error" },
				{ "Success.Name", "FutabaRequestStatus::Success" },
				{ "User_Error.Name", "FutabaRequestStatus::User_Error" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Futaba,
				nullptr,
				"FutabaRequestStatus",
				"FutabaRequestStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(AFutabaActor::execSetThingsProperty)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_root_id);
		P_GET_PROPERTY(FStrProperty,Z_Param_tdid);
		P_GET_PROPERTY(FStrProperty,Z_Param_property);
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_GET_PROPERTY(FStrProperty,Z_Param_priority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetThingsProperty(Z_Param_root_id,Z_Param_tdid,Z_Param_property,Z_Param_value,Z_Param_priority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execGetThingsProperty)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_root_id);
		P_GET_PROPERTY(FStrProperty,Z_Param_tdid);
		P_GET_PROPERTY(FStrProperty,Z_Param_property);
		P_GET_UBOOL(Z_Param_use_id_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetThingsProperty(Z_Param_root_id,Z_Param_tdid,Z_Param_property,Z_Param_use_id_key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execGetThingsProperties)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_root_id);
		P_GET_PROPERTY(FStrProperty,Z_Param_tdid);
		P_GET_UBOOL(Z_Param_use_id_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetThingsProperties(Z_Param_root_id,Z_Param_tdid,Z_Param_use_id_key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execGetThingsByParameter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_search_parameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetThingsByParameter(Z_Param_search_parameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execGetThings)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_bot_path);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetThings(Z_Param_bot_path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execGetMetadagetTelemetryDatata)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_search_parameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMetadagetTelemetryDatata(Z_Param_search_parameters);
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
	DEFINE_FUNCTION(AFutabaActor::execGetAccessToken)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ConfigFilePath);
		P_GET_ENUM_REF(FutabaRequestStatus,Z_Param_Out_FutabaStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAccessToken(Z_Param_ConfigFilePath,(FutabaRequestStatus&)(Z_Param_Out_FutabaStatus));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFutabaActor::execShowConfiguration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowConfiguration();
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
			{ "GetAccessToken", &AFutabaActor::execGetAccessToken },
			{ "GetMetadagetTelemetryDatata", &AFutabaActor::execGetMetadagetTelemetryDatata },
			{ "GetThings", &AFutabaActor::execGetThings },
			{ "GetThingsByParameter", &AFutabaActor::execGetThingsByParameter },
			{ "GetThingsProperties", &AFutabaActor::execGetThingsProperties },
			{ "GetThingsProperty", &AFutabaActor::execGetThingsProperty },
			{ "SetAccessToken", &AFutabaActor::execSetAccessToken },
			{ "SetAccessTokenByConfigFile", &AFutabaActor::execSetAccessTokenByConfigFile },
			{ "SetAPIURL", &AFutabaActor::execSetAPIURL },
			{ "SetThingsProperty", &AFutabaActor::execSetThingsProperty },
			{ "ShowConfiguration", &AFutabaActor::execShowConfiguration },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFutabaActor_GetAccessToken_Statics
	{
		struct FutabaActor_eventGetAccessToken_Parms
		{
			FString ConfigFilePath;
			FutabaRequestStatus FutabaStatus;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConfigFilePath;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FutabaStatus_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FutabaStatus;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetAccessToken_Statics::NewProp_ConfigFilePath = { "ConfigFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetAccessToken_Parms, ConfigFilePath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFutabaActor_GetAccessToken_Statics::NewProp_FutabaStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFutabaActor_GetAccessToken_Statics::NewProp_FutabaStatus = { "FutabaStatus", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetAccessToken_Parms, FutabaStatus), Z_Construct_UEnum_Futaba_FutabaRequestStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetAccessToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetAccessToken_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_GetAccessToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetAccessToken_Statics::NewProp_ConfigFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetAccessToken_Statics::NewProp_FutabaStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetAccessToken_Statics::NewProp_FutabaStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetAccessToken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_GetAccessToken_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba" },
		{ "ExpandEnumAsExecs", "FutabaStatus" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_GetAccessToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "GetAccessToken", nullptr, nullptr, sizeof(FutabaActor_eventGetAccessToken_Parms), Z_Construct_UFunction_AFutabaActor_GetAccessToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetAccessToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_GetAccessToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetAccessToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_GetAccessToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFutabaActor_GetAccessToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_GetMetadagetTelemetryDatata_Statics
	{
		struct FutabaActor_eventGetMetadagetTelemetryDatata_Parms
		{
			FString search_parameters;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_search_parameters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetMetadagetTelemetryDatata_Statics::NewProp_search_parameters = { "search_parameters", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetMetadagetTelemetryDatata_Parms, search_parameters), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_GetMetadagetTelemetryDatata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetMetadagetTelemetryDatata_Statics::NewProp_search_parameters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_GetMetadagetTelemetryDatata_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba" },
		{ "Comment", "//Degital Twin API\n" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
		{ "ToolTip", "Degital Twin API" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_GetMetadagetTelemetryDatata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "GetMetadagetTelemetryDatata", nullptr, nullptr, sizeof(FutabaActor_eventGetMetadagetTelemetryDatata_Parms), Z_Construct_UFunction_AFutabaActor_GetMetadagetTelemetryDatata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetMetadagetTelemetryDatata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_GetMetadagetTelemetryDatata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetMetadagetTelemetryDatata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_GetMetadagetTelemetryDatata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFutabaActor_GetMetadagetTelemetryDatata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_GetThings_Statics
	{
		struct FutabaActor_eventGetThings_Parms
		{
			FString bot_path;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_bot_path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetThings_Statics::NewProp_bot_path = { "bot_path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThings_Parms, bot_path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_GetThings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThings_Statics::NewProp_bot_path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_GetThings_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba" },
		{ "Comment", "//Web of Things API\n" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
		{ "ToolTip", "Web of Things API" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_GetThings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "GetThings", nullptr, nullptr, sizeof(FutabaActor_eventGetThings_Parms), Z_Construct_UFunction_AFutabaActor_GetThings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetThings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_GetThings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetThings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_GetThings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFutabaActor_GetThings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_GetThingsByParameter_Statics
	{
		struct FutabaActor_eventGetThingsByParameter_Parms
		{
			FString search_parameters;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_search_parameters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsByParameter_Statics::NewProp_search_parameters = { "search_parameters", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThingsByParameter_Parms, search_parameters), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_GetThingsByParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsByParameter_Statics::NewProp_search_parameters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_GetThingsByParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_GetThingsByParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "GetThingsByParameter", nullptr, nullptr, sizeof(FutabaActor_eventGetThingsByParameter_Parms), Z_Construct_UFunction_AFutabaActor_GetThingsByParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetThingsByParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_GetThingsByParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetThingsByParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_GetThingsByParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFutabaActor_GetThingsByParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_GetThingsProperties_Statics
	{
		struct FutabaActor_eventGetThingsProperties_Parms
		{
			FString root_id;
			FString tdid;
			bool use_id_key;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_root_id;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tdid;
		static void NewProp_use_id_key_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_use_id_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsProperties_Statics::NewProp_root_id = { "root_id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThingsProperties_Parms, root_id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsProperties_Statics::NewProp_tdid = { "tdid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThingsProperties_Parms, tdid), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFutabaActor_GetThingsProperties_Statics::NewProp_use_id_key_SetBit(void* Obj)
	{
		((FutabaActor_eventGetThingsProperties_Parms*)Obj)->use_id_key = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsProperties_Statics::NewProp_use_id_key = { "use_id_key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FutabaActor_eventGetThingsProperties_Parms), &Z_Construct_UFunction_AFutabaActor_GetThingsProperties_Statics::NewProp_use_id_key_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_GetThingsProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsProperties_Statics::NewProp_root_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsProperties_Statics::NewProp_tdid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsProperties_Statics::NewProp_use_id_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_GetThingsProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba" },
		{ "CPP_Default_use_id_key", "false" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_GetThingsProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "GetThingsProperties", nullptr, nullptr, sizeof(FutabaActor_eventGetThingsProperties_Parms), Z_Construct_UFunction_AFutabaActor_GetThingsProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetThingsProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_GetThingsProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetThingsProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_GetThingsProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFutabaActor_GetThingsProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_GetThingsProperty_Statics
	{
		struct FutabaActor_eventGetThingsProperty_Parms
		{
			FString root_id;
			FString tdid;
			FString property;
			bool use_id_key;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_root_id;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tdid;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_property;
		static void NewProp_use_id_key_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_use_id_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsProperty_Statics::NewProp_root_id = { "root_id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThingsProperty_Parms, root_id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsProperty_Statics::NewProp_tdid = { "tdid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThingsProperty_Parms, tdid), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsProperty_Statics::NewProp_property = { "property", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventGetThingsProperty_Parms, property), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFutabaActor_GetThingsProperty_Statics::NewProp_use_id_key_SetBit(void* Obj)
	{
		((FutabaActor_eventGetThingsProperty_Parms*)Obj)->use_id_key = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFutabaActor_GetThingsProperty_Statics::NewProp_use_id_key = { "use_id_key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FutabaActor_eventGetThingsProperty_Parms), &Z_Construct_UFunction_AFutabaActor_GetThingsProperty_Statics::NewProp_use_id_key_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_GetThingsProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsProperty_Statics::NewProp_root_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsProperty_Statics::NewProp_tdid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsProperty_Statics::NewProp_property,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_GetThingsProperty_Statics::NewProp_use_id_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_GetThingsProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba" },
		{ "CPP_Default_use_id_key", "false" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_GetThingsProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "GetThingsProperty", nullptr, nullptr, sizeof(FutabaActor_eventGetThingsProperty_Parms), Z_Construct_UFunction_AFutabaActor_GetThingsProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetThingsProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_GetThingsProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_GetThingsProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_GetThingsProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFutabaActor_GetThingsProperty_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Secret;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Access_Token;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Refresh_Token;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetAccessToken_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetAccessToken_Parms, Target), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetAccessToken_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetAccessToken_Parms, Id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetAccessToken_Statics::NewProp_Secret = { "Secret", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetAccessToken_Parms, Secret), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetAccessToken_Statics::NewProp_Access_Token = { "Access_Token", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetAccessToken_Parms, Access_Token), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetAccessToken_Statics::NewProp_Refresh_Token = { "Refresh_Token", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetAccessToken_Parms, Refresh_Token), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_SetAccessToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetAccessToken_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetAccessToken_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetAccessToken_Statics::NewProp_Secret,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetAccessToken_Statics::NewProp_Access_Token,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetAccessToken_Statics::NewProp_Refresh_Token,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_SetAccessToken_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_SetAccessToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "SetAccessToken", nullptr, nullptr, sizeof(FutabaActor_eventSetAccessToken_Parms), Z_Construct_UFunction_AFutabaActor_SetAccessToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetAccessToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_SetAccessToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetAccessToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_SetAccessToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFutabaActor_SetAccessToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_SetAccessTokenByConfigFile_Statics
	{
		struct FutabaActor_eventSetAccessTokenByConfigFile_Parms
		{
			FString ConfigFilePath;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConfigFilePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetAccessTokenByConfigFile_Statics::NewProp_ConfigFilePath = { "ConfigFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetAccessTokenByConfigFile_Parms, ConfigFilePath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_SetAccessTokenByConfigFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetAccessTokenByConfigFile_Statics::NewProp_ConfigFilePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_SetAccessTokenByConfigFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_SetAccessTokenByConfigFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "SetAccessTokenByConfigFile", nullptr, nullptr, sizeof(FutabaActor_eventSetAccessTokenByConfigFile_Parms), Z_Construct_UFunction_AFutabaActor_SetAccessTokenByConfigFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetAccessTokenByConfigFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_SetAccessTokenByConfigFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetAccessTokenByConfigFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_SetAccessTokenByConfigFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFutabaActor_SetAccessTokenByConfigFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_SetAPIURL_Statics
	{
		struct FutabaActor_eventSetAPIURL_Parms
		{
			FString target;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetAPIURL_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetAPIURL_Parms, target), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_SetAPIURL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetAPIURL_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_SetAPIURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba" },
		{ "Comment", "//Auth API\n" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
		{ "ToolTip", "Auth API" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_SetAPIURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "SetAPIURL", nullptr, nullptr, sizeof(FutabaActor_eventSetAPIURL_Parms), Z_Construct_UFunction_AFutabaActor_SetAPIURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetAPIURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_SetAPIURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetAPIURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_SetAPIURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFutabaActor_SetAPIURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_SetThingsProperty_Statics
	{
		struct FutabaActor_eventSetThingsProperty_Parms
		{
			FString root_id;
			FString tdid;
			FString property;
			FString value;
			FString priority;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_root_id;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tdid;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_property;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_priority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsProperty_Statics::NewProp_root_id = { "root_id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsProperty_Parms, root_id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsProperty_Statics::NewProp_tdid = { "tdid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsProperty_Parms, tdid), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsProperty_Statics::NewProp_property = { "property", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsProperty_Parms, property), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsProperty_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsProperty_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFutabaActor_SetThingsProperty_Statics::NewProp_priority = { "priority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaActor_eventSetThingsProperty_Parms, priority), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFutabaActor_SetThingsProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsProperty_Statics::NewProp_root_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsProperty_Statics::NewProp_tdid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsProperty_Statics::NewProp_property,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsProperty_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFutabaActor_SetThingsProperty_Statics::NewProp_priority,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_SetThingsProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba" },
		{ "CPP_Default_priority", "" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_SetThingsProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "SetThingsProperty", nullptr, nullptr, sizeof(FutabaActor_eventSetThingsProperty_Parms), Z_Construct_UFunction_AFutabaActor_SetThingsProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetThingsProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_SetThingsProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_SetThingsProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_SetThingsProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFutabaActor_SetThingsProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFutabaActor_ShowConfiguration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFutabaActor_ShowConfiguration_Statics::Function_MetaDataParams[] = {
		{ "Category", "futaba" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFutabaActor_ShowConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFutabaActor, nullptr, "ShowConfiguration", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFutabaActor_ShowConfiguration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFutabaActor_ShowConfiguration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFutabaActor_ShowConfiguration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFutabaActor_ShowConfiguration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFutabaActor_NoRegister()
	{
		return AFutabaActor::StaticClass();
	}
	struct Z_Construct_UClass_AFutabaActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConnectionTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClientId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientSecret_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClientSecret;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccessToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccessToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefreshToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RefreshToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEventDispather_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEventDispather;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRequestCompleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestCompleted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFutabaActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Futaba,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFutabaActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFutabaActor_GetAccessToken, "GetAccessToken" }, // 564203658
		{ &Z_Construct_UFunction_AFutabaActor_GetMetadagetTelemetryDatata, "GetMetadagetTelemetryDatata" }, // 3879791248
		{ &Z_Construct_UFunction_AFutabaActor_GetThings, "GetThings" }, // 444925777
		{ &Z_Construct_UFunction_AFutabaActor_GetThingsByParameter, "GetThingsByParameter" }, // 2761351048
		{ &Z_Construct_UFunction_AFutabaActor_GetThingsProperties, "GetThingsProperties" }, // 3119257231
		{ &Z_Construct_UFunction_AFutabaActor_GetThingsProperty, "GetThingsProperty" }, // 3624580250
		{ &Z_Construct_UFunction_AFutabaActor_SetAccessToken, "SetAccessToken" }, // 3757787811
		{ &Z_Construct_UFunction_AFutabaActor_SetAccessTokenByConfigFile, "SetAccessTokenByConfigFile" }, // 3535226224
		{ &Z_Construct_UFunction_AFutabaActor_SetAPIURL, "SetAPIURL" }, // 2012281523
		{ &Z_Construct_UFunction_AFutabaActor_SetThingsProperty, "SetThingsProperty" }, // 855950990
		{ &Z_Construct_UFunction_AFutabaActor_ShowConfiguration, "ShowConfiguration" }, // 17573635
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFutabaActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FutabaActor.h" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFutabaActor_Statics::NewProp_ConnectionTarget_MetaData[] = {
		{ "Category", "Futaba" },
		{ "DisplayName", "TargetAPI" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFutabaActor_Statics::NewProp_ConnectionTarget = { "ConnectionTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFutabaActor, ConnectionTarget), METADATA_PARAMS(Z_Construct_UClass_AFutabaActor_Statics::NewProp_ConnectionTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFutabaActor_Statics::NewProp_ConnectionTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFutabaActor_Statics::NewProp_ClientId_MetaData[] = {
		{ "Category", "Futaba" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFutabaActor_Statics::NewProp_ClientId = { "ClientId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFutabaActor, ClientId), METADATA_PARAMS(Z_Construct_UClass_AFutabaActor_Statics::NewProp_ClientId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFutabaActor_Statics::NewProp_ClientId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFutabaActor_Statics::NewProp_ClientSecret_MetaData[] = {
		{ "Category", "Futaba" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFutabaActor_Statics::NewProp_ClientSecret = { "ClientSecret", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFutabaActor, ClientSecret), METADATA_PARAMS(Z_Construct_UClass_AFutabaActor_Statics::NewProp_ClientSecret_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFutabaActor_Statics::NewProp_ClientSecret_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFutabaActor_Statics::NewProp_AccessToken_MetaData[] = {
		{ "Category", "Futaba" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFutabaActor_Statics::NewProp_AccessToken = { "AccessToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFutabaActor, AccessToken), METADATA_PARAMS(Z_Construct_UClass_AFutabaActor_Statics::NewProp_AccessToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFutabaActor_Statics::NewProp_AccessToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFutabaActor_Statics::NewProp_RefreshToken_MetaData[] = {
		{ "Category", "Futaba" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFutabaActor_Statics::NewProp_RefreshToken = { "RefreshToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFutabaActor, RefreshToken), METADATA_PARAMS(Z_Construct_UClass_AFutabaActor_Statics::NewProp_RefreshToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFutabaActor_Statics::NewProp_RefreshToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFutabaActor_Statics::NewProp_OnEventDispather_MetaData[] = {
		{ "Category", "futaba" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFutabaActor_Statics::NewProp_OnEventDispather = { "OnEventDispather", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFutabaActor, OnEventDispather), Z_Construct_UDelegateFunction_Futaba_FutabaOnEventDispather__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFutabaActor_Statics::NewProp_OnEventDispather_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFutabaActor_Statics::NewProp_OnEventDispather_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFutabaActor_Statics::NewProp_OnRequestCompleted_MetaData[] = {
		{ "Category", "futaba" },
		{ "ModuleRelativePath", "Public/FutabaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFutabaActor_Statics::NewProp_OnRequestCompleted = { "OnRequestCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFutabaActor, OnRequestCompleted), Z_Construct_UDelegateFunction_Futaba_OnHttpRequestCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFutabaActor_Statics::NewProp_OnRequestCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFutabaActor_Statics::NewProp_OnRequestCompleted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFutabaActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFutabaActor_Statics::NewProp_ConnectionTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFutabaActor_Statics::NewProp_ClientId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFutabaActor_Statics::NewProp_ClientSecret,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFutabaActor_Statics::NewProp_AccessToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFutabaActor_Statics::NewProp_RefreshToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFutabaActor_Statics::NewProp_OnEventDispather,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFutabaActor_Statics::NewProp_OnRequestCompleted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFutabaActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFutabaActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFutabaActor_Statics::ClassParams = {
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFutabaActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFutabaActor, 1512514628);
	template<> FUTABA_API UClass* StaticClass<AFutabaActor>()
	{
		return AFutabaActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFutabaActor(Z_Construct_UClass_AFutabaActor, &AFutabaActor::StaticClass, TEXT("/Script/Futaba"), TEXT("AFutabaActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFutabaActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
