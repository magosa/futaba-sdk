import json
import requests
import urllib.parse


class Futaba:
    def __init__(self):
        self.host_auth = 'futaba-dev-app-auth.azurewebsites.net'
        self.host_hot = 'futaba-dev-app-hot.azurewebsites.net'
        self.host_cold = 'futaba-dev-app-cold.azurewebsites.net'
        self.host_ext = 'futaba-dev-app-extapi.azurewebsites.net'
        self.client_id = ''
        self.client_secret = ''
        self.access_token = ''
        self.refresh_token = ''

    def setHostURL(self, url):
        self.host_auth = url.host_auth
        self.host_hot = url.host_hot
        self.host_cold = url.host_cold
        self.host_ext = url.host_ext

    def requestFutaba(self, request_header, request_body=None):
        req = requests.request(method=request_header['method'],
                               url=request_header['url'],
                               headers=request_header['headers'],
                               json=request_body,
                               timeout=(180.0))
        if(req.status_code != 200):
            raise Exception("request error {}".format(req.status_code))
        return req.json()

    def getAccessToken(self, obj):
        options = {
            'url': "https://{}/api/token".format(self.host_auth),
            'method': "",
            'headers': {
                'Content-Type': "application/json",
                'X-NEDO-CLIENT-ID': obj['client_id'],
                'X-NEDO-CLIENT-SECRET': obj['client_secret']
            }
        }
        if ('refresh_token' in obj):
            options['method'] = "PATCH"
            options['headers']['X-NEDO-CLIENT-REFRESHTOKEN'] = obj['refresh_token']
            options['headers']['X-NEDO-GRANT-TYPE'] = "refresh_token"
        else:
            options['method'] = "POST"
            options['headers']['X-NEDO-GRANT-TYPE'] = "client_credentials"
        response = self.requestFutaba(request_header=options)
        self.client_id = obj['client_id']
        self.client_secret = obj['client_secret']
        self.access_token = response['access_token']
        self.refresh_token = response['refresh_token']
        return response

    def setAccessToken(self, obj):
        self.client_id = obj['client_id']
        self.client_secret = obj['client_secret']
        self.access_token = obj['access_token']
        self.refresh_token = obj['refresh_token']

    def createTask(self, task):
        options = {
            'url': "https://{}/api/model/task".format(self.host_cold),
            'method': "POST",
            'headers': {
                'Content-Type': "application/json",
                'X-NEDO-CLIENT-ID': obj['client_id'],
                'X-NEDO-ACCESS-TOKEN': obj['access_token']
            }
        }
        return self.requestFutaba(options, task)

    def getTaskProgress(self, task_id=None):
        options = {
            'url': "https://{}/api/model/task".format(self.host_cold),
            'method': "GET",
            'headers': {
                'Content-Type': "application/json",
                'X-NEDO-CLIENT-ID': obj['client_id'],
                'X-NEDO-ACCESS-TOKEN': obj['access_token']
            }
        }
        if task_id is None:
            options['url'] = "https://{}/api/model/task?task_id={}".format(
                self.host_cold, urllib.parse.quote(task_id))
        return self.requestFutaba(options)

    def changeTaskValidity(self, task_id, status=false):
        options = {
            'url': "https://{}/api/model/task".format(self.host_cold),
            'method': "PATCH",
            'headers': {
                'Content-Type': "application/json",
                'X-NEDO-CLIENT-ID': obj['client_id'],
                'X-NEDO-ACCESS-TOKEN': obj['access_token']
            }
        }
        task = {
            'task_id': task_id,
            'enabled': status
        }
        return self.requestFutaba(options, task)

    def deleteTask(self, task_id):
        options = {
            'url': "https://{}/api/model/task?task_id={}".format(
                self.host_cold, urllib.parse.quote(task_id)),
            'method': "DELETE",
            'headers': {
                'Content-Type': "application/json",
                'X-NEDO-CLIENT-ID': obj['client_id'],
                'X-NEDO-ACCESS-TOKEN': obj['access_token']
            }
        }
        return self.requestFutaba(options)

    def setWebhook(self, url):
        options = {
            'url': "https://{}/api/model/webhook".format(self.host_cold),
            'method': "POST",
            'headers': {
                'Content-Type': "application/json",
                'X-NEDO-CLIENT-ID': obj['client_id'],
                'X-NEDO-ACCESS-TOKEN': obj['access_token']
            }
        }
        webhook = {
            'webhook_url': url,
        }
        return self.requestFutaba(options, webhook)

    def deleteWebhook(self, webhook_id):
        options = {
            'url': "https://{}/api/model/webhook?webhook_id={}".format(
                self.host_cold, urllib.parse.quote(webhook_id)),
            'method': "DELETE",
            'headers': {
                'Content-Type': "application/json",
                'X-NEDO-CLIENT-ID': obj['client_id'],
                'X-NEDO-ACCESS-TOKEN': obj['access_token']
            }
        }
        return self.requestFutaba(options)

    def setSharedData(self, add_data):
        options = {
            'url': "https://{}/api/extdata/add".format(self.host_ext),
            'method': "POST",
            'headers': {
                'Content-Type': "application/json",
                'X-NEDO-CLIENT-ID': obj['client_id'],
                'X-NEDO-ACCESS-TOKEN': obj['access_token']
            }
        }
        return self.requestFutaba(options)

    def getSharedData(self, search_conditions):
        options = {
            'url': "https://{}/api/extdata/search".format(self.host_ext),
            'method': "GET",
            'headers': {
                'Content-Type': "application/json",
                'X-NEDO-CLIENT-ID': obj['client_id'],
                'X-NEDO-ACCESS-TOKEN': obj['access_token']
            }
        }
        return self.requestFutaba(options, search_conditions)

    def deleteSharedData(self, delete_conditions):
        options = {
            'url': "https://{}/api/extdata/search".format(self.host_ext),
            'method': "GET",
            'headers': {
                'Content-Type': "application/json",
                'X-NEDO-CLIENT-ID': obj['client_id'],
                'X-NEDO-ACCESS-TOKEN': obj['access_token']
            }
        }
        return self.requestFutaba(options, delete_conditions)
