s = input()

ans = 0
i = 0

while i < len(s)-1:
    if s[i] != s[i+1]:
        ans += 1
        i += 1
    else:
        if i+3 <= len(s)-1:    
            ans += 2
            i += 3
        elif i+2 == len(s)-1:
            ans += 1
            i += 2
        elif i+1 == len(s)-1:
            ans += 1
            i += 2
            
if i == len(s)-1:
    ans += 1
            
print(ans)