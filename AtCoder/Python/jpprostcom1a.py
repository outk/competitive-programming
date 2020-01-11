m,d = map(int, input().split())

ans = 0

for i in range(m):
    for j in range(d):
        d10 = int((j+1)/10)
        d1 = j+1-d10*10
        if d1 >= 2 and d10 >= 2 and d1*d10 == i+1:
            ans += 1
print(ans)