import sys

readline = sys.stdin.readline

n, k = map(int, readline().split())
s = list(readline().strip("\n"))

for i in range(n):
    if s[i] == "R":
        s[i] = 0
    elif s[i] == "S":
        s[i] = 1
    else:
        s[i] = 2

ansls = ["R", "S", "P"]

def main():
    print()

    
def winner(kk, l, r):
    if kk == 1:
        while 
        return 

    left = winner()
    right = winner()
    return 


if __name__ == "__main__":
    main()