import re   #  정규식 라이브러리 가져다 쓰기

# ca?e
# care, cafe, case, cave

p = re.compile("ca.e") # . : 하나의 문자를 의미
# . (ca.e): 하나의 문자를 의미 > care, cafe, case (o) | caffe(x) 
# ^ (^de): 문자열의 시작 > desk, destination (o)   |  fade(x)
# $ (se$) : 문자열의 끝 > dese, base (o)  | face(x)



def print_match(m):
    if m:
        print("m.group():", m.group())   # group은 일치하는 문자열 반환
        print("m.string:", m.string) # 입력받은 문자열
        print("m.start():", m.start()) # 일치하는 문자열의 시작 index
        print("m.end():", m.end()) # 일치하는 문자열의 끝 index
        print("m.span():", m.span()) # 일치하는 문자열의 시작 / 끝 index

    else:
        print("매칭되지 않음")

#m = p.match("carer")   # match : 주어진 문자열의 처음부터 일치하는지 확인
#print_match(m)
#print(m.group())  # 매채되지 않으면 에러가 발생

"""
m = p.search("careless") # search : 주어진 문자열 중에 일치하는게 있는지 확인
# m.group(): care
# m.string: careless
# m.start(): 0
# m.end(): 4
# m.span(): (0, 4)
"""
#m = p.search("good care")
#print_match(m)

lst = p.findall("good care cafe") # findall : 일치하는 모든 것을 리스트 형태로 반환
print(lst)

"""
정규식 쓸 때
1.  p = re.compile("원하는 형태")
2.  m = p.match("비교할 문자열") : 주어진 문자열의 처음부터 일치하는 지 확인
3.  m = p.search("비교할 문자열") : 주어진 문자열 중에 일치하는 게 있는 지 확인
4.  lst = p.findall("비교할 문자열") : 일치하느 모든 것들을 " 리스트 형태 " 로 반환
"""

# 원하는 형태 : 정규식인 경우
# . (ca.e): 하나의 문자를 의미 > care, cafe, case (o) | caffe(x) 
# ^ (^de): 문자열의 시작 > desk, destination (o)   |  fade(x)
# $ (se$) : 문자열의 끝 > dese, base (o)  | face(x)