// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFutaba_init() {}
	FUTABA_API UFunction* Z_Construct_UDelegateFunction_AFutabaActor_FutabaOnEventDispather__DelegateSignature();
	FUTABA_API UFunction* Z_Construct_UDelegateFunction_AFutabaActor_OnHttpRequestCompleted__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Futaba;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Futaba()
	{
		if (!Z_Registration_Info_UPackage__Script_Futaba.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AFutabaActor_FutabaOnEventDispather__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AFutabaActor_OnHttpRequestCompleted__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Futaba",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x8CA96C3E,
				0x85E9ED1E,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Futaba.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Futaba.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Futaba(Z_Construct_UPackage__Script_Futaba, TEXT("/Script/Futaba"), Z_Registration_Info_UPackage__Script_Futaba, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8CA96C3E, 0x85E9ED1E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
