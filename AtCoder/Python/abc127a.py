a,b = map(int, input().split())
ans = 0

if a >= 13:
    ans = b
elif 12 >= a >= 6:
    ans = int(b/2)

print(ans)