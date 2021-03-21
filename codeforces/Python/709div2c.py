import sys
readline = sys.stdin.readline

import math

t = int(readline())

for _ in range(t):
    n, m = map(int, readline().split())

    ls = [0 for _ in range(m)]
    for i in range(m):
        line = list(map(int, readline().split()))
        k = line[0]
        ls[i] = line[1:]
    
    dic = dict()
    for i in range(m):
        for j in range(len(ls[i])):
            if ls[i][j]-1 not in dic.keys():
                dic[ls[i][j]-1] = set()
            dic[ls[i][j]-1].add((len(ls[i]), i))
    
    abdays = [(0, i) for i in range(n)]
    for key in dic.keys():
        abdays[key] = (len(dic[key]), key)

    # print(abdays)
    
    abdays = sorted(abdays)
    # print(abdays)

    days = [-1 for _ in range(m)]

    # print(dic, abdays)

    for tup in abdays:
        playdayscount = 0
        if tup[1] in dic.keys():
            tupls = list(dic[tup[1]])
            sortedls = sorted(tupls)
            # print(sortedls)
            for t in sortedls:
                if days[t[1]] < 0:
                    days[t[1]] = tup[1] + 1
                    playdayscount += 1
                if playdayscount >= math.ceil(m/2):
                    break

    failed = False
    for d in days:
        if d < 0:
            failed = True
            break
    if failed:
        print("NO")
    else:
        print("YES")
        print(" ".join(list(map(str, days))))





    
