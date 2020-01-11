t = int(input())

def max_subarray(arr):
    max_ending = max_current = arr[0]
    for i in arr[1:]:
        max_ending = max(i, max_ending + i)
        max_current = max(max_current, max_ending)
    return max_current

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    adel = max(max_subarray(a[1:]), max_subarray(a[:n-1]))
    yasser = sum(a)
    if yasser > adel:
        print("YES")
    else:
        print("NO")