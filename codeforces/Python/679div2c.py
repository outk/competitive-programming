from sys import stdin
import bisect

def main():
    readline = stdin.readline

    als = list(map(int, readline().split()))

    n = int(readline())

    bls = list(map(int, readline().split()))

    ls = [[-1 for _ in range(6)] for _ in range(n)]

    for i in range(6):
        for j in range(n):
            ls[j][i] = bls[j] - als[i]
    
    for i in range(n):
        ls[i] = sorted(ls[i])
    # print(ls)

    ans = 1000000002

    for i in range(6):
        minv = ls[0][i]
        maxv = ls[0][i]
        for j in range(1, n):
            ind = bisect.bisect_left(ls[j], ls[0][i])
            if ind == 0:
                if maxv < ls[j][ind]:
                    maxv = ls[j][ind]
            elif ind == 6:
                if minv > ls[j][ind-1]:
                    minv = ls[j][ind-1]
            else:
                if ls[0][i] != ls[j][ind]:
                    if ls[j][ind-1] - ls[0][i] < ls[0][i] - ls[j][ind-1]:
                        if minv > ls[j][ind-1]:
                            minv = ls[j][ind-1]
                    else:
                        if maxv < ls[j][ind]:
                            maxv = ls[j][ind]
            # print(minv, maxv)
    
        if maxv - minv < ans:
            ans = maxv - minv

    print(ans)

if __name__ == "__main__":
    main()