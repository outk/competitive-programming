def main():
    n, m = map(int, input().split())
    a = list(map(int, input().split()))

    a = sorted(a)

    ans = 0

    for i in range(m):
        

    ans = sum(a)
    print(ans)

if __name__=="__main__":
    main()