import sys
input = sys.stdin.readline

import heapq

n,h = map(int, input().split())

pq = []
amax = 0

for i in range(n):
    a,b = map(int, input().split())
    heapq.heappush(pq, -b)
    if a > amax:
        amax = a

heapq.heappush(pq, -amax)

d = 0
dtotal = 0
ans = 0

while dtotal > -h:
    d = heapq.heappop(pq)
    dtotal += d
    ans += 1
    if d == -amax:
        break
if -dtotal < h:
    if (h+dtotal)%amax == 0:
        ans += (h+dtotal)//amax
    else:
        ans += 1 + (h+dtotal)//amax

print(ans)