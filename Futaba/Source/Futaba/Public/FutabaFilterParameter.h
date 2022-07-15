// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FutabaFilterParameter.generated.h"

USTRUCT(BlueprintType)
struct FFutabaFilterParameter 
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
		FString JsonString;

};