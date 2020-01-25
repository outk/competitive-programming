a = list(map(int, input().split()))
l = a.pop()
m = len(a)
ans = 0
a.sort()
ls = [[[] for i in range(l)] for i in range(m+1)]

while len(a) > 0:
    ls = [[[] for i in range(l)] for i in range(len(a)+1)]
    for i in range(1, len(a)+1):
        for j in range(l):
            if j - a[i-1] + 1 >= 0:
                ls[i][j] = ls[i-1][j - a[i-1] + 1].copy()
                ls[i][j].append(a[i-1])
    if sum(ls[len(a)][l-1])%l == 0:
        ans += sum(ls[len(a)][l-1])/l
    else:
        ans += sum(ls[len(a)][l-1])//l + 1
    for b in ls[len(a)][l-1]:
        a.remove(b)

print(int(ans))
        
