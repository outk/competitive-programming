n = int(input())
a = list(map(int, input().split()))

ans = 0.0
b = 0.0

for i in range(n):
    b += 1.0/(a[i])

ans = 1.0/(b)

print(ans)

