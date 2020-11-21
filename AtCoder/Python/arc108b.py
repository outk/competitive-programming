import sys
from collections import deque

readline = sys.stdin.readline

def main():
    print(0)
    
    n = int(readline())

    s = readline().strip("\n")

    ans = n

    usedls = [0 for _ in range(n)]

    tmpans = 1
    stack = deque()
    nxtstack = deque()

    for j in range(n):
        if s[j] == "o":
            nxtstack.append(j)

    while tmpans:
        tmpans = 0
        stack = nxtstack
        nxtstack = deque()
        while stack:
            i = stack.pop()
            if not usedls[i]:
                left = i-1
                right = i+1
                while left >= 0:
                    if usedls[left]:
                        left -= 1
                        continue
                    break
                while right < n:
                    if usedls[right]:
                        right += 1
                        continue
                    break
                if left < 0 or right >= n:
                    continue

                if s[left] != "f":
                    nxtstack.append(i)
                    continue
                if s[right] != "x":
                    nxtstack.append(i)
                    continue
                usedls[left] = 1
                usedls[right] = 1
                usedls[i] = 1
                tmpans += 3
        ans -= tmpans

    # print(usedls)
    return ans

                        
    
if __name__ == "__main__":
    ans = main()
    sys.stdout.write("\033[2K\033[G%d" % ans)
    sys.stdout.flush()