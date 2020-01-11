n = int(input())
k = int(input())
cards = [input() for _ in range(n)]

from itertools import permutations

kinds = [kind for kind in permutations(cards, k)]

anset = set([])

for kind in kinds:
    s = ""
    for i in range(k):
        s += kind[i]
    anset.add(s)
    
print(len(anset))