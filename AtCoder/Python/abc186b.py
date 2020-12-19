h, w = map(int, input().split())

als = [list(map(int, input().split())) for _ in range(h)]

ans = 0
mina = als[0][0]

for i in range(h):
    ans += sum(als[i])
    if mina > min(als[i]):
        mina = min(als[i])

print(int(ans-mina*h*w))