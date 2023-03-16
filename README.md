# futaba-sdk:The SDK for futaba API

* futabaのAPIに接続するためのラッパー関数ライブラリーとサンプルです。

* futabaAPIのバージョンは[futaba2](https://futaba2-dev-app-apidoc.azurewebsites.net/)に対応します。

* ライブラリを利用することでAPIリクエストを簡略化し、futabaを導入したビル内部の設備システムやIoT機器の状態やBIMデータに紐づく建物データを簡単に取得できます。

[English](https://github.com/magosa/futaba-sdk/blob/js/README_ENG.md)

# Installation

* 環境構築.

```bash
git clone -b js https://github.com/magosa/futaba-sdk.git
cd ~/futaba-sdk
npm install
```

# 接続情報の事前設定

ソースコードをダウンロード後にdataディレクトリ内のconfig.jsを編集します。

### config.jsの編集

```Javascript:config.json
{
  "target_api":"futaba2",
  "client_id": "ID assigned by administrator",
  "client_secret": "Secret assigned by administrator"
}
```

# API共通の認証プロセス

### クライアントインスタンスの生成

このライブラリでは、Futabaクラスから生成したインスタンスを使って各APIへのリクエストを行います。

```Javascript:futaba_hot_sample.js
const futaba = require('./futaba.js');
let client = new futaba();
```

### アクセストークンの発効・更新

***"getAccessToken"*** 関数を使って認証APIにアクセスし、アクセストークンの発効を行います。  
引数にはconfig.jsonの内容を用います。

```Javascript:futaba_hot_sample.js
const fs = require('fs');
let obj = JSON.parse(fs.readFileSync('./data/config.json', 'utf8'));

// トークンの発行・更新
client.getAccessToken(obj)
  .then(res => {
    obj.access_token = res.access_token;
    obj.refresh_token = res.refresh_token;
    if (obj.access_token && obj.refresh_token) {
      fs.writeFileSync('./data/config.json', JSON.stringify(obj));
    }
    console.log(res);
  });
```

APIからのレスポンスには***"access_token"***と***"refresh_token"***が含まれています。  
認証API以外のAPI（hot, cold, ext）には***"access_token"***が必須となりますが、発行後24時間のみ有効なトークンとなります。

トークンの期限が切れた場合には再度***"getAccessToken"*** 関数を実行してトークンの更新を行ってください。***"refresh_token"***を使って最新のトークンに更新するため、***"refresh_token"***を紛失した場合には管理者に問い合わせを行ってください。

### 期限内のアクセストークンの利用

期限内のアクセストークンを利用するには***"setAccessToken"*** 関数を使ってクライアントインスタンスに認証情報を書き込みます。

```Javascript:futaba_hot_sample.js
const fs = require('fs');
let obj = JSON.parse(fs.readFileSync('./data/config.json', 'utf8'));

//既存トークンのセット
client.setAccessToken(obj);
```

### 建物データと各機器の状態値取得

建物内の機器の状態値を取得するには、デジタルツイン APIもしくは、WoT APIから機器のプロパティを検索します。

サンプルプログラムは***"futaba_hot_sample.js"***です。

以下に現在値取得の一例を示します。

***"getTelemetryData"*** 関数（「Sample_1_3」内の内容）を利用して特定の機器を検索し、機器の状態値を取得します。

```Javascript:futaba_hot_sample.js
let client = new futaba();
let fu = new futabaUtility();
fu.setTargetBuilding(["R90/research", "R90/east"])
  .setDownloadFolderPath(__dirname + '/download/');
const telemetry_search_parameters = fu.initializeFilterObject()
  .setFilterOfTwinTitle(["ElementA", "ElementB"])
  .setFilterOfGlobalId(["aaa", "bbb"])
  .setFilterOfTwinTag(["tagA", "tagC"], "and")
  .setFilterOfTwinPath(["/A/*", "/B"])
  .setFilterOfTwinModelId(["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"])
  .setFilterOfDtId(["R90_000001", "R90_000002"])
  .generateParameterWithFilter();

client.getTelemetryData(telemetry_search_parameters)
  .then(res => console.dir(res, dir_conf));
```

APIからのレスポンスが**1024KB**を超える場合には、Thingが返却されずダウンロードURLが返却されます。

TDやプロパティ取得の関数は複数用意されています。  
詳しくは、管理者から別途提供される[API仕様書](https://futaba2-dev-app-apidoc.azurewebsites.net/)をご確認ください。

### 機器の遠隔制御

建物内の機器に値を書き込むには***"setTelemetryData"*** 関数（「Sample_4」内の内容）を利用します。  
引数には＜機器のデジタルツインID(制御対象ポイントのID)＞, ＜書き込むデータ＞, ＜書き込むデータの優先度（BACnet制御など特定のプロトコルの場合）＞を渡します。  
＜機器のデジタルツインID＞については***"getDigitalTwinData"*** 関数（「Sample_2-1~3」内の内容）で取得できるメタデータに記載されています。

```Javascript:futaba_hot_sample.js
let client = new futaba();
let fu = new futabaUtility();
fu.setTargetBuilding(["R90/research", "R90/east"])
  .setDownloadFolderPath(__dirname + '/download/');
const dir_conf = {
  depth: null
}

// TDへの書き込み
const control_dtid = "R90_000001";
const control_value = 26.2;
const control_priority = 40;

client.setTelemetryData(fu.getTargetBuilding()[0], control_dtid, control_value, control_priority)
  .then(res => console.dir(res, dir_conf));
```

# Note

futabaの各APIについては、管理者から別途提供される[API仕様書](https://futaba2-dev-app-apidoc.azurewebsites.net/)を確認してください。  
シークレットやリフレッシュトークンを紛失した場合には、即座に管理者へ問い合わせを行ってください。

# Author

Toshinori Aono

# License

"futaba-sdk" is under [MIT license](https://en.wikipedia.org/wiki/MIT_License).
