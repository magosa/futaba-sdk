class FutabaUtility {
  constructor() {
    this.root_building = "";
    this.file_options = {
      file_name: null,
      file_type: "parquet",
      compress_type: "snappy"
    };
    this.download_folder = "./download/";
    this.filter_objcet = {};
  }

  alterArrayPrameter(value) {
    let item = [];
    if (Array.isArray(value)) {
      item = value;
    } else if (typeof value === "string") {
      item.push(value);
    } else {
      console.error("Parameters must be string or string array!");
    }
    return item;
  }

  generateSearchParameters(values, condition = null) {
    let object = {
      values: this.alterArrayPrameter(values)
    };
    if (condition) {
      if (condition == "or" || condition == "and" || condition == "startswith") {
        object['condition'] = condition;
      } else {
        console.error("Assign the appropriate value to the condition.")
      }
    }
    return object;
  }

  setTargetBuilding(building_array) {
    this.root_building = this.alterArrayPrameter(building_array);
    return this;
  }

  getTargetBuilding() {
    return this.root_building;
  }

  setFileOptions(file_name = null, file_type = "parquet", compress_type = "snappy") {
    if (file_name && typeof file_name === 'string' && file_name.length > 0) {
      this.file_options.file_name = file_name
    } else {
      console.info("There is a mistake in the file_name.")
      console.info("file_name is automatically replaced.")
      this.file_options.file_name = null
    }
    this.file_options.file_type = file_type
    switch (file_type) {
      case 'parquet':
        if (compress_type == 'gzip') {
          this.file_options.compress_type = "gzip"
        } else {
          console.info("There is a mistake in the compress_type.")
          console.info("compress_type is automatically replaced with snappy.")
          this.file_options.compress_type = "snappy"
        }
        break;
      case 'orc':
        if (compress_type == 'zlib') {
          this.file_options.compress_type = "zlib"
        } else {
          console.info("There is a mistake in the compress_type.")
          console.info("compress_type is automatically replaced with snappy.")
          this.file_options.compress_type = "snappy"
        }
        break;
      case 'csv':
        this.file_options.compress_type = null
        break;
      case 'delta':
        this.file_options.compress_type = null
        break;
      default:
        console.info("There is a mistake in the file_type.")
        console.info("File options are automatically replaced with defaults.")
        this.file_options.file_type = "parquet"
        this.file_options.compress_type = "snappy"
    }
    return this;
  }

  setDownloadFolderPath(folder_path) {
    this.download_folder = folder_path;
    return this;
  }

  generateParameterWithPath(path, model = null, include_metadata = false) {
    let object = {
      root: this.root_building,
      type: "path",
      path: path
    };
    if (model) {
      object['model'] = model;
    }
    if (include_metadata) {
      object['includeMetadata'] = include_metadata;
    }

    return object;
  }

  generateParameterWithQuery(query, include_metadata = false) {
    let object = {
      root: this.root_building,
      type: "query",
      query: query
    };
    if (include_metadata) {
      object['includeMetadata'] = include_metadata;
    }

    return object;
  }

  initializeFilterObject() {
    this.filter_objcet = {};
    return this;
  }

  setFilterOfTwinTitle(search_parameters, comparison_method = null) {
    this.filter_objcet['title'] = this.generateSearchParameters(search_parameters, comparison_method)
    return this;
  }

  setFilterOfGlobalId(search_parameters, comparison_method = null) {
    this.filter_objcet['globalId'] = this.generateSearchParameters(search_parameters, comparison_method)
    return this;
  }

  setFilterOfTwinTag(search_parameters, comparison_method = null) {
    this.filter_objcet['tags'] = this.generateSearchParameters(search_parameters, comparison_method)
    return this;
  }

  setFilterOfTwinPath(search_parameters, comparison_method = null) {
    this.filter_objcet['path'] = this.generateSearchParameters(search_parameters, comparison_method)
    return this;
  }

  setFilterOfTwinModelId(search_parameters, comparison_method = null) {
    this.filter_objcet['model'] = this.generateSearchParameters(search_parameters, comparison_method)
    return this;
  }

  setFilterOfDtId(search_parameters, comparison_method = null) {
    this.filter_objcet['dtId'] = this.generateSearchParameters(search_parameters, comparison_method)
    return this;
  }

  generateParameterWithFilter(filter = null, include_metadata = false) {
    let object = {
      root: this.root_building,
      type: "filter"
    };

    if (filter) {
      object['filter'] = filter;
    } else {
      console.info("Use the filter object of the instance.");
      object['filter'] = this.filter_objcet;
    }

    if (include_metadata) {
      object['includeMetadata'] = include_metadata;
    }

    return object;
  }


  generateTaskObject(exec_type, points, option_process = null) {
    let object = {
      execType: exec_type,
      root: this.root_building,
      fileType: this.file_options.file_type
    }

    if (this.file_options.file_name) {
      object['fileName'] = this.file_options.file_name;
    }

    if (this.file_options.file_type == 'parquet' || this.file_options.file_type == 'orc') {
      object['compressType'] = this.file_options.compress_type;
    }

    if ('root' in points) {
      delete points.root;
    }
    if ('includeMetadata' in points) {
      delete points.includeMetadata;
    }
    object['points'] = points;

    if (option_process) {
      object['optionProcess'] = option_process;
    }

    return object;
  }

  generateImmediatelyTask(start_date, end_date, points, option_process = null) {
    let i_task = this.generateTaskObject(1, points, option_process)
    i_task['startDate'] = start_date;
    i_task['endDate'] = end_date;

    return i_task;
  }

  generateReserveTask(execute_datetime, start_date, end_date, points, option_process = null) {
    let r_task = this.generateTaskObject(2, points, option_process)
    r_task['execDatetime'] = execute_datetime;
    r_task['startDate'] = start_date;
    r_task['endDate'] = end_date;

    return r_task;
  }

  generateScheduleTask(cron_schedule, start_datetime, end_datetime, going_back_date, data_starting_time, duration_time, points, option_process = null) {
    let s_task = this.generateTaskObject(3, points, option_process)
    s_task['schedule'] = cron_schedule;
    s_task['scheduleStartDatetime'] = start_datetime;
    s_task['scheduleEndDatetime'] = end_datetime;
    s_task['dataStartDaysBefore'] = going_back_date;
    s_task['dataStartHour'] = data_starting_time;
    s_task['dataDurationHours'] = duration_time;

    return s_task;
  }
}

module.exports = FutabaUtility;
