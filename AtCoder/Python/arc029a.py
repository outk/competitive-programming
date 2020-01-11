import sys
input = sys.stdin.readline

def main():
    n = int(input())
    t = [int(input()) for _ in range(n)]
    t.sort(reverse=True)
    a = 0
    b = 0
    for i in range(n):
        if a > b:
            b += t[i]
        else:
            a += t[i]
    ans = max(a,b)
    print(ans)


if __name__ == "__main__":
    main()