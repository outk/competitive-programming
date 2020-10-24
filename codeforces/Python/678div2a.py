t = int(input())

for _ in range(t):
    n, m = map(int, input().split())

    als = list(map(int, input().split()))

    if sum(als) == m:
        print("YES")
    else:
        print("NO")