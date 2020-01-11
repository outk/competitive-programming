s = input()
t = input()

ans = "UNRESTORABLE"

i = 0

while i < len(s)-len(t)+1:
    if s[i] == t[0] or s[i] == "?":
        flag = True
        for j in range(1,len(t)):
            if s[i+j] == "?" or s[i+j] == t[j]:
                continue
            else:
                flag = False
                break
        if flag:
            tmps = ""
            k = 0
            while k < len(s):
                if k < i or k >= i+len(t):
                    if s[k] == "?":
                        tmps += "a"
                        k += 1
                    else:
                        tmps += s[k]
                        k += 1
                else:
                    tmps += t
                    k += len(t)
            ans = tmps
    i += 1

print(ans)

