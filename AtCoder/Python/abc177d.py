from collections import deque

n, m = map(int, input().split())

friendsetlist = [set([]) for _ in range(n)]

for i in range(m):
    a, b = map(int, input().split())
    a -= 1
    b -= 1

    friendsetlist[a].add(b)
    friendsetlist[b].add(a)

dq = deque([])

checked = [0 for _ in range(n)]

ans = 0

for i in range(n):
    if checked[i] == 0:
        dq.append(i)
        checked[i] = 1
        tmpans = 1
        while len(dq) != 0:
            now = dq.popleft()
            for nxt in friendsetlist[now]:
                if checked[nxt] == 0:
                    tmpans += 1
                    dq.append(nxt)
                    checked[nxt] = 1
        if ans < tmpans:
            ans = tmpans

print(ans)

