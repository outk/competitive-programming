n = int(input())

als = list(map(int, input().split()))

dicinc = dict([])
dicdec = dict([])

dicinc[als[0]] = 1
dicdec[als[0]] = 1

ans = 0

for i in range(1, n):
    if als[i]+i in dicdec.keys():
        dicdec[als[i]+i] += 1
    else:
        dicdec[als[i]+i] = 1
    if als[i]-i in dicinc.keys():
        dicinc[als[i]-i] += 1
    else:
        dicinc[als[i]-i] = 1
    
for v in dicdec.values():
    ans += v*(v-1)/2
for v in dicinc.values():
    ans += v*(v-1)/2

print(int(ans))