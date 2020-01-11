n = int(input())
b = list(map(int, input().split()))

a = [0]*n

tmp = 0

a[n-1] = b[n-2]
a[0] = b[0]


for i in range(n-2):
    tmp = b[n-2-i]
    if b[n-2-i] > b[n-3-i]:
        tmp = b[n-3-i]
    a[n-2-i] = tmp

ans = sum(a)

print(ans)



