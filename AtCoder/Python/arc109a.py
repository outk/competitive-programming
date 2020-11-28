import sys

readline = sys.stdin.readline

def main():
    a, b, x, y = map(int, input().split())

    if a == b:
        print(x)
    elif a > b:
        print(min(x+abs(a-b-1)*y, x*abs(2*abs(a-b)-1)))
    else:
        print(min(x+abs(a-b)*y, x*abs(2*(abs(a-b)+1)-1)))


if __name__ == "__main__":
    main()