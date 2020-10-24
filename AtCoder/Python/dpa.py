n = int(input())
hls = list(map(int, input().split()))

costls = [0 for _ in range(n)]

costls[1] = abs(hls[0] - hls[1])

for i in range(2, n):
    if costls[i-2] + abs(hls[i] - hls[i-2]) < costls[i-1] + abs(hls[i] - hls[i-1]):
        costls[i] = costls[i-2] + abs(hls[i] - hls[i-2])
    else:
        costls[i] = costls[i-1] + abs(hls[i] - hls[i-1])

print(costls[n-1])