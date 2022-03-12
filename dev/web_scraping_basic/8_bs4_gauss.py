from decimal import Decimal   # 소수점 계산
import requests
from bs4 import BeautifulSoup

url = "https://comic.naver.com/webtoon/list?titleId=675554"
res = requests.get(url)
res.raise_for_status() 

soup = BeautifulSoup(res.text, "lxml")
cartoons = soup.find_all("td", attrs={"class":"title"})
# title = cartoons[1].get_text()
# link = cartoons[0].a["href"]
# print(title)
# print("https://comic.naver.com" + link)

# 만화 제목과 링크 가져오기
# for cartoon in cartoons:
#     title = cartoon.get_text()
#     link = "https://comic.naver.com" + cartoon.a["href"]
#     print(title, link)

# 평점 구하기
total_rates = 0
ratings = soup.find_all("div", attrs={"class":"rating_type"})
for rating in ratings:
    rate = rating.find("strong").get_text()
    print(rate)
    total_rates += Decimal(rate)
    print(total_rates)
print("total : ", total_rates)
print("average : ", total_rates / len(ratings))
