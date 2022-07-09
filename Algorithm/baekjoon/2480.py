import sys
sys.stdin = open('input.txt')
from collections import Counter


a,b,c = (map(int,input().split()))
result = 0
if a == b == c :
    print(10000+(a)*1,000)
elif a != b and b != c and a! = c:
    
