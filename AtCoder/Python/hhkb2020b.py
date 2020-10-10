h, w = map(int, input().split())

sls = [list(input()) for _ in range(h)]

ans = 0

for i in range(h):
    for j in range(w-1):
        if sls[i][j] == "." and sls[i][j+1] == ".":
            ans += 1

for j in range(w):
    for i in range(h-1):
        if sls[i][j] == "." and sls[i+1][j] == ".":
            ans += 1

print(ans)