n = int(input())

als = list(map(int, input().split()))

ansk = -1

c = 0

for k in range(2, 1001):
    tmpc = 0
    for i in range(n):
        if als[i]%k == 0 and als[i]/k > 0:
            tmpc += 1
    if c < tmpc:
        c = tmpc
        ansk = k

print(ansk)