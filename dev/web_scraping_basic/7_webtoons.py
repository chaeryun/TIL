# pip3 install beautifulsoup4
# pip3 install lxml
import requests
from bs4 import BeautifulSoup

url = "https://comic.naver.com/webtoon/weekday"
res = requests.get(url)
res.raise_for_status()  # 혹시나 문제있으면 바로 종료하게끔
# Beautiful 객체 만듦
soup = BeautifulSoup(res.text, "lxml")   # 우리가 가져온 html 문서를 lxml parser를 통해 가져옴

# 네이버 웹툰 전체 목록 가져오기
cartoons = soup.find_all("a", attrs={"class":"title"})
# class 속성이 title인 모든 "a"라는 element 를 반환
for cartoon in cartoons:
    print(cartoon.get_text())
    