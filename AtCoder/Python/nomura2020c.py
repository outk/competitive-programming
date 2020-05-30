n = int(input())
a = list(map(int, input().split()))

ans = 0

parents = 1

if n == 0:
    if a[0] > 1:
        ans = -1
    else:
        ans = a[0]

if a[0] == 1:
    parents = 0
    ans = 1
    if n != 0:
        ans = -1

parentsls = [0 for _ in range(n+1)]
parentsls[0] = parents

bicapls = [0 for _ in range(n+1)]

for i in range(1, n+1):
    if i != n and parents == 0:
        ans = -1    
        break
    if a[i] > parents*2:
        ans = -1
        break
    else:
        parents = parents*2 - a[i]
        parentsls[i] = parents
    
if ans != -1 and ans != 1:
    node = 0
    for i in range(n):
        if parentsls[n-1-i] >= node + a[n-i]:
            ans += node + a[n-i]
            node = node + a[n-i]
        else:
            ans += node + a[n-i]
            node = parentsls[n-1-i]

    ans += 1

print(ans)
