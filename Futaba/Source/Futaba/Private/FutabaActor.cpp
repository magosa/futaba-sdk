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

FString AFutabaActor::GetAccessToken(FString ConfigFilePath, FutabaRequestStatus& FutabaStatus)
{
    FString JsonFullPath;

    if (ConfigFilePath.Len() > 0)
    {
        JsonFullPath = ConfigFilePath;
    }
    else
    {
        JsonFullPath = FPaths::ProjectPluginsDir().Append("Futaba/Content/data/config.json");
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

    const auto JsonReader = TJsonReaderFactory<TCHAR>::Create(loadFileString);
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
        TSharedPtr<FJsonObject> ResponseJson;
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

void AFutabaActor::GetAccessTokenLatent(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString ConfigFilePath, FutabaRequestStatus& FutabaStatus, int32& statusCode, FString& contentString)
{
    FString JsonFullPath;

    if (ConfigFilePath.Len() > 0)
    {
        JsonFullPath = ConfigFilePath;
    }
    else
    {
        JsonFullPath = FPaths::ProjectPluginsDir().Append("Futaba/Content/data/config.json");
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

    const auto JsonReader = TJsonReaderFactory<TCHAR>::Create(loadFileString);
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
            LatentActionManager.AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, new FRequestTokenManager(LatentInfo, Request, this->AccessToken, this->RefreshToken, FutabaStatus, statusCode, contentString));
        }
        GEngine->AddOnScreenDebugMessage(10, 5.0f, FColor::Silver, this->AccessToken);
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
        JsonFullPath = FPaths::ProjectPluginsDir().Append("Futaba/Content/data/config.json");
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

void AFutabaActor::SetAccessTokenByConfigFile(FString ConfigFilePath)
{
    const FString JsonFullPath = FPaths::ProjectPluginsDir().Append("Futaba/Content/" + ConfigFilePath);

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

void AFutabaActor::GetMetadagetTelemetryDatata(FString search_parameters)
{
    FString path = "https://" + AFutabaActor::HostHot + "/api/digitaltwins/pointvalues";
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = AFutabaActor::MakeRequestHeader(path, "POST");
    Request->OnProcessRequestComplete().BindUObject(this, &AFutabaActor::HandleRequestCompleted);
    Request->SetContentAsString(search_parameters);
    Request->ProcessRequest();
}

void AFutabaActor::GetThings(FString bot_path)
{
    FString path = "https://" + AFutabaActor::HostHot + "/api/things?path=" + bot_path;
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = AFutabaActor::MakeRequestHeader(path, "GET");
    Request->OnProcessRequestComplete().BindUObject(this, &AFutabaActor::HandleRequestCompleted);
    Request->ProcessRequest();
}

void AFutabaActor::GetThingsByParameter(FString search_parameters)
{
    FString path = "https://" + AFutabaActor::HostHot + "/api/things";
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = AFutabaActor::MakeRequestHeader(path, "POST");
    Request->OnProcessRequestComplete().BindUObject(this, &AFutabaActor::HandleRequestCompleted);
    Request->SetContentAsString(search_parameters);
    Request->ProcessRequest();
}

void AFutabaActor::GetThingsByParameterLatent(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString search_parameters, bool& isSuccess, int32& statusCode, FString& jsonString)
{
    FString path = "https://" + AFutabaActor::HostHot + "/api/things";
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = AFutabaActor::MakeRequestHeader(path, "POST");
    Request->SetContentAsString(search_parameters);
    isSuccess = false;
    if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
    {
        FLatentActionManager& LatentActionManager = World->GetLatentActionManager();
        LatentActionManager.AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, new FRequestAction(LatentInfo, Request, isSuccess, statusCode, jsonString));
    }
}

void AFutabaActor::GetThingsProperties(FString root_id, FString tdid, bool use_id_key)
{
    FString useidkey = use_id_key ? TEXT("true") : TEXT("false");
    FString path = "https://" + AFutabaActor::HostHot + "/api/things/" + root_id + "/" + tdid + "/properties?useIdKey=" + useidkey;
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = AFutabaActor::MakeRequestHeader(path, "GET");
    Request->OnProcessRequestComplete().BindUObject(this, &AFutabaActor::HandleRequestCompleted);
    Request->ProcessRequest();
}

void AFutabaActor::GetThingsProperty(FString root_id, FString tdid, FString property, bool use_id_key)
{
    FString useidkey = use_id_key ? TEXT("true") : TEXT("false");
    FString path = "https://" + AFutabaActor::HostHot + "/api/things/" + root_id + "/" + tdid + "/properties/" + property + "?useIdKey=" + useidkey;
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = AFutabaActor::MakeRequestHeader(path, "GET");
    Request->OnProcessRequestComplete().BindUObject(this, &AFutabaActor::HandleRequestCompleted);
    Request->ProcessRequest();
}

void AFutabaActor::SetThingsProperty(FString root_id, FString tdid, FString property, FString value, FString priority)
{
    TSharedPtr<FJsonObject> values = MakeShareable(new FJsonObject);
    values->SetStringField("value", value);
    if (priority.Len() > 0)
    {
        values->SetStringField("priority", priority);
    }
    FString edit_data;
    TSharedRef<TJsonWriter<TCHAR>> JsonWriter = TJsonWriterFactory<>::Create(&edit_data);
    FJsonSerializer::Serialize(values.ToSharedRef(), JsonWriter);

    FString path = "https://" + AFutabaActor::HostHot + "/api/things/" + root_id + "/" + tdid + "/properties/" + property;
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = AFutabaActor::MakeRequestHeader(path, "POST");
    Request->OnProcessRequestComplete().BindUObject(this, &AFutabaActor::HandleRequestCompleted);
    Request->SetContentAsString(edit_data);
    Request->ProcessRequest();
}

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
    // Jsonオブジェクトをデシリアライズ
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




FRequestAction::FRequestAction(const FLatentActionInfo& LatentInfo, TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request, bool& success, int32& statusCode, FString& jsonString) : m_LatentInfo(LatentInfo)
{
    jsonStringPtr = &jsonString;
    successPtr = &success;
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
    *successPtr = false;
    *statusCodePtr = Response->GetResponseCode();
    FString ContentAsString = Response->GetContentAsString();
    TSharedPtr<FJsonObject> JsonObject;
    TSharedRef<TJsonReader<> > Reader = TJsonReaderFactory<>::Create(ContentAsString);
    // Jsonオブジェクトをデシリアライズ
    if (FJsonSerializer::Deserialize(Reader, JsonObject))
    {
        *jsonStringPtr = ContentAsString;
        if (EHttpResponseCodes::IsOk(Response->GetResponseCode()))
        {
            *successPtr = true;
        }
    }
    isCompleted = true;
}