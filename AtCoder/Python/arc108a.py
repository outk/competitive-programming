import sys
import math

readline = sys.stdin.readline

def main():
    s, p = map(int, readline().split())

    d = s*s - 4 * p

    if d < 0:
        return "No"

    dd = math.sqrt(d)

    if dd - int(dd) > 0:
        return "No"

    if s - dd <= 0:
        return "No"

    return "Yes"


if __name__ == "__main__":
    print(main())