import sys
import numpy as np

input = sys.stdin.readline
n,m = map(int, input().split())
ls = np.zeros([n,n])
for _ in range(m):
    a, b = map(int, input().split())
    if ls[a-1][b-1] == 0:
        ls[a-1][b-1] = 1
        ls[b-1][a-1] = 1

def dfs(a, visitedls):
    visitedls.append(a)
    for b in range(1,n+1):
        if ls[a-1][b-1] == 1 and b not in visitedls:
            dfs(b, visitedls)

def main():
    ans = 0
    for i in range(n):
        for j in range(n):
            if ls[i][j] == 1:
                ls[i][j] = 0
                visitedls = []
                dfs(i+1, visitedls)
                if len(visitedls) != n:
                    ans += 1
                ls[i][j] = 1
    print(int(ans/2))



if __name__ == "__main__":
    main()