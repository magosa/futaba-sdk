const https = require('https');
const grpc = require('@grpc/grpc-js');
const protoLoader = require('@grpc/proto-loader');

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
    this.host_stream = "";
    this.client_id = "";
    this.client_secret = "";
    this.access_token = "";
    this.refresh_token = "";
  }

  /**
   * setAPIURL - [API URLの設定変更]
   *
   * @param  {string} target [APIリクエスト先のURI]
   */
  setAPIURL(target) {
    this.host_auth = target + '-dev-app-auth.azurewebsites.net';
    this.host_hot = target + '-dev-app-hot.azurewebsites.net';
    this.host_cold = target + '-dev-app-cold.azurewebsites.net';
    this.host_common = target + '-dev-app-common.azurewebsites.net';
    this.host_stream = target + '-dev-app-stream.azurewebsites.net';
  }

  makeRequestHeader(request_host, request_path, request_method) {
    const headers = {
      protocol: "https:",
      host: request_host,
      path: request_path,
      method: request_method,
      headers: {
        'Content-Type': "application/json",
        'X-DTDPF-CLIENT-ID': this.client_id,
        'X-DTDPF-ACCESS-TOKEN': this.access_token
      }
    };

    return headers;
  }

  /**
   * [Futabaへの共通リクエストモジュール]
   * @param  {object} request_header      [APIリクエストに必要なHTTPSヘッダー]
   * @param  {object} [request_body=null] [APIリクエスト時に送るリクエストボディ]
   * @return {promise}                     [description]
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
   * @param  {object}  obj [アクセストークン発行に必要な設定情報]
   * @param {string} obj.client_id [サービサー毎に払い出されるID]
   * @param {string} obj.refresh_token [アクセストークンの再発行に必要な文字列（アクセストークンの初回以外は必須）]
   * @return {promise}     [description]
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
        'X-DTDPF-CLIENT-ID': obj.client_id,
        'X-DTDPF-CLIENT-SECRET': obj.client_secret,
      }
    }
    if (obj.refresh_token) {
      request_header.method = "PATCH";
      request_header.headers['X-DTDPF-CLIENT-REFRESHTOKEN'] = obj.refresh_token;
      request_header.headers['X-DTDPF-GRANT-TYPE'] = "refresh_token";
    } else {
      request_header.method = "POST";
      request_header.headers['X-DTDPF-GRANT-TYPE'] = "client_credentials";
    }

    const response = await this.requestFutaba(request_header);
    this.client_id = obj.client_id;
    this.client_secret = obj.client_secret;
    this.access_token = response.accessToken;
    this.refresh_token = response.refreshToken;

    return response;
  }

  /**
   * [既存のアクセストークンを直接設定]
   * @param {object} obj [アクセストークン発行に必要な設定情報]
   * @param {string} obj.client_id [サービサー毎に払い出されるID]
   * @param {string} obj.client_secret [サービサー毎に払い出されるシークレット文字列]
   * @param {string} obj.access_token [発行から24時間有効なアクセストークン文字列]
   * @param {string} obj.refresh_token [アクセストークンの再発行に必要な文字列（アクセストークンの初回以外は必須）]
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
   * @param  {object} search_parameters [ツインの検索条件（path / query / filterの3方式）]
   * @return {promise}                  [ツインの検索条件をを指定して、ポイント毎に最新のテレメトリ値を取得する]
   */
  async getTelemetryData(search_parameters) {
    const path = "/api/digitaltwins/pointvalues";
    const request_header = this.makeRequestHeader(this.host_hot, path, "POST");

    return await this.requestFutaba(request_header, search_parameters);
  }

  /**
   * async getDigitalTwinData - [ツイン情報取得]
   *
   * @param  {object} search_parameters [ツインの検索条件（path / query / filterの3方式）]
   * @return {promise}                  [ツインの検索条件をを指定して、ポイント毎に最新のテレメトリ情報（メタデータ）を取得する]
   */
  async getDigitalTwinData(search_parameters) {
    const path = "/api/digitaltwins";
    const request_header = this.makeRequestHeader(this.host_hot, path, "POST");

    return await this.requestFutaba(request_header, search_parameters);
  }

  /**
   * async updateDigitalTwinData - [ツイン更新]
   *
   * @param  {object} update_parameters [更新対象のツイン検索条件（path / query / filterの3方式）]
   * @param  {string} property          [更新対象のプロパティ]
   * @param  {string | object} value    [更新値]
   * @return {promise}                  [ツインのパスを指定して検索を行い、抽出された全てのツインに対して、登録内容を更新する]
   */
  async updateDigitalTwinData(update_parameters, property, value) {
    const path = "/api/digitaltwins/batchupdate";
    const request_header = this.makeRequestHeader(this.host_hot, path, "POST");
    update_parameters['property'] = property;
    update_parameters['value'] = value;

    return await this.requestFutaba(request_header, update_parameters);
  }


  /**
   * async controlDigitalTwinData - [ポイント遠隔制御]
   *
   * @param  {string} root            [デジタルツインルート指定 (建物指定に相当)]
   * @param  {string} dtid            [遠隔制御対象ツインID]
   * @param  {number} value           [遠隔制御で送信する値]
   * @param  {number} priority = null [遠隔制御で送信する優先度]
   * @return {promise}                 [指定したポイントに対して、遠隔制御を行う]
   */
  async controlDigitalTwinData(root, dtid, value, priority = null) {
    const path = "/api/digitaltwins/remotecontrol";
    const request_header = this.makeRequestHeader(this.host_hot, path, "POST");
    let values = {
      value: value,
      priority: 40
    }
    if (priority !== null) {
      values['priority'] = priority;
    }

    const control_parameters = {
      root: root,
      dtId: dtid,
      values: values
    }

    return await this.requestFutaba(request_header, control_parameters);
  }


  /**
   * async setTelemetryStream - [テレメトリストリーム ポイント登録]
   *
   * @param  {object} surveillance_parameters [対象となるストリームポイントのツイン検索条件（path / query / filterの3方式）]
   * @return {promise}                        [ストリーミングデータとして受信するポイントを、検索して登録する]
   */
  async setTelemetryStream(surveillance_parameters) {
    const path = "/api/digitaltwins/telemetrystream/add";
    const request_header = this.makeRequestHeader(this.host_hot, path, "POST");

    return await this.requestFutaba(request_header, surveillance_parameters);
  }


  /**
   * async deleteTelemetryStream - [テレメトリストリーム ポイント解除]
   *
   * @param  {object} search_parameters [対象となるストリームポイントのツイン検索条件（path / query / filterの3方式）]
   * @return {promise}                  [ストリーミングデータとして受信するポイントを、検索して解除する]
   */
  async deleteTelemetryStream(search_parameters) {
    const path = "/api/digitaltwins/telemetrystream/delete";
    const request_header = this.makeRequestHeader(this.host_hot, path, "POST");

    return await this.requestFutaba(request_header, search_parameters);
  }


  /**
   * async checkTelemetryStream - [テレメトリストリーム 登録状況取得]
   *
   * @return {promise}  [ストリーミングデータとして受信しているポイントの登録状況を一覧取得する]
   */
  async checkTelemetryStream() {
    const path = "/api/digitaltwins/telemetrystream";
    const request_header = this.makeRequestHeader(this.host_hot, path, "GET");

    return await this.requestFutaba(request_header);
  }


  /**
   * async getTelemetryStream - [ストリーミング接続 RPC]
   *
   * @param  {string} proto_path Protocol Bufferファイルパス
   * @return {type}              テレメトリストリーム ポイント登録API で登録済みのポイントの テレメトリ最新値を、gRPC を使用してリアルタイムに受信する
   */
  async getTelemetryStream(proto_path) {
    const path = this.host_stream + ":443";
    const package_definition = protoLoader.loadSync(
      proto_path, {
        keepCase: true,
        longs: String,
        enums: String,
        defaults: true,
        oneofs: true
      });
    const proto_descriptor = grpc.loadPackageDefinition(package_definition).SBT.DTDPF.API.protos;
    const telemetry_stream = proto_descriptor.telemetryStreamClient;
    const ts_client = new telemetry_stream.StreamClientService(path, grpc.credentials.createInsecure());

    let metadata = new grpc.Metadata();
    metadata.add('X-DTDPF-CLIENT-ID', this.client_id);
    metadata.add('X-DTDPF-ACCESS-TOKEN', this.access_token)

    let stream = ts_client.ConnectTelemetryStream({}, metadata);

    return stream;
  }


  /*WoT API*/

  /**
   * async getThings - [WoT TD 取得]
   *
   * @param  {string} bot_path [TD取得対象のツインのパス]
   * @return {promise}         [ツインのパスを指定して Element ツインを検索し、TDを取得する]
   */
  async getThings(bot_path) {
    const path = "/api/things?path=" + encodeURIComponent(bot_path);
    const request_header = this.makeRequestHeader(this.host_hot, path, "GET");

    return await this.requestFutaba(request_header);
  }

  /**
   * async getThingsByParameter - [WoT TD 取得]
   *
   * @param  {object} search_parameters [ADTクエリオブジェクト]
   * @return {promise}                  [ADTクエリを指定して Element ツインを検索し、TDを取得する]
   */
  async getThingsByParameter(search_parameters) {
    const path = "/api/things";
    const request_header = this.makeRequestHeader(this.host_hot, path, "POST");

    return await this.requestFutaba(request_header, search_parameters);
  }

  /**
   * async getThingsProperties - [WoT Property取得 - TD内全取得]
   *
   * @param  {number} root_id             [Property 取得対象が含まれるルートID]
   * @param  {string} tdid                [Property 取得対象の TD-ID]
   * @param  {boolean} use_id_key = false [レスポンスでキーに使用する項目の選択(false：プロパティ名(デフォルト) / true：ツインID)]
   * @return {promise}                    [指定したTD-IDに紐づく、全ポイントの最新値を取得する]
   */
  async getThingsProperties(root_id, tdid, use_id_key = false) {
    const path = "/api/things/" + root_id + "/" + tdid + "/properties?useIdKey=" + use_id_key;
    const request_header = this.makeRequestHeader(this.host_hot, path, "GET");

    return await this.requestFutaba(request_header);
  }

  /**
   * async getThingsProperty - [WoT Property取得 - 1 Property]
   *
   * @param  {number} root_id             [Property 取得対象が含まれるルートID]
   * @param  {string} tdid                [Property 取得対象の TD-ID]
   * @param  {string} property            [Property 取得対象の ポイントID・プロパティ名]
   * @param  {boolean} use_id_key = false [レスポンスでキーに使用する項目の選択(false：プロパティ名(デフォルト) / true：ツインID)]
   * @return {promise}                    [指定したTD-IDに紐づく指定ポイントの最新値を取得する]
   */
  async getThingsProperty(root_id, tdid, property, use_id_key = false) {
    const path = "/api/things/" + root_id + "/" + tdid + "/properties/" + property + "?useIdKey=" + use_id_key;
    const request_header = this.makeRequestHeader(this.host_hot, path, "GET");

    return await this.requestFutaba(request_header);
  }

  /**
   * async setThingsProperty - [WoT Property 書き込み]
   *
   * @param  {number} root_id         [Property 書き込み対象が含まれるるルートID]
   * @param  {string} tdid            [Property 書き込み対象の TD-ID]
   * @param  {string} property        [Property 書き込み対象の ツインID・プロパティ名]
   * @param  {number} value           [Property 書き込み制御内容]
   * @param  {number} priority = null [Property 書き込み制御有線順位]
   * @return {promise}                [指定したポイントに対して、遠隔制御を行う]
   */
  async setThingsProperty(root_id, tdid, property, value, priority = null) {
    const path = "/api/things/" + root_id + "/" + tdid + "/properties/" + property;
    const request_header = this.makeRequestHeader(this.host_hot, path, "PUT");
    let values = {
      value: value,
      priority: 40
    }
    if (priority !== null) {
      values['priority'] = priority;
    }

    let options = {
      values: values
    }

    return await this.requestFutaba(request_header, options);
  }


  /*モデル学習データ取得API */

  /**
   * async createTask - [モデル学習データ取得 タスク作成]
   *
   * @param  {object} task [description]
   * @return {promise}     [BOTパス・ADTクエリ・フィルター指定にてポイントツインを検索し、 モデル学習データを取得するタスクを作成する]
   */
  async createTask(task) {
    const path = "/api/model/task";
    const request_header = this.makeRequestHeader(this.host_cold, path, "POST");

    return await this.requestFutaba(request_header, task);
  }

  /**
   * async getTaskProgress - [モデル学習データ取得 タスク詳細確認]
   *
   * @param  {number} task_id = null                [タスクを指定して実行履歴を取得する場合のタスクID指定、指定なしの場合は一覧取得となる]
   * @param  {string} status = null                 [タスクを一覧取得する場合の、タスク状態によるフィルタリング (enable/disable/deleted)]
   * @param  {string} create_datetime = null        [タスクを一覧取得する場合、指定日時以前に登録されたタスクを取得する]
   * @param  {boolean} include_request_info = false [タスクを一覧取得する場合に、登録時リクエスト情報の返却有無を指定する]
   * @return {promise}                              [クライアントシステムが登録した、モデル学習データ要求タスク登録一覧と、指定されたタスクの実行履歴を取得する]
   */
  async getTaskProgress(task_id = null, status = null, create_datetime = null, include_request_info = false) {
    let option = "";
    if (task_id !== null) {
      if (typeof task_id == "number") {
        option = option + "&taskId=" + Math.trunc(task_id);
      } else if (typeof task_id == "string" && !isNaN(task_id)) {
        option = option + "&taskId=" + parseInt(task_id, 10);
      } else {
        console.log("Task ID must be a integer!");
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
   * @param  {number} task_id         [実行状態を変更する場合のタスクIDを指定]
   * @param  {boolean} status = false [変更後のタスク状態 (true: enabled (有効)、false: disabled (一時停止))]
   * @return {promise}                [モデル学習データ要求タスク（単発スケジュール/定期スケジュール）のスケジュール実行の有効状態を変更する]
   */
  async changeTaskValidity(task_id, status = false) {
    const path = "/api/model/task";
    const request_header = this.makeRequestHeader(this.host_cold, path, "PATCH");
    const task = {
      taskId: task_id,
      enabled: status
    }

    return await this.requestFutaba(request_header, task);
  }

  /**
   * async deleteTask - [モデル学習データ取得 タスク削除]
   *
   * @param  {number} task_id [削除を行うタスクID]
   * @return {promise}        [指定されたモデル学習データ要求タスクの、 次回以降のスケジューリングを全て解除し、タスク状態を「削除済」に変更する]
   */
  async deleteTask(task_id) {
    const path = "/api/model/task" + "?taskId=" + encodeURIComponent(task_id);
    const request_header = this.makeRequestHeader(this.host_cold, path, "DELETE");

    return await this.requestFutaba(request_header);
  }

  /**
   * async setWebhook - [モデル学習データ タスク完了通知 Webhook 登録]
   *
   * @param  {string} url [Webhook 送信先 URL]
   * @return {promise}    [モデル学習データ要求タスク終了時の Webhook 送信先 URL 設定を登録する]
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
   * @return {promise}  [モデル学習データ要求タスク終了時の Webhook 送信先 URL 設定を解除する]
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
   * @param  {number} data_type_id      [共有データタイプID]
   * @param  {string | number} root     [デジタルツインルート名 または デジタルツインルートID]
   * @param  {string | string[]} values [登録データJson文字列の配列 または 登録データJson文字列]
   * @return {promise}                  [データプラットフォームに、共有データを新規追加する]
   */
  async setSharedData(data_type_id, root, values) {
    const path = "/api/commondata/add";
    const request_header = this.makeRequestHeader(this.host_common, path, "POST");
    const add_data = {
      dataTypeId: data_type_id,
      root: root,
      values: values
    }

    return await this.requestFutaba(request_header, add_data);
  }

  /**
   * async getSharedData - [共有データ検索]
   *
   * @param  {number} data_type_id  [共有データタイプID]
   * @param  {string | number} root [デジタルツインルート名 または デジタルツインルートID]
   * @param  {object} filter        [共有データクエリオブジェクト]
   * @return {promise}              [データ追加APIによりデータプラットフォームに追加した共有データを検索し、対象のデータ本文を取得する]
   */
  async getSharedData(data_type_id, root, filter = null) {
    const path = "/api/commondata/search";
    const request_header = this.makeRequestHeader(this.host_common, path, "POST");
    let search_parameters = {
      dataTypeId: data_type_id,
      root: root
    }
    if (filter) {
      search_parameters['filter'] = filter
    }

    return await this.requestFutaba(request_header, search_parameters);
  }

  /**
   * async deleteSharedData - [共有データ削除]
   *
   * @param  {number} data_type_id  [共有データタイプID]
   * @param  {string | number} root [デジタルツインルート名 または デジタルツインルートID]
   * @param  {object} filter        [共有データクエリオブジェクト]
   * @return {promise}              [データ追加APIによりデータプラットフォームに追加した共有データを検索し、対象のデータを削除する]
   */
  async deleteSharedData(data_type_id, root, filter = null) {
    const path = "/api/commondata/delete";
    const request_header = this.makeRequestHeader(this.host_common, path, "POST");
    let delete_parameters = {
      dataTypeId: data_type_id,
      root: root
    }
    if (filter) {
      delete_parameters['filter'] = filter
    }

    return await this.requestFutaba(request_header, delete_parameters);
  }

}

module.exports = Futaba;
