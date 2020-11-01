n = int(input())

xyls = []

for i in range(n):
    x, y = map(int, input().split())
    xyls.append(tuple([x, y]))
    
for i in range(n):
    pset = set()
    zeroc = 0
    for j in range(n):
        if i != j:
            if xyls[i][0] - xyls[j][0] == 0:
                if zeroc:
                    print("Yes")
                    exit(0)
                else:
                    zeroc = 1
            else:
                pset.add((xyls[i][1] - xyls[j][1])/(xyls[i][0] - xyls[j][0]))
    if len(pset) + zeroc < n-1:
        print("Yes")
        exit(0)

print("No")