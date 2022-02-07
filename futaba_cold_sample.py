import futaba
import futaba_utility
import json

json_open = open('./data/config.json', 'r')
obj = json.load(json_open)
client = futaba.Futaba()


def updateToken():
    token = client.getAccessToken(obj)
    with open('./data/config.json', 'w') as f:
        obj['access_token'] = token['access_token']
        obj['refresh_token'] = token['refresh_token']
        json.dump(obj, f, indent=2)
    print(token)


def main():
    # トークンの発行・更新
    #updateToken()

    # 既存トークンのセット
    client.setAccessToken(obj)

    # モデル学習データAPI サンプル

    r90 = futaba_utility.FutabaUtility()
    r90.setTargetBuilding(["R90/research", "R90/east"]
    ).setFileOptions("test", "parquet", "gzip"
    ).setDownloadFolderPath(os.path.dirname(__file__) + "download")


    # 1.タスク作成

    # 1-1 パス指定
    model_1_1_path = r90.generateSearchParameters(["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"])
    points_1_1_path = r90.generateParameterWithPath("/research_-/*", model_1_1_path)
    option_1_1_path = {
        'type':1,
        'value':"15"
    }

    # 1-1 ADTクエリ指定
    points_1_1_query = r90.generateParameterWithQuery("SELECT * FROM digitaltwins T WHERE IS_OF_MODEL(T, 'dtmi:point:bacnetPoint', exact) AND IS_DEFINED(T.tags.TagE)")
    option_1_1_query = {
        'type':1,
        'value':"30"
    }

    # 1-1 フィルター指定
    points_1_1_filter = r90.initializeFilterObject(
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
    # points_1_1_filter = generateParameterWithFilter(obj)

    points_1_1 = points_1_1_filter
    option_1_1 = None
    request_body_1_1 = r90.generateImmediatelyTask("2020-06-01T12:00+09:00", "2020-06-04T12:00+09:00", points_1_1, option_1_1)

    task_parameters = request_body_1_1
    response_1_1 = client.createTask(task_parameters)
    print(json.dumps(response_1_1, indent=2))

    # 2.タスク詳細確認
    response_2 = client.getTaskProgress(null, enable, "2020-05-01T12:00+09:00", true)
    print(json.dumps(response_2, indent=2))

    # 3.タスク有効状態変更
    response_3 = client.changeTaskValidity(30)
    print(json.dumps(response_3, indent=2))

    # 4.タスク削除
    response_4 = client.deleteTask(30)
    print(json.dumps(response_4, indent=2))

    # 5.Webhook 登録
    response_5 = client.setWebhook("https://sbt-futaba3-clientsystem.azurewebsites.net/cold/notify")
    print(json.dumps(response_5, indent=2))

    # 6.Webhook 登録解除
    response_6 = client.deleteWebhook()
    print(json.dumps(response_6, indent=2))


if __name__ == '__main__':
    main()
