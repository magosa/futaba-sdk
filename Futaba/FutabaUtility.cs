using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Futaba
{
    public class FutabaUtility
    {
        string[] root_building;
        Dictionary<string, string?> file_options = new Dictionary<string, string?>()
        {
            { "file_name", null },
            { "file_type", "parquet" },
            { "compress_type", "snappy" }
        };
        string download_folder = "./download/";
        Dictionary<string, object> filter_objcet = new Dictionary<string, object>();

        private Dictionary<string, object> generateSearchParameters(string value, string? condition = null)
        {
            Dictionary<string, object> obj = new Dictionary<string, object>()
            {
                { "value", new string[]{ value } }
            };
            if (condition != null)
            {
                if (condition == "or" || condition == "and" || condition == "startswith")
                {
                    obj["condition"] = condition;

                }
                else
                {
                    Console.WriteLine("Assign the appropriate value to the condition.");
                    Environment.Exit(0x8020);
                }
            }
            return obj;
        }

        private Dictionary<string, object> generateSearchParameters(string[] value, string? condition = null)
        {
            Dictionary<string, object> obj = new Dictionary<string, object>()
            {
                { "value", value }
            };
            if (condition != null)
            {
                if (condition == "or" || condition == "and" || condition == "startswith")
                {
                    obj["condition"] = condition;

                }
                else
                {
                    Console.WriteLine("Assign the appropriate value to the condition.");
                    Environment.Exit(0x8020);
                }
            }
            return obj;
        }

        public FutabaUtility setTargetBuilding(string building)
        {
            this.root_building = new string[] { building };
            return this;
        }

        public FutabaUtility setTargetBuilding(string[] building_array)
        {
            this.root_building = building_array;
            return this;
        }

        public FutabaUtility setFileOptions(string? file_name = null, string file_type = "parquet", string compress_type = "snappy")
        {
            this.file_options["file_name"] = file_name;
            this.file_options["file_type"] = file_type;
            switch (file_type)
            {
                case "parquet":
                    switch (compress_type)
                    {
                        case "snappy":
                            this.file_options["compress_type"] = "snappy";
                            break;
                        case "gzip":
                            this.file_options["compress_type"] = "gzip";
                            break;
                        default:
                            Console.WriteLine("There is a mistake in the compress_type.");
                            Console.WriteLine("compress_type is automatically replaced with snappy.");
                            this.file_options["compress_type"] = "snappy";
                            break;
                    }
                    break;
                case "orc":
                    switch (compress_type)
                    {
                        case "snappy":
                            this.file_options["compress_type"] = "snappy";
                            break;
                        case "zlib":
                            this.file_options["compress_type"] = "zlib";
                            break;
                        default:
                            Console.WriteLine("There is a mistake in the compress_type.");
                            Console.WriteLine("compress_type is automatically replaced with snappy.");
                            this.file_options["compress_type"] = "snappy";
                            break;
                    }
                    break;
                case "csv":
                    this.file_options["compress_type"] = null;
                    break;
                case "delta":
                    this.file_options["compress_type"] = null;
                    break;
                default:
                    Console.WriteLine("There is a mistake in the file_type.");
                    Console.WriteLine("File options are automatically replaced with defaults.");
                    this.file_options["file_type"] = "parquet";
                    this.file_options["compress_type"] = "snappy";
                    break;
            }
            return this;
        }

        public FutabaUtility setDownloadFolderPath(string folder_path)
        {
            this.download_folder = folder_path;
            return this;
        }

        public Dictionary<string, object> generateParameterWithPath(string path, object? model = null, bool include_metadata = false)
        {
            Dictionary<string, object> obj = new Dictionary<string, object>(){
                { "root", this.root_building },
                { "type", "path" },
                { "path", path }
            };
            if (model != null)
            {
                obj["model"] = model;
            }
            if (include_metadata)
            {
                obj["includeMetadata"] = include_metadata;
            }
            return obj;
        }

        public Dictionary<string, object> generateParameterWithQuery(string query, bool include_metadata = false)
        {
            Dictionary<string, object> obj = new Dictionary<string, object>(){
                { "root", this.root_building },
                { "type", "query" },
                { "query", query }
            };
            if (include_metadata)
            {
                obj["includeMetadata"] = include_metadata;
            }
            return obj;
        }

        public FutabaUtility initializeFilterObject()
        {
            this.filter_objcet.Clear();
            return this;
        }

        public FutabaUtility setFilterOfTwinTitle(string search_parameters, string? comparison_method = null)
        {
            this.filter_objcet["title"] = this.generateSearchParameters(search_parameters, comparison_method);
            return this;
        }

        public FutabaUtility setFilterOfTwinTitle(string[] search_parameters, string? comparison_method = null)
        {
            this.filter_objcet["title"] = this.generateSearchParameters(search_parameters, comparison_method);
            return this;
        }

        public FutabaUtility setFilterOfGlobalId(string search_parameters, string? comparison_method = null)
        {
            this.filter_objcet["globalId"] = this.generateSearchParameters(search_parameters, comparison_method);
            return this;
        }

        public FutabaUtility setFilterOfGlobalId(string[] search_parameters, string? comparison_method = null)
        {
            this.filter_objcet["globalId"] = this.generateSearchParameters(search_parameters, comparison_method);
            return this;
        }

        public FutabaUtility setFilterOfTwinTag(string search_parameters, string? comparison_method = null)
        {
            this.filter_objcet["tags"] = this.generateSearchParameters(search_parameters, comparison_method);
            return this;
        }

        public FutabaUtility setFilterOfTwinTag(string[] search_parameters, string? comparison_method = null)
        {
            this.filter_objcet["tags"] = this.generateSearchParameters(search_parameters, comparison_method);
            return this;
        }

        public FutabaUtility setFilterOfTwinPath(string search_parameters, string? comparison_method = null)
        {
            this.filter_objcet["path"] = this.generateSearchParameters(search_parameters, comparison_method);
            return this;
        }

        public FutabaUtility setFilterOfTwinPath(string[] search_parameters, string? comparison_method = null)
        {
            this.filter_objcet["path"] = this.generateSearchParameters(search_parameters, comparison_method);
            return this;
        }

        public FutabaUtility setFilterOfTwinModelId(string search_parameters, string? comparison_method = null)
        {
            this.filter_objcet["model"] = this.generateSearchParameters(search_parameters, comparison_method);
            return this;
        }

        public FutabaUtility setFilterOfTwinModelId(string[] search_parameters, string? comparison_method = null)
        {
            this.filter_objcet["model"] = this.generateSearchParameters(search_parameters, comparison_method);
            return this;
        }

        public FutabaUtility setFilterOfDtId(string search_parameters, string? comparison_method = null)
        {
            this.filter_objcet["dtId"] = this.generateSearchParameters(search_parameters, comparison_method);
            return this;
        }

        public FutabaUtility setFilterOfDtId(string[] search_parameters, string? comparison_method = null)
        {
            this.filter_objcet["dtId"] = this.generateSearchParameters(search_parameters, comparison_method);
            return this;
        }

        public Dictionary<string, object> generateParameterWithFilter(string? filter = null, bool include_metadata = false)
        {
            Dictionary<string, object> obj = new Dictionary<string, object>(){
                { "root", this.root_building },
                { "type", "filter" }
            };
            if (filter != null)
            {
                obj["filter"] = filter;
            }
            else
            {
                obj["filter"] = this.filter_objcet;
            }
            if (include_metadata)
            {
                obj["includeMetadata"] = include_metadata;
            }
            return obj;
        }

        public Dictionary<string, object> generateTaskObject(int exec_type, Dictionary<string, object> points, Dictionary<string, object>? option_process = null)
        {
            Dictionary<string, object> obj = new Dictionary<string, object>(){
                { "execType", exec_type },
                { "root", this.root_building },
                { "fileType", this.file_options["file_type"] }
            };
            string? check;
            if (this.file_options["file_name"] != null)
            {
                obj["fileName"] = this.file_options["file_name"];
            }
            if (this.file_options["file_type"] == "parquet" || this.file_options["file_type"] == "orc")
            {
                obj["compressType"] = this.file_options["compress_type"];
            }
            if (points.ContainsKey("root"))
            {
                points.Remove("root");
            }
            if (points.ContainsKey("includeMetadata"))
            {
                points.Remove("includeMetadata");
            }
            obj["points"] = points;
            if (option_process != null)
            {
                obj["optionProcess"] = option_process;
            }
            return obj;
        }

        public Dictionary<string, object> generateImmediatelyTask(string start_date, string end_date, Dictionary<string, object> points, Dictionary<string, object>? option_process = null)
        {
            Dictionary<string, object> i_task = this.generateTaskObject(1, points, option_process);
            i_task["startDate"] = start_date;
            i_task["endDate"] = end_date;
            return i_task;
        }

        public Dictionary<string, object> generateReserveTask(string execute_datetime, string start_date, string end_date, Dictionary<string, object> points, Dictionary<string, object>? option_process = null)
        {
            Dictionary<string, object> r_task = this.generateTaskObject(2, points, option_process);
            r_task["execDatetime"] = execute_datetime;
            r_task["startDate"] = start_date;
            r_task["endDate"] = end_date;
            return r_task;
        }

        public Dictionary<string, object> generateScheduleTask(string cron_schedule, string start_datetime, string end_datetime, string going_back_date, string data_starting_time, string duration_time, Dictionary<string, object> points, Dictionary<string, object>? option_process = null)
        {
            Dictionary<string, object> s_task = this.generateTaskObject(3, points, option_process);
            s_task["schedule"] = cron_schedule;
            s_task["scheduleStartDatetime"] = start_datetime;
            s_task["scheduleEndDatetime"] = end_datetime;
            s_task["dataStartDaysBefore"] = going_back_date;
            s_task["dataStartHour"] = data_starting_time;
            s_task["dataDurationHours"] = duration_time;
            return s_task;
        }
    }
}
