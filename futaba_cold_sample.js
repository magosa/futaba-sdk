/*Futaba librarryを利用したスクリプト*/

const futaba = require('./futaba.js');
const futabaUtility = require('./futaba-utility.js')
const fs = require('fs');

let client = new futaba();
let fu = new futabaUtility();
fu.setTargetBuilding(["R90/research", "R90/east"])
  .setFileOptions("test", "parquet", "gzip")
  .setDownloadFolderPath(__dirname + '/download/');


const dir_conf = {
  depth: null
}

/**
 * モデル学習データAPI サンプル
 */

// 1-1.タスク作成(パス指定)＜フィルター検索に統合予定＞
async function Sample_1_1() {
  const model_1_1_path = fu.generateSearchParameters(["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"]);
  const points_1_1 = fu.generateParameterWithPath("/research_-/*", model_1_1_path);
  const option_1_1 = {
    type: 1,
    value: "15"
  };
  const task_parameters = fu.generateImmediatelyTask("2020-06-01T12:00+09:00", "2020-06-04T12:00+09:00", points_1_1, option_1_1);

  client.createTask(task_parameters)
    .then(res => console.dir(res, dir_conf));

};

// 1-2.タスク作成(ADTクエリ指定)＜将来廃止予定＞
async function Sample_1_2() {
  const points_1_1 = fu.generateParameterWithQuery("SELECT * FROM digitaltwins T WHERE IS_OF_MODEL(T, 'dtmi:point:bacnetPoint', exact) AND IS_DEFINED(T.tags.TagE)");
  const option_1_1 = {
    type: 1,
    value: "30"
  };
  const task_parameters = fu.generateImmediatelyTask("2020-06-01T12:00+09:00", "2020-06-04T12:00+09:00", points_1_1, option_1_1);

  client.createTask(task_parameters)
    .then(res => console.dir(res, dir_conf));

};

// 1-3.タスク作成(フィルター指定)
async function Sample_1_3() {
  const points_1_1 = fu.initializeFilterObject()
    .setFilterOfTwinTitle(["ElementA", "ElementB"])
    .setFilterOfTwinTag(["tagA", "tagC"], "and")
    .setFilterOfTwinPath(["/A", "/B/*"])
    .setFilterOfTwinModelId(["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"])
    .setFilterOfDtId(["R90_000001", "R90_000002"])
    .generateParameterWithFilter();

  //メソッドチェーンを使わない場合はコチラ
  // const obj = {
  //   title: {
  //     values: ["ElementA", "ElementB"]
  //   },
  //   tags: {
  //     condition: "and",
  //     values: ["tagA", "tagC"]
  //   },
  //   path: {
  //     values: ["/A", "/B/*"]
  //   },
  //   model: {
  //     values: ["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"]
  //   },
  //   dtId: {
  //     values: ["R90_000001", "R90_000002"]
  //   }
  // }
  // const points_1_1 = generateParameterWithFilter(obj)

  const option_1_1 = null;
  const task_parameters = fu.generateImmediatelyTask("2020-06-01T12:00+09:00", "2020-06-04T12:00+09:00", points_1_1, option_1_1);

  client.createTask(task_parameters)
    .then(res => console.dir(res, dir_conf));
};

// 2.タスク詳細確認
async function Sample_2() {
  client.getTaskProgress(null, "enable", "2020-05-01T12:00+09:00", true)
    .then(res => console.dir(res, dir_conf));
};

// 3.タスク有効状態変更
async function Sample_3() {
  client.changeTaskValidity(30)
    .then(res => console.dir(res, dir_conf));
};

// 4.タスク削除
async function Sample_4() {
  client.deleteTask(30)
    .then(res => console.dir(res, dir_conf));
};

// 5.Webhook 登録
async function Sample_5() {
  client.setWebhook("https://sbt-futaba3-clientsystem.azurewebsites.net/cold/notify")
    .then(res => console.dir(res, dir_conf));
};

// 6.Webhook 登録解除
async function Sample_6() {
  client.deleteWebhook()
    .then(res => console.dir(res, dir_conf));
};

async function main() {
  let obj = JSON.parse(fs.readFileSync('./data/config.json', 'utf8'));
  // トークンの発行・更新
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

  await Sample_1_1();

}


main();
