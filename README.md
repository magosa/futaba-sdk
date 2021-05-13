# futaba-sdk:The SDK for futaba API

futabaのAPIに接続するためのラッパー関数ライブラリーとサンプルです。

ライブラリを利用することでAPIリクエストを簡略化し、futabaを導入したビル内部の設備システムやIoT機器の状態やBIMデータに紐づく建物データを簡単に取得できます。

# Installation

* 環境構築.

npmコマンドを実施してください。

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
  "client_id": "ID assigned by administrator",
  "client_secret": "Secret assigned by administrator"
}
```

# WoT APIへのアクセス

### クライアントインスタンスの生成

このライブラリでは、Futabaクラスから生成したインスタンスを使って各APIへのリクエストを行います。

```Javascript:futaba_hot_sample.js
const futaba = require('./futaba.js');
let client = new futaba();
```

### 接続先APIのドメイン指定

***"setHostURL"*** 関数の引数にJSONオブジェクトとして4つのAPI（auth, hot, cold, ext）のドメインを渡します。

```Javascript:futaba_hot_sample.js
let url = {};
url['host_auth'] = 'cgll-dev-app-auth.azurewebsites.net';
url['host_hot'] = 'cgll-dev-app-hot.azurewebsites.net';
url['host_cold'] = 'cgll-dev-app-cold.azurewebsites.net';
url['host_ext'] = 'cgll-dev-app-extapi.azurewebsites.net';

// API URLの設定
client.setHostURL(url);
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

### Thingデータと状態値の取得

建物内の機器の状態値を取得するには、WoT APIから建物のThing Descriptions（TD）を取得し、TDのIDをキーに機器のプロパティを検索します。

以下に現在値取得の一例を示します。

1. ***"getThingsWithQuery"*** 関数を利用してTDを取得
2. 取得したTDのIDを***"getThingsPropertiesWithAlias"*** 関数に渡すことで現在値を取得

```Javascript:futaba_hot_sample.js
// 特定のTDを検索し、プロパティを表示
let data = {
  building: 'nkc/livinglab',
  query_type: 'odata',
  query: "$filter=element eq 'DL4'" //Titleに合致するthingを検索
};

client.getThingsWithQuery(data)
  .then(res => {
    res.things.map(item => {
      // console.log(item);
      client.getThingsPropertiesWithAlias(item.tdId)
        .then(d => {
          console.log(item.tdId);
          console.log(d)
        });
    })
  });
```

APIからのレスポンスが**1024KB**を超える場合には、Thingが返却されずダウンロードURLが返却されます。

TDやプロパティ取得の関数は複数用意されています。
詳しくは、管理者から別途提供されるAPI仕様書をご確認ください。

### 機器の遠隔制御

建物内の機器に値を書き込むには***"setThingsProperty"*** 関数を利用します。
引数には＜TDのID＞, ＜機器のポイントID＞, ＜書き込むデータのJSONオブジェクト＞を渡します。
＜TDのID＞と＜機器のポイントID＞については***"getThingsWithQuery"*** 関数で取得できるTDに記載されています。

```Javascript:futaba_hot_sample.js
// TDへの書き込み
let data = {
  values: {
    value: '0'
  }
};

client.setThingsProperty('f9058086-9180-452c-820b-504afc703169', 'CGL_000002', data)
.then(d => console.log(d));
```

# Note

futabaの各APIについては、管理者から別途提供されるAPI仕様書を確認してください。
シークレットやリフレッシュトークンを紛失した場合には、即座に管理者へ問い合わせを行ってください。

# Author

Toshinori Aono

# License

"futaba-sdk" is under [MIT license](https://en.wikipedia.org/wiki/MIT_License).
