import sys
import numpy as np

readline = sys.stdin.readline

def main():
    h, w, n, m = map(int, readline().split())

    mp = np.ones((h, w))*-1

    nset = set()

    for i in range(n):
        a, b = map(int, readline().split())
        a -= 1
        b -= 1
        mp[a][b] = 0
        nset.add((a,b))
    
    for i in range(m):
        c, d = map(int, readline().split())
        c -= 1
        d -= 1
        mp[c][d] = 1

    up = tuple((-1, 0))
    down = tuple((1, 0))
    right = tuple((0, 1))
    left = tuple((0, -1))

    visited = np.zeros((h, w))

    for i, j in nset:
        if mp[i][j] == 0 and mp[i][j] != 2:
            k = 1
            while i-k >= 0:
                if mp[i-k][j] == 1:
                    break
                elif mp[i-k][j] == 0:
                    break
                else:
                    mp[i-k][j] = 2
                    k += 1
            k = 1
            while i+k < h:
                if mp[i+k][j] == 1:
                    break
                elif mp[i+k][j] == 0:
                    break
                else:
                    mp[i+k][j] = 2
                    k += 1
            k = 1
            while j-k >= 0:
                if mp[i][j-k] == 1:
                    break
                elif mp[i][j-k] == 0:
                    break
                else:
                    mp[i][j-k] = 2
                    k += 1
            k = 1
            while j+k < w:
                if mp[i][j+k] == 1:
                    break
                elif mp[i][j+k] == 0:
                    break
                else:
                    mp[i][j+k] = 2
                    k += 1
    ans = 0

    for i in range(h):
        for j in range(w):
            if mp[i][j] == 0 or mp[i][j] == 2:
                ans += 1

    print(ans)


if __name__ == "__main__":
    main()