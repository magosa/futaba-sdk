// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Futaba/Public/FutabaFilterParameter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFutabaFilterParameter() {}
// Cross Module References
	FUTABA_API UScriptStruct* Z_Construct_UScriptStruct_FFutabaFilterParameter();
	UPackage* Z_Construct_UPackage__Script_Futaba();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FutabaFilterParameter;
class UScriptStruct* FFutabaFilterParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FutabaFilterParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FutabaFilterParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFutabaFilterParameter, Z_Construct_UPackage__Script_Futaba(), TEXT("FutabaFilterParameter"));
	}
	return Z_Registration_Info_UScriptStruct_FutabaFilterParameter.OuterSingleton;
}
template<> FUTABA_API UScriptStruct* StaticStruct<FFutabaFilterParameter>()
{
	return FFutabaFilterParameter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFutabaFilterParameter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFutabaFilterParameter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FutabaFilterParameter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFutabaFilterParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFutabaFilterParameter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFutabaFilterParameter_Statics::NewProp_JsonString_MetaData[] = {
		{ "Category", "FutabaFilterParameter" },
		{ "ModuleRelativePath", "Public/FutabaFilterParameter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFutabaFilterParameter_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFutabaFilterParameter, JsonString), METADATA_PARAMS(Z_Construct_UScriptStruct_FFutabaFilterParameter_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFutabaFilterParameter_Statics::NewProp_JsonString_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFutabaFilterParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFutabaFilterParameter_Statics::NewProp_JsonString,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFutabaFilterParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Futaba,
		nullptr,
		&NewStructOps,
		"FutabaFilterParameter",
		sizeof(FFutabaFilterParameter),
		alignof(FFutabaFilterParameter),
		Z_Construct_UScriptStruct_FFutabaFilterParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFutabaFilterParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFutabaFilterParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFutabaFilterParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFutabaFilterParameter()
	{
		if (!Z_Registration_Info_UScriptStruct_FutabaFilterParameter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FutabaFilterParameter.InnerSingleton, Z_Construct_UScriptStruct_FFutabaFilterParameter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FutabaFilterParameter.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaFilterParameter_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaFilterParameter_h_Statics::ScriptStructInfo[] = {
		{ FFutabaFilterParameter::StaticStruct, Z_Construct_UScriptStruct_FFutabaFilterParameter_Statics::NewStructOps, TEXT("FutabaFilterParameter"), &Z_Registration_Info_UScriptStruct_FutabaFilterParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFutabaFilterParameter), 1385462648U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaFilterParameter_h_369203784(TEXT("/Script/Futaba"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaFilterParameter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaFilterParameter_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
