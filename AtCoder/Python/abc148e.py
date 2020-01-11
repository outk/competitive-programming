n = int(input())

d = 5

if n%2:
    print(0)
else:
    ans = 0
    while n//(2*d):
        ans += n//(2*d)
        d = d*5
    print(ans)

