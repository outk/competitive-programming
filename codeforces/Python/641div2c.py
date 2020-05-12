import math
import copy

n = int(input())
als = list(map(int, input().split()))

als.sort()

ans0 = 1
alscp0 = copy.deepcopy(als)
tmp = als[0]
for i in range(2, tmp+1):
    while alscp0[0]%i == 0 and alscp0[0]/i > 0:
        fc = 0
        for j in range(n):
            if alscp0[j]%i != 0 or alscp0[j]/i == 0:
                if fc == 0:
                    fc += 1
                else:
                    fc += 1
            else:
                alscp0[j] = alscp0[j]/i
        if fc <= 1:
            ans0 = ans0*i

ans1 = 1
alscp1 = copy.deepcopy(als)
tmp = als[1]
for i in range(2, tmp+1):
    while alscp1[1]%i == 0 and alscp1[1]/i > 0:
        fc = 0
        for j in range(n):
            if alscp1[j]%i != 0 or alscp1[j]/i == 0:
                if fc == 0:
                    fc += 1
                else:
                    fc += 1
            else:
                alscp1[j] = alscp1[j]/i
        if fc <= 1:
            ans1 = ans1*i

ans = ans0 * ans1 / math.gcd(ans0, ans1)

print(int(ans))
