n = int(input())
ss = list(input())

ans = 0

l = 0
r = 0
for s in ss:
    if s == "L":
        l += 1
    else:
        r += 1

ans = l+r+1
print(ans)