r1,c1 = map(int,input().split())
r2,c2 = map(int, input().split())

r,c = abs(r2-r1), abs(c2-c1)

if r+c == 0:
    print(0)
    exit(0)
if (r+c) <= 3 or r == c:
    print(1)
    exit(0)

if (r+c)%3 == 0:
    ans = (r+c)//3
else:
    ans = (r+c)//3 + 1

diff = abs(r-c)

if diff%2 == 0 or diff < 5:
    if ans > 2:
        ans = 2
else:
    if ans > 3:
        ans = 3

print(ans)