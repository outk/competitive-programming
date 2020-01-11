import sys
input = sys.stdin.readline

def main():
    n,k = map(int, input().split())
    ans = 0
    for b in range(k+1, n+1):
        c = 0
        a = k+c*b
        while a <= n:
            if a != 0:
                if a+b-k <= n:
                    ans += b-k
                else:
                    ans += n-a+1
            else:
                if a+b-k <= n:
                    ans += b-k-1
                else:
                    ans += n-a
            c += 1
            a = k+c*b
    print(ans)

if __name__ == "__main__":
    main()