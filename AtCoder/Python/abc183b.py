import sys

readline = sys.stdin.readline

def main():
    sx, sy, gx, gy = map(float, readline().split())
    gy = -gy
    a = (gy-sy)/(gx-sx)
    b = sy-a*sx
    ans = -b/a
    print(ans)
    
    

if __name__ == "__main__":
    main()