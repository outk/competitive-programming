n, k = map(int, input().split())

if k < 0:
    k *= -1

ans = 0

left = 2
right = 2+k

while right <= 2*n:
    if left < n+2:
        if right < n+2:
            ans += (left-1) * (right-1)
        else:
            ans += (left-1) * (2*n - right + 1)
    else:
        ans += (2*n - left + 1) * (2*n - right + 1)

    left += 1
    right += 1

print(ans)