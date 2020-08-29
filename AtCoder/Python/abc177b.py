t = list(input())
s = list(input())

ans = 10000

for i in range(len(t)-len(s)+1):
    tmpans = 0
    for j in range(len(s)):
        if s[j] != t[i+j]:
            tmpans += 1
    if ans > tmpans:
        ans = tmpans

print(ans)