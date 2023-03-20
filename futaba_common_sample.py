import os
import futaba
import futaba_utility
import json

json_open = open('./data/config.json', 'r')
obj = json.load(json_open)
client = futaba.Futaba()
fu = futaba_utility.FutabaUtility()
fu.setTargetBuilding(["Shinsuna/TKCentralSouth"]
).setDownloadFolderPath(os.path.dirname(__file__) + "download")

def updateToken():
    token = client.getAccessToken(obj)
    with open('./data/config.json', 'w') as f:
        obj['access_token'] = token['accessToken']
        obj['refresh_token'] = token['refreshToken']
        json.dump(obj, f, indent=2)
    print(token)


# デジタルツインAPI サンプル


# 1.共有データ追加
def Sample_1():
    values = ["{\"userProp1\": \"abc\", \"userProp2\": 1}",
              "{\"userProp1\": \"def\", \"userProp2\": 2}"]
    add_value = json.dumps(values)
    response_1 = client.setSharedData(4, fu.getTargetBuilding()[0], add_value)
    print(json.dumps(response_1, indent=2))


# 2.共有データ検索
def Sample_2(filter):
    response_2 = client.getSharedData(4, fu.getTargetBuilding()[0])
    print(json.dumps(response_2, indent=2))


# 3.共有データ削除
def Sample_3(filter):
    response_3 = client.deleteSharedData(4, r90.getTargetBuilding()[0], filter)
    print(json.dumps(response_3, indent=2))


def main():
    # トークンの発行・更新++++
    # updateToken()

    # 既存トークンのセット
    client.setAccessToken(obj)

    filter = {
        "startOffset": 10,
        "count": 1,
        "startTime": "2020-02-01T00:00+09:00",
        "endTime": "2020-03-01T00:00+09:00",
        "query": [
            {
                "path": "$.userProp1",
                "op": "=",
                "value": "abc"
            }
        ]
    }

    Sample_1()


if __name__ == '__main__':
    main()
