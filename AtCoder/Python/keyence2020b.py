n = int(input())
ls = []
for i in range(n):
    x, l = map(int, input().split())
    ls.append([x-l, x+l])
ls.sort()

now = ls[0]

ans = n

for i in range(1,n):
    if now[1] > ls[i][0]:
        ans -= 1
        if now[1] >= ls[i][1]:
            now = ls[i]
    else:
        now = ls[i]

print(ans)