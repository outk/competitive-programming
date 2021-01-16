n,k = map(int, input().split())

als = list(map(int, input().split()))

als = sorted(als)

dic = dict()

for i in range(n):
    if als[i] not in dic.keys():
        dic[als[i]] = 1
    else:
        dic[als[i]] += 1

for i in range(300001):
    if i not in dic.keys():
        dic[i] = 0
    
aset = set(als)

ans = 0

kc = k

for i in range(300001):
    if dic[i] >= kc:
        continue
    ans += i*(kc-dic[i])
    kc = dic[i]
    if kc == 0:
        break

print(ans)
        