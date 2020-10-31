mod = 998244353

a, b, c = map(int, input().split())

ans = (((a*(a+1)//2)%mod * (b*(b+1)//2)%mod)%mod * (c*(c+1)//2)%mod) % mod

print(ans)