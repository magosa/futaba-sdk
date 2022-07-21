// Fill out your copyright notice in the Description page of Project Settings.


#include "FutabaActor.h"

// Sets default values
AFutabaActor::AFutabaActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Http = &FHttpModule::Get();

}

// Called when the game starts or when spawned
void AFutabaActor::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AFutabaActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AFutabaActor::SetAPIURL(FString target)
{
	AFutabaActor::HostAuth = target + "-dev-app-auth.azurewebsites.net";
	AFutabaActor::HostHot = target + "-dev-app-hot.azurewebsites.net";
	AFutabaActor::HostCold = target + "-dev-app-cold.azurewebsites.net";
	AFutabaActor::HostCommon = target + "-dev-app-extapi.azurewebsites.net";
	AFutabaActor::HostStream = target + "-dev-app-stream.azurewebsites.net";
}

TSharedRef<IHttpRequest, ESPMode::ThreadSafe> AFutabaActor::MakeRequestHeader(FString request_url, FString request_method)
{
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = AFutabaActor::Http->CreateRequest();
	Request->SetURL(request_url);
	Request->SetVerb(request_method);
	Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
	Request->SetHeader(TEXT("X-DTDPF-CLIENT-ID"), AFutabaActor::ClientId);
	Request->SetHeader(TEXT("X-DTDPF-ACCESS-TOKEN"), AFutabaActor::AccessToken);

	return Request;
}

//Configuration Management API

FString AFutabaActor::GetAccessToken(FString ConfigFilePath, FutabaRequestStatus& FutabaStatus)
{
	FString JsonFullPath;

	if (ConfigFilePath.Len() > 0)
	{
		JsonFullPath = ConfigFilePath;
	}
	else
	{
		JsonFullPath = FPaths::ProjectPluginsDir().Append("Futaba/Content/config.json");
	}

	FString Message = "";
	FutabaStatus = FutabaRequestStatus::User_Error;

	auto LoadError = [&JsonFullPath, &FutabaStatus, &Message]()
	{
		Message = "Failed load json file";
		UE_LOG(LogTemp, Error, TEXT("Failed LoadJson : %s"), *JsonFullPath);
		return nullptr;
	};

	FString loadFileString;
	if (FFileHelper::LoadFileToString(loadFileString, *JsonFullPath) == false)
	{
		Message = "Failed convert json file to FString";
		LoadError();
	}

	const TSharedRef<TJsonReader<>> JsonReader = TJsonReaderFactory<TCHAR>::Create(loadFileString);
	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());


	if (FJsonSerializer::Deserialize(JsonReader, JsonObject) && JsonObject.IsValid())
	{
		AFutabaActor::SetAPIURL(JsonObject->GetStringField("target_api"));

		// Create HTTP Request
		TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = AFutabaActor::Http->CreateRequest();
		Request->SetURL("https://" + AFutabaActor::HostAuth + "/api/token");

		if (!JsonObject->GetStringField("refresh_token").IsEmpty())
		{
			Request->SetVerb("PATCH");
			Request->SetHeader(TEXT("X-DTDPF-CLIENT-REFRESHTOKEN"), JsonObject->GetStringField("refresh_token"));
			Request->SetHeader(TEXT("X-DTDPF-GRANT-TYPE"), TEXT("refresh_token"));
		}
		else
		{
			Request->SetVerb("POST");
			Request->SetHeader(TEXT("X-DTDPF-GRANT-TYPE"), TEXT("client_credentials"));
		}

		Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
		Request->SetHeader(TEXT("X-DTDPF-CLIENT-ID"), JsonObject->GetStringField("client_id"));
		Request->SetHeader(TEXT("X-DTDPF-CLIENT-SECRET"), JsonObject->GetStringField("client_secret"));

		// Response from API
		TSharedPtr<FJsonObject> ResponseJson = MakeShareable(new FJsonObject());
		Request->OnProcessRequestComplete().BindLambda([&](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful) {
			Message = Response->GetContentAsString();
			TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Message);
			// Jsonオブジェクトをデシリアライズ
			if (bWasSuccessful && Response->GetResponseCode() >= 200 && Response->GetResponseCode() < 300 && FJsonSerializer::Deserialize(Reader, ResponseJson))
			{
				AFutabaActor::ClientId = JsonObject->GetStringField("client_id");
				AFutabaActor::ClientSecret = JsonObject->GetStringField("client_secret");
				AFutabaActor::AccessToken = ResponseJson->GetStringField("accessToken");
				AFutabaActor::RefreshToken = ResponseJson->GetStringField("refreshToken");

				TSharedPtr<FJsonObject> Buffer = MakeShareable(new FJsonObject);
				Buffer->SetStringField("target_api", JsonObject->GetStringField("target_api"));
				Buffer->SetStringField("client_id", AFutabaActor::ClientId);
				Buffer->SetStringField("client_secret", AFutabaActor::ClientSecret);
				Buffer->SetStringField("access_token", AFutabaActor::AccessToken);
				Buffer->SetStringField("refresh_token", AFutabaActor::RefreshToken);

				// Create writer for file out
				FString OutPutString;
				TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutPutString);

				// Write json object into FString
				FJsonSerializer::Serialize(Buffer.ToSharedRef(), Writer);
				FFileHelper::SaveStringToFile(OutPutString, *JsonFullPath);

				FutabaStatus = FutabaRequestStatus::Success;
			}
			else if (Response->GetResponseCode() >= 500)
			{
				FutabaStatus = FutabaRequestStatus::Platform_Error;
			}
			else
			{
				FutabaStatus = FutabaRequestStatus::User_Error;
			}});
		Request->ProcessRequest();
		FHttpModule::Get().GetHttpManager().Flush(false);

	}
	return Message;
}

void AFutabaActor::GetAccessTokenLatent(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString ConfigFilePath, FString& contentString, int32& statusCode, FutabaRequestStatus& futabaStatus)
{
	FString JsonFullPath;

	if (ConfigFilePath.Len() > 0)
	{
		JsonFullPath = ConfigFilePath;
	}
	else
	{
		JsonFullPath = FPaths::ProjectPluginsDir().Append("Futaba/Content/config.json");
	}

	futabaStatus = FutabaRequestStatus::User_Error;

	auto LoadError = [&JsonFullPath, &futabaStatus, &contentString]()
	{
		contentString = "Failed load json file";
		UE_LOG(LogTemp, Error, TEXT("Failed LoadJson : %s"), *JsonFullPath);
		return nullptr;
	};

	FString loadFileString;
	if (FFileHelper::LoadFileToString(loadFileString, *JsonFullPath) == false)
	{
		contentString = "Failed convert json file to FString";
		LoadError();
	}

	const TSharedRef<TJsonReader<>> JsonReader = TJsonReaderFactory<TCHAR>::Create(loadFileString);
	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());


	if (FJsonSerializer::Deserialize(JsonReader, JsonObject) && JsonObject.IsValid())
	{
		AFutabaActor::SetAPIURL(JsonObject->GetStringField("target_api"));

		// Create HTTP Request
		TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = AFutabaActor::Http->CreateRequest();
		Request->SetURL("https://" + AFutabaActor::HostAuth + "/api/token");

		if (!JsonObject->GetStringField("refresh_token").IsEmpty())
		{
			Request->SetVerb("PATCH");
			Request->SetHeader(TEXT("X-DTDPF-CLIENT-REFRESHTOKEN"), JsonObject->GetStringField("refresh_token"));
			Request->SetHeader(TEXT("X-DTDPF-GRANT-TYPE"), TEXT("refresh_token"));
		}
		else
		{
			Request->SetVerb("POST");
			Request->SetHeader(TEXT("X-DTDPF-GRANT-TYPE"), TEXT("client_credentials"));
		}

		Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
		Request->SetHeader(TEXT("X-DTDPF-CLIENT-ID"), JsonObject->GetStringField("client_id"));
		Request->SetHeader(TEXT("X-DTDPF-CLIENT-SECRET"), JsonObject->GetStringField("client_secret"));
		this->ClientId = JsonObject->GetStringField("client_id");
		this->ClientSecret = JsonObject->GetStringField("client_secret");
		if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
		{
			FLatentActionManager& LatentActionManager = World->GetLatentActionManager();
			LatentActionManager.AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, new FRequestTokenManager(LatentInfo, Request, this->AccessToken, this->RefreshToken, futabaStatus, statusCode, contentString));
		}
	}
}

void AFutabaActor::SetAccessTokenByConfigFile(FString ConfigFilePath)
{
	FString JsonFullPath;

	if (ConfigFilePath.Len() > 0)
	{
		JsonFullPath = ConfigFilePath;
	}
	else
	{
		JsonFullPath = FPaths::ProjectPluginsDir().Append("Futaba/Content/config.json");
	}

	auto LoadError = [&JsonFullPath]()
	{
		UE_LOG(LogTemp, Error, TEXT("Failed LoadJson : %s"), *JsonFullPath);
		return nullptr;
	};

	FString loadFileString;
	if (FFileHelper::LoadFileToString(loadFileString, *JsonFullPath) == false)
	{
		LoadError();
	}

	const auto JsonReader = TJsonReaderFactory<TCHAR>::Create(loadFileString);
	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());

	if (FJsonSerializer::Deserialize(JsonReader, JsonObject) && JsonObject.IsValid())
	{

		if (JsonObject->HasField("access_token") && JsonObject->HasField("refresh_token"))
		{
			AFutabaActor::SetAPIURL(JsonObject->GetStringField("target_api"));
			AFutabaActor::ClientId = JsonObject->GetStringField("client_id");
			AFutabaActor::ClientSecret = JsonObject->GetStringField("client_secret");
			AFutabaActor::AccessToken = JsonObject->GetStringField("access_token");
			AFutabaActor::RefreshToken = JsonObject->GetStringField("refresh_token");
		}
		else
		{
			LoadError();
		}
	}
	else
	{
		LoadError();
	}
}

void AFutabaActor::SetAccessToken(FString Target, FString Id, FString Secret, FString Access_Token, FString Refresh_Token)
{
	if (!Target.IsEmpty())
	{
		AFutabaActor::SetAPIURL(Target);
	}

	if (!Id.IsEmpty())
	{
		AFutabaActor::ClientId = Id;
	}

	if (!Secret.IsEmpty())
	{
		AFutabaActor::ClientSecret = Secret;
	}

	if (!Access_Token.IsEmpty())
	{
		AFutabaActor::AccessToken = Access_Token;
	}

	if (!Refresh_Token.IsEmpty())
	{
		AFutabaActor::RefreshToken = Refresh_Token;
	}

}

void AFutabaActor::ShowConfiguration()
{
	GEngine->AddOnScreenDebugMessage(1, 5.0f, FColor::Blue, AFutabaActor::HostAuth);
	GEngine->AddOnScreenDebugMessage(2, 5.0f, FColor::Blue, AFutabaActor::HostHot);
	GEngine->AddOnScreenDebugMessage(3, 5.0f, FColor::Blue, AFutabaActor::HostCold);
	GEngine->AddOnScreenDebugMessage(4, 5.0f, FColor::Blue, AFutabaActor::HostCommon);
	GEngine->AddOnScreenDebugMessage(4, 5.0f, FColor::Blue, AFutabaActor::HostStream);
	GEngine->AddOnScreenDebugMessage(5, 5.0f, FColor::Blue, AFutabaActor::ClientId);
	GEngine->AddOnScreenDebugMessage(6, 5.0f, FColor::Blue, AFutabaActor::ClientSecret);
	GEngine->AddOnScreenDebugMessage(7, 5.0f, FColor::Blue, AFutabaActor::AccessToken);
	GEngine->AddOnScreenDebugMessage(8, 5.0f, FColor::Blue, AFutabaActor::RefreshToken);
}

void AFutabaActor::SaveConfiguration(FString ConfigFilePath)
{
	FString JsonFullPath;

	if (ConfigFilePath.Len() > 0)
	{
		JsonFullPath = ConfigFilePath;
	}
	else
	{
		JsonFullPath = FPaths::ProjectPluginsDir().Append("Futaba/Content/config.json");
	}
	TSharedPtr<FJsonObject> Buffer = MakeShareable(new FJsonObject);
	Buffer->SetStringField("target_api", AFutabaActor::ConnectionTarget);
	Buffer->SetStringField("client_id", AFutabaActor::ClientId);
	Buffer->SetStringField("client_secret", AFutabaActor::ClientSecret);
	Buffer->SetStringField("access_token", AFutabaActor::AccessToken);
	Buffer->SetStringField("refresh_token", AFutabaActor::RefreshToken);

	// Create writer for file out
	FString jsonString;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&jsonString);

	// Write json object into FString
	FJsonSerializer::Serialize(Buffer.ToSharedRef(), Writer);
	FFileHelper::SaveStringToFile(jsonString, *JsonFullPath);
}


//Digital Twin API

void AFutabaActor::GetTelemetryData(FString searchParameters)
{
	FString path = "https://" + AFutabaActor::HostHot + "/api/digitaltwins/pointvalues";
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = AFutabaActor::MakeRequestHeader(path, "POST");
	Request->OnProcessRequestComplete().BindUObject(this, &AFutabaActor::HandleRequestCompleted);
	Request->SetContentAsString(searchParameters);
	Request->ProcessRequest();
}

void AFutabaActor::GetDigitalTwinData(FString searchParameters)
{
	FString path = "https://" + AFutabaActor::HostHot + "/api/digitaltwins";
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = AFutabaActor::MakeRequestHeader(path, "POST");
	Request->OnProcessRequestComplete().BindUObject(this, &AFutabaActor::HandleRequestCompleted);
	Request->SetContentAsString(searchParameters);
	Request->ProcessRequest();
}

void AFutabaActor::UpdateDigitalTwinData(FString updateParameters, FString property, FString value)
{
	FString path = "https://" + AFutabaActor::HostHot + "/api/digitaltwins/batchupdate";
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = AFutabaActor::MakeRequestHeader(path, "POST");
	TSharedPtr<FJsonObject> jsonObject = MakeShareable(new FJsonObject());
	TSharedRef<TJsonReader<> > Reader = TJsonReaderFactory<>::Create(updateParameters);

	if (FJsonSerializer::Deserialize(Reader, jsonObject))
	{
		jsonObject->SetStringField("property", property);
		jsonObject->SetStringField("value", value);
		FString jsonString;
		TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&jsonString);
		if (FJsonSerializer::Serialize(jsonObject.ToSharedRef(), Writer))
		{
			Request->SetContentAsString(jsonString);
		}
	}
	else
	{
		Request->SetContentAsString(updateParameters);
	}
	Request->OnProcessRequestComplete().BindUObject(this, &AFutabaActor::HandleRequestCompleted);
	Request->ProcessRequest();
}

void AFutabaActor::SetTelemetryDataFloat(FString targetBuilding, FString dtid, float value, int priority)
{
	FString path = "https://" + AFutabaActor::HostHot + "/api/digitaltwins/remotecontrol";
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = AFutabaActor::MakeRequestHeader(path, "POST");
	TSharedPtr<FJsonObject> valueJson = MakeShareable(new FJsonObject());
	valueJson->SetNumberField("value", value);
	if (priority > 0)
	{
		valueJson->SetNumberField("priority", priority);
	}
	TSharedPtr<FJsonObject> jsonObject = MakeShareable(new FJsonObject());
	jsonObject->SetStringField("root", targetBuilding);
	jsonObject->SetStringField("dtId", dtid);
	jsonObject->SetObjectField("values", valueJson);

	FString jsonString;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&jsonString);
	if (FJsonSerializer::Serialize(jsonObject.ToSharedRef(), Writer))
	{
		Request->SetContentAsString(jsonString);
	}
	Request->OnProcessRequestComplete().BindUObject(this, &AFutabaActor::HandleRequestCompleted);
	Request->ProcessRequest();
}

void AFutabaActor::SetTelemetryDataString(FString targetBuilding, FString dtid, FString value, int priority)
{
	FString path = "https://" + AFutabaActor::HostHot + "/api/digitaltwins/remotecontrol";
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = AFutabaActor::MakeRequestHeader(path, "POST");
	TSharedPtr<FJsonObject> valueJson = MakeShareable(new FJsonObject());
	valueJson->SetStringField("value", value);
	if (priority > 0)
	{
		valueJson->SetNumberField("priority", priority);
	}
	TSharedPtr<FJsonObject> jsonObject = MakeShareable(new FJsonObject());
	jsonObject->SetStringField("root", targetBuilding);
	jsonObject->SetStringField("dtId", dtid);
	jsonObject->SetObjectField("values", valueJson);

	FString jsonString;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&jsonString);
	if (FJsonSerializer::Serialize(jsonObject.ToSharedRef(), Writer))
	{
		Request->SetContentAsString(jsonString);
	}
	Request->OnProcessRequestComplete().BindUObject(this, &AFutabaActor::HandleRequestCompleted);
	Request->ProcessRequest();
}

void AFutabaActor::SetTelemetryStream(FString surveillanceParameters)
{
	FString path = "https://" + AFutabaActor::HostHot + "/api/digitaltwins/telemetrystream/add";
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = AFutabaActor::MakeRequestHeader(path, "POST");
	Request->OnProcessRequestComplete().BindUObject(this, &AFutabaActor::HandleRequestCompleted);
	Request->SetContentAsString(surveillanceParameters);
	Request->ProcessRequest();
}

void AFutabaActor::DeleteTelemetryStream(FString searchParameters)
{
	FString path = "https://" + AFutabaActor::HostHot + "/api/digitaltwins/telemetrystream/delete";
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = AFutabaActor::MakeRequestHeader(path, "POST");
	Request->OnProcessRequestComplete().BindUObject(this, &AFutabaActor::HandleRequestCompleted);
	Request->SetContentAsString(searchParameters);
	Request->ProcessRequest();
}

void AFutabaActor::CheckTelemetryStream()
{
	FString path = "https://" + AFutabaActor::HostHot + "/api/digitaltwins/telemetrystream";
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = AFutabaActor::MakeRequestHeader(path, "GET");
	Request->OnProcessRequestComplete().BindUObject(this, &AFutabaActor::HandleRequestCompleted);
	Request->ProcessRequest();
}


//Web of Things API

void AFutabaActor::GetThings(FString botPath)
{
	FString path = "https://" + AFutabaActor::HostHot + "/api/things?path=" + botPath;
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = AFutabaActor::MakeRequestHeader(path, "GET");
	Request->OnProcessRequestComplete().BindUObject(this, &AFutabaActor::HandleRequestCompleted);
	Request->ProcessRequest();
}

void AFutabaActor::GetThingsByParameter(FString searchParameters)
{
	FString path = "https://" + AFutabaActor::HostHot + "/api/things";
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = AFutabaActor::MakeRequestHeader(path, "POST");
	Request->OnProcessRequestComplete().BindUObject(this, &AFutabaActor::HandleRequestCompleted);
	Request->SetContentAsString(searchParameters);
	Request->ProcessRequest();
}

void AFutabaActor::GetThingsByParameterLatent(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString searchParameters, FString& jsonString, FutabaRequestStatus& status, int32& statusCode)
{
	FString path = "https://" + AFutabaActor::HostHot + "/api/things";
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = AFutabaActor::MakeRequestHeader(path, "POST");
	Request->SetContentAsString(searchParameters);
	if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		FLatentActionManager& LatentActionManager = World->GetLatentActionManager();
		LatentActionManager.AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, new FRequestAction(LatentInfo, Request, status, statusCode, jsonString));
	}
}

void AFutabaActor::GetThingsProperties(FString rootId, FString tdId, bool useIdKey)
{
	FString useidkey = useIdKey ? TEXT("true") : TEXT("false");
	FString path = "https://" + AFutabaActor::HostHot + "/api/things/" + rootId + "/" + tdId + "/properties?useIdKey=" + useidkey;
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = AFutabaActor::MakeRequestHeader(path, "GET");
	Request->OnProcessRequestComplete().BindUObject(this, &AFutabaActor::HandleRequestCompleted);
	Request->ProcessRequest();
}

void AFutabaActor::GetThingsProperty(FString rootId, FString tdId, FString property, bool useIdKey)
{
	FString useidkey = useIdKey ? TEXT("true") : TEXT("false");
	FString path = "https://" + AFutabaActor::HostHot + "/api/things/" + rootId + "/" + tdId + "/properties/" + property + "?useIdKey=" + useidkey;
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = AFutabaActor::MakeRequestHeader(path, "GET");
	Request->OnProcessRequestComplete().BindUObject(this, &AFutabaActor::HandleRequestCompleted);
	Request->ProcessRequest();
}

void AFutabaActor::SetThingsPropertyFloat(FString rootId, FString tdId, FString property, float value, int priority)
{
	TSharedPtr<FJsonObject> values = MakeShareable(new FJsonObject);
	values->SetNumberField("value", value);
	if (priority > 0)
	{
		values->SetNumberField("priority", priority);
	}
	FString edit_data;
	TSharedRef<TJsonWriter<TCHAR>> JsonWriter = TJsonWriterFactory<>::Create(&edit_data);
	FJsonSerializer::Serialize(values.ToSharedRef(), JsonWriter);

	FString path = "https://" + AFutabaActor::HostHot + "/api/things/" + rootId + "/" + tdId + "/properties/" + property;
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = AFutabaActor::MakeRequestHeader(path, "POST");
	Request->OnProcessRequestComplete().BindUObject(this, &AFutabaActor::HandleRequestCompleted);
	Request->SetContentAsString(edit_data);
	Request->ProcessRequest();
}

void AFutabaActor::SetThingsPropertyString(FString rootId, FString tdId, FString property, FString value, int priority)
{
	TSharedPtr<FJsonObject> values = MakeShareable(new FJsonObject);
	values->SetStringField("value", value);
	if (priority > 0)
	{
		values->SetNumberField("priority", priority);
	}
	FString edit_data;
	TSharedRef<TJsonWriter<TCHAR>> JsonWriter = TJsonWriterFactory<>::Create(&edit_data);
	FJsonSerializer::Serialize(values.ToSharedRef(), JsonWriter);

	FString path = "https://" + AFutabaActor::HostHot + "/api/things/" + rootId + "/" + tdId + "/properties/" + property;
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = AFutabaActor::MakeRequestHeader(path, "POST");
	Request->OnProcessRequestComplete().BindUObject(this, &AFutabaActor::HandleRequestCompleted);
	Request->SetContentAsString(edit_data);
	Request->ProcessRequest();
}


//Building dataset API

void AFutabaActor::CreateTask(FString task)
{
	FString path = "https://" + AFutabaActor::HostCold + "/api/model/task";
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = AFutabaActor::MakeRequestHeader(path, "POST");
	Request->OnProcessRequestComplete().BindUObject(this, &AFutabaActor::HandleRequestCompleted);
	Request->SetContentAsString(task);
	Request->ProcessRequest();
}

void AFutabaActor::GetTaskProgress(int taskId, FString status, FString createDatetime, bool includeRequestInfo)
{
	FString option = "";
	if (taskId > 0) { option = option + "&taskId=" + FString::FromInt(taskId); }
	if (status.Len() > 0) { option = option + "&status=" + status; }
	if (createDatetime.Len() > 0) { option = option + "&createDatetime=" + createDatetime; }
	FString requestInfo = includeRequestInfo ? TEXT("true") : TEXT("false");
	option = option + "&includeRequestInfo=" + requestInfo;
	option.RemoveAt(0, 1);
	FString path = "https://" + AFutabaActor::HostCold + "/api/model/task?" + FGenericPlatformHttp::UrlEncode(option);
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = AFutabaActor::MakeRequestHeader(path, "GET");
	Request->OnProcessRequestComplete().BindUObject(this, &AFutabaActor::HandleRequestCompleted);
	Request->ProcessRequest();
}

void AFutabaActor::ChangeTaskValidity(int taskId, bool status)
{
	FString path = "https://" + AFutabaActor::HostCold + "/api/model/task";
	TSharedPtr<FJsonObject> task = MakeShareable(new FJsonObject());
	task->SetNumberField("taskId", taskId);
	task->SetBoolField("enabled", status);

	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = AFutabaActor::MakeRequestHeader(path, "PATCH");
	FString jsonString;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&jsonString);
	if (FJsonSerializer::Serialize(task.ToSharedRef(), Writer))
	{
		Request->SetContentAsString(jsonString);
	}
	Request->OnProcessRequestComplete().BindUObject(this, &AFutabaActor::HandleRequestCompleted);
	Request->ProcessRequest();
}

void AFutabaActor::DeleteTask(int taskId)
{	
	FString path = "https://" + AFutabaActor::HostCold + "/api/model/task?taskId=" + FString::FromInt(taskId);
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = AFutabaActor::MakeRequestHeader(path, "DELETE");
	Request->OnProcessRequestComplete().BindUObject(this, &AFutabaActor::HandleRequestCompleted);
	Request->ProcessRequest();
}

void AFutabaActor::SetWebhook(FString url)
{
	FString path = "https://" + AFutabaActor::HostCold + "/api/model/webhook";
	TSharedPtr<FJsonObject> webhook = MakeShareable(new FJsonObject());
	webhook->SetStringField("webhook_url", url);
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = AFutabaActor::MakeRequestHeader(path, "POST");
	FString jsonString;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&jsonString);
	if (FJsonSerializer::Serialize(webhook.ToSharedRef(), Writer))
	{
		Request->SetContentAsString(jsonString);
	}
	Request->OnProcessRequestComplete().BindUObject(this, &AFutabaActor::HandleRequestCompleted);
	Request->ProcessRequest();
}

void AFutabaActor::DeleteWebhook()
{
	FString path = "https://" + AFutabaActor::HostCold + "/api/model/webhook";
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = AFutabaActor::MakeRequestHeader(path, "DELETE");
	Request->OnProcessRequestComplete().BindUObject(this, &AFutabaActor::HandleRequestCompleted);
	Request->ProcessRequest();
}


//Data share API

void AFutabaActor::SetSharedData(FString dataTypeId, FString targetBuilding, FString values)
{
	FString path = "https://" + AFutabaActor::HostCommon + "/api/commondata/add";
	TSharedPtr<FJsonObject> shareData = MakeShareable(new FJsonObject());
	shareData->SetStringField("dataTypeId", dataTypeId);
	shareData->SetStringField("root", targetBuilding);
	shareData->SetStringField("values", values);

	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = AFutabaActor::MakeRequestHeader(path, "POST");
	FString jsonString;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&jsonString);
	if (FJsonSerializer::Serialize(shareData.ToSharedRef(), Writer))
	{
		Request->SetContentAsString(jsonString);
	}
	Request->OnProcessRequestComplete().BindUObject(this, &AFutabaActor::HandleRequestCompleted);
	Request->ProcessRequest();
}

void AFutabaActor::GetSharedData(FString dataTypeId, FString targetBuilding, FString filter)
{
	FString path = "https://" + AFutabaActor::HostCommon + "/api/commondata/search";
	TSharedPtr<FJsonObject> shareData = MakeShareable(new FJsonObject());
	shareData->SetStringField("dataTypeId", dataTypeId);
	shareData->SetStringField("root", targetBuilding);
	if (filter.Len() > 0) { shareData->SetStringField("filter", filter); }
	
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = AFutabaActor::MakeRequestHeader(path, "POST");
	FString jsonString;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&jsonString);
	if (FJsonSerializer::Serialize(shareData.ToSharedRef(), Writer))
	{
		Request->SetContentAsString(jsonString);
	}
	Request->OnProcessRequestComplete().BindUObject(this, &AFutabaActor::HandleRequestCompleted);
	Request->ProcessRequest();
}

void AFutabaActor::DeleteSharedData(FString dataTypeId, FString targetBuilding, FString filter)
{
	FString path = "https://" + AFutabaActor::HostCommon + "/api/commondata/delete";
	TSharedPtr<FJsonObject> shareData = MakeShareable(new FJsonObject());
	shareData->SetStringField("dataTypeId", dataTypeId);
	shareData->SetStringField("root", targetBuilding);
	if (filter.Len() > 0) { shareData->SetStringField("filter", filter); }

	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = AFutabaActor::MakeRequestHeader(path, "POST");
	FString jsonString;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&jsonString);
	if (FJsonSerializer::Serialize(shareData.ToSharedRef(), Writer))
	{
		Request->SetContentAsString(jsonString);
	}
	Request->OnProcessRequestComplete().BindUObject(this, &AFutabaActor::HandleRequestCompleted);
	Request->ProcessRequest();
}


//Http Request Complete Event

void AFutabaActor::HandleRequestCompleted(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	if (bWasSuccessful && Response->GetResponseCode() >= 200 && Response->GetResponseCode() < 300)
	{
		AFutabaActor::OnRequestCompleted.Broadcast(true, Response->GetResponseCode(), Response->GetContentAsString());
	}
	else
	{
		AFutabaActor::OnRequestCompleted.Broadcast(false, Response->GetResponseCode(), Response->GetContentAsString());
	}

}




//Latent Functions

FRequestTokenManager::FRequestTokenManager(const FLatentActionInfo& LatentInfo, TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request, FString& accessToken, FString& refreshToken, FutabaRequestStatus& status, int32& statusCode, FString& contentString) : m_LatentInfo(LatentInfo)
{
	accessTokenPtr = &accessToken;
	refreshTokenPtr = &refreshToken;
	statusPtr = &status;
	statusCodePtr = &statusCode;
	contentStringPtr = &contentString;
	Request->OnProcessRequestComplete().BindRaw(this, &FRequestTokenManager::OnResponseReceived);
	Request->ProcessRequest();
}

void FRequestTokenManager::UpdateOperation(FLatentResponse& Response)
{
	Response.FinishAndTriggerIf(isCompleted, FRequestTokenManager::m_LatentInfo.ExecutionFunction, FRequestTokenManager::m_LatentInfo.Linkage, FRequestTokenManager::m_LatentInfo.CallbackTarget);
}

void FRequestTokenManager::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	*statusPtr = FutabaRequestStatus::User_Error;
	int32 statusCode = Response->GetResponseCode();
	*statusCodePtr = statusCode;
	FString ContentAsString = Response->GetContentAsString();
	TSharedPtr<FJsonObject> JsonObject;
	TSharedRef<TJsonReader<> > Reader = TJsonReaderFactory<>::Create(ContentAsString);
	if (FJsonSerializer::Deserialize(Reader, JsonObject))
	{
		*contentStringPtr = ContentAsString;
		GEngine->AddOnScreenDebugMessage(10, 5.0f, FColor::Silver, ContentAsString);
		if (bWasSuccessful && statusCode >= 200 && statusCode < 300)
		{
			*accessTokenPtr = JsonObject->GetStringField("accessToken");
			*refreshTokenPtr = JsonObject->GetStringField("refreshToken");
			*statusPtr = FutabaRequestStatus::Success;
		}
		else if (statusCode >= 500)
		{
			*statusPtr = FutabaRequestStatus::Platform_Error;
		}
		else
		{
			*statusPtr = FutabaRequestStatus::User_Error;
		}
	}
	isCompleted = true;
}


FRequestAction::FRequestAction(const FLatentActionInfo& LatentInfo, TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request, FutabaRequestStatus& status, int32& statusCode, FString& jsonString) : m_LatentInfo(LatentInfo)
{
	jsonStringPtr = &jsonString;
	statusPtr = &status;
	statusCodePtr = &statusCode;
	Request->OnProcessRequestComplete().BindRaw(this, &FRequestAction::OnResponseReceived);
	Request->ProcessRequest();
}

void FRequestAction::UpdateOperation(FLatentResponse& Response)
{
	Response.FinishAndTriggerIf(isCompleted, FRequestAction::m_LatentInfo.ExecutionFunction, FRequestAction::m_LatentInfo.Linkage, FRequestAction::m_LatentInfo.CallbackTarget);
}

void FRequestAction::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	*statusPtr = FutabaRequestStatus::User_Error;
	int32 statusCode = Response->GetResponseCode();
	*statusCodePtr = statusCode;
	FString ContentAsString = Response->GetContentAsString();
	TSharedPtr<FJsonObject> JsonObject;
	TSharedRef<TJsonReader<> > Reader = TJsonReaderFactory<>::Create(ContentAsString);
	if (FJsonSerializer::Deserialize(Reader, JsonObject))
	{
		*jsonStringPtr = ContentAsString;
		if (bWasSuccessful && statusCode >= 200 && statusCode < 300)
		{
			*statusPtr = FutabaRequestStatus::Success;
		}
		else if (statusCode >= 500)
		{
			*statusPtr = FutabaRequestStatus::Platform_Error;
		}
		else
		{
			*statusPtr = FutabaRequestStatus::User_Error;
		}
	}
	isCompleted = true;
}