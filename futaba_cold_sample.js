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

}


main();
