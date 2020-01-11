n,m = map(int, input().split())

a = []
ans = 0

a = input().split()

for i in range(n):
    a[i] = int(a[i])

for i in range(m):
    b,c = map(int, input().split())
    a = a + [c]*b

a.sort()

for i in range(n):
    ans += a[len(a)-i-1]

print(ans)