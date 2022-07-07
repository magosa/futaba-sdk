// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "HttpManager.h"
#include "FutabaActor.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFutabaOnEventDispather);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnHttpRequestCompleted, bool, bSuccessful, int32, ResponseCode, const FString&, Response);

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

	FHttpModule* Http;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Futaba", meta = (DisplayName = "TargetAPI"))
		FString  ConnectionTarget = "cgll";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Futaba")
		FString  ClientId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Futaba")
		FString  ClientSecret;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Futaba")
		FString  AccessToken;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Futaba")
		FString  RefreshToken;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void HandleRequestCompleted(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Auth API
	UFUNCTION(BlueprintCallable, Category = "futaba")
		void SetAPIURL(FString target);

	UFUNCTION(BlueprintCallable, Category = "futaba")
		void ShowConfiguration();

	UFUNCTION(BlueprintCallable, Category = "futaba", Meta = (ExpandEnumAsExecs = "FutabaStatus"))
		FString GetAccessToken(FString ConfigFilePath, FutabaRequestStatus& FutabaStatus);

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



private:
	FString HostAuth = "";
	FString HostHot = "";
	FString HostCold = "";
	FString HostCommon = "";
	FString HostStream = "";


	FJsonObject RequestFutaba(TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request);
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> MakeRequestHeader(FString request_url, FString request_method);

};
