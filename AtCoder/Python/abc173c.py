import itertools as it
h, w, k = map(int, input().split())

c = [list(input()) for _ in range(h)]

hprols = list(it.product(range(2), repeat=h))
wprols = list(it.product(range(2), repeat=w))

ans = 0


for hpro in hprols:
    for wpro in wprols:
        tmpk = 0
        for i in range(len(hpro)):
            for j in range(len(wpro)):
                if hpro[i] == 0:
                    if wpro[j] == 0:
                        if c[i][j] == "#":
                            tmpk += 1
        if tmpk == k:
            ans += 1
            
print(ans)
