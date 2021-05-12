# futaba-sdk:The SDK for futaba API

futabaのAPIに接続するためのラッパーライブラリーとサンプルです。

futabaを導入したビル内部の設備システムやIoT機器の状態やBIMデータに紐づく建物データを簡単に取得できます。

# Installation

* Construction of environment.
Install required libraries with npm command.

```bash
git clone -b js https://github.com/magosa/futaba-sdk.git
cd ~/futaba-sdk
npm install
```

# Usage

ソースコードをダウンロード後にdataディレクトリ内のconfig.jsを編集します。

* config.jsの編集

```config.json
{
  "client_id": "ID assigned by administrator",
  "client_secret": "Secret assigned by administrator"
}
```

* 接続先APIのドメイン指定

```futaba_hot_sample.js
let url = {};
url['host_auth'] = 'cgll-dev-app-auth.azurewebsites.net';
url['host_hot'] = 'cgll-dev-app-hot.azurewebsites.net';
url['host_cold'] = 'cgll-dev-app-cold.azurewebsites.net';
url['host_ext'] = 'cgll-dev-app-extapi.azurewebsites.net';

// API URLの設定
client.setHostURL(url);
```

* アクセストークンの発効

初めてのアクセストークの発効には"getAccessToken"関数を使って認証APIにアクセスします。  
引数にはconfig.jsonの内容を用います。


# Note

注意点などがあれば書く

# Author

* 作成者 Toshinori Aono

# License
ライセンスを明示する

"futaba-sdk" is under [MIT license](https://en.wikipedia.org/wiki/MIT_License).

