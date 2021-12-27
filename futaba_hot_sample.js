/*Futaba librarryを利用したスクリプト*/

const futaba = require('./futaba.js');
const futility = require('./futaba-utility.js')
const fs = require('fs');

let client = new futaba();
let obj = JSON.parse(fs.readFileSync('./data/config.json', 'utf8'));




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


  const request_body_1_1 = futility.makePathObject("R90/research", "/reasearch_1FL/*", futility.makeSearchParameters("dtmi:point:bacnet", "startswith"));
  const request_body_1_2 = futility.makeQueryObject("R90/research", "SELECT T FROM digitaltwins T WHERE IS_DEFINED(T.m_pointId)");
  const filter_data = {
    title: futility.makeSearchParameters(["ElementA", "ElementB"]),
    globalId: futility.makeSearchParameters(["aaa", "bbb"]),
    tags: futility.makeSearchParameters(["tagA", "tagC"], "and"),
    path: futility.makeSearchParameters(["/A/*", "/B"]),
    model: futility.makeSearchParameters(["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"]),
    dtId: futility.makeSearchParameters(["R90_000001", "R90_000002"])
  }
  const request_body_1_3 = futility.makeFilterObject("R90/research", filter_data);
  const telemetry_search_parameters = request_body_1_1;

  client.getTelemetryData(telemetry_search_parameters)
    .then(res => console.dir(res, {
      depth: null
    }));


  const request_body_2_1 = futility.makePathObject("R90/research", "/reasearch_1FL/*", futility.makeSearchParameters("dtmi:point:bacnetPoint;1"), true);
  const request_body_2_2 = futility.makeQueryObject("R90/research", "SELECT * FROM digitaltwins T WHERE IS_DEFINED(T.tag.TagA)", true);
  const filter_data = {
    title: futility.makeSearchParameters(["ElementA", "ElementB"]),
    globalId: futility.makeSearchParameters(["aaa", "bbb"]),
    tags: futility.makeSearchParameters(["tagA", "tagC"], "and"),
    path: futility.makeSearchParameters(["/A/*", "/B"]),
    model: futility.makeSearchParameters(["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"]),
    dtId: futility.makeSearchParameters(["R90_000001", "R90_000002"])
  }
  const request_body_2_3 = futility.makeFilterObject("R90/research", filter_data);
  const digitaltwin_search_parameters = request_body_2_1;

  client.getDigitalTwinData(digitaltwin_search_parameters)
    .then(res => console.dir(res, {
      depth: null
    }););


  const request_body_2_1 = futility.makePathObject("R90/research", "/reasearch_1FL/*", futility.makeSearchParameters("dtmi:point:bacnetPoint;1"), true);
  const request_body_2_2 = futility.makeQueryObject("R90/research", "SELECT * FROM digitaltwins T WHERE IS_DEFINED(T.tag.TagA)", true);
  const filter_data = {
    title: futility.makeSearchParameters(["ElementA", "ElementB"]),
    globalId: futility.makeSearchParameters(["aaa", "bbb"]),
    tags: futility.makeSearchParameters(["tagA", "tagC"], "and"),
    path: futility.makeSearchParameters(["/A/*", "/B"]),
    model: futility.makeSearchParameters(["dtmi:point:bacnetPoint;1", "dtmi:point:humanPoint;1"]),
    dtId: futility.makeSearchParameters(["R90_000001", "R90_000002"])
  }
  const request_body_2_3 = futility.makeFilterObject("R90/research", filter_data);
  const digitaltwin_update_parameters = request_body_3_1;

  client.updateDigitalTwinData()
    .then(res => console.dir(res, {
      depth: null
    }););
}


main();
