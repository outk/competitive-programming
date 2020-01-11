n,m = map(int, input().split())

ans = 0
min = 0
max = n

for i in range(m):
    l,r = map(int, input().split())

    if l > min:
        min = l
    
    if r < max:
        max = r

ans = max - min + 1

if ans < 0:
    ans = 0

print(ans)