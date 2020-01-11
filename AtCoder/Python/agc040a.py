s = input()
n = len(s)+1
ans = 0
ls = [0]*n

tmp = 0

for i in range(n-1):
    if s[i] == "<":
        if i < n-2:
            if s[i+1] == "<":
                    tmp += 1
                    ans += tmp
            else:
                tmp += 1
                ans += tmp
                ls[i+1] = tmp
                tmp = 0
        else:
            tmp += 1
            ans += tmp
    else:
        tmp = 0
tmp = 0

for i in range(n-1):
    if s[n-i-2] == ">":
        if n-i-2 > 0:
            if s[n-i-3] == ">":
                tmp += 1
                ans += tmp
            else:
                tmp += 1
                if ls[n-i-2] < tmp:
                    ans += tmp - ls[n-i-2]
                tmp = 0
        else:
            tmp += 1
            ans += tmp

print(ans)