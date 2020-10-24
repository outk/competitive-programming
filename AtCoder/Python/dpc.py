n = int(input())

dp = [[0 for _ in range(n)] for _ in range(3)]

a, b, c = map(int, input().split())

dp[0][0] = a
dp[1][0] = b
dp[2][0] = c

for i in range(1, n):
    a, b, c = map(int, input().split())
    
    dp[0][i] = a + max(dp[1][i-1], dp[2][i-1])
    dp[1][i] = b + max(dp[0][i-1], dp[2][i-1])
    dp[2][i] = c + max(dp[0][i-1], dp[1][i-1])


print(max(dp[0][n-1], dp[1][n-1], dp[2][n-1]))
