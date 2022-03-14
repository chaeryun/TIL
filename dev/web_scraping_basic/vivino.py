import requests
import re   # 정규식 쓰기
from bs4 import BeautifulSoup

url = "https://www.vivino.com/US-CA/en/domaine-armand-rousseau-chambertin-grand-cru/w/88177?year=1993"
headers = {"User-Agent":"Mozilla/5.0 (Macintosh; Intel Mac OS X 10_15_7) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/99.0.4844.51 Safari/537.36"}
res = requests.get(url, headers=headers)
res.raise_for_status()
soup = BeautifulSoup(res.text, "lxml") 
print(soup)
#items = soup.find_all("tbody") #attribute
#print(items)
