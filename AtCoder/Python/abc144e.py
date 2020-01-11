def main():
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    f = list(map(int, input().split()))

    a.sort()
    f.sort(reverse=True)

    flag = 0

    ls = [ x*y for (x, y) in zip(a, f)]
    ls = [[ls[i], i] for i in range(n)]

    ls.sort(reverse=True)

    suma = sum(a)

    while k != 0:
        if k < suma:
            k -= 1
            a[ls[0][1]] -= 1
            ls[ls[0][1]] = int(ls[int(ls[0][1])]) - int(f[int(ls[0][1])])
            ls.sort(reverse=True)
        else:
            flag = 1
            break
    
    if flag == 1:
        ans = 0
    else:
        ans = ls[0][0]

    print(ans)

if __name__ == "__main__":
    main()