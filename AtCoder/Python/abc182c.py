nls = list(map(int, list(input())))

nlssum = sum(nls)

ans = -1

if nlssum%3 == 0:
    print(0)
    exit(0)
elif nlssum%3 == 1:
    for i in range(len(nls)):
        if nls[i]%3 == 1:
            if len(nls) > 1:
                print(1)
                exit(0)
    c = 0
    for i in range(len(nls)):
        if nls[i]%3 == 2:
            c += 1
            if c >= 2 and len(nls) > c:
                print(2)
                exit(0)
    print(-1)
elif nlssum%3 == 2:
    for i in range(len(nls)):
        if nls[i]%3 == 2:
            if len(nls) > 1:
                print(1)
                exit(0)
    c = 0
    for i in range(len(nls)):
        if nls[i]%3 == 1:
            c += 1
            if c >= 2 and len(nls) > c:
                print(2)
                exit(0)
    print(-1)

        




