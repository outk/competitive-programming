n = int(input())

pset = set([])
npset = set([])

ls = [0 for _ in range(n)]

for i in range(n):
    a, b = map(int, input().split())
    if a != -1 and b != -1 and a >= b:
        print("No")
        exit(0)
    
    if a != -1 and b != -1:
        pset.add(tuple([a, b]))
    else:
        npset.add(tuple([a, b]))
    
for a, b in pset:
    if ls[a-1] == 0:
        ls[a-1] = 1
    else:
        print("No")
        exit(0)
    if ls[b-1] == 0:
        ls[b-1] = 1
    else:
        print("No")
        exit(0)

    dis = b - a
    for i in range(dis)


print("Yes")
