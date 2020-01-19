n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

ab = []
for i in range(n):
    ab.append(tuple(a[i], b[i]))



