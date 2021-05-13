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

### Activate and update the access token

Use the ***"getAccessToken"*** function to access the authentication API and activate the access token.
Use the contents of ***config.json*** as an argument.

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

The response from the API includes ***"access_token"*** and ***"refresh_token"***.  
***"access_token"*** is required for APIs other than the authentication API (hot, cold, extension), but it expires 24 hours after issuance.

If the token has expired, execute the ***"getAccessToken"*** function again to update the token.  
***"Refresh_token"*** will be used to update to the latest token, so if you lose ***"refresh_token"***, please contact administrator.

### Set a valid access token

If you want to use an access token that has not expired, use the ***"setAccessToken"*** function to write the credentials to the client instance.

```Javascript:futaba_hot_sample.js
const fs = require('fs');
let obj = JSON.parse(fs.readFileSync('./data/config.json', 'utf8'));

//既存トークンのセット
client.setAccessToken(obj);
```

### Get Thing data and status values

To use the access token before the expiration date, write the authentication information to the client instance using the ***"setAccessToken"*** function.

The following is an example of getting the current value.

1. Get TD using ***"getThingsWithQuery"*** function
2. Get the current value by passing the obtained TD ID to the ***"getThingsPropertiesWithAlias"*** function.

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

If the response from the API exceeds **1024KB**, Thing will not be returned and the download URL will be returned.

We have multiple functions for getting TDs and properties.  
For details, please check the API specifications provided separately by the administrator.

### Remote control of equipment

Use the ***"setThingsProperty"*** function for remote control.  
Pass "TD ID" , "Device point ID" , "JSON object of data to be written" as arguments.  
"TD ID" and "Device point ID" are described in the TD that can be obtained by the  ***"getThingsWithQuery"*** function.

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

For each futaba API, check the API specifications provided separately by the administrator.  
If you lose your secret or refresh token, please contact administrator immediately.

# Author

Toshinori Aono

# License

"futaba-sdk" is under [MIT license](https://en.wikipedia.org/wiki/MIT_License).
