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

	UFUNCTION(BlueprintCallable, Category = "futaba")
		void SetAPIURL(FString target);

	UFUNCTION(BlueprintCallable, Category = "futaba")
		void ShowConfiguration();

	UFUNCTION(BlueprintCallable, Category = "futaba")
		void SaveConfiguration(FString ConfigFilePath);

	UFUNCTION(BlueprintCallable, Category = "futaba", Meta = (ExpandEnumAsExecs = "FutabaStatus"))
		FString GetAccessToken(FString ConfigFilePath, FutabaRequestStatus& FutabaStatus);

	UFUNCTION(BlueprintCallable, Category = "futaba", meta = (DisplayName = "Get Access Token Latent", Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
		void GetAccessTokenLatent(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString ConfigFilePath, FutabaRequestStatus& FutabaStatus, int32& statusCode, FString& contentString);

	UFUNCTION(BlueprintCallable, Category = "futaba")
		void SetAccessTokenByConfigFile(FString ConfigFilePath);

	UFUNCTION(BlueprintCallable, Category = "futaba")
		void SetAccessToken(FString Target, FString Id, FString Secret, FString Access_Token, FString Refresh_Token);

	//Degital Twin API

	UFUNCTION(BlueprintCallable, Category = "futaba")
		void GetMetadagetTelemetryDatata(FString search_parameters);


	//Web of Things API

	UFUNCTION(BlueprintCallable, Category = "futaba")
		void GetThings(FString bot_path);

	UFUNCTION(BlueprintCallable, Category = "futaba")
		void GetThingsByParameter(FString search_parameters);

	UFUNCTION(BlueprintCallable, Category = "futaba", meta = (DisplayName = "Get Things by Parameter Latent", Latent, WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
		void GetThingsByParameterLatent(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString search_parameters, bool& isSuccess, int32& statusCode, FString& jsonString);

	UFUNCTION(BlueprintCallable, Category = "futaba")
		void GetThingsProperties(FString root_id, FString tdid, bool use_id_key = false);

	UFUNCTION(BlueprintCallable, Category = "futaba")
		void GetThingsProperty(FString root_id, FString tdid, FString property, bool use_id_key = false);

	UFUNCTION(BlueprintCallable, Category = "futaba")
		void SetThingsProperty(FString root_id, FString tdid, FString property, FString value, FString priority = "");



	UPROPERTY(BlueprintAssignable, Category = "futaba")
		FFutabaOnEventDispather OnEventDispather;

	UPROPERTY(BlueprintAssignable, Category = "futaba")
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