n = int(input())
for i in range(n):
    p = int(input())
    s = input()
    ans = 0
    tmpans = 0
    flag = False
    for j in range(len(s)):
        if j < len(s)-1:
            if s[j] == "A":
                if ans < tmpans:
                    ans = tmpans
                tmpans = 0
                flag = True
            else:
                if flag:
                    tmpans += 1
        else:
            if s[j] == "P":
                if flag:
                    tmpans += 1
                if ans < tmpans:
                    ans = tmpans
                tmpans = 0
            else:
                if ans < tmpans:
                    ans = tmpans
                tmpans = 0
        
    print(ans)