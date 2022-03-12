import requests      # pip install requests 진행
#res = requests.get("https://www.vivino.com/")
res = requests.get("https://google.com")
res.raise_for_status()   # 여기서 문제가 생기면 바로 종료  

#print("응답코드 :", res.status_code)

#if res.status_code == requests.codes.ok:
#    print("정상입니다")
#else:
#    print("문제가 생겼습니다. [에러코드 ",res.status_code, "]")\



print(res.text)

with open("mygoogle.html", "w", encoding="utf8") as f:
    f.write(res.text)