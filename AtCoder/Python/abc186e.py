import sys
readline = sys.stdin.readline

def main():
    t = int(readline())
    for _ in range(t):
        n, s, k = map(int, readline().split())

        mod = k%n
        g = n-mod
        c = n//k if n >= k else 1
        w = n - c*k if n >= k else n-k%n
        wnmod = n%w

        if s%w == 0 and s/w > 0:
            print(c*s/w)
            return
        
        minsw = min(s, w)
        maxsw = max(s, w)
        r = maxsw%mi
        while r > 0:
            minsw = r
            maxsw = minsw
            r = maxsw%minsw
        
        gcd = minsw

        

if __name__ == "__main__":
    main()