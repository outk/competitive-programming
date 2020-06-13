n, k = map(int, input().split())
a = list(map(int, input().split()))

als = [[0, 0] for _ in range(n)]

for i in range(n):
    if i - a[i] >= 0:
        als[i][0] = i-a[i]
    else:
        als[i][0] = 0
    if i + a[i] < n:
        als[i][1] = i+a[i]
    else:
        als[i][1] = n-1

for _ in range(k):
    mina = 1000000
    a = [0 for _ in range(n)]
    for j in range(n):
        for t in range(als[j][0], als[j][1]+1, 1):
            a[t] += 1
    for j in range(n):
        if mina > a[j]:
            mina = a[j]
    if mina >= n:
        break
    for i in range(n):
        if i - a[i] >= 0:
            als[i][0] = i-a[i]
        else:
            als[i][0] = 0
        if i + a[i] < n:
            als[i][1] = i+a[i]
        else:
            als[i][1] = n-1 

ans = ""

for i in range(n):
    ans += str(a[i]) + " "

print(ans)
