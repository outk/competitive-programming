t = int(input())

for _ in range(t):
    n = int(input())
    als = list(map(int, input().split()))

    ansls = [0 for _ in range(n)]

    for i in range(n//2):
        ansls[2*i] = -1 * als[2*i+1]
        ansls[2*i+1] = als[2*i] 
    print(" ".join(map(str, ansls)))