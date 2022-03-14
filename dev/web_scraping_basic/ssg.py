from decimal import Decimal  
import requests
from bs4 import BeautifulSoup

for i in range(1,6):
    url = "https://www.ssg.com/search.ssg?target=all&query=%eb%a0%88%eb%93%9c%ec%99%80%ec%9d%b8&src_area=srlt&count=100&page={}".format(i)
    headers = {"User-Agent":"Mozilla/5.0 (Macintosh; Intel Mac OS X 10_15_7) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/99.0.4844.51 Safari/537.36"}
    res = requests.get(url, headers=headers)
    res.raise_for_status()
    soup = BeautifulSoup(res.text, "lxml") 
    wines = soup.find_all("li", attrs={"class":"cunit_t232"})
    print(i)
    for wine in wines:
        name = wine.find("em", attrs={"class":"tx_en"}).get_text() 
        print(name)