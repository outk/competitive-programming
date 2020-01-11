a = int(input())
b = int(input())
c = int(input())
d = int(input())
e = int(input())
an = 0
lis = [a,b,c,d,e]

am = a % 10
bm = b % 10
cm = c % 10
dm = d % 10
em = e % 10

mlis = [am, bm, cm, dm, em]
last = am

for j in range(len(mlis)):
    if mlis[j] == 0:
        an += lis[j]

    else:
        an += lis[j] - mlis[j] + 10
        if mlis[j] < last:
            last = mlis[j]

an = an + last - 10
if last == 0:
    an = an - 10

if am == 0 and bm == 0 and cm == 0 and dm == 0 and em == 0:
    an = an + 10

print(an)
