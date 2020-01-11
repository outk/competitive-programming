def main():
    s = input()
    m = len(s)//2
    ans = 0
    if len(s)%2 == 0:
        a = s[:m]
        b = s[m:]
        for i in range(m):
            if b[i] != a[m-i-1]:
                ans += 1
        print(ans)
    else:
        a = s[:m]
        b = s[m+1:]
        for i in range(m):
            if b[i] != a[m-i-1]:
                ans += 1
        print(ans)


if __name__ == "__main__":
    main()