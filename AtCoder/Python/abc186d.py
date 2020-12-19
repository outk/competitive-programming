n = int(input())
a = list(map(int, input().split()))

a = sorted(a)

ls = [0 for _ in range(n-1)]
for i in range(n-1):
    ls[i] = a[i+1] - a[i]


ans = 0

for i in range(n-1):
    ans += (n-1+i*(n-2-i))*ls[i]
print(ans)

