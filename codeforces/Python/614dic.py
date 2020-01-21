import sys
input = sys.stdin.readline

n, q = map(int, input().split())

obstacles = [[False for _ in range(n)] for _ in range(2)]

neck = set([])

for i in range(q):
    r,c = map(int, input().split())
    obstacles[r-1][c-1] ^= True

    if obstacles[r-1][c-1]:
        if r == 2:
            if c > 1:
                if c-1 != 1:
                    if obstacles[0][c-2]:
                        neck.add((c-1, n+c))
                if obstacles[0][c-1]:
                    neck.add((c, n+c))
                if obstacles[0][c]:
                    neck.add((c+1, n+c))
            else:
                if obstacles[0][1]:
                    neck.add((2, n+1))
        else:
            if c < n:
                if c+1 != n:
                    if obstacles[1][c]:
                        neck.add((c, n+c+1))
                if obstacles[1][c-1]:
                    neck.add((c, n+c))
                if obstacles[1][c-2]:
                    neck.add((c, n+c-1))
            else:
                if obstacles[1][n-2]:
                    neck.add((n, 2*n-1))
    else:
        if r == 1:
            if (c, n+c-1) in neck:
                neck.remove((c, n+c-1))
            if (c, n+c) in neck:
                neck.remove((c, n+c))
            if (c, n+c+1) in neck:
                neck.remove((c, n+c+1))
        else:
            if (c-1, n+c) in neck:
                neck.remove((c-1, n+c))
            if (c, n+c) in neck:
                neck.remove((c, n+c))
            if (c+1, n+c) in neck:
                neck.remove((c+1, n+c)) 

    if len(neck):
        print("No")
    else:
        print("Yes") 