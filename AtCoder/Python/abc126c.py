import math

n,k = map(int, input().split())

ans = 0.0000000000

if n <= k:

    for i in range(1,n+1):
        a = k//int(i)
        ex = int(math.log2(float(a)) + 1
        ans = ans + (1.0000000000/float(n))*(0.5000000000**float(ex))

    print(ans)

else:

    for i in range(1,k):
        a = k//int(i)
        ex = int(math.log2(float(a)) + 1
        ans = ans + (1.0000000000/float(n))*(0.5000000000**float(ex))
    
    ans = ans + float(n-k+1)/float(n)
    print(ans)
