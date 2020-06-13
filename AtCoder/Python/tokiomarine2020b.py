a,v = map(int, input().split())
b, w = map(int, input().split())
t = int(input())

ab = abs(a-b)
vw = abs(v-w)


if v-w > 0:
    if ab <= vw*t:
        print("YES")
    else:
        print("NO")
else:
    print("NO")
