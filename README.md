# futaba-sdk:The SDK for futaba API

* futabaのAPIに接続するためのラッパー関数ライブラリーとサンプルです。
* futabaAPIのバージョンは[futaba2](https://futaba2-dev-app-apidoc.azurewebsites.net/)に対応します。
* ライブラリを利用することでAPIリクエストを簡略化し、futabaを導入したビル内部の設備システムやIoT機器の状態やBIMデータに紐づく建物データを簡単に取得できます。

[English](https://github.com/magosa/futaba-sdk/blob/js/README_ENG.md)

# Installation

### 必要ライブラリのセットアップ

```bash
git clone -b py https://github.com/magosa/futaba-sdk.git
cd ~/futaba-sdk
pip install -r requirements.txt
```

# 接続情報の事前設定

ソースコードをダウンロード後にdataディレクトリ内のconfig.jsonを編集します。

### config.jsonの編集

```Python:config.json
{
  "target_api":"futaba2",
  "client_id": "ID assigned by administrator",
  "client_secret": "Secret assigned by administrator"
}
```

# API共通の認証プロセス

### クライアントインスタンスの生成

このライブラリでは、Futabaクラスから生成したインスタンスを使って各APIへのリクエストを行います。

```Python:futaba_hot_sample.py
import futaba
import futaba_utility

client = futaba.Futaba()
fu = futaba_utility.FutabaUtility()
fu.setTargetBuilding(["R90/research", "R90/east"]
).setDownloadFolderPath(os.path.dirname(__file__) + "download")
```

### アクセストークンの発効・更新

***"getAccessToken"*** 関数を使って認証APIにアクセスし、アクセストークンの発効を行います。  
引数にはconfig.jsonの内容を用います。

```Python:futaba_hot_sample.py
import json

json_open = open('./data/config.json', 'r')
obj = json.load(json_open)

// トークンの発行・更新
token = client.getAccessToken(obj)
with open('./data/config.json', 'w') as f:
    obj['access_token'] = token['accessToken']
    obj['refresh_token'] = token['refreshToken']
    json.dump(obj, f, indent=2)
print(token)
```

APIからのレスポンスには ***"access_token"*** と ***"refresh_token"*** が含まれています。  
認証API以外のAPI（デジタルツイン, WoT, モデル学習データ取得, 共有データ）へのアクセスには ***"access_token"*** が必須となります。  
トークンは発行後24時間のみ有効です。

### AccessToken取得後のconfig.json例

```Python:config.json
{
  "target_api":"futaba2",
  "client_id": "00000",
  "client_secret": "XXXXX",
  "access_token": "tNe5+0OQkWEjXi14ubRwSoIAxe0O90wyxwhx/g+3JMghuPHNy1nFdOv4mhOXvvzB",
  "refresh_token": "Y3ewSFyGh43KwkZwPd4V70OGmkivkRacazsCGmOMCt6WrCqMYni8ZGaGnzATcClL"
}
```

トークンの期限が切れた場合には再度 ***"getAccessToken"*** 関数を実行してトークンの更新を行ってください。
***"refresh_token"*** を使って最新のトークンに更新するため、***"refresh_token"*** を紛失した場合には管理者に問い合わせを行ってください。

### 期限内のアクセストークンの利用

期限内のアクセストークンを利用するには ***"setAccessToken"*** 関数を使ってクライアントインスタンスに認証情報を書き込みます。

```Python:futaba_hot_sample.py
json_open = open('./data/config.json', 'r')
obj = json.load(json_open)

//既存トークンのセット
client.setAccessToken(obj)
```

### 建物データと各機器の状態値取得

建物内の機器の状態値を取得するには、デジタルツイン APIもしくは、WoT APIから機器のプロパティを検索します。
サンプルプログラムは ***"futaba_hot_sample.py"*** です。
以下に現在値取得の一例を示します。

***"getTelemetryData"*** 関数（「Sample_1_3」内の内容）を利用して特定の機器を検索し、機器の状態値を取得します。

```Python:futaba_hot_sample.py
client = futaba.Futaba()
fu = futaba_utility.FutabaUtility()
fu.setTargetBuilding(["R90/research", "R90/east"]
).setDownloadFolderPath(os.path.dirname(__file__) + "download")

// ポイントの検索と状態値取得
telemetry_search_parameters = fu.initializeFilterObject(
).setFilterOfTwinTitle(["ElementA", "ElementB"]
).setFilterOfGlobalId(["aaa", "bbb"]
).setFilterOfTwinTag(["tagA", "tagC"], "and"
).setFilterOfTwinPath(["/A/*", "/B"]
).setFilterOfTwinModelId(["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"]
).setFilterOfDtId(["R90_000001", "R90_000002"]
).generateParameterWithFilter()

response_1 = client.getTelemetryData(telemetry_search_parameters)
print(json.dumps(response_1, indent=2))
```

APIからのレスポンスが ***1024KB*** を超える場合には、Thingが返却されずダウンロードURLが返却されます。

デジタルツイン情報やプロパティに関する関数はAPIのリファレンスと対応しています。
APIへのアクセス方法が複数用意されているので、詳しくは管理者から別途提供される[API仕様書](https://futaba2-dev-app-apidoc.azurewebsites.net/)をご確認ください。

### 機器の遠隔制御

建物内の機器に値を書き込むには ***"setTelemetryData"*** 関数（「Sample_4」内の内容）を利用します。  
引数には＜機器のデジタルツインID(制御対象ポイントのID)＞, ＜書き込むデータ＞, ＜書き込むデータの優先度（BACnet制御など特定のプロトコルの場合）＞を渡します。  
＜機器のデジタルツインID＞については ***"getDigitalTwinData"*** 関数（「Sample_2-1~3」内の内容）で取得できるメタデータに記載されています。

```Python:futaba_hot_sample.js
client = futaba.Futaba()
fu = futaba_utility.FutabaUtility()
fu.setTargetBuilding(["R90/research", "R90/east"]
).setDownloadFolderPath(os.path.dirname(__file__) + "download")

// 対象ポイントへの書き込み
control_dtid = "R90_000001"
control_value = 26.2
control_priority = 40
response_4 = client.setTelemetryData("R90/research", control_dtid, control_value, control_priority)
print(json.dumps(response_4, indent=2))
```

# Note

1. futabaの各APIについては、管理者から別途提供される[API仕様書](https://futaba2-dev-app-apidoc.azurewebsites.net/)を確認してください。  
2. シークレットやリフレッシュトークンを紛失した場合は、管理者へ問い合わせを行い再発行してください。

# Author

Toshinori Aono

# License

"futaba-sdk" is under [MIT license](https://en.wikipedia.org/wiki/MIT_License).
