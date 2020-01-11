from collections import deque

x = int(input())
def gcd(a, b):
    while a%b:
        c = a%b
        a = b
        b = c
    return b

def lcm(a, b):
    return (a*b)/gcd(a, b)

hx = int(x**0.5) + 1

antuple = tuple([1,x])

for i in range(1, hx):
    if x%i == 0:
        d = int(x/i)
        if lcm(d, i) == x:
            if d < antuple[1]:
                antuple = tuple([i, d])

print(antuple[0], antuple[1])
