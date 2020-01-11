n,a,b,c,d = map(int, input().split())
s = input()

flag3 = 0
flagno = 0

if c > d:

    for i in range(a,c-3):

        if s[i:i+2] == "##":
            flagno += 1
            break

    if flagno == 0:

        for i in range(b,d):
        
            if s[i-2:i+1] == "...":
                flag3 += 1
                break
    
    if flagno == 0 and flag3 > 0:
        print("Yes")

    else:
        print("No")

else:

    if c-a <= 2:
        flagno = 0
    else:
        for i in range(a,c-3):

            if s[i:i+2] == "##":
                flagno += 1
                break

    if d-b <= 2:
        flagno = 0
    else:
        for i in range(b,d-3):

            if s[i:i+2] == "##":
                flagno += 1
                break
        
    if flagno == 0:
        print("Yes")

    else:
        print("No")

