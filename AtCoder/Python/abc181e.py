import bisect
from sys import stdin

readline = stdin.readline

def main():

    n, m = map(int, readline().split())

    hls = list(map(int, readline().split()))
    wls = list(map(int, readline().split()))

    hls = sorted(hls)
    wls = sorted(wls)

    leftls = [0 for _ in range(n//2)]
    rightls = [0 for _ in range(n//2)]

    for i in range(n//2):
        leftls[i] = abs(hls[2*i] - hls[2*i+1])
        rightls[i] = abs(hls[2*i+1] - hls[2*i + 2])
    for i in range(1, n//2):
        leftls[i] += leftls[i-1]
        rightls[n//2 - 1 - i] += rightls[n//2 - i] 

    ind = bisect.bisect_left(hls, wls[0])
    ans = abs(hls[(ind//2)*2] - wls[0])
    if ind//2 - 1 >= 0:
        ans += leftls[ind//2 - 1]
    if n//2 - (n-ind)//2 < n//2:
        ans += rightls[n//2 - (n-ind)//2]
        

    for i in range(1, m):
        ind = bisect.bisect_left(hls, wls[i])
        tmpans = abs(hls[(ind//2)*2] - wls[i])
        if ind//2 - 1 >= 0:
            tmpans += leftls[ind//2 - 1]
        if n//2 - (n-ind)//2 < n//2:
            tmpans += rightls[n//2 - (n-ind)//2]
        if ans > tmpans:
            ans = tmpans
        

    print(ans)

if __name__ == "__main__":
    main()
