import sys
input = sys.stdin.readline

def main():
    x,y = map(int, input().split())
    ans = "Brown"
    if abs(x-y) > 1:
        ans = "Alice"
    print(ans)


if __name__ == "__main__":
    main()