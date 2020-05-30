h1, m1, h2, m2, k = map(int, input().split())

ans = 60*h2 + m2 - k - 60*h1 - m1

print(int(ans))