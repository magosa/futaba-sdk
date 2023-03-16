/*Futaba librarryを利用したスクリプト*/

const futaba = require('./futaba.js');
const futabaUtility = require('./futaba-utility.js')
const fs = require('fs');

let client = new futaba();
let fu = new futabaUtility();
fu.setTargetBuilding(["R90/research", "R90/east"])
  .setDownloadFolderPath(__dirname + '/download/');

const dir_conf = {
  depth: null
}


/**
 * デジタルツインAPI サンプル
 */

// 1-1.テレメトリ取得(パス検索)＜フィルター検索に統合予定＞
async function Sample_1_1() {
  const model_1_1 = fu.generateSearchParameters(["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"]);
  const telemetry_search_parameters = fu.generateParameterWithPath("/research_1FL/*", model_1_1);

  client.getTelemetryData(telemetry_search_parameters)
    .then(res => console.dir(res, dir_conf));
};

// 1-2.テレメトリ取得(ADTクエリ検索)＜将来廃止予定＞
async function Sample_1_2() {
  const telemetry_search_parameters = fu.generateParameterWithQuery("SELECT T FROM digitaltwins T WHERE IS_DEFINED(T.m_pointId)");
  client.getTelemetryData(telemetry_search_parameters)
    .then(res => console.dir(res, dir_conf));
};

// 1-3.テレメトリ取得（フィルター検索）
async function Sample_1_3() {
  const telemetry_search_parameters = fu.initializeFilterObject()
    .setFilterOfTwinTitle(["ElementA", "ElementB"])
    .setFilterOfGlobalId(["aaa", "bbb"])
    .setFilterOfTwinTag(["tagA", "tagC"], "and")
    .setFilterOfTwinPath(["/A/*", "/B"])
    .setFilterOfTwinModelId(["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"])
    .setFilterOfDtId(["R90_000001", "R90_000002"])
    .generateParameterWithFilter();

  // メソッドチェーンを使わない場合はコチラ
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
  // const telemetry_search_parameters = generateParameterWithFilter(filter_data_1)

  client.getTelemetryData(telemetry_search_parameters)
    .then(res => console.dir(res, dir_conf));
};

// 2-1.ツイン情報取得(パス検索)＜フィルター検索に統合予定＞
async function Sample_2_1() {
  const model_2_1 = fu.generateSearchParameters("dtmi:point:bacnetPoint;1");
  const digitaltwin_search_parameters = fu.generateParameterWithPath("/research_1FL/*", model_2_1, true);

  client.getDigitalTwinData(digitaltwin_search_parameters)
    .then(res => console.dir(res, dir_conf));
};

// 2-2.ツイン情報取得(ADTクエリ検索)＜将来廃止予定＞
async function Sample_2_2() {
  const digitaltwin_search_parameters = fu.generateParameterWithQuery("SELECT * FROM digitaltwins T WHERE IS_DEFINED(T.tag.TagA)", true);

  client.getDigitalTwinData(digitaltwin_search_parameters)
    .then(res => console.dir(res, dir_conf));
};

// 2-3.ツイン情報取得（フィルター検索）
async function Sample_2_3() {
  const digitaltwin_search_parameters = fu.initializeFilterObject()
    .setFilterOfTwinTitle(["ElementA", "ElementB"])
    .setFilterOfGlobalId(["aaa", "bbb"])
    .setFilterOfTwinTag(["tagA", "tagC"], "and")
    .setFilterOfTwinPath(["/A/*", "/B"])
    .setFilterOfTwinModelId(["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"])
    .setFilterOfDtId(["R90_000001", "R90_000002"])
    .generateParameterWithFilter(null, true);

  client.getDigitalTwinData(digitaltwin_search_parameters)
    .then(res => console.dir(res, dir_conf));

};

// 3-1.ツイン更新(パス検索)＜フィルター検索に統合予定＞
async function Sample_3_1() {
  const model_3_1 = fu.generateSearchParameters("dtmi:point:bacnetPoint;1");
  const digitaltwin_update_parameters = fu.generateParameterWithPath("/research_1FL/*", model_3_1);
  const update_property = "minimum";
  const update_value = "10.5";

  client.updateDigitalTwinData(digitaltwin_update_parameters, update_property, update_value)
    .then(res => console.dir(res, dir_conf));
};

// 3-2.ツイン更新(ADTクエリ検索)＜将来廃止予定＞
async function Sample_3_2() {
  const digitaltwin_update_parameters = fu.generateParameterWithQuery("SELECT * FROM digitaltwins T WHERE IS_DEFINED(T.tag.TagA)");
  const update_property = "minimum";
  const update_value = "10.5";

  client.updateDigitalTwinData(digitaltwin_update_parameters, update_property, update_value)
    .then(res => console.dir(res, dir_conf));
};

// 3-3.ツイン更新（フィルター検索）
async function Sample_3_3() {
  const digitaltwin_update_parameters = fu.initializeFilterObject()
    .setFilterOfTwinTitle(["ElementA", "ElementB"])
    .setFilterOfGlobalId(["aaa", "bbb"])
    .setFilterOfTwinTag(["tagA", "tagC"], "and")
    .setFilterOfTwinPath(["/A/*", "/B"])
    .setFilterOfTwinModelId(["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"])
    .setFilterOfDtId(["R90_000001", "R90_000002"])
    .generateParameterWithFilter();
  const update_property = "minimum";
  const update_value = "10.5";

  client.updateDigitalTwinData(digitaltwin_update_parameters, update_property, update_value)
    .then(res => console.dir(res, dir_conf));
};

// 4.ポイント遠隔制御
async function Sample_4() {
  const control_dtid = "R90_000001";
  const control_value = 26.2;
  const control_priority = 40;

  client.setTelemetryData(fu.getTargetBuilding()[0], control_dtid, control_value, control_priority)
    .then(res => console.dir(res, dir_conf));
};

// 5-1.ストリーミング登録(パス検索)＜フィルター検索に統合予定＞
async function Sample_5_1() {
  const model_5_1 = fu.generateSearchParameters("dtmi:point:bacnetPoint;1");
  const stream_registration_parameters = fu.generateParameterWithPath("/research_1FL/*", model_5_1);

  client.setTelemetryStream(stream_registration_parameters)
    .then(res => console.dir(res, dir_conf));
};

// 5-2.ストリーミング登録(ADTクエリ検索)＜将来廃止予定＞
async function Sample_5_2() {
  const stream_registration_parameters = fu.generateParameterWithQuery("SELECT * FROM digitaltwins T WHERE IS_DEFINED(T.tag.TagA)");

  client.setTelemetryStream(stream_registration_parameters)
    .then(res => console.dir(res, dir_conf));
};

// 5-3.ストリーミング登録（フィルター検索）
async function Sample_5_3() {
  const stream_registration_parameters = fu.initializeFilterObject()
    .setFilterOfTwinTitle(["ElementA", "ElementB"])
    .setFilterOfGlobalId(["aaa", "bbb"])
    .setFilterOfTwinTag(["tagA", "tagC"], "and")
    .setFilterOfTwinPath(["/A/*", "/B"])
    .setFilterOfTwinModelId(["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"])
    .setFilterOfDtId(["R90_000001", "R90_000002"])
    .generateParameterWithFilter();

  client.setTelemetryStream(stream_registration_parameters)
    .then(res => console.dir(res, dir_conf));
};

// 6-1.ストリーミング解除(パス検索)＜フィルター検索に統合予定＞
async function Sample_6_1() {
  const model_6_1 = fu.generateSearchParameters("dtmi:point:bacnet", "startswith");
  const stream_registration_parameters = fu.generateParameterWithPath("/research_1FL/*", model_6_1);

  client.deleteTelemetryStream(stream_registration_parameters)
    .then(res => console.dir(res, dir_conf));
};

// 6-2.ストリーミング解除(ADTクエリ検索)＜将来廃止予定＞
async function Sample_6_2() {
  const stream_registration_parameters = fu.generateParameterWithQuery("SELECT T FROM digitaltwins T WHERE IS_DEFINED(T.m_pointId)");

  client.deleteTelemetryStream(stream_registration_parameters)
    .then(res => console.dir(res, dir_conf));
};

// 6-3.ストリーミング解除（フィルター検索）
async function Sample_6_3() {
  const stream_registration_parameters = fu.initializeFilterObject()
    .setFilterOfTwinTitle(["ElementA", "ElementB"])
    .setFilterOfGlobalId(["aaa", "bbb"])
    .setFilterOfTwinTag(["tagA", "tagC"], "and")
    .setFilterOfTwinPath(["/A/*", "/B"])
    .setFilterOfTwinModelId(["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"])
    .setFilterOfDtId(["R90_000001", "R90_000002"])
    .generateParameterWithFilter();

  client.deleteTelemetryStream(stream_registration_parameters)
    .then(res => console.dir(res, dir_conf));
};

// 7.ストリーミング登録状況確認
async function Sample_7() {
  client.checkTelemetryStream()
    .then(res => console.dir(res, dir_conf));
};

// 8.ストリーミング登録データ取得(仕様確認中)
// async function Sample_8() {
//   client.getTelemetryStream(__dirname + "/data/telemetryStreamClient.proto")
//     .then(res => {
//       res.on("data", (data) => {
//         console.dir(data.telemetries, dir_conf);
//       })
//     });
// };


/**
 * WoT API サンプル
 */

// 1.WoT TD取得
async function WoT_Sample_1() {
  client.getThings("R90/research/reasearch_1FL/*")
    .then(res => console.dir(res, dir_conf));
};

// 2-1.WoT TD取得(クエリ検索)
async function WoT_Sample_2_1() {
  const wot_search_parameters = fu.generateParameterWithQuery("SELECT * FROM digitaltwins T WHERE T.tag.TagA = true");

  client.getThingsByParameter(wot_search_parameters)
    .then(res => console.dir(res, dir_conf));
};

// 2-2.WoT TD取得(フィルター検索)
async function WoT_Sample_2_2() {
  const wot_search_parameters = fu.initializeFilterObject()
    .setFilterOfTwinTitle(["ElementA", "ElementB"])
    .setFilterOfGlobalId(["aaa", "bbb"])
    .setFilterOfTwinTag(["tagA", "tagC"], "and")
    .setFilterOfTwinPath(["/A/*", "/B"])
    .setFilterOfTwinModelId(["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"])
    .setFilterOfDtId(["R90_000001", "R90_000002"])
    .generateParameterWithFilter();

  client.getThingsByParameter(wot_search_parameters)
    .then(res => console.dir(res, dir_conf));
};

// 3.WoT Property取得 (TD内全取得)
async function WoT_Sample_3() {
  client.getThingsProperties(1, "398897d193674abf9200ac59ddc8c749")
    .then(res => console.dir(res, dir_conf));
};

// 4.WoT Property取得 (1 Property)
async function WoT_Sample_4() {
  client.getThingsProperty(1, "398897d193674abf9200ac59ddc8c749", "Status")
    .then(res => console.dir(res, dir_conf));
};

// 5.WoT Property書き込み
async function WoT_Sample_5() {
  client.setThingsProperty(1, "398897d193674abf9200ac59ddc8c749", "Control", 26.2, 40)
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

  await Sample_1_1();
}


main();
