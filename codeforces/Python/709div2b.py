t = int(input())

for _ in range(t):
    n = int(input())
    ls = list(map(int, input().split()))


    if n == 1:
        print(0)
        continue
    if n == 2:      
        print(0)
        continue
        

    c = -1
    m = -1

    if ls[0] < ls[1]:
        c = ls[1] - ls[0]
        endinc = True
        for i in range(1, n):
            if ls[i-1] > ls[i]:
                endinc = False
                break
        if endinc:
            diff = ls[1] - ls[0]
            diffeq = True
            for i in range(1, n):
                if ls[i] - ls[i-1] != diff:
                    diffeq = False
                    break
            if diffeq:
                print(0)
                continue
            else:
                print(-1)
                continue
        
        for i in range(2, n):
            if ls[i-1] > ls[i]:
                m = c - ls[i] + ls[i-1]
    else:
        enddec = True
        for i in range(1, n):
            if ls[i-1] < ls[i]:
                enddec = False
                break
        if enddec:
            diff = ls[0] - ls[1]
            diffeq = True
            for i in range(1, n):
                if ls[i-1] - ls[i] != diff:
                    diffeq = False
                    break
            if diffeq:
                print(0)
                continue
            else:
                print(-1)
                continue
        for i in range(2, n):
            if ls[i-1] <= ls[i]:
                c = ls[i] - ls[i-1]
                break
        m = c - ls[1] + ls[0]

    failed = False
    for i in range(1, n):
        if c >= m or (ls[i-1]+c)%m != ls[i] or m <= ls[0]:
            failed = True
    
    if failed:
        print(-1)
    else:
        print(m, c)


    