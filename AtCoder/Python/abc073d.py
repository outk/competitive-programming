N, M, R = map(int, input().split())
r = list(map(int, input().split()))

adj = [[] for i in range(N)]
for i in range(M):
    A, B, C = map(int, input().split())
    adj[-A].append((B, C))
    adj[-B].append((A, C))

import heapq

def Dijkstra(N, v_st, v_go):
    cost = [float('inf') for i in range(N)]

    pq = []
    heapq.heappush(pq, (0, v_st))

    while pq:
        c, v_now = heapq.heappop(pq)

        if v_now == v_go:
            return c

        if cost[-v_now] < c:
            continue

        cost[-v_now] = c

        for v, c2 in adj[-v_now]:
            if cost[-v_now] + c2 < cost[-v]:
                cost[-v] = cost[-v_now] + c2
                heapq.heappush(pq, (cost[-v], v))

cost_min = [[float('inf') for i in range(R)] for j in range(R)]

for i in range(R):
    for j in range(i, R):
        cost_min[i][j] = Dijkstra(N, r[i], r[j])
        cost_min[j][i] = cost_min[i][j]

import itertools
p = list(itertools.permutations(range(R)))

ans = float('inf')
for pp in p:
    c = 0
    for i in range(R - 1):
        c += cost_min[pp[i]][pp[i + 1]]

    ans = min(ans, c)
    
print(ans)
