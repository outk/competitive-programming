import math

def nCm(n,m):
    return math.factorial(n) / (math.factorial(m)*(math.facorial(n-m)))

n = int(input())
kinds = 4**n
a = 7 + 10**9
answer = 0
q = 0
r = 0

p = 3 * nCm(n-2, 1)
if n > 6:
    q = 3 * nCm(n-4, 2)
if n > 9:    
    r = nCm(n-6, 3)

answer = (kinds - p + q -r) % a

print(int(answer))
