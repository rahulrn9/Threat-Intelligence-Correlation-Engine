from elasticsearch import Elasticsearch
import json

es = Elasticsearch("http://localhost:9200")

with open("feeds/misp_feed.json") as f:
    data = json.load(f)

for indicator in data["indicators"]:
    es.index(index="threat-intel", document=indicator)

print("[+] Indicators indexed to Elasticsearch.")