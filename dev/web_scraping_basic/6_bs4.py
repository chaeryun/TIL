# pip3 install beautifulsoup4
# pip3 install lxml
import requests
from bs4 import BeautifulSoup

url = "https://comic.naver.com/webtoon/weekday"
res = requests.get(url)
res.raise_for_status()  # 혹시나 문제있으면 바로 종료하게끔

soup = BeautifulSoup(res.text, "lxml")   # 우리가 가져온 html 문서를 lxml parser를 통해 가져옴

#print(soup.title)    # <title>네이버 만화 &gt; 요일별  웹툰 &gt; 전체웹툰</title>
#print(soup.title.get_text())  # text만 빼오기.  네이버 만화 > 요일별  웹툰 > 전체웹툰

#print(soup.a)  # soup은 모든 정보. 중 첫번째 발견 a element 정보 출력
#print(soup.a.attrs)   # a elmentdml 속성 정보를 출력
#{'href': '#menu', 'onclick': "document.getElementById('menu').tabIndex=-1;document.getElementById('menu').focus();return false;"}
#print(soup.a["href"])  # a element 의 href 속성 값을 출력  
# menu

# 웹툰 올리기 찾기
# <a href="/mypage/myActivity" class="Nbtn_upload" onclick="nclk_v2(event,'olk.upload');">웹툰 올리기</a>
# class 가 Nbtn인 a 태그 찾을때
#print(soup.find("a", attrs={"class":"Nbtn_upload"}))
# 출력 <a class="Nbtn_upload" href="/mypage/myActivity" onclick="nclk_v2(event,'olk.upload');">웹툰 올리기</a>
#print(soup.find(attrs={"class":"Nbtn_upload"}))
# 출력 <a class="Nbtn_upload" href="/mypage/myActivity" onclick="nclk_v2(event,'olk.upload');">웹툰 올리기</a>

# print(soup.find("li", attrs={"class":"rank01"}))

rank1 = soup.find("li", attrs={"class":"rank01"})
# print(rank1.a)   #<a href="/webtoon/detail?titleId=597447&amp;no=432" onclick="nclk_v2(event,'rnk*p.cont','597447','1')" title="프리드로우-제429화 엇갈린 이유 (2)">프리드로우-제429화 엇갈린 이유 (2)</a>
# print(rank1.a.get_text())   #프리드로우-제429화 엇갈린 이유 (2)
# print(rank1.next_sibling())
#rank2 = rank1.next_sibling.next_sibling
#rank3 = rank2.next_sibling.next_sibling
#print(rank3.a.get_text())
#rank2 = rank3.previous_sibling.previous_sibling
#print(rank2.a.get_text())
# rank2 = rank1.find_next_sibling("li")
# print(rank2.a.get_text())
# rank3 = rank2.find_next_sibling("li")
# print(rank3.a.get_text())
# rank2 = rank3.find_previous_sibling("li")
# print(rank2.a.get_text())

# print(rank1.find_next_siblings("li"))


# <a 
# onclick="nclk_v2(event,'rnk*p.cont','727188','2')" 
# href="/webtoon/detail?titleId=727188&amp;no=151" 
# title="취사병 전설이 되다-151화 : 한계돌파">취사병 전설이 되다-151화 : 한계돌파</a>
webtoon = soup.find("a", text="취사병 전설이 되다-151화 : 한계돌파")
print(webtoon)