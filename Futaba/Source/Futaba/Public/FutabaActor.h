// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LatentActions.h"
#include "Engine/LatentActionManager.h"
#include "GameFramework/Actor.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "HttpManager.h"
#include "FutabaActor.generated.h"

UENUM(BlueprintType)
enum class FutabaRequestStatus : uint8
{
	Success,
	User_Error,
	Platform_Error
};

UCLASS()
class FUTABA_API AFutabaActor : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	AFutabaActor();

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFutabaOnEventDispather);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnHttpRequestCompleted, bool, bSuccessful, int32, ResponseCode, const FString&, Response);


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "futaba", meta = (DisplayName = "Prefix"))
		FString  ConnectionTarget = "futaba2";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "futaba")
		FString  ClientId = "00000";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "futaba")
		FString  ClientSecret = "xxxxx";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "futaba")
		FString  AccessToken;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "futaba")
		FString  RefreshToken;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Configuration Management API

	UFUNCTION(BlueprintCallable, Category = "futaba|Configuration Management")
		void SetAPIURL(FString target);

	UFUNCTION(BlueprintCallable, Category = "futaba|Configuration Management", Meta = (ExpandEnumAsExecs = "FutabaStatus"))
		FString GetAccessToken(FString ConfigFilePath, FutabaRequestStatus& FutabaStatus);

	UFUNCTION(BlueprintCallable, Category = "futaba|Configuration Management", meta = (DisplayName = "Get Access Token <Latent>", Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
		void GetAccessTokenLatent(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString ConfigFilePath, FString& contentString, int32& statusCode, FutabaRequestStatus& futabaStatus);

	UFUNCTION(BlueprintCallable, Category = "futaba|Configuration Management")
		void SetAccessTokenByConfigFile(FString ConfigFilePath);

	UFUNCTION(BlueprintCallable, Category = "futaba|Configuration Management")
		void SetAccessToken(FString Target, FString Id, FString Secret, FString Access_Token, FString Refresh_Token);

	UFUNCTION(BlueprintCallable, Category = "futaba|Configuration Management")
		void ShowConfiguration();

	UFUNCTION(BlueprintCallable, Category = "futaba|Configuration Management")
		void SaveConfiguration(FString ConfigFilePath);

	//Digital Twin API

	UFUNCTION(BlueprintCallable, Category = "futaba|Digital Twin API")
		void GetTelemetryData(FString searchParameters);

	UFUNCTION(BlueprintCallable, Category = "futaba|Digital Twin API")
		void GetDigitalTwinData(FString searchParameters);

	UFUNCTION(BlueprintCallable, Category = "futaba|Digital Twin API")
		void UpdateDigitalTwinData(FString updateParameters, FString property, FString value);

	UFUNCTION(BlueprintCallable, Category = "futaba|Digital Twin API", meta = (DisplayName = "Set Telemetry Data (float)"))
		void SetTelemetryDataFloat(FString targetBuilding, FString dtid, float value, int priority);

	UFUNCTION(BlueprintCallable, Category = "futaba|Digital Twin API", meta = (DisplayName = "Set Telemetry Data (string)"))
		void SetTelemetryDataString(FString targetBuilding, FString dtid, FString value, int priority);

	UFUNCTION(BlueprintCallable, Category = "futaba|Digital Twin API")
		void SetTelemetryStream(FString surveillanceParameters);

	UFUNCTION(BlueprintCallable, Category = "futaba|Digital Twin API")
		void DeleteTelemetryStream(FString searchParameters);

	UFUNCTION(BlueprintCallable, Category = "futaba|Digital Twin API")
		void CheckTelemetryStream();


	//Web of Things API

	UFUNCTION(BlueprintCallable, Category = "futaba|Web of Things API")
		void GetThings(FString botPath);

	UFUNCTION(BlueprintCallable, Category = "futaba|Web of Things API")
		void GetThingsByParameter(FString searchParameters);

	UFUNCTION(BlueprintCallable, Category = "futaba|Web of Things API", meta = (DisplayName = "Get Things by Parameter <Latent>", Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
		void GetThingsByParameterLatent(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString searchParameters, bool& isSuccess, int32& statusCode, FString& jsonString);

	UFUNCTION(BlueprintCallable, Category = "futaba|Web of Things API")
		void GetThingsProperties(FString rootId, FString tdId, bool useIdKey = false);

	UFUNCTION(BlueprintCallable, Category = "futaba|Web of Things API")
		void GetThingsProperty(FString rootId, FString tdId, FString property, bool useIdKey = false);

	UFUNCTION(BlueprintCallable, Category = "futaba|Web of Things API", meta = (DisplayName = "Set Things Property (float)"))
		void SetThingsPropertyFloat(FString rootId, FString tdId, FString property, float value, int priority);

	UFUNCTION(BlueprintCallable, Category = "futaba|Web of Things API", meta = (DisplayName = "Set Things Property (string)"))
		void SetThingsPropertyString(FString rootId, FString tdId, FString property, FString value, int priority);


	//Building dataset API

	UFUNCTION(BlueprintCallable, Category = "futaba|Building dataset API")
		void CreateTask(FString task);

	UFUNCTION(BlueprintCallable, Category = "futaba|Building dataset API")
		void GetTaskProgress(int taskId, FString status, FString createDatetime, bool includeRequestInfo);

	UFUNCTION(BlueprintCallable, Category = "futaba|Building dataset API")
		void ChangeTaskValidity(int taskId, bool status);

	UFUNCTION(BlueprintCallable, Category = "futaba|Building dataset API")
		void DeleteTask(int taskId);

	UFUNCTION(BlueprintCallable, Category = "futaba|Building dataset API")
		void SetWebhook(FString url);

	UFUNCTION(BlueprintCallable, Category = "futaba|Building dataset API")
		void DeleteWebhook();


	//Data share API

	UFUNCTION(BlueprintCallable, Category = "futaba|Data share API")
		void SetSharedData(FString dataTypeId, FString targetBuilding, FString values);

	UFUNCTION(BlueprintCallable, Category = "futaba|Data share API")
		void GetSharedData(FString dataTypeId, FString targetBuilding, FString filter);

	UFUNCTION(BlueprintCallable, Category = "futaba|Data share API")
		void DeleteSharedData(FString dataTypeId, FString targetBuilding, FString filter);


	//Event Node

	UPROPERTY(BlueprintAssignable, Category = "futaba|Event")
		FFutabaOnEventDispather OnEventDispather;

	UPROPERTY(BlueprintAssignable, Category = "futaba|Event")
		FOnHttpRequestCompleted OnRequestCompleted;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void HandleRequestCompleted(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);

private:	
	FHttpModule* Http;
	FString HostAuth = "";
	FString HostHot = "";
	FString HostCold = "";
	FString HostCommon = "";
	FString HostStream = "";

	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> MakeRequestHeader(FString request_url, FString request_method);

};

class FRequestTokenManager : public FPendingLatentAction
{
	FLatentActionInfo m_LatentInfo;
	FString* accessTokenPtr;
	FString* refreshTokenPtr;
	FutabaRequestStatus* statusPtr;
	int32* statusCodePtr;
	FString* contentStringPtr;
	bool isCompleted = false;

public:
	FRequestTokenManager(const FLatentActionInfo& LatentInfo, TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request, FString& accessToken, FString& refreshToken, FutabaRequestStatus& status, int32& statusCode, FString& jsonString);
	virtual void UpdateOperation(FLatentResponse& Response) override;

	// HTTP通信を行ってレスポンスが返ってきた際のイベント処理
	void OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
};

class FRequestAction : public FPendingLatentAction
{
	FLatentActionInfo m_LatentInfo;
	int32* statusCodePtr;
	FString* jsonStringPtr;
	bool* successPtr;
	bool isCompleted = false;

public:
	FRequestAction(const FLatentActionInfo& LatentInfo, TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request, bool& success, int32& statusCode, FString& jsonString);
	virtual void UpdateOperation(FLatentResponse& Response) override;

	// HTTP通信を行ってレスポンスが返ってきた際のイベント処理
	void OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
};