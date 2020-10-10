h, w = map(int, input().split())

sls = [list(input()) for _ in range(h)]

mod = 1000000007

modls = [1 for _ in range(4000001)]
for i in range(1, 4000001):
    modls[i] = (modls[i-1]*2)%mod


ls1 = [[-1 for _ in range(w)] for _ in range(h)]
ls2 = [[-1 for _ in range(w)] for _ in range(h)]

k = 0

for i in range(h):
    c = 0
    for j in range(w):
        if sls[i][j] == ".":
            c += 1
            k += 1
        if sls[i][j] == "#" or j == w-1:
            if j == w-1:
                t = 0
            else:
                t = 1
            while j-t >= 0:
                ls1[i][j-t] = c
                t += 1
                if sls[i][j-t] == "#":
                    break
            c = 0

for j in range(w):
    c = 0
    for i in range(h):
        if sls[i][j] == ".":
            c += 1
        if sls[i][j] == "#" or i == h-1:
            if i == h-1:
                t = 0
            else:
                t = 1
            while i-t >= 0:
                ls2[i-t][j] = c
                t += 1
                if sls[i-t][j] == "#":
                    break
            c = 0

ans = 0

for i in range(h):
    for j in range(w):
        if sls[i][j] == ".":
            psum = ls1[i][j] + ls2[i][j] - 1
            ans += modls[k-1] + (modls[psum - 1] - 1) * modls[k - psum]
            ans = ans % mod

print(ans)