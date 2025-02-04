from pprint import pprint

import requests

url = 'https://cloud.luchentech.com/api/maas/chat/completions'

headers = {
    'Content-Type': 'application/json',
    'Authorization': 'Bearer 58a50161-fb44-4a30-817f-3495013fefc6'
}
payload = {
    "model": "deepseek_r1",
    "messages": [
      {
        "role": "user",
        "content": "奥运会的传奇名将有哪些？"
      }
    ],
    "stream": False,
    # "max_tokens": 30
}

response = requests.request("POST", url, json=payload, headers=headers)

pprint(response.json())