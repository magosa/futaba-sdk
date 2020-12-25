import json
import requests


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
                'X-NEDO-CLIENT-SECRET': obj['client_secret'],
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
                'X-NEDO-ACCESS-TOKEN': obj['access_token'],
            }
        }
        return self.requestFutaba(options, task)
