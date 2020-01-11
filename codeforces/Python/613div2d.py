n = int(input())
a = list(map(int, input().split()))

a.sort()

mm = a[n-1]

lb = 1

while mm > lb:
    lb *= 2

lb -= 1

tmp = 0

for i in range(n):
    tmp ^= a[i]

d = lb ^ tmp

ans = a[n-1] ^ d

print(ans)