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
   * デジタルツインAPI サンプル
   */

  let r90 = new futility();
  r90.setTargetBuilding("R90/research")
  r90.setDownloadFolderPath(__dirname + '/download/');

  // 1.テレメトリ取得
  const model_1_1 = r90.generateSearchParameters(["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"]);
  const request_body_1_1 = r90.generateParameterWithPath("/research_1FL/*", model_1_1);
  const request_body_1_2 = r90.generateParameterWithQuery("SELECT T FROM digitaltwins T WHERE IS_DEFINED(T.m_pointId)");
  const request_body_1_3 = r90.initializeFilterObject()
    .setFilterOfTwinTitle(["ElementA", "ElementB"])
    .setFilterOfGlobalId(["aaa", "bbb"])
    .setFilterOfTwinTag(["tagA", "tagC"], "and")
    .setFilterOfTwinPath(["/A/*", "/B"])
    .setFilterOfTwinModelId(["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"])
    .setFilterOfDtId(["R90_000001", "R90_000002"])
    .generateParameterWithFilter();

  //メソッドチェーンを使わない場合はコチラ
  // const filter_data_1 = {
  //   "title": {
  //     "values": ["ElementA", "ElementB"]
  //   },
  //   "globalId": {
  //     "values": ["aaa", "bbb"]
  //   },
  //   "tags": {
  //     "condition": "and",
  //     "values": ["tagA", "tagC"]
  //   },
  //   "path": {
  //     "values": ["/A/*", "/B"]
  //   },
  //   "model": {
  //     "values": ["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"]
  //   },
  //   "dtId": {
  //     "values": ["R90_000001", "R90_000002"]
  //   }
  // }
  // const request_body_1_3 = generateParameterWithFilter(filter_data_1)

  const telemetry_search_parameters = request_body_1_1;

  client.getTelemetryData(telemetry_search_parameters)
    .then(res => console.dir(res, dir_conf));


  // 2.ツイン情報取得
  const request_body_2_1 = futility.generatePathObject("R90/research", "/reasearch_1FL/*", futility.generateSearchParameters("dtmi:point:bacnetPoint;1"), true);
  const request_body_2_2 = futility.generateQueryObject("R90/research", "SELECT * FROM digitaltwins T WHERE IS_DEFINED(T.tag.TagA)", true);
  const filter_data_2 = {
    title: futility.generateSearchParameters(["ElementA", "ElementB"]),
    globalId: futility.generateSearchParameters(["aaa", "bbb"]),
    tags: futility.generateSearchParameters(["tagA", "tagC"], "and"),
    path: futility.generateSearchParameters(["/A/*", "/B"]),
    model: futility.generateSearchParameters(["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"]),
    dtId: futility.generateSearchParameters(["R90_000001", "R90_000002"])
  }
  const request_body_2_3 = futility.generateFilterObject("R90/research", filter_data_2, true);

  const model_2_1 = r90.generateSearchParameters("dtmi:point:bacnetPoint;1");
  const request_body_2_1 = r90.generateParameterWithPath("/research_1FL/*", model_2_1, true);
  const request_body_2_2 = r90.generateParameterWithQuery("SELECT * FROM digitaltwins T WHERE IS_DEFINED(T.tag.TagA)", true);
  const request_body_2_3 = r90.initializeFilterObject()
    .setFilterOfTwinTitle(["ElementA", "ElementB"])
    .setFilterOfGlobalId(["aaa", "bbb"])
    .setFilterOfTwinTag(["tagA", "tagC"], "and")
    .setFilterOfTwinPath(["/A/*", "/B"])
    .setFilterOfTwinModelId(["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"])
    .setFilterOfDtId(["R90_000001", "R90_000002"])
    .generateParameterWithFilter(null, true);

  const digitaltwin_search_parameters = request_body_2_1;

  client.getDigitalTwinData(digitaltwin_search_parameters)
    .then(res => console.dir(res, dir_conf));


  // 3.ツイン更新
  const model_3_1 = r90.generateSearchParameters("dtmi:point:bacnetPoint;1");
  const request_body_3_1 = r90.generateParameterWithPath("/research_1FL/*", model_3_1);
  const request_body_3_2 = r90.generateParameterWithQuery("SELECT * FROM digitaltwins T WHERE IS_DEFINED(T.tag.TagA)");
  const request_body_3_3 = r90.initializeFilterObject()
    .setFilterOfTwinTitle(["ElementA", "ElementB"])
    .setFilterOfGlobalId(["aaa", "bbb"])
    .setFilterOfTwinTag(["tagA", "tagC"], "and")
    .setFilterOfTwinPath(["/A/*", "/B"])
    .setFilterOfTwinModelId(["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"])
    .setFilterOfDtId(["R90_000001", "R90_000002"])
    .generateParameterWithFilter();

  const digitaltwin_update_parameters = request_body_3_1;
  const update_property = "minimum";
  const update_value = "10.5";

  client.updateDigitalTwinData(digitaltwin_update_parameters, update_property, update_value)
    .then(res => console.dir(res, dir_conf));


  // 4.ポイント遠隔制御
  const control_dtid = "R90_000001";
  const control_value = 26.2;
  const control_priority = 40;

  client.controlDigitalTwinData("R90/research", control_dtid, control_value, control_priority)
    .then(res => console.dir(res, dir_conf));


  // 5.ストリーミング登録
  const model_5_1 = r90.generateSearchParameters("dtmi:point:bacnetPoint;1");
  const request_body_5_1 = r90.generateParameterWithPath("/research_1FL/*", model_5_1);
  const request_body_5_2 = r90.generateParameterWithQuery("SELECT * FROM digitaltwins T WHERE IS_DEFINED(T.tag.TagA)");
  const request_body_5_3 = r90.initializeFilterObject()
    .setFilterOfTwinTitle(["ElementA", "ElementB"])
    .setFilterOfGlobalId(["aaa", "bbb"])
    .setFilterOfTwinTag(["tagA", "tagC"], "and")
    .setFilterOfTwinPath(["/A/*", "/B"])
    .setFilterOfTwinModelId(["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"])
    .setFilterOfDtId(["R90_000001", "R90_000002"])
    .generateParameterWithFilter();
  const stream_registration_parameters = request_body_5_1;
  client.setTelemetryStream(stream_registration_parameters)
    .then(res => console.dir(res, dir_conf));


  // 6.ストリーミング解除
  const model_6_1 = r90.generateSearchParameters("dtmi:point:bacnet", "startswith"));
const request_body_6_1 = r90.generateParameterWithPath("/research_1FL/*", model_6_1);
const request_body_6_2 = r90.generateParameterWithQuery("SELECT T FROM digitaltwins T WHERE IS_DEFINED(T.m_pointId)");
const request_body_6_3 = r90.initializeFilterObject()
  .setFilterOfTwinTitle(["ElementA", "ElementB"])
  .setFilterOfGlobalId(["aaa", "bbb"])
  .setFilterOfTwinTag(["tagA", "tagC"], "and")
  .setFilterOfTwinPath(["/A/*", "/B"])
  .setFilterOfTwinModelId(["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"])
  .setFilterOfDtId(["R90_000001", "R90_000002"])
  .generateParameterWithFilter();
const stream_registration_parameters = request_body_6_1;
client.setTelemetryStream(stream_registration_parameters)
  .then(res => console.dir(res, dir_conf));


// 7.ストリーミング登録状況確認
client.checkTelemetryStream()
  .then(res => console.dir(res, dir_conf));


// 8.ストリーミング登録データ取得(仕様確認中)
// client.getTelemetryStream(__dirname + "/data/telemetryStreamClient.proto")
//   .then(res => {
//     res.on("data", (data) => {
//       console.dir(data.telemetries, dir_conf);
//     })
//   });



/**
 * WoT API サンプル
 */

// 1.WoT TD取得
client.getThings("R90/research/reasearch_1FL//*")
  .then(res => console.dir(res, dir_conf));


// 2.WoT TD取得
const request_body_w_2_1 = r90.generateParameterWithQuery("SELECT * FROM digitaltwins T WHERE T.tag.TagA = true");
const request_body_w_2_2 = r90.initializeFilterObject()
  .setFilterOfTwinTitle(["ElementA", "ElementB"])
  .setFilterOfGlobalId(["aaa", "bbb"])
  .setFilterOfTwinTag(["tagA", "tagC"], "and")
  .setFilterOfTwinPath(["/A/*", "/B"])
  .setFilterOfTwinModelId(["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"])
  .setFilterOfDtId(["R90_000001", "R90_000002"])
  .generateParameterWithFilter();
const wot_search_parameters = request_body_w_2_1;
client.getThingsByParameter(wot_search_parameters)
  .then(res => console.dir(res, dir_conf));


// 3.WoT Property取得 (TD内全取得)
client.getThingsProperties(1, "398897d193674abf9200ac59ddc8c749")
  .then(res => console.dir(res, dir_conf));


// 4.WoT Property取得 (1 Property)
client.getThingsProperty(1, "398897d193674abf9200ac59ddc8c749", "Status")
  .then(res => console.dir(res, dir_conf));


// 5.WoT Property書き込み
client.setThingsProperty(1, "398897d193674abf9200ac59ddc8c749", "Control", 26.2, 40)
  .then(res => console.dir(res, dir_conf));

}


main();
