import re

t = int(input())

for _ in range(t):
    s = input()

    found11 = False
    ind = 0
    while ind < len(s)-3:
        if s[ind:ind+2] == "11":
            found11 = True
            ind += 2
            break
        ind += 1

    found00 = False
    if found11:
        while ind < len(s):
            if s[ind:ind+2] == "00":
                found00 = True
                break
            ind += 1
            
    if found00:
        print("NO")
    else:
        print("YES")
