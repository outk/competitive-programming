def main():
    n = int(input())

    ans = 2000000000000
    a = 1 + int(n**0.5)

    for i in range(1,a):
        if n%i == 0:
            if ans > i + (n//i):
                ans = i +(n//i)

    ans -= 2
    print(ans)

if __name__ == "__main__":
    main()