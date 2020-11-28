import sys
import math

readline = sys.stdin.readline

def main():
    n = int(readline())

    left = 0
    right = n
    while left <= right:
        middle = (left+right)//2
        if middle*(middle+1)//2 > n+1:
            right = middle-1
        else:
            left = middle+1
    
    if n == 2:
        print(1)
    else:
        print(n-(left+right)//2+1)

if __name__ == "__main__":
    main()