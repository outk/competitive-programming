import sys

readline = sys.stdin.readline

t = int(readline())

for _ in range(t):
    n, q = map(int, readline().split())

    s = list(readline().strip("\n"))
    # print(s)

    for i in range(q):
        l, r = map(int, readline().split())

        l -= 1
        r -= 1

        if l > 0:
            if s[l] in set(s[:l]):
                print("YES")
                continue

        if r < n-1:
            if s[r] in set(s[r+1:]):
                print("YES")
                continue

        print("NO")