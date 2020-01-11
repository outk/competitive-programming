def main():
    n = int(input())
    a = list(map(int, input().split()))
    inf = 1e9+7
    ansls = [inf]*n
    ansls[0] = 0
    ansls[1] = abs(a[0]-a[1])
    i = 2
    while i < n:
        if  ansls[i-1]+abs(a[i-1]-a[i]) < ansls[i-2]+abs(a[i-2]-a[i]):
            ansls[i] = ansls[i-1]+abs(a[i-1]-a[i])
        else:
            ansls[i] = ansls[i-2]+abs(a[i-2]-a[i])
        i += 1 

    print(ansls[-1])

if __name__ == "__main__":
    main()