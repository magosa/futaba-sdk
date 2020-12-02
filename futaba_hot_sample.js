/*Futaba librarryを利用したスクリプト*/

const futaba = require('./futaba.js');
const fs = require('fs');

let client = new futaba();
let obj = JSON.parse(fs.readFileSync('./data/config.json', 'utf8'));


// トークンの発行・更新
// client.getAccessToken(obj)
//   .then(res => {
//     obj.access_token = res.access_token;
//     obj.refresh_token = res.refresh_token;
//     if (obj.access_token && obj.refresh_token) {
//       fs.writeFileSync('./data/config.json', JSON.stringify(obj));
//     }
//     console.log(res);
//   });

//既存トークンのセット
client.setAccessToken(obj);


// 特定のTDを検索し、プロパティを表示
let data = {
  building: 'R90/research',
  query_type: 'odata',
  query: "$filter=startswith(title, '環境センサ')" //Titleに合致するthingを検索
};

client.getThingsWithQuery(data)
  .then(res => {
    res.things.map(item => {
      // console.log(item);
      client.getThingsPropertiesWithAlias(item.tdId)
        .then(d => {
          console.log(item.title);
          console.log(d)
        });
    })
  });

// client.getThingsWithQuery(data)
//   .then(d => console.log(d))


// TDへの書き込み
// let data = {
//   values: {
//     value: -5
//   }
// };
//
// client.setThingsProperty('65b3f9b1-be8f-43e7-8392-4f462f2d40f2', 'R90_000251', data)
// .then(d => console.log(d));
