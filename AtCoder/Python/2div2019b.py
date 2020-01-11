import numpy as np
from collections import defaultdict
dic = defaultdict(int)

n = int(input())
lis = list(list(map(int, input().split())) for _ in range(n))

ans = n
ant = 0

arrx = np.zeros((n, n))
arry = np.zeros((n, n))

for i in range(n):
    for j in range(n):

        arrx[i][j] = lis[i][0] - lis[j][0]
        arry[i][j] = lis[i][1] - lis[j][1]

        dic[(arrx[i][j], arry[i][j])] += 1

        if i != j:
            if ant < dic[(arrx[i][j], arry[i][j])]:
                ant = dic[(arrx[i][j], arry[i][j])]

ans -= ant

print(ans)