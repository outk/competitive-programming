n = int(input())
p = list(map(int, input().split()))

ans = 1

pa = p[0]

for i in range(1,n):
    if pa >= p[i]:
        ans += 1
        pa = p[i]

print(ans)