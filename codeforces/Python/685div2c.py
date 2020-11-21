import sys
from collections import deque
from copy import deepcopy
readline = sys.stdin.readline

t = int(readline())

for _ in range(t):
    n, k = map(int, readline().split())

    a = list(readline().strip("\n"))
    b = list(readline().strip("\n"))

    aq = deque()
    bq = deque()

    ac = [0 for _ in range(26)]
    bc = [0 for _ in range(26)]

    for i in range(n):
        ac[ord(a[i])-97] += 1
        bc[ord(b[i])-97] += 1
    
    for i in range(26):
        for j in range(ac[i]):
            aq.append(chr(i+97))
        for j in range(bc[i]):
            bq.append(chr(i+97))

    a = list(aq)
    b = list(bq)

    n = len(a)

    if n == 0:
        print("Yes")
        continue

    diff = [0 for _ in range(n)]

    isNo = False

    for i in range(n):
        diff[i] = ord(b[i]) - ord(a[i])
        if diff[i] < 0:
            print("No")
            isNo = True
            break

    if len(a) < k:
        print("No")
        isNo = True
    
    if isNo:
        continue

    ind = 0
    while ind < n-k+1:
        if diff[ind] > 0:
            # print(len(set(a[ind:ind+k])), len(set(diff[ind:k])))
            if len(set(a[ind:ind+k])) != 1:
                print("No")
                isNo = True
                break
            if len(set(diff[ind:ind+k])) != 1:
                print("No")
                isNo = True
                break
        ind += k

    if isNo:
        continue
    else:
        if ind == n:
            print("Yes")
        else:
            print("No")


    