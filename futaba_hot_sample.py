import futaba
import json

json_open = open('./data/config.json', 'r')
obj = json.load(json_open)
client = futaba.Futaba()


def main():
    token = client.getAccessToken(obj)
    with open('./data/config.json', 'w') as f:
        obj['access_token'] = token['access_token']
        obj['refresh_token'] = token['refresh_token']
        json.dump(obj, f, indent=2)
    print(token)


if __name__ == '__main__':
    main()
