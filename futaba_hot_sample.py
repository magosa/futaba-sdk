import os
import futaba
import futaba_utility
import json

json_open = open('./data/config.json', 'r')
obj = json.load(json_open)
client = futaba.Futaba()
fu = futaba_utility.FutabaUtility()
fu.setTargetBuilding(["R90/research", "R90/east"]
).setDownloadFolderPath(os.path.dirname(__file__) + "download")


def updateToken():
    token = client.getAccessToken(obj)
    with open('./data/config.json', 'w') as f:
        obj['access_token'] = token['accessToken']
        obj['refresh_token'] = token['refreshToken']
        json.dump(obj, f, indent=2)
    print(token)


# デジタルツインAPI サンプル

# 1-1.テレメトリ取得(パス検索)＜フィルター検索に統合予定＞
def Sample_1_1():
    model_1_1 = fu.generateSearchParameters(["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"])
    telemetry_search_parameters = fu.generateParameterWithPath("/research_1FL/*", model_1_1)
    response_1 = client.getTelemetryData(telemetry_search_parameters)
    print(json.dumps(response_1, indent=2))


# 1-2.テレメトリ取得(ADTクエリ検索)＜将来廃止予定＞
def Sample_1_2():
    telemetry_search_parameters = fu.generateParameterWithQuery("SELECT T FROM digitaltwins T WHERE IS_DEFINED(T.m_pointId)")
    response_1 = client.getTelemetryData(telemetry_search_parameters)
    print(json.dumps(response_1, indent=2))


# 1-3.テレメトリ取得（フィルター検索）
def Sample_1_3():
    telemetry_search_parameters = fu.initializeFilterObject(
    ).setFilterOfTwinTitle(["ElementA", "ElementB"]
    ).setFilterOfGlobalId(["aaa", "bbb"]
    ).setFilterOfTwinTag(["tagA", "tagC"], "and"
    ).setFilterOfTwinPath(["/A/*", "/B"]
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
    # telemetry_search_parameters = generateParameterWithFilter(obj)

    response_1 = client.getTelemetryData(telemetry_search_parameters)
    print(json.dumps(response_1, indent=2))


# 2-1.ツイン情報取得(パス検索)＜フィルター検索に統合予定＞
def Sample_2_1():
    model_2_1 = fu.generateSearchParameters("dtmi:point:bacnetPoint;1")
    digitaltwin_search_parameters = fu.generateParameterWithPath("/research_1FL/*", model_2_1, True)
    response_2 = client.getDigitalTwinData(digitaltwin_search_parameters)
    print(json.dumps(response_2, indent=2))


# 2-2.ツイン情報取得(ADTクエリ検索)＜将来廃止予定＞
def Sample_2_2():
    digitaltwin_search_parameters = fu.generateParameterWithQuery("SELECT * FROM digitaltwins T WHERE IS_DEFINED(T.tag.TagA)", True)
    response_2 = client.getDigitalTwinData(digitaltwin_search_parameters)
    print(json.dumps(response_2, indent=2))


# 2-3.ツイン情報取得（フィルター検索）
def Sample_2_3():
    digitaltwin_search_parameters = fu.initializeFilterObject(
    ).setFilterOfTwinTitle(["ElementA", "ElementB"]
    ).setFilterOfGlobalId(["aaa", "bbb"]
    ).setFilterOfTwinTag(["tagA", "tagC"], "and"
    ).setFilterOfTwinPath(["/A/*", "/B"]
    ).setFilterOfTwinModelId(["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"]
    ).setFilterOfDtId(["R90_000001", "R90_000002"]
    ).generateParameterWithFilter(None, True)
    response_2 = client.getDigitalTwinData(digitaltwin_search_parameters)
    print(json.dumps(response_2, indent=2))


# 3-1.ツイン更新(パス検索)＜フィルター検索に統合予定＞
def Sample_3_1():
    model_3_1 = fu.generateSearchParameters("dtmi:point:bacnetPoint;1")
    digitaltwin_update_parameters = fu.generateParameterWithPath("/research_1FL/*", model_3_1)
    update_property = "minimum"
    update_value = "10.5"
    response_3 = client.updateDigitalTwinData(digitaltwin_update_parameters, update_property, update_value)
    print(json.dumps(response_3, indent=2))


# 3-2.ツイン更新(ADTクエリ検索)＜将来廃止予定＞
def Sample_3_2():
    digitaltwin_update_parameters = fu.generateParameterWithQuery("SELECT * FROM digitaltwins T WHERE IS_DEFINED(T.tag.TagA)");
    update_property = "minimum"
    update_value = "10.5"
    response_3 = client.updateDigitalTwinData(digitaltwin_update_parameters, update_property, update_value)
    print(json.dumps(response_3, indent=2))


# 3-3.ツイン更新（フィルター検索）
def Sample_3_3():
    digitaltwin_update_parameters = fu.initializeFilterObject(
    ).setFilterOfTwinTitle(["ElementA", "ElementB"]
    ).setFilterOfGlobalId(["aaa", "bbb"]
    ).setFilterOfTwinTag(["tagA", "tagC"], "and"
    ).setFilterOfTwinPath(["/A/*", "/B"]
    ).setFilterOfTwinModelId(["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"]
    ).setFilterOfDtId(["R90_000001", "R90_000002"]
    ).generateParameterWithFilter()
    update_property = "minimum"
    update_value = "10.5"
    response_3 = client.updateDigitalTwinData(digitaltwin_update_parameters, update_property, update_value)
    print(json.dumps(response_3, indent=2))


# 4.ポイント遠隔制御
def Sample_4():
    control_dtid = "R90_000001"
    control_value = 26.2
    control_priority = 40
    response_4 = client.setTelemetryData("R90/research", control_dtid, control_value, control_priority)
    print(json.dumps(response_4, indent=2))


# 5-1.ストリーミング登録(パス検索)＜フィルター検索に統合予定＞
def Sample_5_1():
    model_5_1 = fu.generateSearchParameters("dtmi:point:bacnetPoint;1")
    stream_registration_parameters = fu.generateParameterWithPath("/research_1FL/*", model_5_1)
    response_5 = client.setTelemetryStream(stream_registration_parameters)
    print(json.dumps(response_5, indent=2))


# 5-2.ストリーミング登録(ADTクエリ検索)＜将来廃止予定＞
def Sample_5_2():
    stream_registration_parameters = fu.generateParameterWithQuery("SELECT * FROM digitaltwins T WHERE IS_DEFINED(T.tag.TagA)")
    response_5 = client.setTelemetryStream(stream_registration_parameters)
    print(json.dumps(response_5, indent=2))


# 5-3.ストリーミング登録（フィルター検索）
def Sample_5_3():
    stream_registration_parameters = fu.initializeFilterObject(
    ).setFilterOfTwinTitle(["ElementA", "ElementB"]
    ).setFilterOfGlobalId(["aaa", "bbb"]
    ).setFilterOfTwinTag(["tagA", "tagC"], "and"
    ).setFilterOfTwinPath(["/A/*", "/B"]
    ).setFilterOfTwinModelId(["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"]
    ).setFilterOfDtId(["R90_000001", "R90_000002"]
    ).generateParameterWithFilter()
    response_5 = client.setTelemetryStream(stream_registration_parameters)
    print(json.dumps(response_5, indent=2))


# 6-1.ストリーミング解除(パス検索)＜フィルター検索に統合予定＞
def Sample_6_1():
    model_6_1 = fu.generateSearchParameters("dtmi:point:bacnet", "startswith")
    stream_registration_parameters = fu.generateParameterWithPath("/research_1FL/*", model_6_1)
    response_6 = client.deleteTelemetryStream(stream_registration_parameters)
    print(json.dumps(response_6, indent=2))


# 6-2.ストリーミング解除(ADTクエリ検索)＜将来廃止予定＞
def Sample_6_2():
    stream_registration_parameters = fu.generateParameterWithQuery("SELECT T FROM digitaltwins T WHERE IS_DEFINED(T.m_pointId)")
    response_6 = client.deleteTelemetryStream(stream_registration_parameters)
    print(json.dumps(response_6, indent=2))


# 6-3.ストリーミング解除（フィルター検索）
def Sample_6_3():
    stream_registration_parameters = fu.initializeFilterObject(
    ).setFilterOfTwinTitle(["ElementA", "ElementB"]
    ).setFilterOfGlobalId(["aaa", "bbb"]
    ).setFilterOfTwinTag(["tagA", "tagC"], "and"
    ).setFilterOfTwinPath(["/A/*", "/B"]
    ).setFilterOfTwinModelId(["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"]
    ).setFilterOfDtId(["R90_000001", "R90_000002"]
    ).generateParameterWithFilter()
    response_6 = client.deleteTelemetryStream(stream_registration_parameters)
    print(json.dumps(response_6, indent=2))


# 7.ストリーミング登録状況確認
def Sample_7():
    response_7 = client.checkTelemetryStream()
    print(json.dumps(response_7, indent=2))


# 8.ストリーミング登録データ取得(仕様確認中)
# def Sample_8():
#     response_8 = client.getTelemetryStream(os.path.dirname(__file__) + "/data/telemetryStreamClient.proto")


# WoT API サンプル

# 1.WoT TD取得
def WoT_Sample_1():
    response_w_1 = client.getThings("R90/research/reasearch_1FL/*")
    print(json.dumps(response_w_1, indent=2))


# 2-1.WoT TD取得(クエリ検索)
def WoT_Sample_2_1():
    wot_search_parameters = fu.generateParameterWithQuery("SELECT * FROM digitaltwins T WHERE T.tag.TagA = True")
    response_w_2 = client.getThingsByParameter(wot_search_parameters)
    print(json.dumps(response_w_2, indent=2))


# 2-2.WoT TD取得(フィルター検索)
def WoT_Sample_2_2():
    wot_search_parameters = fu.initializeFilterObject(
    ).setFilterOfTwinTitle(["ElementA", "ElementB"]
    ).setFilterOfGlobalId(["aaa", "bbb"]
    ).setFilterOfTwinTag(["tagA", "tagC"], "and"
    ).setFilterOfTwinPath(["/A/*", "/B"]
    ).setFilterOfTwinModelId(["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"]
    ).setFilterOfDtId(["R90_000001", "R90_000002"]
    ).generateParameterWithFilter()
    response_w_2 = client.getThingsByParameter(wot_search_parameters)
    print(json.dumps(response_w_2, indent=2))


# 3.WoT Property取得 (TD内全取得)
def WoT_Sample_3():
    response_w_3 = client.getThingsProperties(1, "398897d193674abf9200ac59ddc8c749")
    print(json.dumps(response_w_3, indent=2))


# 4.WoT Property取得 (1 Property)
def WoT_Sample_4():
    response_w_4 = client.getThingsProperty(1, "398897d193674abf9200ac59ddc8c749", "Status")
    print(json.dumps(response_w_4, indent=2))


# 5.WoT Property書き込み
def WoT_Sample_5():
    response_w_5 = client.setThingsProperty(1, "398897d193674abf9200ac59ddc8c749", "brightness", 26.2)
    print(json.dumps(response_w_5, indent=2))


def main():
    # トークンの発行・更新
    updateToken()

    # 既存トークンのセット
    # client.setAccessToken(obj)

    Sample_1_1()


if __name__ == '__main__':
    main()
