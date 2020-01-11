n,m = map(int, input().split())

lis = [0]*m
s = [[]]*n
k = []
p = []

for i in range(m):
    lis[i] = list(map(int, input().split())
    
    for j in range(lis[i][0]-1):
        s[lis[i][j+1]-1].append(i+1) 

for i in range(m):
    k.append(lis[i][0])

p = list(map(int, input().split()))


