using System.Text;
using System.Text.Json;
using FutabaLibrary.Core;
using FutabaLibrary.Utility;

namespace FutabaSDK
{
    public class FutabaHotSample
    {
        private static Futaba client = new Futaba();
        private static FutabaUtility r90 = new FutabaUtility();
        static async Task initializeToken(bool update_flag)
        {
            string filePath = "./data/config.json";
            string jsonString = File.ReadAllText(filePath, Encoding.UTF8);
            Dictionary<string, string> configObjects = JsonSerializer.Deserialize<Dictionary<string, string>>(jsonString)!;

            if (update_flag)
            {
                //Futaba futaba = new Futaba("proxy_address", "id", "password"); //Proxy環境を利用する場合
                string response = await client.getAccessToken(configObjects);
                Dictionary<string, object> res = JsonSerializer.Deserialize<Dictionary<string, object>>(response)!;
                if (res["accessToken"] != null && res["refreshToken"] != null)
                {
                    configObjects["access_token"] = res["accessToken"].ToString();
                    configObjects["refresh_token"] = res["refreshToken"].ToString();
                    string configString = JsonSerializer.Serialize(configObjects);
                    File.WriteAllText(filePath, configString, Encoding.UTF8);
                }
                Console.WriteLine(response);
            }
            else
            {
                client.setAccessToken(configObjects);
            }
        }

        private static async Task Sample_1_1()
        {
            Dictionary<string, object> model_1_1 = r90.generateSearchParameters(new string[] { "dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1" });
            Dictionary<string, object> telemetry_search_parameters = r90.generateParameterWithPath("/research_1FL/*", model_1_1);
            Console.WriteLine(await client.getTelemetryData(telemetry_search_parameters));
        }

        private static async Task Sample_1_2()
        {
            Dictionary<string, object> telemetry_search_parameters = r90.generateParameterWithQuery("SELECT T FROM digitaltwins T WHERE IS_DEFINED(T.m_pointId)");
            Console.WriteLine(await client.getTelemetryData(telemetry_search_parameters));
        }

        private static async Task Sample_1_3()
        {
            r90.initializeFilterObject()
                .setFilterOfTwinTitle(new string[] { "ElementA", "ElementB" })
                .setFilterOfGlobalId(new string[] { "aaa", "bbb" })
                .setFilterOfTwinTag(new string[] { "tagA", "tagC" }, "and")
                .setFilterOfTwinPath(new string[] { "/A/*", "/B" })
                .setFilterOfTwinModelId(new string[] { "dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1" })
                .setFilterOfDtId(new string[] { "R90_000001", "R90_000002" })
                .generateParameterWithFilter();
            Dictionary<string, object> telemetry_search_parameters = r90.generateParameterWithFilter();

            //メソッドチェーンを使わない場合はコチラ
            //Dictionary<string, object> obj = new Dictionary<string, object>()
            //{
            //    { "title", new Dictionary<string, object>(){ { "values", new string[] { "ElementA", "ElementB" } } } },
            //    { "globalId", new Dictionary<string, object>(){ { "values", new string[] { "aaa", "bbb" } } } },
            //    { "tags", new Dictionary<string, object>(){ { "values", new string[] { "tagA", "tagC" } }, { "condition", "and" } } },
            //    { "path", new Dictionary<string, object>(){ { "values", new string[] { "/A", "/B/*" } } } },
            //    { "model", new Dictionary<string, object>(){ { "values", new string[] { "dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1" } } } },
            //    { "dtId", new Dictionary<string, object>(){ { "values", new string[] { "R90_000001", "R90_000002" } } } }
            //};
            //Dictionary<string, object> telemetry_search_parameters = r90.generateParameterWithFilter(obj);
            Console.WriteLine(await client.getTelemetryData(telemetry_search_parameters));
        }

        private static async Task Sample_2_1()
        {
            Dictionary<string, object> model_2_1 = r90.generateSearchParameters("dtmi:point:bacnetPoint;1");
            Dictionary<string, object> telemetry_search_parameters = r90.generateParameterWithPath("/research_1FL/*", model_2_1);
            Console.WriteLine(await client.getDigitalTwinData(telemetry_search_parameters));
        }

        private static async Task Sample_2_2()
        {
            Dictionary<string, object> telemetry_search_parameters = r90.generateParameterWithQuery("SELECT * FROM digitaltwins T WHERE IS_DEFINED(T.tag.TagA)", true);
            Console.WriteLine(await client.getDigitalTwinData(telemetry_search_parameters));
        }

        private static async Task Sample_2_3()
        {
            r90.initializeFilterObject()
                .setFilterOfTwinTitle(new string[] { "ElementA", "ElementB" })
                .setFilterOfGlobalId(new string[] { "aaa", "bbb" })
                .setFilterOfTwinTag(new string[] { "tagA", "tagC" }, "and")
                .setFilterOfTwinPath(new string[] { "/A/*", "/B" })
                .setFilterOfTwinModelId(new string[] { "dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1" })
                .setFilterOfDtId(new string[] { "R90_000001", "R90_000002" })
                .generateParameterWithFilter();
            Dictionary<string, object> telemetry_search_parameters = r90.generateParameterWithFilter();

            //メソッドチェーンを使わない場合はコチラ
            //Dictionary<string, object> obj = new Dictionary<string, object>()
            //{
            //    { "title", new Dictionary<string, object>(){ { "values", new string[] { "ElementA", "ElementB" } } } },
            //    { "globalId", new Dictionary<string, object>(){ { "values", new string[] { "aaa", "bbb" } } } },
            //    { "tags", new Dictionary<string, object>(){ { "values", new string[] { "tagA", "tagC" } }, { "condition", "and" } } },
            //    { "path", new Dictionary<string, object>(){ { "values", new string[] { "/A", "/B/*" } } } },
            //    { "model", new Dictionary<string, object>(){ { "values", new string[] { "dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1" } } } },
            //    { "dtId", new Dictionary<string, object>(){ { "values", new string[] { "R90_000001", "R90_000002" } } } }
            //};
            //Dictionary<string, object> telemetry_search_parameters = r90.generateParameterWithFilter(obj);
            Console.WriteLine(await client.getDigitalTwinData(telemetry_search_parameters));
        }

        private static async Task Sample_3_1()
        {
            Dictionary<string, object> model_3_1 = r90.generateSearchParameters("dtmi:point:bacnetPoint;1");
            Dictionary<string, object> telemetry_search_parameters = r90.generateParameterWithPath("/research_1FL/*", model_3_1);
            string update_property = "minimum";
            string update_value = "10.5";
            Console.WriteLine(await client.updateDigitalTwinData(telemetry_search_parameters, update_property, update_value));
        }

        private static async Task Sample_3_2()
        {
            Dictionary<string, object> telemetry_search_parameters = r90.generateParameterWithQuery("SELECT * FROM digitaltwins T WHERE IS_DEFINED(T.tag.TagA)");
            string update_property = "minimum";
            string update_value = "10.5";
            Console.WriteLine(await client.updateDigitalTwinData(telemetry_search_parameters, update_property, update_value));
        }

        private static async Task Sample_3_3()
        {
            r90.initializeFilterObject()
                .setFilterOfTwinTitle(new string[] { "ElementA", "ElementB" })
                .setFilterOfGlobalId(new string[] { "aaa", "bbb" })
                .setFilterOfTwinTag(new string[] { "tagA", "tagC" }, "and")
                .setFilterOfTwinPath(new string[] { "/A/*", "/B" })
                .setFilterOfTwinModelId(new string[] { "dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1" })
                .setFilterOfDtId(new string[] { "R90_000001", "R90_000002" })
                .generateParameterWithFilter();
            Dictionary<string, object> telemetry_search_parameters = r90.generateParameterWithFilter();

            //メソッドチェーンを使わない場合はコチラ
            //Dictionary<string, object> obj = new Dictionary<string, object>()
            //{
            //    { "title", new Dictionary<string, object>(){ { "values", new string[] { "ElementA", "ElementB" } } } },
            //    { "globalId", new Dictionary<string, object>(){ { "values", new string[] { "aaa", "bbb" } } } },
            //    { "tags", new Dictionary<string, object>(){ { "values", new string[] { "tagA", "tagC" } }, { "condition", "and" } } },
            //    { "path", new Dictionary<string, object>(){ { "values", new string[] { "/A", "/B/*" } } } },
            //    { "model", new Dictionary<string, object>(){ { "values", new string[] { "dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1" } } } },
            //    { "dtId", new Dictionary<string, object>(){ { "values", new string[] { "R90_000001", "R90_000002" } } } }
            //};
            //Dictionary<string, object> telemetry_search_parameters = r90.generateParameterWithFilter(obj);
            string update_property = "minimum";
            string update_value = "10.5";
            Console.WriteLine(await client.updateDigitalTwinData(telemetry_search_parameters, update_property, update_value));
        }

        private async Task Sample_4()
        {
            string control_dtid = "R90_000001";
            float control_value = 26.2f;
            int control_priority = 40;
            Console.WriteLine(await client.controlDigitalTwinData(r90.root_building[0], control_dtid, control_value, control_priority));
        }

        private static async Task Sample_5_1()
        {
            Dictionary<string, object> model_5_1 = r90.generateSearchParameters("dtmi:point:bacnetPoint;1");
            Dictionary<string, object> telemetry_search_parameters = r90.generateParameterWithPath("/research_1FL/*", model_5_1);
            Console.WriteLine(await client.setTelemetryStream(telemetry_search_parameters));
        }

        private static async Task Sample_5_2()
        {
            Dictionary<string, object> telemetry_search_parameters = r90.generateParameterWithQuery("SELECT * FROM digitaltwins T WHERE IS_DEFINED(T.tag.TagA)");
            Console.WriteLine(await client.setTelemetryStream(telemetry_search_parameters));
        }

        private static async Task Sample_5_3()
        {
            r90.initializeFilterObject()
                .setFilterOfTwinTitle(new string[] { "ElementA", "ElementB" })
                .setFilterOfGlobalId(new string[] { "aaa", "bbb" })
                .setFilterOfTwinTag(new string[] { "tagA", "tagC" }, "and")
                .setFilterOfTwinPath(new string[] { "/A/*", "/B" })
                .setFilterOfTwinModelId(new string[] { "dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1" })
                .setFilterOfDtId(new string[] { "R90_000001", "R90_000002" })
                .generateParameterWithFilter();
            Dictionary<string, object> telemetry_search_parameters = r90.generateParameterWithFilter();

            //メソッドチェーンを使わない場合はコチラ
            //Dictionary<string, object> obj = new Dictionary<string, object>()
            //{
            //    { "title", new Dictionary<string, object>(){ { "values", new string[] { "ElementA", "ElementB" } } } },
            //    { "globalId", new Dictionary<string, object>(){ { "values", new string[] { "aaa", "bbb" } } } },
            //    { "tags", new Dictionary<string, object>(){ { "values", new string[] { "tagA", "tagC" } }, { "condition", "and" } } },
            //    { "path", new Dictionary<string, object>(){ { "values", new string[] { "/A", "/B/*" } } } },
            //    { "model", new Dictionary<string, object>(){ { "values", new string[] { "dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1" } } } },
            //    { "dtId", new Dictionary<string, object>(){ { "values", new string[] { "R90_000001", "R90_000002" } } } }
            //};
            //Dictionary<string, object> telemetry_search_parameters = r90.generateParameterWithFilter(obj);
            Console.WriteLine(await client.setTelemetryStream(telemetry_search_parameters));

        }

        private static async Task Sample_6_1()
        {
            Dictionary<string, object> model_6_1 = r90.generateSearchParameters("dtmi:point:bacnetPoint;1", "startswith");
            Dictionary<string, object> telemetry_search_parameters = r90.generateParameterWithPath("/research_1FL/*", model_6_1);
            Console.WriteLine(await client.deleteTelemetryStream(telemetry_search_parameters));
        }

        private static async Task Sample_6_2()
        {
            Dictionary<string, object> telemetry_search_parameters = r90.generateParameterWithQuery("SELECT T FROM digitaltwins T WHERE IS_DEFINED(T.m_pointId)");
            Console.WriteLine(await client.deleteTelemetryStream(telemetry_search_parameters));
        }

        private static async Task Sample_6_3()
        {
            r90.initializeFilterObject()
                .setFilterOfTwinTitle(new string[] { "ElementA", "ElementB" })
                .setFilterOfGlobalId(new string[] { "aaa", "bbb" })
                .setFilterOfTwinTag(new string[] { "tagA", "tagC" }, "and")
                .setFilterOfTwinPath(new string[] { "/A/*", "/B" })
                .setFilterOfTwinModelId(new string[] { "dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1" })
                .setFilterOfDtId(new string[] { "R90_000001", "R90_000002" })
                .generateParameterWithFilter();
            Dictionary<string, object> telemetry_search_parameters = r90.generateParameterWithFilter();

            //メソッドチェーンを使わない場合はコチラ
            //Dictionary<string, object> obj = new Dictionary<string, object>()
            //{
            //    { "title", new Dictionary<string, object>(){ { "values", new string[] { "ElementA", "ElementB" } } } },
            //    { "globalId", new Dictionary<string, object>(){ { "values", new string[] { "aaa", "bbb" } } } },
            //    { "tags", new Dictionary<string, object>(){ { "values", new string[] { "tagA", "tagC" } }, { "condition", "and" } } },
            //    { "path", new Dictionary<string, object>(){ { "values", new string[] { "/A", "/B/*" } } } },
            //    { "model", new Dictionary<string, object>(){ { "values", new string[] { "dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1" } } } },
            //    { "dtId", new Dictionary<string, object>(){ { "values", new string[] { "R90_000001", "R90_000002" } } } }
            //};
            //Dictionary<string, object> telemetry_search_parameters = r90.generateParameterWithFilter(obj);
            Console.WriteLine(await client.deleteTelemetryStream(telemetry_search_parameters));

        }

        private static async Task Sample_7()
        {
            Console.WriteLine(await client.checkTelemetryStream());
        }

        private static async Task WoT_Sample_1()
        {
            Console.WriteLine(await client.getThings("R90/research/reasearch_1FL//*"));
        }

        private static async Task WoT_Sample_2_1()
        {
            Dictionary<string, object> wot_search_parameters = r90.generateParameterWithQuery("SELECT * FROM digitaltwins T WHERE T.tag.TagA = True");
            Console.WriteLine(await client.getThingsByParameter(wot_search_parameters));
        }

        private static async Task WoT_Sample_2_2()
        {
            Console.WriteLine(await client.getThings("R90/research/reasearch_1FL//*"));
        }

        static async Task Main(string[] args)
        {
            r90.setTargetBuilding(new string[] { "R90/research", "R90/east" })
                .setDownloadFolderPath("./download");
            await initializeToken(true);
        }
    }
}