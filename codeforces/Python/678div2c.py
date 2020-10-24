

if __name__ == "__main__":
 
    mod = 1000000007

    n, x, pos = map(int, input().split())

    ans = 1

    left = 0
    right = n

    toLeft = n-x
    toRight = x-1

    failed = False

    c = 0

    while left < right:
        middle = (left + right) // 2
        if middle == pos:
            left = middle + 1
            c += 1
        elif middle > pos:
            if toLeft == 0:
                failed = True
                break
            else:
                ans *= toLeft
                ans %= mod
                toLeft -= 1
                right = middle
                c += 1
        else:
            if toRight == 0:
                failed = True
                break
            else:
                ans *= toRight
                ans %= mod
                toRight -= 1
                left = middle + 1
                c += 1

    if failed:
        print(0)
    else:
        for i in range(n-c):
            ans *= (i+1)
            ans %= mod
        print(ans)