n, k, s = map(int, input().split())

a = [s]*n

ans = ""

for i in range(n-k):
    if s == 1:
        a[i] = 2
    elif s == 1000000000:
        a[i] = 1000000000-1
    else:
        a[i] = s+1

for i in range(n):
    ans += " " + str(a[i])

print(ans)