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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Futaba", meta = (DisplayName = "Prefix"))
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
		void SetHostURL(FString prefix);

	UFUNCTION(BlueprintCallable, Category = "futaba")
		void ShowConfiguration();

	UFUNCTION(BlueprintCallable, Category = "futaba", Meta = (ExpandEnumAsExecs = "FutabaStatus"))
		FString GetAccessToken(FString ConfigFilePath, FutabaRequestStatus& FutabaStatus);

	UFUNCTION(BlueprintCallable, Category = "futaba")
		void SetAccessTokenByConfigFile(FString ConfigFilePath);

	UFUNCTION(BlueprintCallable, Category = "futaba")
		void SetAccessToken(FString Id, FString Secret, FString Access_Token, FString Refresh_Token);

	//Hot API
	UFUNCTION(BlueprintCallable, Category = "futaba")
		void GetMetadata(FString bot_path);

	UFUNCTION(BlueprintCallable, Category = "futaba")
		void GetMetadataWithQuery(FString query_data);

	UFUNCTION(BlueprintCallable, Category = "futaba")
		void SetMetadataProperty(FString edit_data);

	UFUNCTION(BlueprintCallable, Category = "futaba")
		void GetThings(FString bot_path);

	UFUNCTION(BlueprintCallable, Category = "futaba")
		void GetThingsWithQuery(FString query_data);

	UFUNCTION(BlueprintCallable, Category = "futaba")
		void GetThingsProperties(FString tdid);

	UFUNCTION(BlueprintCallable, Category = "futaba")
		void GetThingsPropertiesWithAlias(FString tdid);

	UFUNCTION(BlueprintCallable, Category = "futaba")
		void SetThingsProperty(FString tdid, FString pointid, FString edit_data);


	UFUNCTION(BlueprintCallable, Category = "futaba")
		void GetThingsProperty(FString tdid, FString pointid);

	UPROPERTY(BlueprintAssignable, Category = "futaba")
		FFutabaOnEventDispather OnEventDispather;

	UPROPERTY(BlueprintAssignable, Category = "futaba")
		FOnHttpRequestCompleted OnRequestCompleted;



private:
	FString HostAuth = "cgll-dev-app-auth.azurewebsites.net";
	FString HostHot = "cgll-dev-app-hot.azurewebsites.net";
	FString HostCold = "cgll-dev-app-cold.azurewebsites.net";
	FString HostExt = "cgll-dev-app-extapi.azurewebsites.net";

	FJsonObject RequestFutaba(TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request);
	void AddCommonHeaders(TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request);

};
