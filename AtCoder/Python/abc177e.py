import math
from collections import deque

n = int(input())
als = list(map(int, input().split()))

ans = "not coprime"

a, b = als[1], als[0]
if a < b:
    a,b = b,a
while a % b != 0:
    a, b = b, a % b
    if n == 2 and b == 1:
        ans = "pairwise coprime"
        failed = True

for i in range(2, n):
    a = als[i]
    if a < b:
        a,b = b,a 
    while a % b != 0:
        a, b = b, a % b
if b == 1:
    ans = "setwise coprime"
    # break

existeven = False

failed = False

for i in range(n):
    if als[i] >= 2 and als[i]%2 == 0:
        if existeven:
            failed = True
            break
        else:
            existeven = True

maxa = max(als)

afterchecklist = deque([])


if not failed:
    for i in range(3, int(math.sqrt(maxa))+2, 2):
        existfactrial = False
        failed = False
        for j in range(n):
            if als[j] >= i and als[j]%i == 0:
                afterchecklist.append(als[j]/i)
                if existfactrial:
                    failed = True
                    break
                else:
                    existfactrial = True
        if failed:
            break
    if not failed:
        for i in list(afterchecklist):
            existfactrial = False
            failed = False
            for j in range(n):
                if i != 1 and als[j] >= i and als[j]%i == 0:
                    if existfactrial:
                        failed = True
                        break
                    else:
                        existfactrial = True
            if failed:
                break
        if not failed:
            ans = "pairwise coprime"

print(ans)
        

    