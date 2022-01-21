/*Futaba librarryを利用したスクリプト*/

const futaba = require('./futaba.js');
const futility = require('./futaba-utility.js')
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
   * モデル学習データAPI サンプル
   */

  let r90 = new futility();
  r90.setTargetBuilding(["R90/research", "R90/east"])
  r90.setFileOptions("parquet", "gzip");
  r90.setDownloadFolderPath(__dirname + '/download/');

  // 1.タスク作成

  // 1-1 パス指定
  const model_1_1_path = r90.generateSearchParameters(["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"]);
  const points_1_1_path = r90.generateParameterWithPath("/research_-/*", model_1_1_path);
  const option_1_1_path = {
    type: 1,
    value: "15"
  };

  // 1-1 ADTクエリ指定
  const points_1_1_query = r90.generateParameterWithQuery("SELECT * FROM digitaltwins T WHERE IS_OF_MODEL(T, 'dtmi:point:bacnetPoint', exact) AND IS_DEFINED(T.tags.TagE)");
  const option_1_1_query = {
    type: 1,
    value: "30"
  };

  // 1-1 フィルター指定.
  const points_1_1_filter = r90.setFilterOfTwinTitle(["ElementA", "ElementB"])
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
  // const points_1_1_filter = generateParameterWithFilter(obj)


  const points_1_1 = points_1_1_filter;
  const option_1_1 = null;
  const request_body_1_1 = r90.generateImmediatelyTask("2020-06-01T12:00+09:00", "2020-06-04T12:00+09:00", points_1_1, option_1_1);


  const task_parameters = request_body_1_1;
  console.dir(task_parameters, dir_conf);
  // client.createTask(task_parameters)
  //   .then(res => console.dir(res, dir_conf));


  // 2.タスク詳細確認
  client.getTaskProgress(null, enable, "2020-05-01T12:00+09:00", true)
    .then(res => console.dir(res, dir_conf));

  // 3.タスク有効状態変更
  client.changeTaskValidity(30)
    .then(res => console.dir(res, dir_conf));


  // 4.タスク削除
  client.deleteTask(30)
    .then(res => console.dir(res, dir_conf));

  // 5.Webhook 登録
  client.setWebhook("https://sbt-futaba3-clientsystem.azurewebsites.net/cold/notify")
    .then(res => console.dir(res, dir_conf));

  // 6.Webhook 登録解除
  client.deleteWebhook()
    .then(res => console.dir(res, dir_conf));
}


main();
