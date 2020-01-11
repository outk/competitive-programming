n = int(input())
a = list(map(int, input().split()))

c = 0

flag = False

for i in range(n):
    if a[i] == c+1:
        c += 1
        flag = True

if flag:
    print(n-c)
else:
    print(-1)