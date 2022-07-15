// Copyright Epic Games, Inc. All Rights Reserved.

#include "FutabaBPLibrary.h"
#include "Futaba.h"

UFutabaBPLibrary::UFutabaBPLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

float UFutabaBPLibrary::FutabaSampleFunction(float Param)
{
	return -1;
}

FString UFutabaBPLibrary::GenerateSearchParameters(TArray<FString> items, TEnumAsByte<SearchParametersCondition> logic)
{
	TArray<TSharedPtr<FJsonValue>> JsonItems;
	for (FString item : items)
	{
		JsonItems.Add(MakeShareable(new FJsonValueString(item)));
	}
	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
	JsonObject->SetArrayField(TEXT("values"), JsonItems);

	switch (logic)
	{
	case SearchParametersCondition::SP_or:
		JsonObject->SetStringField(TEXT("condition"), TEXT("or"));
		break;
	case SearchParametersCondition::SP_and:
		JsonObject->SetStringField(TEXT("condition"), TEXT("and"));
		break;
	case SearchParametersCondition::SP_startswith:
		JsonObject->SetStringField(TEXT("condition"), TEXT("startswith"));
		break;
	default:
		break;
	}

	FString JsonString;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonString);
	FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);

	return JsonString;
}

FString UFutabaBPLibrary::GenerateParameterWithFilter(FString TargetBuilding, bool IncludeMetadata, FString TwinTitleFilter, FString GlobalIdFilter, FString TwinTagFilter, FString TwinPathFilter, FString TwinModelIdFilter, FString DtIdFilter)
{
	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
	TArray<TSharedPtr<FJsonValue>> Buildings;
	Buildings.Add(MakeShareable(new FJsonValueString(TargetBuilding)));
	JsonObject->SetArrayField(TEXT("root"), Buildings);
	JsonObject->SetStringField(TEXT("type"), TEXT("filter"));
	TSharedPtr<FJsonObject> FilterObject = MakeShareable(new FJsonObject());
	if (TwinTitleFilter.Len() > 0)
	{
		TSharedPtr<FJsonObject> FilterJson = MakeShareable(new FJsonObject());
		TSharedRef<TJsonReader<>> JsonReader = TJsonReaderFactory<>::Create(TwinTitleFilter);
		if (FJsonSerializer::Deserialize(JsonReader, FilterJson))
		{
			FilterObject->SetObjectField(TEXT("title"), FilterJson);
		}
	}
	if (GlobalIdFilter.Len() > 0)
	{
		TSharedPtr<FJsonObject> FilterJson = MakeShareable(new FJsonObject());
		TSharedRef<TJsonReader<>> JsonReader = TJsonReaderFactory<>::Create(GlobalIdFilter);
		if (FJsonSerializer::Deserialize(JsonReader, FilterJson))
		{
			FilterObject->SetObjectField(TEXT("globalId"), FilterJson);
		}
	}
	if (TwinTagFilter.Len() > 0)
	{
		TSharedPtr<FJsonObject> FilterJson = MakeShareable(new FJsonObject());
		TSharedRef<TJsonReader<>> JsonReader = TJsonReaderFactory<>::Create(TwinTagFilter);
		if (FJsonSerializer::Deserialize(JsonReader, FilterJson))
		{
			FilterObject->SetObjectField(TEXT("tags"), FilterJson);
		}
	}
	if (TwinPathFilter.Len() > 0)
	{
		TSharedPtr<FJsonObject> FilterJson = MakeShareable(new FJsonObject());
		TSharedRef<TJsonReader<>> JsonReader = TJsonReaderFactory<>::Create(TwinPathFilter);
		if (FJsonSerializer::Deserialize(JsonReader, FilterJson))
		{
			FilterObject->SetObjectField(TEXT("path"), FilterJson);
		}
	}
	if (TwinModelIdFilter.Len() > 0)
	{
		TSharedPtr<FJsonObject> FilterJson = MakeShareable(new FJsonObject());
		TSharedRef<TJsonReader<>> JsonReader = TJsonReaderFactory<>::Create(TwinModelIdFilter);
		if (FJsonSerializer::Deserialize(JsonReader, FilterJson))
		{
			FilterObject->SetObjectField(TEXT("model"), FilterJson);
		}
	}
	if (DtIdFilter.Len() > 0)
	{
		TSharedPtr<FJsonObject> FilterJson = MakeShareable(new FJsonObject());
		TSharedRef<TJsonReader<>> JsonReader = TJsonReaderFactory<>::Create(DtIdFilter);
		if (FJsonSerializer::Deserialize(JsonReader, FilterJson))
		{
			FilterObject->SetObjectField(TEXT("dtId"), FilterJson);
		}
	}
	JsonObject->SetObjectField(TEXT("filter"), FilterObject);
	JsonObject->SetBoolField(TEXT("includeMetadata"), IncludeMetadata);

	FString JsonString;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonString);
	FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);

	return JsonString;
};