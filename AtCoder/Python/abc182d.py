n = int(input())

als = list(map(int, input().split()))

alssumls = [0 for _ in range(n)]

alssumls[0] = als[0]

for i in range(1, n):
    alssumls[i] = alssumls[i-1] + als[i]

alssumsumls = [0 for _ in range(n)]
alssumsumls[0] = alssumls[0]
for i in range(1, n):
    alssumsumls[i] = alssumsumls[i-1] + alssumls[i]

alsmax = [0 for _ in range(n)]
alsmax[0] = max(0, als[0])
for i in range(1, n):
    alsmax[i] = max(0, alsmax[i-1], alssumls[i-1]+als[i])

ans = max(0, als[0])
for i in range(1, n):
    if alssumsumls[i-1] + alsmax[i] > ans:
        ans = alssumsumls[i-1] + alsmax[i]

print(ans)