n = int(input())

ls = [tuple(map(int, input().split())) for _ in range(n)]

ls.sort()

ans = 0

left = ls[n/2][0]
ls.sort(key=lambda a: a[1])
right = ls[n/2][1]
ans = right - left + 1
if ans < 0:
    ans = 0

print(ans)