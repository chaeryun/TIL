import requests      # pip install requests 진행
url = "http://nadocoding.tistory.com"
#url = "http://vivino.com"
#url="https://www.vivino.com/US-CA/en/domaine-armand-rousseau-chambertin-grand-cru/w/88177?year=1993"
headers = {"User-Agent":"Mozilla/5.0 (Macintosh; Intel Mac OS X 10_15_7) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/99.0.4844.51 Safari/537.36"}
# user agent

res = requests.get(url, headers=headers)
res.raise_for_status()   # 여기서 문제가 생기면 바로 종료  


#with open("vivino.html", "w", encoding="utf8") as f:
#    f.write(res.text)

with open("nadocoding.html", "w", encoding="utf8") as f:
    f.write(res.text)