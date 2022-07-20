using System.Text;
using System.Net;
using System.Text.Json;
using System.Web;

namespace FutabaLibrary.Core
{
    public class Futaba
    {
        private HttpClient Client;
        string host_auth;
        string host_hot;
        string host_cold;
        string host_common;
        string host_stream;
        string client_id;
        string client_secret;
        string access_token;
        string refresh_token;

        public Futaba()
        {
            this.Client = new HttpClient();
        }
        //  コンストラクタ（引数あり）
        public Futaba(string proxy, string id, string password)
        {
            HttpClientHandler handler = new HttpClientHandler();
            handler.Proxy = new WebProxy(proxy);
            handler.Proxy.Credentials = new NetworkCredential(id, password);
            handler.UseProxy = true;
            this.Client = new HttpClient(handler);

        }

        private void setAPIURL(string target)
        {
            this.host_auth = target + "-dev-app-auth.azurewebsites.net";
            this.host_hot = target + "-dev-app-hot.azurewebsites.net";
            this.host_cold = target + "-dev-app-cold.azurewebsites.net";
            this.host_common = target + "-dev-app-common.azurewebsites.net";
            this.host_stream = target + "-dev-app-stream.azurewebsites.net";
        }

        private HttpRequestMessage makeRequestHeader(string url, HttpMethod request_method)
        {
            HttpRequestMessage requestMessage = new HttpRequestMessage(request_method, new Uri(url));
            requestMessage.Headers.Add("ContentType", "application/json");
            requestMessage.Headers.Add("X-DTDPF-CLIENT-ID", this.client_id);
            requestMessage.Headers.Add("X-DTDPF-ACCESS-TOKEN", this.access_token);
            return requestMessage;
        }

        public async Task<string> Request(HttpRequestMessage requestMessage)
        {
            try
            {
                HttpResponseMessage response = await Client.SendAsync(requestMessage);
                return await response.Content.ReadAsStringAsync();

            }
            catch (HttpRequestException e)
            {
                Console.WriteLine("\nException Caught!");
                Console.WriteLine("Message :{0} ", e.Message);
                return e.Message;
            }
        }

        public async Task<string> getAccessToken(Dictionary<string, string> obj)
        {
            this.setAPIURL(obj["target_api"]);
            string url = $"https://{this.host_auth}/api/token";
            HttpRequestMessage requestMessage = new HttpRequestMessage();
            requestMessage.RequestUri = new Uri(url);
            requestMessage.Headers.Add("ContentType", "application/json");
            requestMessage.Headers.Add("X-DTDPF-CLIENT-ID", obj["client_id"]);
            requestMessage.Headers.Add("X-DTDPF-CLIENT-SECRET", obj["client_secret"]);
            if (obj.ContainsKey("refresh_token"))
            {
                requestMessage.Method = HttpMethod.Patch;
                requestMessage.Headers.Add("X-DTDPF-CLIENT-REFRESHTOKEN", obj["refresh_token"]);
                requestMessage.Headers.Add("X-DTDPF-GRANT-TYPE", "refresh_token");

            }
            else
            {
                requestMessage.Method = HttpMethod.Post;
                requestMessage.Headers.Add("X-DTDPF-GRANT-TYPE", "client_credentials");
            }

            try
            {
                HttpResponseMessage response = await Client.SendAsync(requestMessage);
                this.client_id = obj["client_id"];
                this.client_secret = obj["client_secret"];
                string responseString = await response.Content.ReadAsStringAsync();
                try
                {
                    Dictionary<string, object> responseObjects = JsonSerializer.Deserialize<Dictionary<string, object>>(responseString)!;
                    this.access_token = responseObjects["accessToken"].ToString();
                    this.refresh_token = responseObjects["refreshToken"].ToString();
                    return responseString;
                }
                catch (Exception ex)
                {
                    Console.WriteLine(responseString);
                    Console.WriteLine("Message :{0} ", ex.Message);
                    return ex.Message;
                }

            }
            catch (HttpRequestException e)
            {
                Console.WriteLine("\nException Caught!");
                Console.WriteLine("Message :{0} ", e.Message);
                return e.Message;
            }
        }

        public void setAccessToken(Dictionary<string, string> obj)
        {
            this.setAPIURL(obj["target_api"]);
            this.client_id = obj["client_id"];
            this.client_secret = obj["client_secret"];
            this.access_token = obj["access_token"];
            this.refresh_token = obj["refresh_token"];
        }

        public async Task<string> getTelemetryData(Dictionary<string, object> search_parameters)
        {
            string path = $"https://{this.host_hot}/api/digitaltwins/pointvalues";
            string jsonString = JsonSerializer.Serialize(search_parameters);
            HttpRequestMessage requestMessage = makeRequestHeader(path, HttpMethod.Post);
            requestMessage.Content = new StringContent(jsonString, Encoding.UTF8, @"application/json");
            return await Request(requestMessage);
        }

        public async Task<string> getDigitalTwinData(Dictionary<string, object> search_parameters)
        {
            string path = $"https://{this.host_hot}/api/digitaltwins";
            string jsonString = JsonSerializer.Serialize(search_parameters);
            HttpRequestMessage requestMessage = makeRequestHeader(path, HttpMethod.Post);
            requestMessage.Content = new StringContent(jsonString, Encoding.UTF8, @"application/json");
            return await Request(requestMessage);
        }

        public async Task<string> updateDigitalTwinData(Dictionary<string, object> update_parameters, string property, string value)
        {
            string path = $"https://{this.host_hot}/api/digitaltwins/batchupdate";
            update_parameters["property"] = property;
            update_parameters["value"] = value;
            string jsonString = JsonSerializer.Serialize(update_parameters);
            HttpRequestMessage requestMessage = makeRequestHeader(path, HttpMethod.Post);
            requestMessage.Content = new StringContent(jsonString, Encoding.UTF8, @"application/json");
            return await Request(requestMessage);
        }

        public async Task<string> setTelemetryData(string root, string dtid, float value, int? priority = null)
        {
            string path = $"https://{this.host_hot}/api/digitaltwins/remotecontrol";
            Dictionary<string, object> values = new Dictionary<string, object>(){{"value", value}};
            if (priority != null)
            {
                values["priority"] = priority;
            };
            Dictionary<string, object> control_parameters = new Dictionary<string, object>()
            {
                {"root", root},
                {"dtId", dtid},
                {"values", values}
            };
            string jsonString = JsonSerializer.Serialize(control_parameters);
            HttpRequestMessage requestMessage = makeRequestHeader(path, HttpMethod.Post);
            requestMessage.Content = new StringContent(jsonString, Encoding.UTF8, @"application/json");
            return await Request(requestMessage);
        }
        public async Task<string> setTelemetryData(string root, string dtid, string value, int? priority = null)
        {
            string path = $"https://{this.host_hot}/api/digitaltwins/remotecontrol";
            Dictionary<string, object> values = new Dictionary<string, object>() { { "value", value } };
            if (priority != null)
            {
                values["priority"] = priority;
            };
            Dictionary<string, object> control_parameters = new Dictionary<string, object>()
            {
                {"root", root},
                {"dtId", dtid},
                {"values", values}
            };
            string jsonString = JsonSerializer.Serialize(control_parameters);
            HttpRequestMessage requestMessage = makeRequestHeader(path, HttpMethod.Post);
            requestMessage.Content = new StringContent(jsonString, Encoding.UTF8, @"application/json");
            return await Request(requestMessage);
        }

        public async Task<string> setTelemetryStream(Dictionary<string, object> surveillance_parameters)
        {
            string path = $"https://{this.host_hot}/api/digitaltwins/telemetrystream/add";
            string jsonString = JsonSerializer.Serialize(surveillance_parameters);
            HttpRequestMessage requestMessage = makeRequestHeader(path, HttpMethod.Post);
            requestMessage.Content = new StringContent(jsonString, Encoding.UTF8, @"application/json");
            return await Request(requestMessage);
        }

        public async Task<string> deleteTelemetryStream(Dictionary<string, object> search_parameters)
        {
            string path = $"https://{this.host_hot}/api/digitaltwins/telemetrystream/delete";
            string jsonString = JsonSerializer.Serialize(search_parameters);
            HttpRequestMessage requestMessage = makeRequestHeader(path, HttpMethod.Post);
            requestMessage.Content = new StringContent(jsonString, Encoding.UTF8, @"application/json");
            return await Request(requestMessage);
        }

        public async Task<string> checkTelemetryStream()
        {
            string path = $"https://{this.host_hot}/api/digitaltwins/telemetrystream";
            HttpRequestMessage requestMessage = makeRequestHeader(path, HttpMethod.Get);
            return await Request(requestMessage);
        }

        public async Task<string> getThings(string bot_path)
        {
            string path = $"https://{this.host_hot}/api/things?path={HttpUtility.UrlEncode(bot_path)}";
            HttpRequestMessage requestMessage = makeRequestHeader(path, HttpMethod.Get);
            return await Request(requestMessage);
        }

        public async Task<string> getThingsByParameter(Dictionary<string, object> search_parameters)
        {
            string path = $"https://{this.host_hot}/api/things";
            string jsonString = JsonSerializer.Serialize(search_parameters);
            HttpRequestMessage requestMessage = makeRequestHeader(path, HttpMethod.Post);
            requestMessage.Content = new StringContent(jsonString, Encoding.UTF8, @"application/json");
            return await Request(requestMessage);
        }

        public async Task<string> getThingsProperties(int root_id, string tdid, bool use_id_key = false)
        {
            string path = $"https://{this.host_hot}/api/things/{root_id}/{HttpUtility.UrlEncode(tdid)}/properties?useIdKey={use_id_key}";
            HttpRequestMessage requestMessage = makeRequestHeader(path, HttpMethod.Get);
            return await Request(requestMessage);
        }

        public async Task<string> getThingsProperty(int root_id, string tdid, string property, bool use_id_key = false)
        {
            string path = $"https://{this.host_hot}/api/things/{root_id}/{HttpUtility.UrlEncode(tdid)}/properties/{HttpUtility.UrlEncode(property)}?useIdKey={use_id_key}";
            HttpRequestMessage requestMessage = makeRequestHeader(path, HttpMethod.Get);
            return await Request(requestMessage);
        }

        public async Task<string> setThingsProperty(int root_id, string tdid, string property, float value, int? priority = null)
        {
            string path = $"https://{this.host_hot}/api/things/{root_id}/{HttpUtility.UrlEncode(tdid)}/properties/{HttpUtility.UrlEncode(property)}";
            Dictionary<string, object> values = new Dictionary<string, object>() { { "value", value } };
            if (priority != null)
            {
                values["priority"] = priority;
            };
            string jsonString = JsonSerializer.Serialize(values);
            HttpRequestMessage requestMessage = makeRequestHeader(path, HttpMethod.Put);
            requestMessage.Content = new StringContent(jsonString, Encoding.UTF8, @"application/json");
            return await Request(requestMessage);
        }

        public async Task<string> setThingsProperty(int root_id, string tdid, string property, string value, int? priority = null)
        {
            string path = $"https://{this.host_hot}/api/things/{root_id}/{HttpUtility.UrlEncode(tdid)}/properties/{HttpUtility.UrlEncode(property)}";
            Dictionary<string, object> values = new Dictionary<string, object>() { { "value", value } };
            if (priority != null)
            {
                values["priority"] = priority;
            };
            string jsonString = JsonSerializer.Serialize(values);
            HttpRequestMessage requestMessage = makeRequestHeader(path, HttpMethod.Put);
            requestMessage.Content = new StringContent(jsonString, Encoding.UTF8, @"application/json");
            return await Request(requestMessage);
        }

        public async Task<string> createTask(Dictionary<string, object> task)
        {
            string path = $"https://{this.host_cold}/api/model/task";
            string jsonString = JsonSerializer.Serialize(task);
            HttpRequestMessage requestMessage = makeRequestHeader(path, HttpMethod.Post);
            requestMessage.Content = new StringContent(jsonString, Encoding.UTF8, @"application/json");
            return await Request(requestMessage);
        }

        public async Task<string> getTaskProgress(int? task_id = null, string? status = null, string? create_datetime = null, bool include_request_info = false)
        {
            string option = "";
            if (task_id != null) { option = option + "&taskId=" + task_id; }
            if (status != null) { option = option + "&status=" + status; }
            if (create_datetime != null) { option = option + "&createDatetime=" + create_datetime; }
            option = option + "&includeRequestInfo=" + include_request_info;
            option = HttpUtility.UrlEncode(option.Remove(0, 1));
            string path = $"https://{this.host_cold}/api/model/task?{option}";
            HttpRequestMessage requestMessage = makeRequestHeader(path, HttpMethod.Get);
            return await Request(requestMessage);
        }

        public async Task<string> changeTaskValidity(int task_id, bool status = false)
        {
            string path = $"https://{this.host_cold}/api/model/task";
            Dictionary<string, object> task = new Dictionary<string, object>()
            {
                {"taskId", task_id},
                {"enabled", status}
            };
            string jsonString = JsonSerializer.Serialize(task);
            HttpRequestMessage requestMessage = makeRequestHeader(path, HttpMethod.Patch);
            requestMessage.Content = new StringContent(jsonString, Encoding.UTF8, @"application/json");
            return await Request(requestMessage);
        }

        public async Task<string> deleteTask(int task_id)
        {
            string path = $"https://{this.host_cold}/api/model/task?taskId={task_id}";
            HttpRequestMessage requestMessage = makeRequestHeader(path, HttpMethod.Delete);
            return await Request(requestMessage);
        }

        public async Task<string> setWebhook(string url)
        {
            string path = $"https://{this.host_cold}/api/model/webhook";
            Dictionary<string, object> webhook = new Dictionary<string, object>()
            {
                {"webhook_url", url}
            };
            string jsonString = JsonSerializer.Serialize(webhook);
            HttpRequestMessage requestMessage = makeRequestHeader(path, HttpMethod.Post);
            requestMessage.Content = new StringContent(jsonString, Encoding.UTF8, @"application/json");
            return await Request(requestMessage);
        }

        public async Task<string> deleteWebhook()
        {
            string path = $"https://{this.host_cold}/api/model/webhook";
            HttpRequestMessage requestMessage = makeRequestHeader(path, HttpMethod.Delete);
            return await Request(requestMessage);
        }

        public async Task<string> setSharedData(string data_type_id, string root, string values)
        {
            string path = $"https://{this.host_common}/api/commondata/add";
            Dictionary<string, object> add_data = new Dictionary<string, object>()
            {
                {"dataTypeId", data_type_id},
                {"root", root},
                {"values", values}
            };
            string jsonString = JsonSerializer.Serialize(add_data);
            HttpRequestMessage requestMessage = makeRequestHeader(path, HttpMethod.Post);
            requestMessage.Content = new StringContent(jsonString, Encoding.UTF8, @"application/json");
            return await Request(requestMessage);
        }

        public async Task<string> getSharedData(string data_type_id, string root, string? filter = null)
        {
            string path = $"https://{this.host_common}/api/commondata/search";
            Dictionary<string, object> search_parameters = new Dictionary<string, object>()
            {
                {"dataTypeId", data_type_id},
                {"root", root}
            };
            if (filter != null) { search_parameters["filter"] = filter; }
            string jsonString = JsonSerializer.Serialize(search_parameters);
            HttpRequestMessage requestMessage = makeRequestHeader(path, HttpMethod.Post);
            requestMessage.Content = new StringContent(jsonString, Encoding.UTF8, @"application/json");
            return await Request(requestMessage);
        }

        public async Task<string> deleteSharedData(string data_type_id, string root, string? filter = null)
        {
            string path = $"https://{this.host_common}/api/commondata/delete";
            Dictionary<string, object> delete_parameters = new Dictionary<string, object>()
            {
                {"dataTypeId", data_type_id},
                {"root", root}
            };
            if (filter != null) { delete_parameters["filter"] = filter; }
            string jsonString = JsonSerializer.Serialize(delete_parameters);
            HttpRequestMessage requestMessage = makeRequestHeader(path, HttpMethod.Post);
            requestMessage.Content = new StringContent(jsonString, Encoding.UTF8, @"application/json");
            return await Request(requestMessage);
        }
    }
}
