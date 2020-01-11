n, m  = map(int, input().split())

anls = [[0]*m]*n
ans = 0
als = []
bls = []

for i in range(n):
    a, b = map(int, input().split())
    als.append(a)
    bls.append(b)

for i in range(m):
    for j in range(n):
        if i + als[j] <= m:
            anls[j][i + als[j]-1] += bls[j]
            if ans < anls[j][i + als[j]-1]:
                ans = anls[j][i + als[j]-1]
print(ans)

