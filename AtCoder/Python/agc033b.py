h,w,n=map(int,input().split())
sr,sc=map(int,input().split())
s=input()
t=input()

farr=w-sc+1
farl=sc
faru=sr
fard=h-sr+1

src=0
slc=0
suc=0
sdc=0

trc=0
tlc=0
tuc=0
tdc=0

ans = "YES"

while True:

    if s[1] == "R":
        src += 1

    if s[1] == "L":
        slc += 1

    if s[1] == "U":
        suc += 1

    if s[1] == "D":
        sdc += 1

    if src >= farr:
        ans = "NO"
        break

    if slc >= farl:
        ans = "NO"
        break

    if suc >= faru:
        ans = "NO"
        break

    if sdc >= fard:
        ans = "NO"
        break

    for i in range(n-1):

        if s[i+1] == "R":
            src += 1

        if s[i+1] == "L":
            slc += 1

        if s[i+1] == "U":
            suc += 1

        if s[i+1] == "D":
            sdc += 1

        if t[i] == "R":
            trc += 1

        if t[i] == "L":
            tlc += 1

        if t[i] == "U":
            tuc += 1

        if t[i] == "D":
            tdc += 1

        if src-tlc >= farr:
            ans = "NO"
            break

        if slc-trc >= farl:
            ans = "NO"
            break

        if suc-tdc >= faru:
            ans = "NO"
            break

        if sdc-tuc >= fard:
            ans = "NO"
            break

    break

print(ans)