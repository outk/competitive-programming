x,y,z,k = map(int, input().split())
a = input().split()
b = input().split()
c = input().split()

a = a.sort()
b = b.sort()
c = c.sort()


for i in range(k):
    an = int(a[len(a)-i]) + int(b[len(b)-i]) + int(c[len(c)-i])
    print(an)
