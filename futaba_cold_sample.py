import os
import futaba
import futaba_utility
import json

json_open = open('./data/config.json', 'r')
obj = json.load(json_open)
client = futaba.Futaba()
fu = futaba_utility.FutabaUtility()
fu.setTargetBuilding(["R90/research", "R90/east"]
).setDownloadFolderPath(os.path.dirname(__file__) + "download"
).setFileOptions("test", "parquet", "gzip")

def updateToken():
    token = client.getAccessToken(obj)
    with open('./data/config.json', 'w') as f:
        obj['access_token'] = token['accessToken']
        obj['refresh_token'] = token['refreshToken']
        json.dump(obj, f, indent=2)
    print(token)


# モデル学習データAPI サンプル

# 1-1 パス指定
def Sample_1_1_Path():
    model_1_1_path = fu.generateSearchParameters(["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"])
    points_1_1 = fu.generateParameterWithPath("/research_-/*", model_1_1_path)
    option_1_1 = {
        'type':1,
        'value':"15"
    }
    task_parameters = fu.generateImmediatelyTask("2020-06-01T12:00+09:00", "2020-06-04T12:00+09:00", points_1_1, option_1_1)
    response_1_1 = client.createTask(task_parameters)
    print(json.dumps(response_1_1, indent=2))


# 1-1 ADTクエリ指定
def Sample_1_1_Query():
    points_1_1 = fu.generateParameterWithQuery("SELECT * FROM digitaltwins T WHERE IS_OF_MODEL(T, 'dtmi:point:bacnetPoint', exact) AND IS_DEFINED(T.tags.TagE)")
    option_1_1 = {
        'type':1,
        'value':"30"
    }
    task_parameters = fu.generateImmediatelyTask("2020-06-01T12:00+09:00", "2020-06-04T12:00+09:00", points_1_1, option_1_1)
    response_1_1 = client.createTask(task_parameters)
    print(json.dumps(response_1_1, indent=2))


# 1-1 フィルター指定
def Sample_1_1_Filter():
    points_1_1 = fu.initializeFilterObject(
    ).setFilterOfTwinTitle(["ElementA", "ElementB"]
    ).setFilterOfTwinTag(["tagA", "tagC"], "and"
    ).setFilterOfTwinPath(["/A", "/B/*"]
    ).setFilterOfTwinModelId(["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"]
    ).setFilterOfDtId(["R90_000001", "R90_000002"]
    ).generateParameterWithFilter()
    # メソッドチェーンを使わない場合はコチラ
    # obj = {
    #     'title': {
    #         'values': ["ElementA", "ElementB"]
    #     },
    #     'tags': {
    #         'condition': "and",
    #         'values': ["tagA", "tagC"]
    #     },
    #     'path': {
    #         'values': ["/A", "/B/*"]
    #     },
    #     'model': {
    #         'values': ["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"]
    #     },
    #     'dtId': {
    #         'values': ["R90_000001", "R90_000002"]
    #     }
    # }
    # points_1_1 = generateParameterWithFilter(obj)
    option_1_1 = None
    task_parameters = fu.generateImmediatelyTask("2020-06-01T12:00+09:00", "2020-06-04T12:00+09:00", points_1_1, option_1_1)
    response_1_1 = client.createTask(task_parameters)
    print(json.dumps(response_1_1, indent=2))


# 2.タスク詳細確認
def Sample_2():
    response_2 = client.getTaskProgress(None, "enable", "2020-05-01T12:00+09:00", True)
    print(json.dumps(response_2, indent=2))


# 3.タスク有効状態変更
def Sample_3():
    response_3 = client.changeTaskValidity(30)
    print(json.dumps(response_3, indent=2))


# 4.タスク削除
def Sample_4():
    response_4 = client.deleteTask(30)
    print(json.dumps(response_4, indent=2))


# 5.Webhook 登録
def Sample_5():
    response_5 = client.setWebhook("https://sbt-futaba3-clientsystem.azurewebsites.net/cold/notify")
    print(json.dumps(response_5, indent=2))


# 6.Webhook 登録解除
def Sample_6():
    response_6 = client.deleteWebhook()
    print(json.dumps(response_6, indent=2))


def main():
    # トークンの発行・更新
    updateToken()

    # 既存トークンのセット
    # client.setAccessToken(obj)

    Sample_1_1_Path()


if __name__ == '__main__':
    main()
