/*Futaba librarryを利用したスクリプト*/

const futaba = require('./futaba.js');
const fs = require('fs');

let client = new futaba();
let fu = new futabaUtility();
fu.setTargetBuilding(["R90/research", "R90/east"])
  .setDownloadFolderPath(__dirname + '/download/');

const dir_conf = {
  depth: null
}

/**
 * 共有データAPI サンプル
 */

// 1.共有データ追加
async function Sample_1() {
  const values = [
    "{\"userProp1\": \"abc\", \"userProp2\": 1}",
    "{\"userProp1\": \"def\", \"userProp2\": 2}"
  ]
  client.setSharedData(2, fu.getTargetBuilding()[0], values)
    .then(res => console.dir(res, dir_conf));
};

// 2.共有データ検索
async function Sample_2(filter) {
  client.getSharedData(2, fu.getTargetBuilding()[0], filter)
    .then(res => console.dir(res, dir_conf));
};

// 3.共有データ削除
async function Sample_3(filter) {
  client.deleteSharedData(2, fu.getTargetBuilding()[0], filter)
    .then(res => console.dir(res, dir_conf));
};

async function main() {
  // トークンの発行・更新
  let obj = JSON.parse(fs.readFileSync('./data/config.json', 'utf8'));
  await client.getAccessToken(obj)
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

  await Sample_1();
}


main();
