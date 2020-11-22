a, b, c = map(int, input().split())

ans = 0
ak = 1
bk = 1
ck = 1

if a == 0:
    ak = 0
if b == 0:
    bk = 0
if c == 0:
    ck = 0

maxi = 298-a-b-c

for i in range(1, maxi+1):
    if a+i >= 100:
        rest = a+i-100
        if b > c:
            for m in range(1, min(rest, 100-b)):
                ans += (ak * i * a / (a+b+c)) * ( (b+m) / (a+b+c+rest))
        
    if b+i >= 100:
        rest = b+i-100
        ans += (bk * i * b / (a+b+c)) * (min(99-a, 99-c)/(rest+1))
        
    if c+i >= 100:
        rest = c+i-100
        ans += (ck * i * c / (a+b+c)) * (min(99-b, 99-a)/(rest+1))

    print(ans)