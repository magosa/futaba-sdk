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


// 特定のTDを検索し、parquetファイルを取得
let data = {
  "exec_type": 1,
  "building": "nkc/livinglab",
  "start_date": "2021-08-31T12:00:00+09:00",
  "end_date": "2021-08-31T15:00:00+09:00",
  "sample_interval_min": 1,
  "points": [{
    "type": "name",
    "file_name": "check-2021-8-31",
    "names": [
      "CGL_000005",
      "CGL_000007",
      "CGL_000009"
    ]
  }],
  "file_type": "parquet"
}


client.createTask(data)
  .then(res => console.log(res))

// 特定のタスク状況を確認し、parquetファイルの作成状況を確認
// client.getTaskProgress(3)
//   .then(res => {
//     console.log(JSON.stringify(res, null, 2));
//   })
