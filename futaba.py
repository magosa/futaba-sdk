import json
import requests
import urllib.parse


class Futaba:
    def __init__(self):
        self.host_auth = ''
        self.host_hot = ''
        self.host_cold = ''
        self.host_common = ''
        self.host_stream = ''
        self.client_id = ''
        self.client_secret = ''
        self.access_token = ''
        self.refresh_token = ''

    def setAPIURL(self, target):
        self.host_auth = '{}-dev-app-auth.azurewebsites.net'.format(target)
        self.host_hot = '{}-dev-app-hot.azurewebsites.net'.format(target)
        self.host_cold = '{}-dev-app-cold.azurewebsites.net'.format(target)
        self.host_common = '{}-dev-app-common.azurewebsites.net'.format(target)
        self.host_stream = '{}-dev-app-stream.azurewebsites.net'.format(target)

    def makeRequestHeader(self, request_url, request_method):
        headers = {
            'url': request_url,
            'method': request_method,
            'headers': {
                'Content-Type': "application/json",
                'X-DTDPF-CLIENT-ID': self.client_id,
                'X-DTDPF-ACCESS-TOKEN': self.access_token
            }
        }
        return headers

    def requestFutaba(self, request_header, request_body=None):
        print(request_body)
        req = requests.request(method=request_header['method'],
                               url=request_header['url'],
                               headers=request_header['headers'],
                               json=request_body,
                               timeout=(180.0))
        if(req.status_code != 200):
            raise Exception("request error {0}:{1}".format(req.status_code, req.json()))
        return req.json()

    """
    クセストークンの発行/更新

    Args:
        obj (dict): アクセストークン発行に必要な設定情報

    Returns:
        type: description
    """
    def getAccessToken(self, obj):
            self.setAPIURL(obj['target_api'])
            request_header = {
                'url': "https://{}/api/token".format(self.host_auth),
                'method': "",
                'headers': {
                    'Content-Type': "application/json",
                    'X-DTDPF-CLIENT-ID': obj['client_id'],
                    'X-DTDPF-CLIENT-SECRET': obj['client_secret']
                }
            }
            if ('refresh_token' in obj):
                request_header['method'] = "PATCH"
                request_header['headers']['X-DTDPF-CLIENT-REFRESHTOKEN'] = obj['refresh_token']
                request_header['headers']['X-DTDPF-GRANT-TYPE'] = "refresh_token"
            else:
                request_header['method'] = "POST"
                request_header['headers']['X-DTDPF-GRANT-TYPE'] = "client_credentials"
            response = self.requestFutaba(request_header)
            self.client_id = obj['client_id']
            self.client_secret = obj['client_secret']
            self.access_token = response['accessToken']
            self.refresh_token = response['refreshToken']
            return response

    """
    既存のアクセストークンを直接設定

    Args:
        obj (dict): アクセストークン発行に必要な設定情報

    Returns:
        type: description
    """
    def setAccessToken(self, obj):
        self.setAPIURL(obj['target_api'])
        self.client_id = obj['client_id']
        self.client_secret = obj['client_secret']
        self.access_token = obj['access_token']
        self.refresh_token = obj['refresh_token']


    ''' デジタルツインAPI '''

    """
    テレメトリ取得

    Args:
        search_parameters (dict): ツインの検索条件（path / query / filterの3方式）

    Returns:
        dict: ツインの検索条件をを指定して、ポイント毎に最新のテレメトリ値を取得する
    """
    def getTelemetryData(self, search_parameters):
        path = "https://{}/api/digitaltwins/pointvalues".format(self.host_hot)
        request_header = self.makeRequestHeader(path,"POST")
        return self.requestFutaba(request_header, search_parameters)

    """
    ツイン情報取得

    Args:
        search_parameters (dict): ツインの検索条件（path / query / filterの3方式）

    Returns:
        dict: ツインの検索条件をを指定して、ポイント毎に最新のテレメトリ情報（メタデータ）を取得する
    """
    def getDigitalTwinData(self, search_parameters):
        path = "https://{}/api/digitaltwins".format(self.host_hot)
        request_header = self.makeRequestHeader(path,"POST")
        return self.requestFutaba(request_header, search_parameters)

    """
    ツイン更新

    Args:
        update_parameters (dict): 更新対象のツイン検索条件（path / query / filterの3方式）
        property (str): 更新対象のプロパティ
        value (str | dict): 更新値

    Returns:
        type: ツインのパスを指定して検索を行い、抽出された全てのツインに対して、登録内容を更新する
    """
    def updateDigitalTwinData(self, update_parameters, property, value):
        path = "https://{}/api/digitaltwins/batchupdate".format(self.host_hot)
        request_header = self.makeRequestHeader(path,"POST")
        update_parameters['property'] = property
        update_parameters['value'] = value
        return self.requestFutaba(request_header, update_parameters)

    """
    ポイント遠隔制御

    Args:
        root (str): デジタルツインルート指定 (建物指定に相当)
        dtid (str): 遠隔制御対象ツインID
        value (float): 遠隔制御で送信する値
        priority (int): 遠隔制御で送信する優先度

    Returns:
        dict: 指定したポイントに対して、遠隔制御を行う
    """
    def controlDigitalTwinData(self, root, dtid, value, priority=None):
        path = "https://{}/api/digitaltwins/remotecontrol".format(self.host_hot)
        request_header = self.makeRequestHeader(path,"POST")
        values = {
          'value': value
        }
        if priority is not None:
            values['priority'] = priority
        control_parameters = {
          'root': root,
          'dtId': dtid,
          'values': values
        }
        return self.requestFutaba(request_header, control_parameters)

    """
    テレメトリストリーム ポイント登録

    Args:
        surveillance_parameters (dict): 対象となるストリームポイントのツイン検索条件（path / query / filterの3方式）

    Returns:
        dict: ストリーミングデータとして受信するポイントを、検索して登録する
    """
    def setTelemetryStream(self, surveillance_parameters):
        path = "https://{}/api/digitaltwins/telemetrystream/add".format(self.host_hot)
        request_header = self.makeRequestHeader(path,"POST")
        return self.requestFutaba(request_header, surveillance_parameters)

    """
    テレメトリストリーム ポイント解除

    Args:
        search_parameters (dict): 対象となるストリームポイントのツイン検索条件（path / query / filterの3方式）

    Returns:
        dict: ストリーミングデータとして受信するポイントを、検索して解除する
    """
    def deleteTelemetryStream(self, search_parameters):
        path = "https://{}/api/digitaltwins/telemetrystream/delete".format(self.host_hot)
        request_header = self.makeRequestHeader(path,"POST")
        return self.requestFutaba(request_header, search_parameters)

    """
    テレメトリストリーム 登録状況取得

    Returns:
        type: ストリーミングデータとして受信しているポイントの登録状況を一覧取得する
    """
    def checkTelemetryStream(self):
        path = "https://{}/api/digitaltwins/telemetrystream".format(self.host_hot)
        request_header = self.makeRequestHeader(path,"GET")
        return self.requestFutaba(request_header)

    """
    ストリーミング接続 RPC

    Args:
        proto_path (str): Protocol Bufferファイルパス

    Returns:
        type: テレメトリストリーム ポイント登録API で登録済みのポイントの テレメトリ最新値を、gRPC を使用してリアルタイムに受信する

    """
    def getTelemetryStream(self, proto_path):
        path = self.host_stream + ":443"
        return


    ''' WoT API '''

    """
    WoT TD 取得

    Args:
        bot_path (str): TD取得対象のツインのパス

    Returns:
        dict: ツインのパスを指定して Element ツインを検索し、TDを取得する
    """
    def getThings(self, bot_path):
        path = "https://{0}/api/things?path={1}".format(
            self.host_hot, urllib.parse.quote(bot_path, safe=''))
        request_header = self.makeRequestHeader(path,"GET")
        return self.requestFutaba(request_header)

    """
    WoT TD 取得

    Args:
        search_parameters (dict): ADTクエリオブジェクト

    Returns:
        dict: ADTクエリを指定して Element ツインを検索し、TDを取得する
    """
    def getThingsByParameter(self, search_parameters):
        path = "https://{}/api/things".format(self.host_hot)
        request_header = self.makeRequestHeader(path,"POST")
        return self.requestFutaba(request_header, search_parameters)

    """
    WoT Property取得 - TD内全取得

    Args:
        root_id (int): Property 取得対象が含まれるルートID
        tdid (str): Property 取得対象の TD-ID
        use_id_key (bool): レスポンスでキーに使用する項目の選択(false：プロパティ名(デフォルト) / true：ツインID)

    Returns:
        dict: 指定したTD-IDに紐づく、全ポイントの最新値を取得する
    """
    def getThingsProperties(self, root_id, tdid, use_id_key=False):
        path = "https://{0}/api/things/{1}/{2}/properties?useIdKey={3}".format(
                self.host_hot, urllib.parse.quote(str(root_id)), urllib.parse.quote(str(tdid), safe=''), urllib.parse.quote(str(use_id_key)))
        request_header = self.makeRequestHeader(path,"GET")
        return self.requestFutaba(request_header)

    """
    WoT Property取得 - 1 Property

    Args:
        root_id (int): Property 取得対象が含まれるルートID
        tdid (string): Property 取得対象の TD-ID
        property (string): Property 取得対象の ポイントID・プロパティ名
        use_id_key (bool): レスポンスでキーに使用する項目の選択(false：プロパティ名(デフォルト) / true：ツインID)

    Returns:
        dict: 指定したTD-IDに紐づく指定ポイントの最新値を取得する
    """
    def getThingsProperty(self, root_id, tdid, property, use_id_key=False):
        path = "https://{0}/api/things/{1}/{2}/properties/{3}?useIdKey={4}".format(
                self.host_hot, urllib.parse.quote(str(root_id)), urllib.parse.quote(str(tdid), safe=''), urllib.parse.quote(str(property), safe=''), urllib.parse.quote(str(use_id_key)))
        request_header = self.makeRequestHeader(path,"GET")
        return self.requestFutaba(request_header)

    """
    WoT Property 書き込み

    Args:
        root_id (int): Property 書き込み対象が含まれるるルートID
        tdid (str): Property 書き込み対象の TD-ID
        property (str): Property 書き込み対象の ツインID・プロパティ名
        value (float): Property 書き込み制御内容
        priority (int): Property 書き込み制御有線順位

    Returns:
        dict: 指定したポイントに対して、遠隔制御を行う
    """
    def setThingsProperty(self, root_id, tdid, property, value, priority=None):
        path = "https://{0}/api/things/{1}/{2}/properties/{3}".format(
                self.host_hot, urllib.parse.quote(str(root_id)), urllib.parse.quote(str(tdid), safe=''), urllib.parse.quote(str(property), safe=''))
        request_header = self.makeRequestHeader(path,"PUT")
        values = {
          'value': value
        }
        if priority is not None:
          values['priority'] = priority

        options = {
          'values': values
        }
        return self.requestFutaba(request_header, options)


    ''' モデル学習データ取得API '''

    """
    モデル学習データ取得 タスク作成

    Args:
        task (dict): description

    Returns:
        type: BOTパス・ADTクエリ・フィルター指定にてポイントツインを検索し、 モデル学習データを取得するタスクを作成する
    """
    def createTask(self, task):
        path = "https://{}/api/model/task".format(self.host_cold)
        request_header = self.makeRequestHeader(path,"POST")
        return self.requestFutaba(request_header, task)

    """
    モデル学習データ取得 タスク詳細確認

    Args:
        task_id (int): タスクを指定して実行履歴を取得する場合のタスクID指定、指定なしの場合は一覧取得となる
        status (str): タスクを一覧取得する場合の、タスク状態によるフィルタリング (enable/disable/deleted)
        create_datetime (str): タスクを一覧取得する場合、指定日時以前に登録されたタスクを取得する
        include_request_info (bool): タスクを一覧取得する場合に、登録時リクエスト情報の返却有無を指定する

    Returns:
        type: description
    """
    def getTaskProgress(self, task_id=None, status=None, create_datetime=None, include_request_info=False):
        option = ""
        if task_id is not None:
            if type(task_id) is int:
                option = option + "&task_id=" + str(task_id)
            elif type(task_id) is str or type(task_id) is float:
                    try:
                        option = option + "&task_id=" + str(int(task_id))
                    except ValueError:
                        print("task_id must be a integer!")
            else:
                print("task_id must be a integer!")

        if status is not None:
            option = option + "&status=" + urllib.parse.quote(status)
        if task_id is not None:
            option = option + "&createDatetime=" + urllib.parse.quote(create_datetime)
        option = option + "&includeRequestInfo=" + str(include_request_info)
        path = "https://{0}/api/model/task?{1}".format("cold", option[1:])
        request_header = self.makeRequestHeader(path,"GET")
        return self.requestFutaba(request_header)

    """
    モデル学習データ取得 タスク有効状態変更

    Args:
        task_id (int): 実行状態を変更する場合のタスクIDを指定
        status (bool): 変更後のタスク状態 (true: enabled (有効)、false: disabled (一時停止))

    Returns:
        type: description
    """
    def changeTaskValidity(self, task_id, status=False):
        path = "https://{}/api/model/task".format(self.host_cold)
        request_header = self.makeRequestHeader(path,"PATCH")
        task = {
            'task_id': task_id,
            'enabled': status
        }
        return self.requestFutaba(request_header, task)

    """
    モデル学習データ取得 タスク削除

    Args:
        task_id (int): 削除を行うタスクID

    Returns:
        type: description
    """
    def deleteTask(self, task_id):
        path = "https://{}/api/model/task?task_id={}".format(self.host_cold, str(int(task_id)))
        request_header = self.makeRequestHeader(path,"DELETE")
        return self.requestFutaba(request_header)

    """
    モデル学習データ タスク完了通知 Webhook 登録

    Args:
        url (str): Webhook 送信先 URL

    Returns:
        type: description
    """
    def setWebhook(self, url):
        path = "https://{}/api/model/webhook".format(self.host_cold)
        request_header = self.makeRequestHeader(path,"POST")
        webhook = {
            'webhook_url': url,
        }
        return self.requestFutaba(request_header, webhook)

    """
    モデル学習データ タスク完了通知 Webhook 登録解除

    Returns:
        type: description
    """
    def deleteWebhook(self):
        path = "https://{}/api/model/webhook".format(self.host_cold)
        request_header = self.makeRequestHeader(path,"DELETE")
        return self.requestFutaba(request_header)


    ''' 共有データAPI '''

    """
    共有データ追加

    Args:
        data_type_id (int): 共有データタイプID
        root (string | number): デジタルツインルート名 または デジタルツインルートID
        values (string | string[]): 登録データJson文字列の配列 または 登録データJson文字列

    Returns:
        type: データプラットフォームに、共有データを新規追加する
    """
    def setSharedData(self, data_type_id, root, values):
        url = "https://{}/api/commondata/add".format(self.host_common)
        request_header = self.makeRequestHeader(path,"POST")
        add_data = {
            'dataTypeId': data_type_id,
            'root': root,
            'values': values
        }
        return self.requestFutaba(request_header, add_data)

    """
    共有データ検索

    Args:
        data_type_id (int): 共有データタイプID
        root (string | number): デジタルツインルート名 または デジタルツインルートID
        filter (string | string[]): 共有データクエリオブジェクト

    Returns:
        type: データ追加APIによりデータプラットフォームに追加した共有データを検索し、対象のデータ本文を取得する
    """
    def getSharedData(self, data_type_id, root, filter=None):
        url = "https://{}/api/commondata/search".format(self.host_common)
        request_header = self.makeRequestHeader(path,"POST")
        search_parameters = {
            'dataTypeId': data_type_id,
            'root': root
        }
        if filter is not None:
            search_parameters['filter'] = filter
        return self.requestFutaba(request_header, search_parameters)

    """
    共有データ削除

    Args:
        data_type_id (int): 共有データタイプID
        root (str | int): デジタルツインルート名 または デジタルツインルートID
        filter (dict): 共有データクエリオブジェクト

    Returns:
        dict: データ追加APIによりデータプラットフォームに追加した共有データを検索し、対象のデータを削除する
    """
    def deleteSharedData(self, data_type_id, root, filter=None):
        url = "https://{}/api/commondata/delete".format(self.host_common)
        request_header = self.makeRequestHeader(path,"POST")
        delete_parameters = {
          'dataTypeId': data_type_id,
          'root': root
        }
        if filter is not None:
          delete_parameters['filter'] = filter
        return self.requestFutaba(request_header, delete_parameters)
