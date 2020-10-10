n = int(input())

pls = list(map(int, input().split()))

dic = dict()

ans = 0

for i in range(n):
    if pls[i] not in dic.keys():
        dic[pls[i]] = 1
    if pls[i] == ans:
        while True:
            ans += 1
            if ans not in dic.keys():
                break
    print(ans)