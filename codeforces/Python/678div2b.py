t = int(input())

for _ in range(t):
    n = int(input())

    k = n-1

    isPrime = False

    while not isPrime:
        k += 1
        for i in range(2, k):
            if k%i == 0 and k/i > 0:
                break
            if i == k-1:
                isPrime = True
        if isPrime:
            found = False
            for i in range(2, k-n+1):
                if (k-n+1)%i == 0 and (k-n+1)/i > 0:
                    found = True
                    break
            if found:
                break
            else:
                isPrime = False

    p = k-n+1

    ansrow = [1 for _ in range(n-1)]
    ansrow.append(p)

    for i in range(n):
        print(" ".join(map(str, ansrow[n-i-1:] + ansrow[:n-i-1])))