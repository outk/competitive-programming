import copy
n = int(input())

xyp = [tuple(map(int, input().split())) for _ in range(n)]

sorted(xyp, key=lambda ls: ls[2])

mincostls = [0 for _ in range(n)]

for i in range(n):
    mincostls[i] = min(abs(xyp[i][0]), abs(xyp[i][1])) * xyp[i][2]

sumcost = sum(mincostls)

print(sumcost)

for i in range(1, n+1):
    if sumcost != 0:
        presentmincostls = copy.deepcopy(mincostls)
        presentsumcost = sum(presentmincostls)
        for j in range(n):
            tmpx = xyp[j][0]
            tmpcostsum = 0
            tmpmincostls = [0 for _ in range(n)]
            for k in range(n):
                tmpmincostls[k] = min(abs(xyp[k][0] - tmpx) * xyp[k][2], mincostls[k])
                tmpcostsum += min(abs(xyp[k][0] - tmpx) * xyp[k][2], mincostls[k])
            if tmpcostsum < presentsumcost:
                presentsumcost = tmpcostsum
                presentmincostls = copy.deepcopy(tmpmincostls)
            
            tmpy = xyp[j][1]
            tmpcostsum = 0
            tmpmincostls = [0 for _ in range(n)]
            for k in range(n):
                tmpmincostls[k] = min(abs(xyp[k][1] - tmpy) * xyp[k][2], mincostls[k])
                tmpcostsum += min(abs(xyp[k][1] - tmpy) * xyp[k][2], mincostls[k])
            if tmpcostsum < presentsumcost:
                presentsumcost = tmpcostsum
                presentmincostls = copy.deepcopy(tmpmincostls)
        mincostls = copy.deepcopy(presentmincostls)
        print(presentsumcost)
    else:
        print(0)