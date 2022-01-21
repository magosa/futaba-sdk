/*Futaba librarryを利用したスクリプト*/

const futaba = require('./futaba.js');
const fs = require('fs');

let client = new futaba();
let obj = JSON.parse(fs.readFileSync('./data/config.json', 'utf8'));

const dir_conf = {
  depth: null
}


async function main() {
  // トークンの発行・更新
  // await client.getAccessToken(obj)
  //   .then(res => {
  //     obj.access_token = res.accessToken;
  //     obj.refresh_token = res.refreshToken;
  //     if (obj.access_token && obj.refresh_token) {
  //       fs.writeFileSync('./data/config.json', JSON.stringify(obj));
  //     }
  //     console.log(res);
  //   });


  //既存トークンのセット
  client.setAccessToken(obj);


  /**
   * 共有データAPI サンプル
   */

  // 1.共有データ追加
  const values = [
    "{\"userProp1\": \"abc\", \"userProp2\": 1}",
    "{\"userProp1\": \"def\", \"userProp2\": 2}"
  ]
  client.setSharedData(2, "R90/research", values)
    .then(res => console.dir(res, dir_conf));


  const filter = {
    startOffset: 10,
    count: 1,
    startTime: "2020-02-01T00:00+09:00",
    endTime: "2020-03-01T00:00+09:00",
    query: [{
      path: "$.userProp1",
      op: "=",
      value: "abc"
    }]
  }

  // 2.共有データ検索
  client.getSharedData(2, "R90/research", filter)
    .then(res => console.dir(res, dir_conf));


  // 3.共有データ削除
  client.deleteSharedData(2, "R90/research", filter)
    .then(res => console.dir(res, dir_conf));
}


main();
