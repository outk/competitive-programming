r,d,x = map(int, input().split())
ans = 0

for i in range(10):
    x = r*x - d
    ans = int(x)
    print(ans)