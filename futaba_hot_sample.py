import futaba
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
    # アクセストークンのセットアップ
    # updateToken()
    client.setAccessToken(obj)

    # クエリを用いた特定のThingの検索
    data = {
        "building": 'tk/ShizuokaSalesOffice',
        "query_type": 'odata',
        "query": "$filter=startswith(title, 'EHP_1_1')"
    }
    res = client.getThingsWithQuery(data)

    # ボットパスによるThingの検索
    # res = client.getThings("tk/ShizuokaSalesOffice/*")

    for item in res['things']:
        # print(json.dumps(item, indent=2))
        print("name:{0}, tdId:{1}".format(item['title'], item['tdId']))
        prop = client.getThingsPropertiesWithAlias(item['tdId'])
        print(json.dumps(prop, indent=2))

    # edit_data = {
    #    "values": {
    #      "value": '0'
    #      }
    #    }
    # client.setThingsProperty("8007763a-b2b3-4de6-a151-cac97536961e","SSO_000105",edit_data)


if __name__ == '__main__':
    main()
