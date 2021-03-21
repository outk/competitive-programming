n, m = map(int, input().split())

sls = [input() for _ in range(n)]
sls = sorted(sls)

dic = dict()
for s in sls:
    c = 0
    for i in range(m):
        if s[i] == "1":
            c += 1
    if c not in dic.keys():
        dic[c] = 1
    else:
        dic[c] += 1


# print(sls)