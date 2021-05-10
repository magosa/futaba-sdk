#pragma once
#include <Windows.h>
#include <cpprest/http_client.h>

using namespace web;
using namespace web::http;
using namespace web::http::client;

struct request_param {
    uri uri;
    http_request request;
};

class Futaba
{
public:
    Futaba();
    ~Futaba();
    //Auth API
    void setHostURL(json::value url);
    void showConfiguration();
    json::value getAccessToken(json::value obj);
    void setAccessToken(json::value obj);
    //Cold API
    json::value createTask(json::value task);
    json::value getTaskProgress(int task_id = NULL);
    json::value changeTaskValidity(int task_id, bool status = FALSE);
    json::value deleteTask(int task_id);
    json::value setWebhook(std::wstring url);
    json::value deleteWebhook(int webhook_id);
    //Extra API
    json::value setSharedData(json::value add_data);
    json::value getSharedData(json::value search_conditions);
    json::value deleteSharedData(json::value delete_conditions);
    //Hot API
    json::value getMetadata(std::wstring bot_path);
    json::value getMetadataWithQuery(json::value query_data);
    json::value setMetadataProperty(json::value edit_data);
    json::value getThings(std::wstring bot_path);
    json::value getThingsWithQuery(json::value query_data);
    json::value getThingsProperties(std::wstring tdid);
    json::value getThingsProperty(std::wstring tdid, std::wstring pointid);
    json::value setThingsProperty(std::wstring tdid, std::wstring pointid, json::value edit_data);
    json::value setEventSubscription(json::value data_set, std::wstring event_name = L"telemetry_eventhub");
    json::value deleteEventSubscription(std::wstring subscription_id, std::wstring event_name = L"telemetry_eventhub");
    json::value getEventSubscription();
    json::value getThingsPropertiesWithAlias(std::wstring tdid);

private:
    std::wstring host_auth = L"Futaba-dev-app-auth.azurewebsites.net";
    std::wstring host_hot = L"Futaba-dev-app-hot.azurewebsites.net";
    std::wstring host_cold = L"Futaba-dev-app-cold.azurewebsites.net";
    std::wstring host_ext = L"Futaba-dev-app-ext.azurewebsites.net";
    std::wstring client_id;
    std::wstring client_secret;
    std::wstring access_token;
    std::wstring refresh_token;
    void addCommonHeaders(http_request& request);
    json::value requestFutaba(request_param request_data);
};