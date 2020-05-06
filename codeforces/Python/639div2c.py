t = int(input())
for _ in range(t):
    n = int(input())
    als = list(map(int, input().split()))
    ans = "YES"
    ls = [0 for _ in range(n)]
    for i in range(n):
        if ls[(als[i]+i)%n] != 0:
            ans = "NO"
        else:
            ls[(als[i]+i)%n] += 1
    print(ans)