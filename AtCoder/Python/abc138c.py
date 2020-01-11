n = int(input())
v = list(map(float, input().split()))

v.sort()

ans = 0.0
vk = 0.0

for i in range(n-1):
    vk = (v[i] + v[i+1])/2.0
    v[i+1] = vk
ans = v[n-1]

print(ans)