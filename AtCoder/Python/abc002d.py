import sys
input = sys.stdin.readline

import numpy as np
from itertools import combinations

def main():
    n,m = map(int, input().split())
    p = np.zeros([n,n])
    ans = 1
    for _ in range(m):
        x,y = map(int, input().split())
        p[x-1][y-1], p[y-1][x-1] = 1,1
    coms = []
    for i in range(2,n+1):
        ls = list(combinations(range(n), i))
        coms.extend(ls)
    for com in coms:
        flag = False
        if len(com) > ans:
            for j in range(len(com)-1):
                for k in range(j+1,len(com)):
                    if p[com[j]][com[k]] != 1:
                        flag = True
                        break
                if flag:
                    break
        else:
            continue
        if flag:
            continue
        if ans < len(com):
            ans = len(com)
    print(ans)



if __name__ == "__main__":
    main()