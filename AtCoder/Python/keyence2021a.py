n = int(input())
als = list(map(int, input().split()))
bls = list(map(int, input().split()))


amax = als[0]
bmax = bls[0]
print(amax*bmax)

amaxls = [0 for _ in range(n)]
amaxls[0] = amax
for i in range(1, n):
    if amaxls[i-1] < als[i]:
        amaxls[i] = als[i]
    else:
        amaxls[i] = amaxls[i-1]

abmax = amax*bmax
for i in range(1, n):
    if abmax < amaxls[i]*bls[i]:
        abmax = amaxls[i]*bls[i]
    print(abmax)