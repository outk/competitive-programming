import sys
import itertools

readline = sys.stdin.readline

def main():
    n, k = map(int, readline().split())

    tls = [list(map(int, readline().split())) for _ in range(n)]

    comb = [i for i in range(1, n)]

    combs = list(itertools.permutations(comb))

    ans = 0

    for cm in combs:
        tmpk = tls[0][cm[0]] 
        for j in range(n-2):
            tmpk += tls[cm[j]][cm[j+1]]
        if tmpk + tls[0][cm[-1]] == k:
            ans += 1

    print(ans)

if __name__ == "__main__":
    main()
