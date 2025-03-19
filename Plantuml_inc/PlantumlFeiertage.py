import requests
import json

state = "BY"
year = "2025"

holidayUrl = f"https://feiertage-api.de/api/?jahr={year}&nur_land={state}"
headers = {"Content-type": "application/json"}

session = requests.Session()
response = session.get(holidayUrl, headers=headers)

#print(response.text)
jsonObj = json.loads(response.text)

for d in jsonObj:
    print(f"{jsonObj[d]['datum']} is closed and is colored in OrangeRed /'{d}'/")

#for d in jsonObj:
#    print(f"{jsonObj[d]['datum']} is closed /'{d}'/")
#for d in jsonObj:
#    print(f"{jsonObj[d]['datum']} is colored in OrangeRed")