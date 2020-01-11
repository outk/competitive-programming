n = int(input())
h = list(map(int, input().split()))

ans = "Yes"
max = h[0]

for i in range(n):
    if h[i] < max-1:
        ans = "No"
    if h[i] > max:
        max = h[i]
    

print(ans)
