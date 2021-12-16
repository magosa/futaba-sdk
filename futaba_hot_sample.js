/*Futaba librarryを利用したスクリプト*/

const futaba = require('./futaba.js');
const fs = require('fs');

let client = new futaba();
let obj = JSON.parse(fs.readFileSync('./data/config.json', 'utf8'));

// トークンの発行・更新
client.getAccessToken(obj)
  .then(res => {
    obj.access_token = res.accessToken;
    obj.refresh_token = res.refreshToken;
    if (obj.access_token && obj.refresh_token) {
      fs.writeFileSync('./data/config.json', JSON.stringify(obj));
    }
    console.log(res);
  });


//既存トークンのセット
// client.setAccessToken(obj);


// Bot pathによるTDの取得
// client.getThings("nkc/livinglab/1F/*")
//   .then(d => console.dir(d))


// 特定のTDを検索し、プロパティを表示
// let data = {
//   building: 'nkc/livinglab',
//   query_type: 'odata',
//   query: "$filter=element eq 'PAC001'" //Titleに合致するthingを検索
// };
//
// client.getThingsWithQuery(data)
//   .then(res => {
//     console.log(res);
//     res.things.map(item => {
//       // console.log(item);sa
//       client.getThingsPropertiesWithAlias(item.tdId)
//         .then(d => {
//           console.log("Thing: " +item.title + "(" + item.tdId + ")");
//           console.log(d)
//         });
//     })
//   });


// TDへの書き込み
// let data = {
//   values: {
//     value: '0'
//   }
// };
//
// client.setThingsProperty('f9058086-9180-452c-820b-504afc703169', 'CGL_000002', data)
// .then(d => console.log(d));
