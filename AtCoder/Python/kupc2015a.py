t = int(input())
for i in range(t):
    s = input()
    j = 0
    ans = 0
    while j < len(s)-4:
        if s[j:j+5] == "tokyo":
            ans += 1
            j += 5
        elif s[j:j+5] == "kyoto":
            ans += 1
            j += 5
        else:
            j += 1
    print(ans)


