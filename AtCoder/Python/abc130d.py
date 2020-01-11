import numpy as np
from copy import deepcopy as dcp
def main():
    n,k = map(int, input().split())
    a = np.array(list(map(int, input().split())))
    ans = 0
    asum = 0
    asumt = 0
    for i in range(n):
        asum += a[i]
        if asum >= k:ans += 1
            asumt = dcp(asum)
            for j in range(n):
                if j < i:
                    asumt -= a[j]
                    if asumt >= k:ans += 1
                    else:break
                else:break
        else:
            asumt = dcp(asum)
            for j in range(n):
                if j < i:
                    asumt -= a[j]
                    if asumt >= k:ans += 1
                    else:break
                else:break
    
    print(ans)

if __name__ == "__main__":
    main()