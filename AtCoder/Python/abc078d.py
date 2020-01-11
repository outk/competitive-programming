import sys
input = sys.stdin.readline

n,x,y = map(int, input().split())
a = list(map(int, input().split()))

if len(a) > 1:
    print(max(abs(a[-1]-y), abs(a[-1]-a[-2])))
else:
    print(abs(a[-1]-y))
