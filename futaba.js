const https = require('https');


class Futaba {
  /**
   * [Futabaクラスのコンストラクタ]
   * @constructor
   * @this {Futaba}
   */
  constructor() {
    this.host_auth = "";
    this.host_hot = "";
    this.host_cold = "";
    this.host_common = "";
    this.host_grpc = "";
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
   * @param {String} url.host_common [データ交換用の特殊URL]
   * @param {String} url.host_grpc [gRPC用の特殊URL]
   */

  /**
   * setAPIURL - [API URLの設定変更]
   *
   * @param  {String} target [APIリクエスト先のURI]
   */
  setAPIURL(target) {
    this.host_auth = target + '-dev-app-auth.azurewebsites.net';
    this.host_hot = target + '-dev-app-hot.azurewebsites.net';
    this.host_cold = target + '-dev-app-cold.azurewebsites.net';
    this.host_common = target + '-dev-app-common.azurewebsites.net';
    this.host_grpc = target + '-dev-app-stream.azurewebsites.net';
  }

  makeRequestHeader(request_host, request_path, request_method) {
    const headers = {
      protocol: "https:",
      host: request_host,
      path: request_path,
      method: request_method,
      headers: {
        'Content-Type': "application/json",
        'X-NEDO-CLIENT-ID': this.client_id,
        'X-NEDO-ACCESS-TOKEN': this.access_token
      }
    };

    return headers;
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
   * [アクセストークンの発行/更新]
   * @param  {Object}  obj [アクセストークン発行に必要な設定情報]
   * @param {String} obj.client_id [サービサー毎に払い出されるID]
   * @param {String} obj.refresh_token [アクセストークンの再発行に必要な文字列（アクセストークンの初回以外は必須）]
   * @return {Promise}     [description]
   */
  async getAccessToken(obj) {
    this.setAPIURL(obj.target_api);
    let request_header = {
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
      request_header.method = "PATCH";
      request_header.headers['X-NEDO-CLIENT-REFRESHTOKEN'] = obj.refresh_token;
      request_header.headers['X-NEDO-GRANT-TYPE'] = "refresh_token";
    } else {
      request_header.method = "POST";
      request_header.headers['X-NEDO-GRANT-TYPE'] = "client_credentials";
    }
    console.log(request_header);
    const response = await this.requestFutaba(request_header);
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
    this.setAPIURL(obj.target_api);
    this.client_id = obj.client_id;
    this.client_secret = obj.client_secret;
    this.access_token = obj.access_token;
    this.refresh_token = obj.refresh_token;
  }


  /*デジタルツインAPI*/

  /**
   * async getTelemetryData - [テレメトリ取得]
   *
   * @param  {Object} search_parameters [ツインの検索条件（path / query / filterの3方式）]
   * @return {Promise}                  [ツインの検索条件をを指定して、ポイント毎に最新のテレメトリ値を取得する]
   */
  async getTelemetryData(search_parameters) {
    const path = "/api/digitaltwins/pointvalues";
    const request_header = this.makeRequestHeader(this.host_hot, path, "POST");

    return await this.requestFutaba(request_header, search_parameters);
  }

  /**
   * async getDigitalTwinData - [ツイン情報取得]
   *
   * @param  {Object} search_parameters [ツインの検索条件（path / query / filterの3方式）]
   * @return {Promise}                  [ツインの検索条件をを指定して、ポイント毎に最新のテレメトリ情報（メタデータ）を取得する]
   */
  async getDigitalTwinData(search_parameters) {
    const path = "/api/digitaltwins";
    const request_header = this.makeRequestHeader(this.host_hot, path, "POST");

    return await this.requestFutaba(request_header, search_parameters);
  }

  async updateDigitalTwinData(update_parameters) {
    const path = "/api/digitaltwins/batchupdate";
    const request_header = this.makeRequestHeader(this.host_hot, path, "POST");

    return await this.requestFutaba(request_header, update_parameters);
  }

  async controlDigitalTwinData(control_parameters) {
    const path = "/api/digitaltwins/remotecontrol";
    const request_header = this.makeRequestHeader(this.host_hot, path, "POST");

    return await this.requestFutaba(request_header, control_parameters);
  }

  async setTelemetryStream(surveillance_parameters) {
    const path = "/api/digitaltwins/telemetrystream/add";
    const request_header = this.makeRequestHeader(this.host_hot, path, "POST");

    return await this.requestFutaba(request_header, surveillance_parameters);
  }

  async deleteTelemetryStream() {
    const path = "/api/digitaltwins/telemetrystream/delete";
    const request_header = this.makeRequestHeader(this.host_hot, path, "POST");

    return await this.requestFutaba(request_header, search_parameters);
  }

  async checkTelemetryStream() {
    const path = "/api/digitaltwins/telemetrystream";
    const request_header = this.makeRequestHeader(this.host_hot, path, "GET");

    return await this.requestFutaba(request_header, surveillance_parameters);
  }


  /*WoT API*/

  /**
   * async getThings - [WoT TD 取得]
   *
   * @param  {String} bot_path [description]
   * @return {Promise}         [ツインのパスを指定して Element ツインを検索し、TDを取得する]
   */
  async getThings(bot_path) {
    const path = "/api/things?path=" + encodeURIComponent(bot_path);
    const request_header = this.makeRequestHeader(this.host_hot, path, "GET");

    return await this.requestFutaba(request_header);
  }

  /**
   * async getThingsWithQuery - [WoT TD 取得]
   *
   * @param  {Object} query_data [ADTクエリオブジェクト]
   * @return {Promise}           [ADTクエリを指定して Element ツインを検索し、TDを取得する]
   */
  async getThingsWithQuery(query_data) {
    const path = "/api/things";
    const request_header = this.makeRequestHeader(this.host_hot, path, "POST");

    return await this.requestFutaba(request_header, query_data);
  }

  /**
   * async getThingsProperties - [WoT Property取得 - TD内全取得]
   *
   * @param  {Number} root_id             [Property 取得対象が含まれるルートID]
   * @param  {String} tdid                [Property 取得対象の TD-ID]
   * @param  {Boolean} use_id_key = false [レスポンスでキーに使用する項目の選択(false：プロパティ名(デフォルト) / true：ツインID)]
   * @return {Promise}                    [指定したTD-IDに紐づく、全ポイントの最新値を取得する]
   */
  async getThingsProperties(rootid, tdid, use_id_key = false) {
    const path = "/api/things/" + rootid + "/" + tdid + "/properties?useIdKey=" + use_id_key;
    const request_header = this.makeRequestHeader(this.host_hot, path, "GET");

    return await this.requestFutaba(request_header);
  }

  /**
   * async getThingsProperty - [WoT Property取得 - 1 Property]
   *
   * @param  {Number} rootid              [Property 取得対象が含まれるルートID]
   * @param  {String} tdid                [Property 取得対象の TD-ID]
   * @param  {String} property            [Property 取得対象の ポイントID・プロパティ名]
   * @param  {Boolean} use_id_key = false [レスポンスでキーに使用する項目の選択(false：プロパティ名(デフォルト) / true：ツインID)]
   * @return {Promise}                    [指定したTD-IDに紐づく指定ポイントの最新値を取得する]
   */
  async getThingsProperty(rootid, tdid, property, use_id_key = false) {
    const path = "/api/things/" + rootid + "/" + tdid + "/properties/" + property + "?useIdKey=" + use_id_key;
    const request_header = this.makeRequestHeader(this.host_hot, path, "GET");

    return await this.requestFutaba(options);
  }

  /**
   * async setThingsProperty - [WoT Property 書き込み]
   *
   * @param  {Number} rootid    [Property 書き込み対象が含まれるるルートID]
   * @param  {String} tdid      [Property 書き込み対象の TD-ID]
   * @param  {String} property  [Property 書き込み対象の ツインID・プロパティ名]
   * @param  {Object} edit_data [Property 書き込み制御内容]
   * @return {Promise}          [指定したポイントに対して、遠隔制御を行う]
   */
  async setThingsProperty(rootid, tdid, property, edit_data) {
    const path = "/api/things/" + rootid + "/" + tdid + "/properties/" + property;
    const request_header = this.makeRequestHeader(this.host_hot, path, "GET");

    return await this.requestFutaba(request_header, edit_data);
  }


  /*モデル学習データ取得API */

  /**
   * async createTask - [モデル学習データ取得 タスク作成]
   *
   * @param  {Object} task [description]
   * @return {Promise}     [BOTパス・ADTクエリ・フィルター指定にてポイントツインを検索し、 モデル学習データを取得するタスクを作成する]
   */
  async createTask(task) {
    const path = "/api/model/task";
    const request_header = this.makeRequestHeader(this.host_cold, path, "POST");

    return await this.requestFutaba(request_header, task);
  }

  /**
   * async getTaskProgress - [モデル学習データ取得 タスク詳細確認]
   *
   * @param  {Number} task_id = null                [タスクを指定して実行履歴を取得する場合のタスクID指定、指定なしの場合は一覧取得となる]
   * @param  {String} status = null                 [タスクを一覧取得する場合の、タスク状態によるフィルタリング (enable/disable/deleted)]
   * @param  {String} create_datetime = null        [タスクを一覧取得する場合、指定日時以前に登録されたタスクを取得する]
   * @param  {Boolean} include_request_info = false [タスクを一覧取得する場合に、登録時リクエスト情報の返却有無を指定する]
   * @return {Promise}                              [クライアントシステムが登録した、モデル学習データ要求タスク登録一覧と、指定されたタスクの実行履歴を取得する]
   */
  async getTaskProgress(task_id = null, status = null, create_datetime = null, include_request_info = false) {
    let option = "";
    if (task_id !== null) {
      if (typeof task_id == "number") {
        option = option + "&task_id=" + task_id;
      } else if (typeof task_id == "string") {
        option = option + "&task_id=" + Number(task_id);
      } else {
        console.log("task_id must be a number!");
      }
    }
    if (status !== null) {
      option = option + "&status=" + encodeURIComponent(status)
    }
    if (create_datetime !== null) {
      option = option + "&createDatetime=" + encodeURIComponent(create_datetime)
    }
    option = option + "&includeRequestInfo=" + include_request_info

    const path = "/api/model/task?" + option.slice(-(option.length - 1));
    const request_header = this.makeRequestHeader(this.host_cold, path, "GET");

    return await this.requestFutaba(request_header);
  }

  /**
   * async changeTaskValidity - [モデル学習データ取得 タスク有効状態変更]
   *
   * @param  {Number} task_id         [実行状態を変更する場合のタスクIDを指定]]
   * @param  {Boolean} status = false [変更後のタスク状態 (true: enabled (有効)、false: disabled (一時停止))]
   * @return {Promise}                [モデル学習データ要求タスク（単発スケジュール/定期スケジュール）のスケジュール実行の有効状態を変更する]
   */
  async changeTaskValidity(task_id, status = false) {
    const path = "/api/model/task";
    const request_header = this.makeRequestHeader(this.host_cold, path, "PATCH");
    const task = {
      task_id: task_id,
      enabled: status
    }

    return await this.requestFutaba(request_header, task);
  }

  /**
   * async deleteTask - [モデル学習データ取得 タスク削除]
   *
   * @param  {Number} task_id [削除を行うタスクID]
   * @return {Promise}        [指定されたモデル学習データ要求タスクの、 次回以降のスケジューリングを全て解除し、タスク状態を「削除済」に変更する]
   */
  async deleteTask(task_id) {
    const path = "/api/model/task" + "?task_id=" + encodeURIComponent(task_id);
    const request_header = this.makeRequestHeader(this.host_cold, path, "DELETE");

    return await this.requestFutaba(request_header);
  }

  /**
   * async setWebhook - [モデル学習データ タスク完了通知 Webhook 登録]
   *
   * @param  {String} url [Webhook 送信先 URL]
   * @return {Promise}    [モデル学習データ要求タスク終了時の Webhook 送信先 URL 設定を登録する]
   */
  async setWebhook(url) {
    const path = "/api/model/webhook";
    const request_header = this.makeRequestHeader(this.host_cold, path, "POST");
    const webhook = {
      webhook_url: url
    }

    return await this.requestFutaba(request_header, webhook);
  }

  /**
   * async deleteWebhook - [モデル学習データ タスク完了通知 Webhook 登録解除]
   *
   * @return {Promise}  [モデル学習データ要求タスク終了時の Webhook 送信先 URL 設定を解除する]
   */
  async deleteWebhook() {
    const path = "/api/model/webhook";
    const request_header = this.makeRequestHeader(this.host_cold, path, "DELETE");

    return await this.requestFutaba(options);
  }


  /*共有データAPI*/

  /**
   * async setSharedData - [共有データ追加]
   *
   * @param  {Object} add_data [description]
   * @return {Promise}         [データプラットフォームに、共有データを新規追加する]
   */
  async setSharedData(add_data) {
    const path = "/api/commondata/add";
    const request_header = this.makeRequestHeader(this.host_common, path, "POST");

    return await this.requestFutaba(request_header, add_data);
  }

  /**
   * async getSharedData - [共有データ検索]
   *
   * @param  {Object} search_parameters [description]
   * @return {Promise}                  [データ追加APIによりデータプラットフォームに追加した共有データを検索し、対象のデータ本文を取得する]
   */
  async getSharedData(search_parameters) {
    const path = "/api/commondata/search";
    const request_header = this.makeRequestHeader(this.host_common, path, "GET");

    return await this.requestFutaba(request_header, search_parameters);
  }

  /**
   * async deleteSharedData - [共有データ削除]
   *
   * @param  {Object} delete_parameters [description]
   * @return {Promise}                  [データ追加APIによりデータプラットフォームに追加した共有データを検索し、対象のデータを削除する]
   */
  async deleteSharedData(delete_parameters) {
    const path = "/api/commondata/delete";
    const request_header = this.makeRequestHeader(this.host_common, path, "POST");

    return await this.requestFutaba(request_header, delete_parameters);
  }

}

module.exports = Futaba;
