def hajime(i):
    global fr
    a = int(fr[i])
    return a

def zahyo():
    for i in range(N):
        if tx + int(r[i])*2 <= L:
            

fr = input()
fr = fr.split()
L = hajime(0)
N = hajime(1)
M = hajime(2)

bk = []
r = []
for i in range(N):
    bk = input()
    bk = bk.split()
    r.append(bk[i-1])

bp = []
abp = []
for i in range(M):
    bp = input()
    bp = bp.split()
    abp.append(bp[i-1])

r.sort()
tx = 0
x = 0
for i in range(N):
    if tx + int(r[i])*2 <= L:
        
