# futaba-sdk:The SDK for futaba API

Wrapper function library and sample for connecting to futaba API.

With the library, you can easily access the building data and the status of equipment systems and IoT devices inside the building where futaba is installed.。

# Installation

```bash
git clone -b js https://github.com/magosa/futaba-sdk.git
cd ~/futaba-sdk
npm install
```

# Preparing to connect

After downloading the source code, plese edit config.js in the data directory.

### Edit config.js

```Javascript:config.json
{
  "client_id": "ID assigned by administrator",
  "client_secret": "Secret assigned by administrator"
}
```

# Access to futaba API

### Generate client instance

This library uses an instance generated from the Futaba class to make a request to each API.

```Javascript:futaba_hot_sample.js
const futaba = require('./futaba.js');
let client = new futaba();
```

### Specify the domain of the API

Pass the domains of 4 APIs (auth, hot, cold, ext)  to ***"setHostURL"*** function.

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

APIからのレスポンスには***"access_token"***と***"refresh_token"***が含まれています。認証API以外のAPI（hot, cold, ext）には***"access_token"***が必須となりますが、発行後24時間のみ有効なトークンとなります。

トークンの期限が切れた場合には再度***"getAccessToken"*** 関数を実行してトークンの更新を行ってください。***"refresh_token"***を使って最新のトークンに更新するため、***"refresh_token"***を紛失した場合には管理者に問い合わせを行ってください。

### 期限内のアクセストークンの利用

***"getAccessToken"*** 関数を使って認証APIにアクセスし、アクセストークンの発効を行います。  
引数には***"getAccessToken"*** 関数と同様にconfig.jsonの内容を用います。

# Note

シークレットやリフレッシュトークンを紛失した場合には、即座に管理者へ問い合わせを行ってください。

# Author

Toshinori Aono

# License

"futaba-sdk" is under [MIT license](https://en.wikipedia.org/wiki/MIT_License).
