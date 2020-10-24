n, m = map(int, input().split())

if m < 0 or n < m+2:
    if n == 1 and m == 0:
        print(1, 2)
    else:
        print(-1)
        exit(0)
elif m == 0:
    for i in range(n):
        print(2*i+1, 2*i+2)
else:
    print(1, 2*m+4)
    for i in range(1, m+2):
        print(2*i, 2*i+1)


    for i in range(n-m-2):
        print(2*m+5+2*i, 2*m+6+2*i)