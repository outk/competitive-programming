from itertools import permutations

n = int(input())
p = tuple(map(int, input().split()))
q = tuple(map(int, input().split()))

ptnp = list(permutations(p))
ptnq = list(permutations(q))

ptnp.sort()
ptnq.sort()

a = 0

for i in range(len(ptnp)):
    if ptnp[i] == p:
        a = i
        break

b = 0

for i in range(len(ptnq)):
    if ptnq[i] == q:
        b = i
        break

print(abs(a-b))