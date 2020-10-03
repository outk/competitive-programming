n = int(input())
a = list(map(int, input().split()))

for i in range(n):
    key = a[i]
    j = i - 1
    
    while j >= 0 and a[j] > key:
        a[j+1] = a[j]
        j -= 1
    a[j+1] = key
    astr = [str(x) for x in a]
    ans = ' '.join(astr)
    print(ans)
