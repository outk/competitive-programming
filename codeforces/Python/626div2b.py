n, m, k = map(int, input().split())

als = list(map(int, input().split()))
bls = list(map(int, input().split()))

blockset = set([])

for i in range(1, k+1):
    if k%i == 0:
        blockset.add(tuple([i, k//i]))

ans = 0
hc = 0

for x,y in blockset:
    if x <= m and y <= n:
        hc = 0
        for i in range(m-x+1):
            check = 1
            for j in range(x):
                check = check * bls[i+j]
                if check == 0:
                    break
            if check == 1:
                hc += 1
        for t in range(n-y+1):
            check = 1
            for p in range(y):
                check = check * als[t+p]
                if check == 0:
                    break
            if check == 1:
                ans += hc

print(ans)