// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "FutabaBPLibrary.generated.h"


UENUM(BlueprintType)
enum class SearchParametersCondition : uint8
{
	SP_None UMETA(DisplayName = "None"),
	SP_or UMETA(DisplayName = "OR"),
	SP_and UMETA(DisplayName = "AND"),
	SP_startswith UMETA(DisplayName = "Startswith")
};

UCLASS()
class UFutabaBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UPROPERTY(BlueprintReadWrite, DisplayName = "Search Parameters Condition", Category = FutabaUtility)
		SearchParametersCondition Condition;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Execute Sample function", Keywords = "Futaba sample test testing"), Category = "FutabaTesting")
		static float FutabaSampleFunction(float Param);

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (Keywords = "Futaba utility"), Category = "FutabaUtility")
		static FString GenerateSearchParameters(TArray<FString> items, TEnumAsByte<SearchParametersCondition> logic);

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (Keywords = "Futaba utility", AdvancedDisplay = 3), Category = "FutabaUtility")
		static FString GenerateParameterWithFilter(FString TargetBuilding, bool IncludeMetadata, FString TwinTitleFilter, FString GlobalIdFilter, FString TwinTagFilter, FString TwinPathFilter, FString TwinModelIdFilter, FString DtIdFilter);

};
