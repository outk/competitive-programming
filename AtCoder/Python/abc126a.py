n,k = map(int, input().split())
s = input()
slis = [s[i] for i in range(n)]

ans = ""

if slis[k-1] == "A":
    slis[k-1] = "a"
elif slis[k-1] == "B":
    slis[k-1] = "b"
elif slis[k-1] == "C":
    slis[k-1] = "c"

for i in range(n):
    ans += slis[i]

print(ans)