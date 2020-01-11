n = int(input())

res = 1000-n
ans = 0
while res//500:
    res -= 500
    ans += 1
while res//100:
    res -= 100
    ans += 1
while res//50:
    res -= 50
    ans += 1
while res//10:
    res -= 10
    ans += 1
while res//5:
    res -= 5
    ans += 1
while res//1:
    res -= 1
    ans += 1
print(ans)