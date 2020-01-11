def main():
    n = int(input())
    a = list(map(int, input().split()))
    mod = int(10e8+7)
    ans = 0
    i = 0
    b = []
    while True:
        if i < len(a)-1:
            s = a[i]
            t = a[i+1]
            s ^= t
            b.append(s)
            ans += s%mod
            i += 1
        else:
            if len(a) > 1:
                a = b.copy()
                b.clear()
                i = 0
            else:
                ans += a[0]
                break

    ans = ans%mod
    print(ans)



if __name__ == "__main__":
    main()