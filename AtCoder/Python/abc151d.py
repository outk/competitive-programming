from collections import deque

h,w = map(int, input().split())
s = [input() for _ in range(h)]

vectors = [(1,0),(-1,0),(0,1),(0,-1)]

q = deque([])

visited1 = [[-1]*w for _ in range(h)]
visited2 = [[-1]*w for _ in range(h)]

ans = 0

for i in range(h):
    for j in range(w):
        if visited2[i][j] == -1 and s[i][j] == ".":
            ec = 0
            visited1[i][j] = 0
            q.append((i,j))
            while q:
                now = q.pop()
                for v in vectors:
                    if now[0]+v[0] >= 0 and now[0]+v[0] < h and now[1]+v[1] >= 0 and now[1]+v[1] < w:
                        if s[now[0]+v[0]][now[1]+v[1]] == "." and visited1[now[0]+v[0]][now[1]+v[1]] == -1:
                            q.appendleft((now[0]+v[0], now[1]+v[1]))
                            visited1[now[0]+v[0]][now[1]+v[1]] = visited1[now[0]][now[1]] + 1
                            if visited1[now[0]+v[0]][now[1]+v[1]] > ec:
                                ec = visited1[now[0]+v[0]][now[1]+v[1]]
                                st = (now[0]+v[0], now[1]+v[1])

            q.append(st)
            visited2[st[0]][st[1]] = 0
            while q:
                now = q.pop()
                for v in vectors:
                    if now[0]+v[0] >= 0 and now[0]+v[0] < h and now[1]+v[1] >= 0 and now[1]+v[1] < w:
                        if s[now[0]+v[0]][now[1]+v[1]] == "." and visited2[now[0]+v[0]][now[1]+v[1]] == -1:
                            q.appendleft((now[0]+v[0], now[1]+v[1]))
                            visited2[now[0]+v[0]][now[1]+v[1]] = visited2[now[0]][now[1]] + 1
                            if visited2[now[0]+v[0]][now[1]+v[1]] > ans:
                                ans = visited2[now[0]+v[0]][now[1]+v[1]]
            break
print(ans)
