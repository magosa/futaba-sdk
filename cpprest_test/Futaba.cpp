#include "Futaba.h"

Futaba::Futaba()
{
}

Futaba::~Futaba()
{
}

void Futaba::setHostURL(json::value url)
{
    Futaba::host_auth = url[L"host_auth"].as_string();
    Futaba::host_hot = url[L"host_hot"].as_string();
    Futaba::host_cold = url[L"host_cold"].as_string();
    Futaba::host_ext = url[L"host_ext"].as_string();
}

void Futaba::showConfiguration()
{
    std::wcout << host_auth << std::endl;
    std::wcout << host_hot << std::endl;
    std::wcout << host_cold << std::endl;
    std::wcout << host_ext << std::endl;
    std::wcout << client_id << std::endl;
    std::wcout << client_secret << std::endl;
    std::wcout << access_token << std::endl;
    std::wcout << refresh_token << std::endl;
}

void Futaba::addCommonHeaders(http_request& request)
{
    request.headers().set_content_type(L"application/json");
    request.headers().add(L"X-NEDO-CLIENT-ID", Futaba::client_id.c_str());
    request.headers().add(L"X-NEDO-ACCESS-TOKEN", Futaba::access_token.c_str());
}

json::value Futaba::requestFutaba(request_param request_data)
{
    json::value response_json;
    auto request_task = pplx::create_task([request_data]
        {
            // proxyあり
            // auto config = http_client_config();
            // config.set_proxy(web_proxy(utility::conversions::to_string_t("http://127.0.0.1:8080")));
            // http_client client(request_header.uri, config);


            http_client client(request_data.uri);
            return client.request(request_data.request);
        }).then([](http_response response)
            {
                if (response.status_code() == status_codes::OK)
                {
                    // レスポンスを文字列として取得後、標準出力する
                    // auto body = response.extract_string();
                    // std::wcout << body.get().c_str() << std::endl;

                    // レスポンスをJSONとして解析する
                    return response.extract_json();
                }
                else
                {
                    std::cout << "Rquest error : Status[" << response.status_code() << "]" << std::endl;
                    http_response empty_message;

                    return empty_message.extract_json();
                }
            }).then([&response_json](json::value json)
                {
                    response_json = json;
                });

            try
            {
                request_task.wait();
            }
            catch (const std::exception& e)
            {
                std::cout << "Error:" << e.what() << std::endl;
            }

            return response_json;
}

json::value Futaba::getAccessToken(json::value obj)
{
    request_param options;
    json::value response;

    std::wstring host = L"https://" + Futaba::host_auth + L"/api/token";
    options.uri = host;

    if (obj.has_field(L"refresh_token"))
    {
        options.request = http_request(methods::PATCH);
        options.request.headers().add(L"X-NEDO-CLIENT-REFRESHTOKEN", obj[L"refresh_token"].as_string().c_str());
        options.request.headers().add(L"X-NEDO-GRANT-TYPE", L"refresh_token");
    }
    else
    {
        options.request = http_request(methods::POST);
        options.request.headers().add(L"X-NEDO-GRANT-TYPE", L"client_credentials");
    }
    options.request.headers().set_content_type(L"application/json");
    options.request.headers().add(L"X-NEDO-CLIENT-ID", obj[L"client_id"].as_string().c_str());
    options.request.headers().add(L"X-NEDO-CLIENT-SECRET", obj[L"client_secret"].as_string().c_str());

    try
    {
        response = Futaba::requestFutaba(options);

        Futaba::client_id = obj[L"client_id"].as_string();
        Futaba::client_secret = obj[L"client_secret"].as_string();
        Futaba::access_token = response[L"access_token"].as_string();
        Futaba::refresh_token = response[L"refresh_token"].as_string();
    }
    catch (const std::exception& e)
    {
        std::cout << "Error at getAccessToken module:" << e.what() << std::endl;
    }
    return response;
}

void Futaba::setAccessToken(json::value obj)
{
    Futaba::client_id = obj[L"client_id"].as_string();
    Futaba::client_secret = obj[L"client_secret"].as_string();
    Futaba::access_token = obj[L"access_token"].as_string();
    Futaba::refresh_token = obj[L"refresh_token"].as_string();
}

json::value Futaba::createTask(json::value task)
{
    request_param options;

    options.uri = L"https://" + Futaba::host_cold + L"/api/model/task";
    options.request = http_request(methods::POST);
    addCommonHeaders(options.request);

    return Futaba::requestFutaba(options);
}

json::value Futaba::getTaskProgress(int task_id)
{
    request_param options;
    std::wstring host;

    if (task_id == NULL)
    {
        host = L"https://" + Futaba::host_cold + L"/api/model/task";
    }
    else
    {
        host = L"https://" + Futaba::host_cold + L"/api/model/task?task_id=" + std::to_wstring(task_id);
    }
    options.uri = host;
    options.request = http_request(methods::GET);
    addCommonHeaders(options.request);

    return Futaba::requestFutaba(options);
}

json::value Futaba::changeTaskValidity(int task_id, bool status)
{
    request_param options;
    json::value request_body;

    options.uri = L"https://" + Futaba::host_cold + L"/api/model/task";
    options.request = http_request(methods::PATCH);
    addCommonHeaders(options.request);

    request_body[L"task_id"] = json::value::number(task_id);
    request_body[L"enabled"] = json::value::boolean(status);
    options.request.set_body(request_body);

    return Futaba::requestFutaba(options);
}

json::value Futaba::deleteTask(int task_id)
{
    request_param options;

    options.uri = L"https://" + Futaba::host_cold + L"/api/model/task?task_id=" + std::to_wstring(task_id);
    options.request = http_request(methods::DEL);
    addCommonHeaders(options.request);

    return Futaba::requestFutaba(options);
}

json::value Futaba::setWebhook(std::wstring url)
{
    request_param options;
    json::value request_body;

    options.uri = L"https://" + Futaba::host_cold + L"/api/model/webhook";
    options.request = http_request(methods::POST);
    addCommonHeaders(options.request);

    request_body[L"webhook_url"] = json::value::string(url);
    options.request.set_body(request_body);

    return Futaba::requestFutaba(options);
}

json::value Futaba::deleteWebhook(int webhook_id)
{
    request_param options;

    options.uri = L"https://" + Futaba::host_cold + L"/api/model/webhook?webhook_id=" + std::to_wstring(webhook_id);
    options.request = http_request(methods::DEL);
    addCommonHeaders(options.request);

    return Futaba::requestFutaba(options);
}

json::value Futaba::setSharedData(json::value add_data)
{
    request_param options;

    options.uri = L"https://" + Futaba::host_ext + L"/api/extdata/add";
    options.request = http_request(methods::POST);
    addCommonHeaders(options.request);

    options.request.set_body(add_data);

    return Futaba::requestFutaba(options);
}

json::value Futaba::getSharedData(json::value search_conditions)
{
    request_param options;

    options.uri = L"https://" + Futaba::host_ext + L"/api/extdata/search";
    options.request = http_request(methods::POST);
    addCommonHeaders(options.request);

    options.request.set_body(search_conditions);

    return Futaba::requestFutaba(options);
}

json::value Futaba::deleteSharedData(json::value delete_conditions)
{
    request_param options;

    options.uri = L"https://" + Futaba::host_ext + L"/api/extdata/delete";
    options.request = http_request(methods::POST);
    addCommonHeaders(options.request);

    options.request.set_body(delete_conditions);

    return Futaba::requestFutaba(options);
}

json::value Futaba::getMetadata(std::wstring bot_path)
{
    request_param options;

    options.uri = L"https://" + Futaba::host_hot + L"/api/metadata?path=" + bot_path;
    options.request = http_request(methods::GET);
    addCommonHeaders(options.request);

    return Futaba::requestFutaba(options);
}

json::value Futaba::getMetadataWithQuery(json::value query_data)
{
    request_param options;

    options.uri = L"https://" + Futaba::host_hot + L"/api/metadata";
    options.request = http_request(methods::POST);
    addCommonHeaders(options.request);

    options.request.set_body(query_data);

    return Futaba::requestFutaba(options);
}

json::value Futaba::setMetadataProperty(json::value edit_data)
{
    request_param options;

    options.uri = L"https://" + Futaba::host_hot + L"/api/metadata";
    options.request = http_request(methods::PUT);
    addCommonHeaders(options.request);

    options.request.set_body(edit_data);

    return Futaba::requestFutaba(options);
}

json::value Futaba::getThings(std::wstring bot_path)
{
    request_param options;

    options.uri = L"https://" + Futaba::host_hot + L"/api/things?path=" + bot_path;
    options.request = http_request(methods::GET);
    addCommonHeaders(options.request);

    return Futaba::requestFutaba(options);
}

json::value Futaba::getThingsWithQuery(json::value query_data)
{
    request_param options;

    options.uri = L"https://" + Futaba::host_hot + L"/api/things";
    options.request = http_request(methods::POST);
    addCommonHeaders(options.request);

    options.request.set_body(query_data);

    return Futaba::requestFutaba(options);
}

json::value Futaba::getThingsProperties(std::wstring tdid)
{
    request_param options;

    options.uri = L"https://" + Futaba::host_hot + L"/api/things/" + tdid + L"/properties";
    options.request = http_request(methods::GET);
    addCommonHeaders(options.request);

    return Futaba::requestFutaba(options);
}

json::value Futaba::getThingsProperty(std::wstring tdid, std::wstring pointid)
{
    request_param options;

    options.uri = L"https://" + Futaba::host_hot + L"/api/things/" + tdid + L"/properties/" + pointid;
    options.request = http_request(methods::GET);
    addCommonHeaders(options.request);

    return Futaba::requestFutaba(options);
}

json::value Futaba::setThingsProperty(std::wstring tdid, std::wstring pointid, json::value edit_data)
{
    request_param options;

    options.uri = L"https://" + Futaba::host_hot + L"/api/things/" + tdid + L"/properties/" + pointid;
    options.request = http_request(methods::PUT);
    addCommonHeaders(options.request);

    options.request.set_body(edit_data);

    return Futaba::requestFutaba(options);
}

json::value Futaba::setEventSubscription(json::value data_set, std::wstring event_name)
{
    request_param options;

    options.uri = L"https://" + Futaba::host_hot + L"/api/things/events/" + event_name;
    options.request = http_request(methods::POST);
    addCommonHeaders(options.request);

    options.request.set_body(data_set);

    return Futaba::requestFutaba(options);
}

json::value Futaba::deleteEventSubscription(std::wstring subscription_id, std::wstring event_name)
{
    request_param options;

    options.uri = L"https://" + Futaba::host_hot + L"/api/things/events/" + event_name + L"/" + subscription_id;
    options.request = http_request(methods::DEL);
    addCommonHeaders(options.request);

    return Futaba::requestFutaba(options);
}

json::value Futaba::getEventSubscription()
{
    request_param options;

    options.uri = L"https://" + Futaba::host_hot + L"/api/things/events";
    options.request = http_request(methods::GET);
    addCommonHeaders(options.request);

    return Futaba::requestFutaba(options);
}

json::value Futaba::getThingsPropertiesWithAlias(std::wstring tdid)
{
    request_param options;

    options.uri = L"https://" + Futaba::host_hot + L"/api/things/" + tdid + L"/propertiesEx";
    options.request = http_request(methods::GET);
    addCommonHeaders(options.request);

    return Futaba::requestFutaba(options);
}