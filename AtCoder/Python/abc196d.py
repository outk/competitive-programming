h, w, a, b = map(int, input().split())

m = [[0 for _ in range(w)] for _ in range(h)]

ans = 0

def f(nh, nw, arest, ans):
    # print(m)
    # print(nh, nw)
    if arest == 0:
        return ans + 1
    
    if nw >= w:
        ans = f(nh+1, 0, arest, ans)
    if nh >= h:
        return ans

    if nw < w-1 and nh < h and arest:
        if m[nh][nw] == 0 and m[nh][nw+1] == 0:
            m[nh][nw] = 1
            m[nh][nw+1] = 1
            ans = f(nh, nw+2, arest-1, ans)
            m[nh][nw] = 0
            m[nh][nw+1] = 0
        else:
            ans = f(nh, nw+1, arest, ans)
    
    if nh < h-1 and nw < w and arest:
        if m[nh][nw] == 0 and m[nh+1][nw] == 0:
            m[nh][nw] = 1
            m[nh+1][nw] = 1
            ans = f(nh, nw+1, arest-1, ans)
            m[nh][nw] = 0
            m[nh+1][nw] = 0
        else:
            ans = f(nh, nw+1, arest, ans)

    return ans

for hi in range(h):
    for wi in range(w):
        ans = f(hi, wi, a, ans)
        # print(ans)
print(ans)