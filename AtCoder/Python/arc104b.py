n, s = input().split()

n = int(n)

s = list(s)

ans = 0 

lsls = [[0 for _ in range(4)] for _ in range(n)]

if s[0] == "A":
    lsls[0][0] = 1
elif s[0] == "T":
    lsls[0][1] = 1
elif s[0] == "C":
    lsls[0][2] = 1
else:
    lsls[0][3] = 1


for i in range(1, n):
    if s[i] == "A":
        lsls[i][0] = lsls[i-1][0] + 1
        lsls[i][1] = lsls[i-1][1] 
        lsls[i][2] = lsls[i-1][2] 
        lsls[i][3] = lsls[i-1][3] 
    elif s[i] == "T":
        lsls[i][0] = lsls[i-1][0] 
        lsls[i][1] = lsls[i-1][1] + 1
        lsls[i][2] = lsls[i-1][2] 
        lsls[i][3] = lsls[i-1][3] 
    elif s[i] == "C":
        lsls[i][0] = lsls[i-1][0] 
        lsls[i][1] = lsls[i-1][1] 
        lsls[i][2] = lsls[i-1][2] + 1
        lsls[i][3] = lsls[i-1][3] 
    else:
        lsls[i][0] = lsls[i-1][0]
        lsls[i][1] = lsls[i-1][1] 
        lsls[i][2] = lsls[i-1][2] 
        lsls[i][3] = lsls[i-1][3] + 1


ans = 0

for j in range(n):
    if lsls[j][0] == lsls[j][1] and lsls[j][2] == lsls[j][3]:
        ans += 1

for i in range(1, n-1):
    for j in range(i+1, n):
        if lsls[j][0] - lsls[i-1][0] == lsls[j][1] - lsls[i-1][1] and lsls[j][2] - lsls[i-1][2] == lsls[j][3] - lsls[i-1][3]:
            ans += 1

print(ans)

