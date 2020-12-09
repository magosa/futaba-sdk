const https = require('https');


class Futaba {
  /**
  * [Futabaクラスのコンストラクタ]
  * @constructor
  * @this {Futaba}
  * @param {String} host_auth [アクセストークン認証用のURL]
  * @param {String} host_hot [WoT APIのURL]
  * @param {String} host_cold [建物メタデータのURL]
  * @param {String} host_ext [データ交換用の特殊URL]
  * @param {String} client_id [サービサー毎に払い出されるID]
  * @param {String} client_secret [サービサー毎に払い出されるシークレット文字列]
  * @param {String} access_token [発行から24時間有効なアクセストークン文字列]
  * @param {String} refresh_token [アクセストークンの再発行に必要な文字列]
  */
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

  /**
   * [API URLの設定変更]
   * @param {Object} url [APIリクエスト先のURI]
   * @param {String} url.host_auth [アクセストークン認証用のURL]
   * @param {String} url.host_hot [WoT APIのURL]
   * @param {String} url.host_cold [建物メタデータのURL]
   * @param {String} url.host_ext [データ交換用の特殊URL]
   */
  setHostURL(url) {
    this.host_auth = url.host_auth;
    this.host_hot = url.host_hot;
    this.host_cold = url.host_cold;
    this.host_ext = url.host_ext;
  }

  /**
   * [Futabaへの共通リクエストモジュール]
   * @param  {Object} request_header      [APIリクエストに必要なHTTPSヘッダー]
   * @param  {Object} [request_body=null] [APIリクエスト時に送るリクエストボディ]
   * @return {Promise}                     [description]
   */
  requestFutaba(request_header, request_body = null) {
    return new Promise((resolve, reject) => {
      let body = "";
      const req = https.request(request_header, (res) => {
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

  /**
   * [アクセストークンの発行/更新 ＜API No.1,2＞]
   * @param  {Object}  obj [アクセストークン発行に必要な設定情報]
   * @param {String} obj.client_id [サービサー毎に払い出されるID]
   * @param {String} obj.refresh_token [アクセストークンの再発行に必要な文字列（アクセストークンの初回以外は必須）]
   * @return {Promise}     [description]
   */
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

  /**
   * [既存のアクセストークンを直接設定]
   * @param {Object} obj [アクセストークン発行に必要な設定情報]
   * @param {String} obj.client_id [サービサー毎に払い出されるID]
   * @param {String} obj.client_secret [サービサー毎に払い出されるシークレット文字列]
   * @param {String} obj.access_token [発行から24時間有効なアクセストークン文字列]
   * @param {String} obj.refresh_token [アクセストークンの再発行に必要な文字列（アクセストークンの初回以外は必須）]
   */
  setAccessToken(obj) {
    this.client_id = obj.client_id;
    this.client_secret = obj.client_secret;
    this.access_token = obj.access_token;
    this.refresh_token = obj.refresh_token;
  }

  /**
   * モデル学習データ要求タスク作成 ＜API No.3＞
   * @param  {Object}  task [description]
   * @return {Promise}      [description]
   */
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

  /**
   * [モデル学習データ要求タスク確認 ＜API No.4＞]
   * @param  {Object}  [task_id=null] [description]
   * @return {Promise}                [description]
   */
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

  /**
   * [モデル学習データ要求タスク変更 ＜API No.5＞]
   * @param  {Number}  task_id        [description]
   * @param  {Boolean} [status=false] [description]
   * @return {Promise}                [description]
   */
  async changeTaskValidity(task_id = 1, status = false) {
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

  /**
   * [モデル学習データ要求タスクキャンセル ＜API No.6＞]
   * @param  {Number}  task_id        [description]
   * @return {Promise}                [description]
   */
  async changeTaskDelete(task_id) {
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

  /**
   * [モデル学習データ要求webhook登録 ＜API No.7＞]
   * @param  {String}  url [description]
   * @return {Promise}     [description]
   */
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

  /**
   * [モデル学習データ要求webhook削除 ＜API No.8＞]
   * @param  {[type]}  webhook_id [description]
   * @return {Promise}            [description]
   */
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

  /**
   * [共有データ追加 ＜API No.9＞]
   * @param  {Object}  add_data [description]
   * @return {Promise}          [description]
   */
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

  /**
   * [共有データ検索 ＜API No.10＞]
   * @param  {Object}  search_conditions [description]
   * @return {Promise}                   [description]
   */
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

  /**
   * [共有データ削除 ＜API No.11＞]
   * @param  {Object}  delete_conditions [description]
   * @return {Promise}                   [description]
   */
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

  /**
   * [天気予報データ取得 ＜API No.12＞ ⇒ 将来的に廃止予定]
   * @param  {Object}  search_conditions [description]
   * @return {Promise}                   [description]
   */
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

  /**
   * [建物メタデータの検索（パス指定） ＜API No.13＞]
   * @param  {Object}  bot_path [description]
   * @return {Promise}          [description]
   */
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

  /**
   * [建物メタデータの検索（クエリ指定） ＜API No.14＞]
   * @param  {Object}  query_data [description]
   * @return {Promise}            [description]
   */
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

  /**
   * [建物メタデータの編集 ＜API No.15＞]
   * @param  {Object}  edit_data [description]
   * @return {Promise}           [description]
   */
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

  /**
   * [TD取得（パス指定） ＜API No.16＞]
   * @param  {String}  bot_path [description]
   * @return {Promise}          [description]
   */
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

  /**
   * [TD取得（クエリ指定） ＜API No.17＞]
   * @param  {Object}  query_data [description]
   * @return {Promise}            [description]
   */
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

  /**
   * [Property取得（TD内全取得） ＜API No.18＞]
   * @param  {String}  tdid [description]
   * @return {Promise}      [description]
   */
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

  /**
   * [Property取得（1 Property） ＜API No.19＞]
   * @param  {String}  tdid    [description]
   * @param  {String}  pointid [description]
   * @return {Promise}         [description]
   */
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

  /**
   * [Property書き込み ＜API No.20＞]
   * @param  {String}  tdid      [description]
   * @param  {String}  pointid   [description]
   * @param  {Object}  edit_data [description]
   * @return {Promise}           [description]
   */
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

  /**
   * [Property取得（TD内全取得 プロパティ名エイリアス） ＜拡張API＞]
   * @param  {String}  tdid [description]
   * @return {Promise}      [description]
   */
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
