from collections import deque

n = int(input())

pls = list(map(int, input().split()))

als = list(map(int, input().split()))

childlen = [list() for _ in range(n)]

visited = [0 for _ in range(n)]

queue = deque()


for i in range(len(pls)):
    pls[i] -= 1
    childlen[pls[i]].append(i+1)

for i in range(n):
    if len(childlen[i]) == 0:
        queue.append(i)

leavesinfo = [list() for _ in range(n)]

while queue:
    now = queue.popleft()
    if len(leavesinfo[now]) == 0:
        leavesinfo[pls[now]].append(als[now])
        queue.append()