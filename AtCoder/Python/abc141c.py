n, k, q = map(int, input().split())
ls = [0]*n
for i in range(q):
    a = int(input())
    ls[a-1] += 1
for i in range(n):
    if k-q+ls[i] > 0:
        print("Yes")
    else:
        print("No")