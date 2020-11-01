sls = list(input())
sls = list(map(int, sls))

countls = [0 for _ in range(9)]

for i in range(len(sls)):
    countls[sls[i]-1] += 1

pset = set()
for i in range(111, 1000):
    if i%8 == 0 and i//8 > 0:
        i1 = i - (i//10)*10
        i10 = i - i1*10 - (i//100)*100
        i100 = i//100
        if i1 != 0 and i10 != 0 and i100 != 0:
            pset.add(tuple([i1, i10, i100]))

for tup in pset:
    countls2 = [0 for _ in range(9)]
    for i in tup:
        countls2[i-1] += 1
    
    for i in range(9):
        if countls[i] < countls2[i]:
            break
    print("Yes")
    exit(0)

print("No")
