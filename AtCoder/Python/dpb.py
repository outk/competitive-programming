n, k = map(int, input().split())
hls = list(map(int, input().split()))

costls = [0 for _ in range(n)]

for i in range(1, n):
    minimumcost = costls[i-1] + abs(hls[i] - hls[i-1])
    
    t = 1
    while t <= k and i-t >= 0:
        if minimumcost >= costls[i-t] + abs(hls[i] - hls[i-t]):
            costls[i] = costls[i-t] + abs(hls[i] - hls[i-t])
            minimumcost = costls[i-t] + abs(hls[i] - hls[i-t])
        
        t += 1

print(costls[n-1])