q = int(input())

for _ in range(q):
    n,m = map(int, input().split())
    ls = []
    for i in range(n):
        t, l, h = map(int, input().split())
        ls.append((t,l,h))
    ls.sort(key=lambda x: x[0])

    nt = 0
    nh = m
    nl = m

    ans = "YES"
    
    for p in ls:
        if nh+(p[0]-nt) > p[2]:
            nh = p[2]
        else:
            if nh+(p[0]-nt) >= p[1]:
                nh = nh+(p[0]-nt)
            else:
                ans = "NO"
                break
        if nl - (p[0]-nt) < p[1]:
            nl = p[1]
        else:
            if nl - (p[0]-nt) <= p[2]:
                nl = nl - (p[0]-nt)
            else:
                ans = "NO"
                break
        nt = p[0]
    
    print(ans)