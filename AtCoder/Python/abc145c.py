import math
import itertools
import numpy as np

def main():
    n = int(input())
    xyls = []
    ans = 0

    for i in range(n):
        xyls.append(list(map(int, input().split())))

    pls = list(itertools.permutations(range(n)))

    nkai = math.factorial(n)
    ls = np.array([[0.0]*n]*n)

    for i in range(n):
        for j in range(n):
            tmp = 0
            tmp += (xyls[i][0] - xyls[j][0])*(xyls[i][0] - xyls[j][0])
            # print(tmp)
            tmp += (xyls[i][1] - xyls[j][1])*(xyls[i][1] - xyls[j][1])
            # print(tmp)
            tmp = tmp**0.5
            # print(tmp)
            ls[i][j] = tmp

    anssum = 0
    # print(ls)

    for i in pls:
        # print(i)
        for j in range(n-1):
            # print(ls[i[j]][i[j+1]])
            # print(i[j], i[j+1])
            # print(ls)
            # print(type(i[j]))
            anssum = anssum + ls[int(i[j])][int(i[j+1])]
            # print(anssum)

    ans = anssum / nkai
    # print(ls)
    print(ans)

if __name__ == "__main__":
    main()