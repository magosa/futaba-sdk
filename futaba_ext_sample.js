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


let data = {
  building: "R90/research",
  points: ['R90_010782', 'R90_010787']
};

// client.setEventSubscription('wotecent-client01', data)
//   .then(res => console.log(res));

client.getEventSubscription()
  .then(res => console.log(res));
