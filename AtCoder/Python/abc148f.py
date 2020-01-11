from collections import deque

n,u,v = map(int, input().split())
neighbors = [[] for _ in range(n)]
for _ in range(n-1):
    a,b = map(int, input().split())
    a -= 1
    b -= 1
    neighbors[a].append(b)
    neighbors[b].append(a)

vds = [-1]*n

qp = deque([])

qp.append(v-1)

vds[v-1] = 0

while qp:
    now = qp.pop()
    for nxt in neighbors[now]:
        if vds[nxt] == -1:
            qp.appendleft(nxt)
            vds[nxt] = vds[now] + 1

uds = [-1]*n
ucost = [-1]*n

qp.append(u-1)

uds[u-1] = 1
ucost[u-1] = 0

while qp:
    now = qp.pop()
    for nxt in neighbors[now]:
        if uds[nxt] == -1 and nxt != v-1:
            qp.appendleft(nxt)
            uds[nxt] = 1
            ucost[nxt] = ucost[now] + 1

ans = 0

for i in range(n):
    if uds[i] != -1 and ucost[i] <= vds[i] and ans < vds[i]:
        ans = vds[i]

            
print(ans-1)
