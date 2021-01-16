global mod
mod = 998244353

def main():
    h,w,k = map(int, input().split())
    h -= 1
    w -= 1

    m = [list(["" for _ in range(w+1)]) for _ in range(h+1)]

    for _ in range(k):
        hi,wi,ci = input().split()
        hi = int(hi)-1
        wi = int(wi)-1
        m[hi][wi] = ci

    ans = dp(h,w,h,w,m)

    print(ans)

    
def dp(h, w, nh, nw, m):
    if nh == 0 and nw == 0:
        if m[nh][nw] == "":
            return 2
        else:
            return 1
    
    if nh == 0:
        if m[nh][nw-1] == "":
            return 2*dp(h,w,nh,nw-1,m)%mod
        elif m[nh][nw-1] == "R" or m[nh][nw-1] == "X":
            return dp(h,w,nh,nw-1,m)%mod
        else:
            return 0

    if nw == 0:
        if m[nh-1][nw] == "":
            return 2*dp(h,w,nh-1,nw,m)%mod
        elif m[nh-1][nw] == "D" or m[nh-1][nw] == "X":
            return dp(h,w,nh-1,nw,m)%mod
        else:
            return 0

    if m[nh-1][nw] == "" and m[nh][nw-1] == "":
        return (2*dp(h,w,nh-1,nw,m)%mod + 2*dp(h,w,nh,nw-1,m)%mod)%mod
    elif m[nh-1][nw] == "" and (m[nh][nw-1] == "R" or m[nh][nw-1] == "X"):
        return (2*dp(h,w,nh-1,nw,m)%mod + dp(h,w,nh,nw-1,m)%mod)%mod
    elif m[nh-1][nw] == "" and m[nh][nw-1] == "D":
        return 2*dp(h,w,nh-1,nw,m)%mod
    elif (m[nh-1][nw] == "D" or m[nh-1][nw] == "X") and m[nh][nw-1] == "":
        return (dp(h,w,nh-1,nw,m)%mod + 2*dp(h,w,nh,nw-1,m)%mod)%mod
    elif m[nh-1][nw] == "R" and m[nh][nw-1] == "":
        return 2*dp(h,w,nh,nw-1,m)%mod
    elif (m[nh-1][nw] == "D" or m[nh-1][nw] == "X") and (m[nh][nw-1] == "R" or m[nh][nw-1] == "X"):
        return (dp(h,w,nh,nw-1,m) + dp(h,w,nh-1,nw,m))%mod
    elif (m[nh-1][nw] == "D" or m[nh-1][nw] == "X") and m[nh][nw-1] == "D":
        return dp(h,w,nh-1,nw,m)
    elif m[nh-1][nw] == "R" and (m[nh][nw-1] == "R" or m[nh][nw-1] == "X"):
        return dp(h,w,nh,nw-1,m)
    else:
        return 0

if __name__ == "__main__":
    main()

