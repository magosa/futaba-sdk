// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFutaba_init() {}
	FUTABA_API UFunction* Z_Construct_UDelegateFunction_Futaba_FutabaOnEventDispather__DelegateSignature();
	FUTABA_API UFunction* Z_Construct_UDelegateFunction_Futaba_OnHttpRequestCompleted__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Futaba()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Futaba_FutabaOnEventDispather__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Futaba_OnHttpRequestCompleted__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/Futaba",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xB258C7EB,
				0x1E72AD7F,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
