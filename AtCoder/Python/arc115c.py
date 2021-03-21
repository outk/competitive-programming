n = int(input())
if n == 1:
    print(1)
    exit()

a = [0 for _ in range(n)]

a[0] = 1
a[1] = 2

for i in range(2, n):
    v = i + 1
    vv = v
    elems = []
    if v%2 == 0:
        elems.append(1)
    for k in range(2, int(v**0.5)+1):
        if v%k == 0:
            elems.append(k-1)
            elems.append(v//k-1)

    if len(elems) == 0:
        a[i] = 2
    else:
        a[i] = max([a[e] for e in elems]) + 1
    
print(" ".join(list(map(str, a))))