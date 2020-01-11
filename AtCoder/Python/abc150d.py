n,m = map(int, input().split())
a = list(map(int, input().split()))

a.sort()

def gcd(a, b):
    while a%b != 0:
        c = a%b
        a = b
        b = c
    return int(b)

def lcm(a, b):
    g = gcd(a, b)
    return a * b / g

tmp = a[0]/2

for i in range(n-1):
    tmp = lcm(int(a[i+1]/2), tmp)

if tmp < m:
    ans =  int(((m/(2*tmp))-0.5))+1
else:
    ans = 0

print(ans)