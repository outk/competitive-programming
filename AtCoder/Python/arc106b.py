from collections import deque

n, m = map(int, input().split())

als = list(map(int, input().split()))
bls = list(map(int, input().split()))

neighbers = [list() for _ in range(n)]

for i in range(m):
    c, d = map(int, input().split())

    c -= 1
    d -= 1

    neighbers[c].append(d)
    neighbers[d].append(c)

visited = [0 for _ in range(n)]

groups = []

for i in range(n):
    if not visited[i]:
        group = []
        stack = deque()

        stack.append(i)
        while stack:
            now = stack.pop()
            visited[now] = 1
            group.append(now)
            for nxt in neighbers[now]:
                if not visited[nxt]:
                    stack.append(nxt)
        groups.append(group)

for g in groups:
    gsuma = 0
    gsumb = 0
    for node in set(g):
        gsuma += als[node]
        gsumb += bls[node]
    if gsuma != gsumb:
        print("No")
        exit(0)

print("Yes")