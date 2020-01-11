n, k = map(int, input().split())
a = list(map(int, input().split()))
mod = 10**9 + 7
ans = 0
fflag = 0
bflag = 0

for i in range(n):
    for j in range(n):
        if i > j:
            if a[i] > a[j]:
                fflag += 1
        if i < j:
            if a[i] > a[j]:
                bflag += 1

ans = (int((fflag+bflag)*k*(k+1)/2) - fflag*k)%mod
print(ans)