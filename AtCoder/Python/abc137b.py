k, x = map(int, input().split())

l = x-k+1
r = x+k-1

ans = []
a = ""

if l < -1000000:
    l = -1000000
if r > 1000000:
    r = 1000000
for i in range(l,r+1):
    ans.append(i)
for i in range(len(ans)):
    a += " " + str(ans[i])
print(a)