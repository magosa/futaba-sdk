const https = require('https');

class Futaba {
  constructor() {
    this.host_auth = "futaba-dev-app-auth.azurewebsites.net";
    this.host_hot = "futaba-dev-app-hot.azurewebsites.net";
    this.host_cold = "futaba-dev-app-cold.azurewebsites.net";
    this.host_ext = "futaba-dev-app-extapi.azurewebsites.net";
    this.client_id = "";
    this.client_secret = "";
    this.access_token = "";
    this.refresh_token = "";
  }

  //Futabaへの共通リクエストモジュール
  requestFutaba(options, request_body = null) {
    return new Promise((resolve, reject) => {
      let body = "";
      const req = https.request(options, (res) => {
        res.setEncoding('utf8');
        res.on('data', d => {
          if (res.headers['content-type'] === 'text/html') {
            console.log(`BODY: ${d}`);
          } else {
            // process.stdout.write(d);
            body += d;
          }
        });

        res.on('end', () => {
          resolve(JSON.parse(body));
        });
      })

      req.on('error', e => {
        console.error(`problem with request: ${e.message}`);
        reject(e)
      });

      if (request_body !== null) {
        req.write(JSON.stringify(request_body));
      }

      req.end();
    });
  }

  //アクセストークンの発行/更新　＜API No.1,2＞
  async getAccessToken(obj) {
    let options = {
      protocol: "https:",
      host: this.host_auth,
      path: "/api/token",
      method: "",
      headers: {
        'Content-Type': "application/json",
        'X-NEDO-CLIENT-ID': obj.client_id,
        'X-NEDO-CLIENT-SECRET': obj.client_secret,
      }
    }
    if (obj.refresh_token) {
      options.method = "PATCH";
      options.headers['X-NEDO-CLIENT-REFRESHTOKEN'] = obj.refresh_token;
      options.headers['X-NEDO-GRANT-TYPE'] = "refresh_token";
    } else {
      options.method = "POST";
      options.headers['X-NEDO-GRANT-TYPE'] = "client_credentials";
    }

    let response = await this.requestFutaba(options);
    this.client_id = obj.client_id;
    this.client_secret = obj.client_secret;
    this.access_token = response.access_token;
    this.refresh_token = response.refresh_token;

    return response;
  }

  //既存のアクセストークンを直接設定
  setAccessToken(obj) {
    this.client_id = obj.client_id;
    this.client_secret = obj.client_secret;
    this.access_token = obj.access_token;
    this.refresh_token = obj.refresh_token;
  }

  //モデル学習データ要求タスク作成　＜API No.3＞
  async createTask(task) {
    let options = {
      protocol: "https:",
      host: this.host_cold,
      path: "/api/model/task",
      method: "POST",
      headers: {
        'Content-Type': "application/json",
        'X-NEDO-CLIENT-ID': this.client_id,
        'X-NEDO-ACCESS-TOKEN': this.access_token
      }
    }

    return await this.requestFutaba(options, task);
  }

  //モデル学習データ要求タスク確認　＜API No.4＞
  async getTaskProgress(task_id = null) {
    let options = {
      protocol: "https:",
      host: this.host_cold,
      method: "GET",
      headers: {
        'Content-Type': "application/json",
        'X-NEDO-CLIENT-ID': this.client_id,
        'X-NEDO-ACCESS-TOKEN': this.access_token
      }
    }

    if (task_id !== null) {
      options['path'] = "/api/model/task" + "?task_id=" + +encodeURIComponent(task_id)
    } else {
      options['path'] = "/api/model/task"
    }

    return await this.requestFutaba(options);
  }

  //モデル学習データ要求タスク変更　＜API No.5＞
  async changeTaskValidity(task_id, status = false) {
    let options = {
      protocol: "https:",
      host: this.host_cold,
      path: "/api/model/task",
      method: "PATCH",
      headers: {
        'Content-Type': "application/json",
        'X-NEDO-CLIENT-ID': this.client_id,
        'X-NEDO-ACCESS-TOKEN': this.access_token
      }
    }

    let task = {
      task_id: task_id,
      enabled: status
    }

    return await this.requestFutaba(options, task);
  }

  //モデル学習データ要求タスクキャンセル　＜API No.6＞
  async changeTaskValidity(task_id, status = false) {
    let options = {
      protocol: "https:",
      host: this.host_cold,
      path: "/api/model/task" + "?task_id=" + +encodeURIComponent(task_id),
      method: "DELETE",
      headers: {
        'Content-Type': "application/json",
        'X-NEDO-CLIENT-ID': this.client_id,
        'X-NEDO-ACCESS-TOKEN': this.access_token
      }
    }

    return await this.requestFutaba(options);
  }

  //モデル学習データ要求webhook登録　＜API No.7＞
  async changeTaskValidity(url) {
    let options = {
      protocol: "https:",
      host: this.host_cold,
      path: "/api/model/webhook",
      method: "POST",
      headers: {
        'Content-Type': "application/json",
        'X-NEDO-CLIENT-ID': this.client_id,
        'X-NEDO-ACCESS-TOKEN': this.access_token
      }
    }

    let webhook = {
      webhook_url: url,
    }

    return await this.requestFutaba(options, webhook);
  }

  //モデル学習データ要求webhook削除　＜API No.8＞
  async changeTaskValidity(webhook_id) {
    let options = {
      protocol: "https:",
      host: this.host_cold,
      path: "/api/model/webhook" + "?webhook_id=" + +encodeURIComponent(webhook_id),
      method: "DELETE",
      headers: {
        'Content-Type': "application/json",
        'X-NEDO-CLIENT-ID': this.client_id,
        'X-NEDO-ACCESS-TOKEN': this.access_token
      }
    }

    return await this.requestFutaba(options);
  }

  //共有データ追加　＜API No.9＞
  async setSharedData(add_data) {
    let options = {
      protocol: "https:",
      host: this.host_ext,
      path: "/api/extdata/add",
      method: "POST",
      headers: {
        'Content-Type': "application/json",
        'X-NEDO-CLIENT-ID': this.client_id,
        'X-NEDO-ACCESS-TOKEN': this.access_token
      }
    }

    return await this.requestFutaba(options, add_data);
  }

  //共有データ検索　＜API No.10＞
  async getSharedData(search_conditions) {
    let options = {
      protocol: "https:",
      host: this.host_ext,
      path: "/api/extdata/search",
      method: "POST",
      headers: {
        'Content-Type': "application/json",
        'X-NEDO-CLIENT-ID': this.client_id,
        'X-NEDO-ACCESS-TOKEN': this.access_token
      }
    }

    return await this.requestFutaba(options, search_conditions);
  }

  //共有データ削除　＜API No.11＞
  async deleteSharedData(delete_conditions) {
    let options = {
      protocol: "https:",
      host: this.host_ext,
      path: "/api/extdata/delete",
      method: "POST",
      headers: {
        'Content-Type': "application/json",
        'X-NEDO-CLIENT-ID': this.client_id,
        'X-NEDO-ACCESS-TOKEN': this.access_token
      }
    }

    return await this.requestFutaba(options, delete_conditions);
  }

  //天気予報データ取得　＜API No.12＞　⇒　将来的に廃止予定
  async getWeatherData(search_conditions) {
    let options = {
      protocol: "https:",
      host: this.host_ext,
      path: "/api/weather",
      method: "POST",
      headers: {
        'Content-Type': "application/json",
        'X-NEDO-CLIENT-ID': this.client_id,
        'X-NEDO-ACCESS-TOKEN': this.access_token
      }
    }

    return await this.requestFutaba(options, search_conditions);
  }

  //建物メタデータの検索（パス指定）　＜API No.13＞
  async getMetadata(bot_path) {
    let options = {
      protocol: "https:",
      host: this.host_hot,
      path: "/api/metadata" + "?path=" + encodeURIComponent(bot_path),
      method: "GET",
      headers: {
        'Content-Type': "application/json",
        'X-NEDO-CLIENT-ID': this.client_id,
        'X-NEDO-ACCESS-TOKEN': this.access_token
      }
    }

    return await this.requestFutaba(options);
  }

  //建物メタデータの検索（クエリ指定）　＜API No.14＞
  async getMetadataWithQuery(query_data) {
    let options = {
      protocol: "https:",
      host: this.host_hot,
      path: "/api/metadata",
      method: "POST",
      headers: {
        'Content-Type': "application/json",
        'X-NEDO-CLIENT-ID': this.client_id,
        'X-NEDO-ACCESS-TOKEN': this.access_token
      }
    }

    return await this.requestFutaba(options, query_data);
  }

  //建物メタデータの編集　＜API No.15＞
  async setMetadataProperty(edit_data) {
    let options = {
      protocol: "https:",
      host: this.host_hot,
      path: "/api/metadata",
      method: "PUT",
      headers: {
        'Content-Type': "application/json",
        'X-NEDO-CLIENT-ID': this.client_id,
        'X-NEDO-CLIENT-SECRET': this.client_secret,
      }
    }

    return await this.requestFutaba(options, edit_data);
  }

  //TD取得（パス指定）　＜API No.16＞
  async getThings(bot_path) {
    let options = {
      protocol: "https:",
      host: this.host_hot,
      path: "/api/things" + "?path=" + encodeURIComponent(bot_path),
      method: "GET",
      headers: {
        'Content-Type': "application/json",
        'X-NEDO-CLIENT-ID': this.client_id,
        'X-NEDO-CLIENT-SECRET': this.client_secret,
      }
    }

    return await this.requestFutaba(options);
  }

  //TD取得（クエリ指定）　＜API No.17＞
  async getThingsWithQuery(query_data) {
    let options = {
      protocol: "https:",
      host: this.host_hot,
      path: "/api/things",
      method: "POST",
      headers: {
        'Content-Type': "application/json",
        'X-NEDO-CLIENT-ID': this.client_id,
        'X-NEDO-ACCESS-TOKEN': this.access_token
      }
    }

    return await this.requestFutaba(options, query_data);
  }

  //Property取得（TD内全取得）　＜API No.18＞
  async getThingsProperties(tdid) {
    let options = {
      protocol: "https:",
      host: this.host_hot,
      path: "/api/things/" + encodeURIComponent(tdid) + "/properties",
      method: "GET",
      headers: {
        'Content-Type': "application/json",
        'X-NEDO-CLIENT-ID': this.client_id,
        'X-NEDO-ACCESS-TOKEN': this.access_token
      }
    }

    return await this.requestFutaba(options);
  }

  //Property取得（1 Property）　＜API No.19＞
  async getThingsProperty(tdid, pointid) {
    let options = {
      protocol: "https:",
      host: this.host_hot,
      path: "/api/things/" + encodeURIComponent(tdid) + "/properties/" + encodeURIComponent(pointid),
      method: "GET",
      headers: {
        'Content-Type': "application/json",
        'X-NEDO-CLIENT-ID': this.client_id,
        'X-NEDO-ACCESS-TOKEN': this.access_token
      }
    }

    return await this.requestFutaba(options);
  }

  //Property書き込み　＜API No.20＞
  async setThingsProperty(tdid, pointid, edit_data) {
    let options = {
      protocol: "https:",
      host: this.host_hot,
      path: "/api/things/" + encodeURIComponent(tdid) + "/properties/" + encodeURIComponent(pointid),
      method: "PUT",
      headers: {
        'Content-Type': "application/json",
        'X-NEDO-CLIENT-ID': this.client_id,
        'X-NEDO-ACCESS-TOKEN': this.access_token
      }
    }

    return await this.requestFutaba(options, edit_data);
  }

  //Property取得（TD内全取得 プロパティ名エイリアス）　＜API No.XX＞
  async getThingsPropertiesWithAlias(tdid) {
    let options = {
      protocol: "https:",
      host: this.host_hot,
      path: "/api/things/" + encodeURIComponent(tdid) + "/propertiesEx",
      method: "GET",
      headers: {
        'Content-Type': "application/json",
        'X-NEDO-CLIENT-ID': this.client_id,
        'X-NEDO-ACCESS-TOKEN': this.access_token
      }
    }

    return await this.requestFutaba(options);
  }
}

module.exports = Futaba;
