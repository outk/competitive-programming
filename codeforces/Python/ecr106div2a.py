t = int(input())

for _ in range(t):
    n, k1, k2 = map(int, input().split())
    w, b = map(int, input().split())

    if k1+k2 < 2*w:
        print("NO")
        continue

    if 2*n - (k1+k2) < 2*b:
        print("NO")
        continue

    print("YES")
    
