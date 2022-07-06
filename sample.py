import os
import futaba
import futaba_utility
import json

json_open = open('./data/config.json', 'r')
obj = json.load(json_open)
client = futaba.Futaba()


def updateToken():
    token = client.getAccessToken(obj)
    with open('./data/config.json', 'w') as f:
        obj['access_token'] = token['accessToken']
        obj['refresh_token'] = token['refreshToken']
        json.dump(obj, f, indent=2)
    print(token)


def main():
    # トークンの発行・更新
    updateToken()

    # 既存トークンのセット
    # client.setAccessToken(obj)

    # デジタルツインAPI サンプル

    r90 = futaba_utility.FutabaUtility()
    r90.setTargetBuilding(["R90/research"]
    ).setDownloadFolderPath(os.path.dirname(__file__) + "download"
    ).setFileOptions("sample", "parquet", "gzip")

    # 1.テレメトリ取得
    num_list = list(range(12261, 12265))
    point_list = []
    for num in num_list:
        point_list.append("R90_0{}".format(str(num)))

    telemetry_search_parameters = r90.initializeFilterObject(
    ).setFilterOfDtId(point_list
    ).generateParameterWithFilter();

    response_0 = client.getTelemetryData(telemetry_search_parameters)
    print(json.dumps(response_0, indent=2))

    # 2.タスク詳細確認
    task_parameters = r90.generateImmediatelyTask("2022-04-12T12:00+09:00", "2022-04-12T13:00+09:00", telemetry_search_parameters, None)
    response_1 = client.createTask(task_parameters)
    print(json.dumps(response_1, indent=2))
    response_2 = client.getTaskProgress(response_1['taskId'])
    print(json.dumps(response_2, indent=2))

    # #Download URL確認
    # response_2 = client.getTaskProgress(30)
    # print(json.dumps(response_2, indent=2))


if __name__ == '__main__':
    main()
