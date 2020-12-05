import sys
from collections import deque

readline = sys.stdin.readline

def main():
    n = int(readline())
    p = list(map(int, readline().strip("\n").split()))

    pd = [0 for _ in range(n)]

    for i in range(n):
        pd[i] = p[i]-1 - i
    
    ans = deque()
    als = deque()
    aals = deque()
    lc = 0
    rc = 0
    now = -1
    for i in range(n):
        if pd[i] == 0:
            if lc != rc:
                print(-1)
                exit(0)
            als = sorted(als)
            for a in als:
                if now < a[1]:
                    for j in range(abs(a[2])):
                        ans.append(a[1]-j)
                    now = a[1]
            now = i
            als = deque()
            lc = 0
            rc = 0
            aals.append((p[i], i, pd[i]))
            
        else:
            if pd[i] > 0:
                rc += pd[i]
            else:
                lc -= pd[i]
            als.append((p[i], i, pd[i]))
            aals.append((p[i], i, pd[i]))

    for ai in range(n):
        if aals[ai][2] < 0:
            for i in range(abs(aals[ai][2])-1):
                if aals[ai-i-1][2] <= 0:
                    print(-1)
                    exit(0)
        elif aals[ai][2] > 0:
            for i in range(abs(aals[ai][2])-1):
                if aals[ai+i+1][2] >= 0:
                    print(-1)
                    exit(0)

    if lc != rc:
        print(-1)
        exit(0)
    als = sorted(als)
    for a in als:
        if now < a[1]:
            for j in range(abs(a[2])):
                ans.append(a[1]-j)
            now = a[1]
            
    for a in ans:
        print(a)



if __name__ == "__main__":
    main()