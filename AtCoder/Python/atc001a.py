import sys
input = sys.stdin.readline

import numpy as np

sys.setrecursionlimit(100000)

ans = "No"

h,w = map(int, input().split())
mpls = ["o" + input() + "o" for _ in range(h)]
line = ["o"*(w+2)]
mpls = line + mpls + line
mp = np.zeros([h+2, w+2])
for i in range(h+2):
    for j in range(w+2):
        if mpls[i][j] == ".":
            mp[i][j] = 0
        elif mpls[i][j] == "g":
            mp[i][j] = 1
        elif mpls[i][j] == "s":
            start = [i,j]
            mp[i][j] = 2
        else:
            mp[i][j] = 2


def dfs(now, visitedls, mp):
    if now not in visitedls:
        visitedls.append(now)
        if mp[now[0]-1][now[1]] == 0:
            dfs([now[0]-1,now[1]], visitedls,mp)
        elif  mp[now[0]-1][now[1]] == 1:
            print("Yes")
            sys.exit()
        if mp[now[0]+1][now[1]] == 0:
            dfs([now[0]+1,now[1]], visitedls,mp)
        elif  mp[now[0]+1][now[1]] == 1:
            print("Yes")
            sys.exit()
        if mp[now[0]][now[1]-1] == 0:
            dfs([now[0],now[1]-1], visitedls,mp)
        elif  mp[now[0]][now[1]-1] == 1:
            print("Yes")
            sys.exit()
        if mp[now[0]][now[1]+1] == 0:
            dfs([now[0],now[1]+1], visitedls, mp)
        elif  mp[now[0]][now[1]+1] == 1:
            print("Yes")
            sys.exit()
        visitedls.remove(now)
    
def main():
    global h, w, ans, mp, start
    visitedls = []
    dfs(start, visitedls, mp)
    print(ans)

if __name__ == "__main__":
    main()