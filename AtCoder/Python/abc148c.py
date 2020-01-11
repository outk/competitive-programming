from fractions import gcd
 
a,b = map(int, input().split())

def lcm(x, y):
    return (x * y) // gcd(x, y)

ans = lcm(a,b)
print(ans)