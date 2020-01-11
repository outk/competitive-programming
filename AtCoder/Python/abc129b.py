n = int(input())
w = list(map(int, input().split()))

min = 1000000
ans = 0

s1 = 0
s2 = sum(w)

for i in range(n):

    s1 += w[i]
    s2 -= w[i]

    if abs(s2-s1) < min:
        ans = abs(s2-s1)
        min = abs(s2-s1)

print(ans)