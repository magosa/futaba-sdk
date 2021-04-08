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
    client.setAccessToken(obj)

    # data = {
    #     "exec_type": 1,
    #     "building": "R90/research",
    #     "start_date": "2021-04-06T00:00+09:00",
    #     "end_date": "2021-04-07T00:00+09:00",
    #     "sample_interval_min": 30,
    #     "points": [{
    #         "type": "query",
    #         "query_kind": "odata",
    #         "file_name": "human_factor",
    #         "query": "$filter=startswith(title, 'Human')",
    #     }],
    #     "file_type": "parquet"
    # }
    # res = client.createTask(data)
    # print(res)

    print(json.dumps(client.getTaskProgress(213), indent=2))


if __name__ == '__main__':
    main()
