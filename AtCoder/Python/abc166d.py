x = int(input())

xset = set([])

for i in range(10000):
    xset.add(i**5)
    xset.add(-i**5)

for xx in xset:
    if xx+x in xset:
        a5 = xx+x
        b5 = xx

if a5 < 0:
    a = -pow(-a5, 0.2)
else:
    a = pow(a5, 0.2)

if b5 < 0:
    b = -pow(-b5, 0.2)
else:
    b = pow(b5, 0.2)

print(int(a), int(b))