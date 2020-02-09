n, k = map(int, input().split())
p = list(map(int, input().split()))

pls = [0.0 for _ in range(n+1)]

for i in range(1, n+1):
    pls[i] = pls[i-1] + (p[i-1]+1)/2

ans = 0

for i in range(n-k+1):
    if pls[i+k]-pls[i] > ans:
        ans = pls[i+k]-pls[i]
print(ans)