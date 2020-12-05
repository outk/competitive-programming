import sys
from collections import deque

readline = sys.stdin.readline

def main():
    n = int(readline())
    t = readline().strip("\n")

    if n == 1:
        if t == "0":
            print(int(10e9))
            exit(0)
        else:
            print(int(20e9))
            exit(0)
    elif n == 2:
        if t == "11":
            print(int(10e9))
            exit(0)
        elif t == "10":
            print(int(10e9))
            exit(0)
        elif t == "01":
            print(int(10e9)-1)
            exit(0)
        else:
            print(0)
            exit(0)
    elif n >= 3:
        s = deque()
        for _ in range((2*n+2)//3):
            s.append("1")
            s.append("1")
            s.append("0")

        offset = 0

        for i in range(3):
            issame = False
            for j in range(n):
                if s[i+j] != t[j]:
                    issame = False
                    break
                issame = True
            if issame:
                offset = i
                break
        
        if issame:
            ans = int(10e9) - (n-(3-offset))//3 - (2+(n-(3-offset))%3)//3
        else:
            ans = 0
        print(ans)
    

if __name__ == "__main__":
    main()