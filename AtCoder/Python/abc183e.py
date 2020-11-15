import sys
from collections import deque

readline = sys.stdin.readline

mod = int(1e9+7)

facls = [1 for _ in range(1, 2001)]

for i in range(1, len(facls)):
    facls[i] = facls[i-1]*(i+1)
    facls[i] %= mod

def main():
    h, w = map(int, readline().split())

    maps = [list(readline().strip("\n")) for _ in range(h)]

    ans = 1

    for i in range(h):
        for j in range(w):
            




if __name__ == "__main__":
    main()