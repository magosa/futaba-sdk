/*Futaba librarryを利用したスクリプト*/

const futaba = require('./futaba.js');
const fs = require('fs');

let client = new futaba();
let obj = JSON.parse(fs.readFileSync('./data/config.json', 'utf8'));


let url = {};
url['host_auth'] = 'cgll-dev-app-auth.azurewebsites.net';
url['host_hot'] = 'cgll-dev-app-hot.azurewebsites.net';
url['host_cold'] = 'cgll-dev-app-cold.azurewebsites.net';
url['host_ext'] = 'cgll-dev-app-extapi.azurewebsites.net';


// API URLの設定
client.setHostURL(url);

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

//既存トークンのセット
// client.setAccessToken(obj);


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

// client.getThingsWithQuery(data)
//   .then(d => console.log(d))


// TDへの書き込み
// let data = {
//   values: {
//     value: '0'
//   }
// };
//
// client.setThingsProperty('f9058086-9180-452c-820b-504afc703169', 'CGL_000002', data)
// .then(d => console.log(d));
