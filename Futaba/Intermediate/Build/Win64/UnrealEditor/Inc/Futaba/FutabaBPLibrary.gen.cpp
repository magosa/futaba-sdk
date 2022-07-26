// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Futaba/Public/FutabaBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFutabaBPLibrary() {}
// Cross Module References
	FUTABA_API UEnum* Z_Construct_UEnum_Futaba_SearchParametersCondition();
	UPackage* Z_Construct_UPackage__Script_Futaba();
	FUTABA_API UClass* Z_Construct_UClass_UFutabaBPLibrary_NoRegister();
	FUTABA_API UClass* Z_Construct_UClass_UFutabaBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_SearchParametersCondition;
	static UEnum* SearchParametersCondition_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_SearchParametersCondition.OuterSingleton)
		{
			Z_Registration_Info_UEnum_SearchParametersCondition.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Futaba_SearchParametersCondition, Z_Construct_UPackage__Script_Futaba(), TEXT("SearchParametersCondition"));
		}
		return Z_Registration_Info_UEnum_SearchParametersCondition.OuterSingleton;
	}
	template<> FUTABA_API UEnum* StaticEnum<SearchParametersCondition>()
	{
		return SearchParametersCondition_StaticEnum();
	}
	struct Z_Construct_UEnum_Futaba_SearchParametersCondition_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Futaba_SearchParametersCondition_Statics::Enumerators[] = {
		{ "SearchParametersCondition::SP_None", (int64)SearchParametersCondition::SP_None },
		{ "SearchParametersCondition::SP_or", (int64)SearchParametersCondition::SP_or },
		{ "SearchParametersCondition::SP_and", (int64)SearchParametersCondition::SP_and },
		{ "SearchParametersCondition::SP_startswith", (int64)SearchParametersCondition::SP_startswith },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Futaba_SearchParametersCondition_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FutabaBPLibrary.h" },
		{ "SP_and.DisplayName", "AND" },
		{ "SP_and.Name", "SearchParametersCondition::SP_and" },
		{ "SP_None.DisplayName", "None" },
		{ "SP_None.Name", "SearchParametersCondition::SP_None" },
		{ "SP_or.DisplayName", "OR" },
		{ "SP_or.Name", "SearchParametersCondition::SP_or" },
		{ "SP_startswith.DisplayName", "Startswith" },
		{ "SP_startswith.Name", "SearchParametersCondition::SP_startswith" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Futaba_SearchParametersCondition_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Futaba,
		nullptr,
		"SearchParametersCondition",
		"SearchParametersCondition",
		Z_Construct_UEnum_Futaba_SearchParametersCondition_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Futaba_SearchParametersCondition_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Futaba_SearchParametersCondition_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Futaba_SearchParametersCondition_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Futaba_SearchParametersCondition()
	{
		if (!Z_Registration_Info_UEnum_SearchParametersCondition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_SearchParametersCondition.InnerSingleton, Z_Construct_UEnum_Futaba_SearchParametersCondition_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_SearchParametersCondition.InnerSingleton;
	}
	DEFINE_FUNCTION(UFutabaBPLibrary::execGenerateParameterWithFilter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TargetBuilding);
		P_GET_UBOOL(Z_Param_IncludeMetadata);
		P_GET_PROPERTY(FStrProperty,Z_Param_TwinTitleFilter);
		P_GET_PROPERTY(FStrProperty,Z_Param_GlobalIdFilter);
		P_GET_PROPERTY(FStrProperty,Z_Param_TwinTagFilter);
		P_GET_PROPERTY(FStrProperty,Z_Param_TwinPathFilter);
		P_GET_PROPERTY(FStrProperty,Z_Param_TwinModelIdFilter);
		P_GET_PROPERTY(FStrProperty,Z_Param_DtIdFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFutabaBPLibrary::GenerateParameterWithFilter(Z_Param_TargetBuilding,Z_Param_IncludeMetadata,Z_Param_TwinTitleFilter,Z_Param_GlobalIdFilter,Z_Param_TwinTagFilter,Z_Param_TwinPathFilter,Z_Param_TwinModelIdFilter,Z_Param_DtIdFilter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFutabaBPLibrary::execGenerateSearchParameters)
	{
		P_GET_TARRAY(FString,Z_Param_items);
		P_GET_ENUM(SearchParametersCondition,Z_Param_logic);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFutabaBPLibrary::GenerateSearchParameters(Z_Param_items,SearchParametersCondition(Z_Param_logic));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFutabaBPLibrary::execFutabaSampleFunction)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UFutabaBPLibrary::FutabaSampleFunction(Z_Param_Param);
		P_NATIVE_END;
	}
	void UFutabaBPLibrary::StaticRegisterNativesUFutabaBPLibrary()
	{
		UClass* Class = UFutabaBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FutabaSampleFunction", &UFutabaBPLibrary::execFutabaSampleFunction },
			{ "GenerateParameterWithFilter", &UFutabaBPLibrary::execGenerateParameterWithFilter },
			{ "GenerateSearchParameters", &UFutabaBPLibrary::execGenerateSearchParameters },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFutabaBPLibrary_FutabaSampleFunction_Statics
	{
		struct FutabaBPLibrary_eventFutabaSampleFunction_Parms
		{
			float Param;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Param;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFutabaBPLibrary_FutabaSampleFunction_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaBPLibrary_eventFutabaSampleFunction_Parms, Param), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFutabaBPLibrary_FutabaSampleFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaBPLibrary_eventFutabaSampleFunction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFutabaBPLibrary_FutabaSampleFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFutabaBPLibrary_FutabaSampleFunction_Statics::NewProp_Param,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFutabaBPLibrary_FutabaSampleFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFutabaBPLibrary_FutabaSampleFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "FutabaTesting" },
		{ "DisplayName", "Execute Sample function" },
		{ "Keywords", "Futaba sample test testing" },
		{ "ModuleRelativePath", "Public/FutabaBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFutabaBPLibrary_FutabaSampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFutabaBPLibrary, nullptr, "FutabaSampleFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFutabaBPLibrary_FutabaSampleFunction_Statics::FutabaBPLibrary_eventFutabaSampleFunction_Parms), Z_Construct_UFunction_UFutabaBPLibrary_FutabaSampleFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFutabaBPLibrary_FutabaSampleFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFutabaBPLibrary_FutabaSampleFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFutabaBPLibrary_FutabaSampleFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFutabaBPLibrary_FutabaSampleFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFutabaBPLibrary_FutabaSampleFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFutabaBPLibrary_GenerateParameterWithFilter_Statics
	{
		struct FutabaBPLibrary_eventGenerateParameterWithFilter_Parms
		{
			FString TargetBuilding;
			bool IncludeMetadata;
			FString TwinTitleFilter;
			FString GlobalIdFilter;
			FString TwinTagFilter;
			FString TwinPathFilter;
			FString TwinModelIdFilter;
			FString DtIdFilter;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetBuilding;
		static void NewProp_IncludeMetadata_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludeMetadata;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TwinTitleFilter;
		static const UECodeGen_Private::FStrPropertyParams NewProp_GlobalIdFilter;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TwinTagFilter;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TwinPathFilter;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TwinModelIdFilter;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DtIdFilter;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFutabaBPLibrary_GenerateParameterWithFilter_Statics::NewProp_TargetBuilding = { "TargetBuilding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaBPLibrary_eventGenerateParameterWithFilter_Parms, TargetBuilding), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFutabaBPLibrary_GenerateParameterWithFilter_Statics::NewProp_IncludeMetadata_SetBit(void* Obj)
	{
		((FutabaBPLibrary_eventGenerateParameterWithFilter_Parms*)Obj)->IncludeMetadata = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFutabaBPLibrary_GenerateParameterWithFilter_Statics::NewProp_IncludeMetadata = { "IncludeMetadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FutabaBPLibrary_eventGenerateParameterWithFilter_Parms), &Z_Construct_UFunction_UFutabaBPLibrary_GenerateParameterWithFilter_Statics::NewProp_IncludeMetadata_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFutabaBPLibrary_GenerateParameterWithFilter_Statics::NewProp_TwinTitleFilter = { "TwinTitleFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaBPLibrary_eventGenerateParameterWithFilter_Parms, TwinTitleFilter), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFutabaBPLibrary_GenerateParameterWithFilter_Statics::NewProp_GlobalIdFilter = { "GlobalIdFilter", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaBPLibrary_eventGenerateParameterWithFilter_Parms, GlobalIdFilter), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFutabaBPLibrary_GenerateParameterWithFilter_Statics::NewProp_TwinTagFilter = { "TwinTagFilter", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaBPLibrary_eventGenerateParameterWithFilter_Parms, TwinTagFilter), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFutabaBPLibrary_GenerateParameterWithFilter_Statics::NewProp_TwinPathFilter = { "TwinPathFilter", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaBPLibrary_eventGenerateParameterWithFilter_Parms, TwinPathFilter), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFutabaBPLibrary_GenerateParameterWithFilter_Statics::NewProp_TwinModelIdFilter = { "TwinModelIdFilter", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaBPLibrary_eventGenerateParameterWithFilter_Parms, TwinModelIdFilter), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFutabaBPLibrary_GenerateParameterWithFilter_Statics::NewProp_DtIdFilter = { "DtIdFilter", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaBPLibrary_eventGenerateParameterWithFilter_Parms, DtIdFilter), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFutabaBPLibrary_GenerateParameterWithFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaBPLibrary_eventGenerateParameterWithFilter_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFutabaBPLibrary_GenerateParameterWithFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFutabaBPLibrary_GenerateParameterWithFilter_Statics::NewProp_TargetBuilding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFutabaBPLibrary_GenerateParameterWithFilter_Statics::NewProp_IncludeMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFutabaBPLibrary_GenerateParameterWithFilter_Statics::NewProp_TwinTitleFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFutabaBPLibrary_GenerateParameterWithFilter_Statics::NewProp_GlobalIdFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFutabaBPLibrary_GenerateParameterWithFilter_Statics::NewProp_TwinTagFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFutabaBPLibrary_GenerateParameterWithFilter_Statics::NewProp_TwinPathFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFutabaBPLibrary_GenerateParameterWithFilter_Statics::NewProp_TwinModelIdFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFutabaBPLibrary_GenerateParameterWithFilter_Statics::NewProp_DtIdFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFutabaBPLibrary_GenerateParameterWithFilter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFutabaBPLibrary_GenerateParameterWithFilter_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "FutabaUtility" },
		{ "Keywords", "Futaba utility" },
		{ "ModuleRelativePath", "Public/FutabaBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFutabaBPLibrary_GenerateParameterWithFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFutabaBPLibrary, nullptr, "GenerateParameterWithFilter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFutabaBPLibrary_GenerateParameterWithFilter_Statics::FutabaBPLibrary_eventGenerateParameterWithFilter_Parms), Z_Construct_UFunction_UFutabaBPLibrary_GenerateParameterWithFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFutabaBPLibrary_GenerateParameterWithFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFutabaBPLibrary_GenerateParameterWithFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFutabaBPLibrary_GenerateParameterWithFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFutabaBPLibrary_GenerateParameterWithFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFutabaBPLibrary_GenerateParameterWithFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFutabaBPLibrary_GenerateSearchParameters_Statics
	{
		struct FutabaBPLibrary_eventGenerateSearchParameters_Parms
		{
			TArray<FString> items;
			SearchParametersCondition logic;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_items_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_items;
		static const UECodeGen_Private::FBytePropertyParams NewProp_logic_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_logic;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFutabaBPLibrary_GenerateSearchParameters_Statics::NewProp_items_Inner = { "items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFutabaBPLibrary_GenerateSearchParameters_Statics::NewProp_items = { "items", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaBPLibrary_eventGenerateSearchParameters_Parms, items), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFutabaBPLibrary_GenerateSearchParameters_Statics::NewProp_logic_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFutabaBPLibrary_GenerateSearchParameters_Statics::NewProp_logic = { "logic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaBPLibrary_eventGenerateSearchParameters_Parms, logic), Z_Construct_UEnum_Futaba_SearchParametersCondition, METADATA_PARAMS(nullptr, 0) }; // 708694631
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFutabaBPLibrary_GenerateSearchParameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FutabaBPLibrary_eventGenerateSearchParameters_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFutabaBPLibrary_GenerateSearchParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFutabaBPLibrary_GenerateSearchParameters_Statics::NewProp_items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFutabaBPLibrary_GenerateSearchParameters_Statics::NewProp_items,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFutabaBPLibrary_GenerateSearchParameters_Statics::NewProp_logic_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFutabaBPLibrary_GenerateSearchParameters_Statics::NewProp_logic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFutabaBPLibrary_GenerateSearchParameters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFutabaBPLibrary_GenerateSearchParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "FutabaUtility" },
		{ "Keywords", "Futaba utility" },
		{ "ModuleRelativePath", "Public/FutabaBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFutabaBPLibrary_GenerateSearchParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFutabaBPLibrary, nullptr, "GenerateSearchParameters", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFutabaBPLibrary_GenerateSearchParameters_Statics::FutabaBPLibrary_eventGenerateSearchParameters_Parms), Z_Construct_UFunction_UFutabaBPLibrary_GenerateSearchParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFutabaBPLibrary_GenerateSearchParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFutabaBPLibrary_GenerateSearchParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFutabaBPLibrary_GenerateSearchParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFutabaBPLibrary_GenerateSearchParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFutabaBPLibrary_GenerateSearchParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFutabaBPLibrary);
	UClass* Z_Construct_UClass_UFutabaBPLibrary_NoRegister()
	{
		return UFutabaBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFutabaBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Condition_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Condition_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Condition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFutabaBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Futaba,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFutabaBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFutabaBPLibrary_FutabaSampleFunction, "FutabaSampleFunction" }, // 76321273
		{ &Z_Construct_UFunction_UFutabaBPLibrary_GenerateParameterWithFilter, "GenerateParameterWithFilter" }, // 40859876
		{ &Z_Construct_UFunction_UFutabaBPLibrary_GenerateSearchParameters, "GenerateSearchParameters" }, // 3977425099
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFutabaBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FutabaBPLibrary.h" },
		{ "ModuleRelativePath", "Public/FutabaBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFutabaBPLibrary_Statics::NewProp_Condition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFutabaBPLibrary_Statics::NewProp_Condition_MetaData[] = {
		{ "Category", "FutabaUtility" },
		{ "DisplayName", "Search Parameters Condition" },
		{ "ModuleRelativePath", "Public/FutabaBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFutabaBPLibrary_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFutabaBPLibrary, Condition), Z_Construct_UEnum_Futaba_SearchParametersCondition, METADATA_PARAMS(Z_Construct_UClass_UFutabaBPLibrary_Statics::NewProp_Condition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFutabaBPLibrary_Statics::NewProp_Condition_MetaData)) }; // 708694631
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFutabaBPLibrary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFutabaBPLibrary_Statics::NewProp_Condition_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFutabaBPLibrary_Statics::NewProp_Condition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFutabaBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFutabaBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFutabaBPLibrary_Statics::ClassParams = {
		&UFutabaBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFutabaBPLibrary_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFutabaBPLibrary_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFutabaBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFutabaBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFutabaBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UFutabaBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFutabaBPLibrary.OuterSingleton, Z_Construct_UClass_UFutabaBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFutabaBPLibrary.OuterSingleton;
	}
	template<> FUTABA_API UClass* StaticClass<UFutabaBPLibrary>()
	{
		return UFutabaBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFutabaBPLibrary);
	struct Z_CompiledInDeferFile_FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaBPLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaBPLibrary_h_Statics::EnumInfo[] = {
		{ SearchParametersCondition_StaticEnum, TEXT("SearchParametersCondition"), &Z_Registration_Info_UEnum_SearchParametersCondition, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 708694631U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFutabaBPLibrary, UFutabaBPLibrary::StaticClass, TEXT("UFutabaBPLibrary"), &Z_Registration_Info_UClass_UFutabaBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFutabaBPLibrary), 1911722793U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaBPLibrary_h_2032342204(TEXT("/Script/Futaba"),
		Z_CompiledInDeferFile_FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaBPLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FutabaSDK_Plugins_Futaba_Source_Futaba_Public_FutabaBPLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
