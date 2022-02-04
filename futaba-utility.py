import sys
import json
import requests
import urllib.parse


class FutabaUtility:
    def __init__(self):
        self.root_building = ''
        self.file_options = {
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
        return

    def setFileOptions(self, file_type, compress_type="snappy"):
        return

    def setDownloadFolderPath(self, folder_path):
        return

    def generateParameterWithPath(self, path, model=None, include_metadata=False):
        return

    def generateParameterWithQuery(self, query, include_metadata=False):
        return

    def generateParameterWithFilter(self, filter=None, include_metadata=False):
        return

    def generateTaskObject(self, exec_type, points, option_process=None):
        return

    def generateImmediatelyTask(self, start_date, end_date, points, option_process=None):
        return

    def generateReserveTask(self, execute_datetime, start_date, end_date, points, option_process=None):
        return

    def generateScheduleTask(self, cron_schedule, start_datetime, end_datetime, going_back_date, data_starting_time, duration_time, points, option_process=None):
        return
