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
    r90.setTargetBuilding(["R90/research", "R90/east"]
    ).setDownloadFolderPath(os.path.dirname(__file__) + "download")

    # 1.テレメトリ取得
    model_1_1 = r90.generateSearchParameters(["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"])
    request_body_1_1 = r90.generateParameterWithPath("/research_1FL/*", model_1_1)
    request_body_1_2 = r90.generateParameterWithQuery("SELECT T FROM digitaltwins T WHERE IS_DEFINED(T.m_pointId)")
    request_body_1_3 = r90.initializeFilterObject(
    ).setFilterOfTwinTitle(["ElementA", "ElementB"]
    ).setFilterOfGlobalId(["aaa", "bbb"]
    ).setFilterOfTwinTag(["tagA", "tagC"], "and"
    ).setFilterOfTwinPath(["/A/*", "/B"]
    ).setFilterOfTwinModelId(["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"]
    ).setFilterOfDtId(["R90_000001", "R90_000002"]
    ).generateParameterWithFilter();

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

    telemetry_search_parameters = request_body_1_1
    response_1 = client.getTelemetryData(telemetry_search_parameters)
    print(json.dumps(response_1, indent=2))


    # 2.ツイン情報取得
    model_2_1 = r90.generateSearchParameters("dtmi:point:bacnetPoint;1")
    request_body_2_1 = r90.generateParameterWithPath("/research_1FL/*", model_2_1, True)
    request_body_2_2 = r90.generateParameterWithQuery("SELECT * FROM digitaltwins T WHERE IS_DEFINED(T.tag.TagA)", True)
    request_body_2_3 = r90.initializeFilterObject(
    ).setFilterOfTwinTitle(["ElementA", "ElementB"]
    ).setFilterOfGlobalId(["aaa", "bbb"]
    ).setFilterOfTwinTag(["tagA", "tagC"], "and"
    ).setFilterOfTwinPath(["/A/*", "/B"]
    ).setFilterOfTwinModelId(["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"]
    ).setFilterOfDtId(["R90_000001", "R90_000002"]
    ).generateParameterWithFilter(None, True);

    digitaltwin_search_parameters = request_body_2_1
    response_2 = client.getDigitalTwinData(digitaltwin_search_parameters)
    print(json.dumps(response_2, indent=2))


    # 3.ツイン更新
    model_3_1 = r90.generateSearchParameters("dtmi:point:bacnetPoint;1")
    request_body_3_1 = r90.generateParameterWithPath("/research_1FL/*", model_3_1)
    request_body_3_2 = r90.generateParameterWithQuery("SELECT * FROM digitaltwins T WHERE IS_DEFINED(T.tag.TagA)");
    request_body_3_3 = r90.initializeFilterObject(
    ).setFilterOfTwinTitle(["ElementA", "ElementB"]
    ).setFilterOfGlobalId(["aaa", "bbb"]
    ).setFilterOfTwinTag(["tagA", "tagC"], "and"
    ).setFilterOfTwinPath(["/A/*", "/B"]
    ).setFilterOfTwinModelId(["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"]
    ).setFilterOfDtId(["R90_000001", "R90_000002"]
    ).generateParameterWithFilter()

    digitaltwin_update_parameters = request_body_3_1
    update_property = "minimum"
    update_value = "10.5"
    response_3 = client.updateDigitalTwinData(digitaltwin_update_parameters, update_property, update_value)
    print(json.dumps(response_3, indent=2))


    # 4.ポイント遠隔制御
    control_dtid = "R90_000001"
    control_value = 26.2
    control_priority = 40
    response_4 = client.setTelemetryData("R90/research", control_dtid, control_value, control_priority)
    print(json.dumps(response_4, indent=2))


    # 5.ストリーミング登録
    model_5_1 = r90.generateSearchParameters("dtmi:point:bacnetPoint;1")
    request_body_5_1 = r90.generateParameterWithPath("/research_1FL/*", model_5_1)
    request_body_5_2 = r90.generateParameterWithQuery("SELECT * FROM digitaltwins T WHERE IS_DEFINED(T.tag.TagA)")
    request_body_5_3 = r90.initializeFilterObject(
    ).setFilterOfTwinTitle(["ElementA", "ElementB"]
    ).setFilterOfGlobalId(["aaa", "bbb"]
    ).setFilterOfTwinTag(["tagA", "tagC"], "and"
    ).setFilterOfTwinPath(["/A/*", "/B"]
    ).setFilterOfTwinModelId(["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"]
    ).setFilterOfDtId(["R90_000001", "R90_000002"]
    ).generateParameterWithFilter()

    stream_registration_parameters = request_body_5_1
    response_5 = client.setTelemetryStream(stream_registration_parameters)
    print(json.dumps(response_5, indent=2))


    # 6.ストリーミング解除
    model_6_1 = r90.generateSearchParameters("dtmi:point:bacnet", "startswith")
    request_body_6_1 = r90.generateParameterWithPath("/research_1FL/*", model_6_1)
    request_body_6_2 = r90.generateParameterWithQuery("SELECT T FROM digitaltwins T WHERE IS_DEFINED(T.m_pointId)")
    request_body_6_3 = r90.initializeFilterObject(
    ).setFilterOfTwinTitle(["ElementA", "ElementB"]
    ).setFilterOfGlobalId(["aaa", "bbb"]
    ).setFilterOfTwinTag(["tagA", "tagC"], "and"
    ).setFilterOfTwinPath(["/A/*", "/B"]
    ).setFilterOfTwinModelId(["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"]
    ).setFilterOfDtId(["R90_000001", "R90_000002"]
    ).generateParameterWithFilter()

    stream_registration_parameters = request_body_6_1
    response_6 = client.deleteTelemetryStream(stream_registration_parameters)
    print(json.dumps(response_6, indent=2))


    # 7.ストリーミング登録状況確認
    response_7 = client.checkTelemetryStream()
    print(json.dumps(response_7, indent=2))


    # 8.ストリーミング登録データ取得(仕様確認中)
    # response_8 = client.getTelemetryStream(os.path.dirname(__file__) + "/data/telemetryStreamClient.proto")



    # WoT API サンプル

    # 1.WoT TD取得
    response_w_1 = client.getThings("R90/research/reasearch_1FL/*")
    print(json.dumps(response_w_1, indent=2))


    # 2.WoT TD取得
    request_body_w_2_1 = r90.generateParameterWithQuery("SELECT * FROM digitaltwins T WHERE T.tag.TagA = True")
    request_body_w_2_2 = r90.initializeFilterObject(
    ).setFilterOfTwinTitle(["ElementA", "ElementB"]
    ).setFilterOfGlobalId(["aaa", "bbb"]
    ).setFilterOfTwinTag(["tagA", "tagC"], "and"
    ).setFilterOfTwinPath(["/A/*", "/B"]
    ).setFilterOfTwinModelId(["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"]
    ).setFilterOfDtId(["R90_000001", "R90_000002"]
    ).generateParameterWithFilter()

    wot_search_parameters = request_body_w_2_1
    response_w_2 = client.getThingsByParameter(wot_search_parameters)
    print(json.dumps(response_w_2, indent=2))


    # 3.WoT Property取得 (TD内全取得)
    response_w_3 = client.getThingsProperties(1, "398897d193674abf9200ac59ddc8c749")
    print(json.dumps(response_w_3, indent=2))


    # 4.WoT Property取得 (1 Property)
    response_w_4 = client.getThingsProperty(1, "398897d193674abf9200ac59ddc8c749", "Status")
    print(json.dumps(response_w_4, indent=2))


    # 5.WoT Property書き込み
    response_w_5 = client.setThingsProperty(1, "398897d193674abf9200ac59ddc8c749", "brightness", 26.2)
    print(json.dumps(response_w_5, indent=2))



if __name__ == '__main__':
    main()
