import sys
input = sys.stdin.readline

def gcd(x,y):
  if x>y: x,y = y,x
  while x:
    x,y = y%x, x
  return y

def lcm(x,y):
  return x*y//gcd(x,y)

N = int(input())
ans = 1
for _ in range(N):
  ans = lcm(ans, int(input()))
print(ans)
