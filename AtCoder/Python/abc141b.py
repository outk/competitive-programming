s = input()

ans = "Yes"

for i in range(len(s)):
    if i%2 == 0:
        if s[i] == "L":
            ans = "No"
            break
    else:
        if s[i] == "R":
            ans = "No"
            break
print(ans)