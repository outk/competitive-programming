n, x = map(int,input().split())
s = list(input())

ans = x

for i in range(n):
    if s[i] == "x":
        if ans:
            ans -= 1
    elif s[i] == "o":
        ans += 1

print(ans)