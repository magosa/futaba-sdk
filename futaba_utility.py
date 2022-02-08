import sys
import json
import requests
import urllib.parse


class FutabaUtility:
    def __init__(self):
        self.root_building = ''
        self.file_options = {
            'file_name': None,
            'file_type': "parquet",
            'compress_type': "snappy"
        }
        self.download_folder = './download/'
        self.filter_objcet = {}

    def alterArrayPrameter(self, value):
        item = []
        if type(value) is list:
            item = value
        elif type(value) is str:
            item.append(value)
        else:
            print("Parameters must be string or string array!", file=sys.stderr)
            sys.exit(1)
        return item

    def generateSearchParameters(self, values, condition=None):
        object = {
            'values': self.alterArrayPrameter(values)
        }
        if condition is not None:
            if condition == "or" or condition == "and" or condition == "startswith":
                object['condition'] = condition
            else:
                print("Assign the appropriate value to the condition.", file=sys.stderr)
                sys.exit(1)
        return object

    def setTargetBuilding(self, building_array):
        self.root_building = self.alterArrayPrameter(building_array);
        return self

    def setFileOptions(self, file_name=None, file_type="parquet", compress_type="snappy"):
        if file_name is not None and type(file_name) is str and len(file_name) > 0:
            self.file_options['file_name'] = file_name
        else:
            print("There is a mistake in the file_name.")
            print("file_name is automatically replaced.")
            self.file_options['file_name'] = None
        self.file_options['file_type'] = file_type
        if file_type == 'parquet':
            if compress_type == 'gzip':
                self.file_options['compress_type'] = "gzip"
            else:
                print("There is a mistake in the compress_type.")
                print("compress_type is automatically replaced with snappy.")
                self.file_options['compress_type'] = "snappy"
        elif file_type == 'orc':
            if compress_type == 'zlib':
                self.file_options['compress_type'] = "zlib"
            else:
                print("There is a mistake in the compress_type.")
                print("compress_type is automatically replaced with snappy.")
                self.file_options['compress_type'] = "snappy"
        elif file_type == 'csv' or file_type == 'delta':
            self.file_options['compress_type'] = None
        else:
            print("There is a mistake in the file_type.")
            print("File options are automatically replaced with defaults.")
            self.file_options['file_type'] = "parquet"
            self.file_options['compress_type'] = "snappy"
        return self

    def setDownloadFolderPath(self, folder_path):
        self.download_folder = folder_path
        return self

    def generateParameterWithPath(self, path, model=None, include_metadata=False):
        object = {
            'root':self.root_building,
            'type':'path',
            'path':path
        }
        if model is not None:
            object['model'] = model
        if include_metadata:
            object['includeMetadata'] = include_metadata
        return object

    def generateParameterWithQuery(self, query, include_metadata=False):
        object = {
            'root':self.root_building,
            'type':'query',
            'query':query
        }
        if include_metadata:
            object['includeMetadata'] = include_metadata
        return object

    def initializeFilterObject(self):
        self.filter_objcet.clear()
        return self

    def setFilterOfTwinTitle(self, search_parameters, comparison_method=None):
        self.filter_objcet['title'] = self.generateSearchParameters(search_parameters, comparison_method)
        return self

    def setFilterOfGlobalId(self, search_parameters, comparison_method=None):
        self.filter_objcet['globalId'] = self.generateSearchParameters(search_parameters, comparison_method)
        return self

    def setFilterOfTwinTag(self, search_parameters, comparison_method=None):
        self.filter_objcet['tags'] = self.generateSearchParameters(search_parameters, comparison_method)
        return self

    def setFilterOfTwinPath(self, search_parameters, comparison_method=None):
        self.filter_objcet['path'] = self.generateSearchParameters(search_parameters, comparison_method)
        return self

    def setFilterOfTwinModelId(self, search_parameters, comparison_method=None):
        self.filter_objcet['model'] = self.generateSearchParameters(search_parameters, comparison_method)
        return self

    def setFilterOfDtId(self, search_parameters, comparison_method=None):
        self.filter_objcet['dtId'] = self.generateSearchParameters(search_parameters, comparison_method)
        return self

    def generateParameterWithFilter(self, filter=None, include_metadata=False):
        object = {
            'root':self.root_building,
            'type':'filter'
        }
        if filter is not None:
            object['filter'] = filter
        else:
            print("Use the filter object of the instance.")
            object['filter'] = self.filter_objcet
        if include_metadata:
            object['includeMetadata'] = include_metadata
        return object

    def generateTaskObject(self, exec_type, points, option_process=None):
        object = {
            'execType':exec_type,
            'root':self.root_building,
            'fileType':self.file_options['file_type']
        }
        if self.file_options['file_name'] is not None:
            object['fileName'] = self.file_options['file_name']
        if self.file_options['file_type'] == 'parquet' or self.file_options['file_type'] == 'orc':
            object['compressType'] = self.file_options['compress_type']
        if 'root' in points:
            del points['root']
        if 'includeMetadata' in points:
            del points['includeMetadata']
        object['points'] = points
        if option_process is not None:
            object['optionProcess'] = option_process
        return object

    def generateImmediatelyTask(self, start_date, end_date, points, option_process=None):
        i_task = self.generateTaskObject(1, points, option_process)
        i_task['startDate'] = start_date
        i_task['endDate'] = end_date
        return i_task

    def generateReserveTask(self, execute_datetime, start_date, end_date, points, option_process=None):
        r_task = self.generateTaskObject(2, points, option_process)
        r_task['execDatetime'] = execute_datetime
        r_task['startDate'] = start_date
        r_task['endDate'] = end_date
        return r_task

    def generateScheduleTask(self, cron_schedule, start_datetime, end_datetime, going_back_date, data_starting_time, duration_time, points, option_process=None):
        s_task = self.generateTaskObject(3, points, option_process)
        s_task['schedule'] = cron_schedule
        s_task['scheduleStartDatetime'] = start_datetime
        s_task['scheduleEndDatetime'] = end_datetime
        s_task['dataStartDaysBefore'] = going_back_date
        s_task['dataStartHour'] = data_starting_time
        s_task['dataDurationHours'] = duration_time
        return s_task
