t = int(input())

mod = 1000000007

for _ in range(t):
    n, a, b = map(int, input().split())

    if a > b:
        a, b = b, a
    
    ac = (n-a+1)*(n-a+1)%mod
    bc = (n-b+1)*(n-b+1)%mod

    