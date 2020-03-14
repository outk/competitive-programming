h, w = map(int, input().split())

if h != 1 and w != 1:
    if (h*w)%2 == 0:
        ans = (h*w)//2
    else:
        ans = 1 + (h*w)//2
else:
    ans = 1

print(ans)