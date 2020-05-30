t = list(input())

if t[len(t)-1] == "?":
    t[len(t)-1] = "D"

if t[0] == "?":
    if len(t) > 2:
        if t[1] == "P":
            t[0] = "D"
        else:
            t[0] = "P"
    else:
        t[0] = "D"

for i in range(len(t)-2):
    if t[len(t)-2-i] == "?":
        if t[len(t)-1-i] == "P":
            t[len(t)-2-i] = "D"
        else:
            if t[len(t)-3-i] == "?" or t[len(t)-3-i] == "D":
                t[len(t)-2-i] = "P"
            else:
                t[len(t)-2-i] = "D"

ans = ""

for i in range(len(t)):
    ans += t[i]

print(ans)