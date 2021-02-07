import requests
import json
arr1 = []
arr2 = []

url1 = "https://static.cookpad.com/hr/screen/category-1.json"
response1 = requests.request("GET", url1)
json1 = json.loads(response1.text)

url2 = "https://static.cookpad.com/hr/screen/category-2.json"
response2 = requests.request("GET", url2)
json2 = json.loads(response2.text)

arr1.insert(0, json1)
arr2.insert(0,json2)

def Join(arr1,arr2):
    dic = {}

    for i in range(len(arr1)):
        dic[arr1[i]['name']] = arr1[i]
    
    for i in range(len(arr2)):
        if arr2[i]['name'] in dic:
            if 'subcategories' in arr2[i]:
                dic[arr2[i]['name']] = Join(dic[arr2[i]['name']]['subcategories'],arr2[i]['subcategories'])
        else:
            dic[arr2[i]['name']] = arr2[i]

    print(dic)
    result = []
    key = dic.keys()
    print(key)
    for i in key:
        print(i)
        print(dic[i])
        hoge = {}
        hoge['name'] = dic[i]['name']
        if 'subcategories' in dic[i]:
            hoge['subcategories'] = dic[i]['subcategories']
        result.insert(0, hoge)

    return result

print(Join(arr1,arr2))