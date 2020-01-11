h,w = map(int, input().split())
s = [input() for _ in range(h)]

maxw = 0
maxh = 0
maxwt = 0
maxht = 0
maxwind = 0
maxwstart = 0
maxwlast = 0
maxhind = 0
maxhstart = 0
maxhlast = 0
answ = 0
answt = 0
answtmax = 0
ansh = 0
ansht = 0
anshtmax = 0


for i in range(h):

    for j in range(w):

        if s[i][j] == ".":
            maxwt +=1
            if j == w-1:
                if maxwt > maxw:
                    maxw = maxwt
                    maxwind = i
                    maxwlast = j-1
                    maxwstart = j-maxw
                maxwt = 0
        elif s[i][j] == "#":
            if maxwt > maxw:
                maxw = maxwt
                maxwind = i
                maxwlast = j-1
                maxwstart = j-maxw
            maxwt = 0 

answ = maxw
print(answ)

for i in range(maxwstart,maxwlast+1):
    
    while s[maxwind][i] == ".":
        answt += 1 
        if 1 <= maxwind <= h-2:
            maxwind += 1
        else:
            break
    while s[maxwind][i] == ".":
        answt += 1
        if 1 <= maxwind <= h-2:
            maxwind -= 1
        else:
            break
    if answt > answtmax:
        answtmax = answt 
    answt = 0

answ += answtmax-2
print(answ)

for i in range(w):

    for j in range(h):

        if s[j][i] == ".":
            maxht +=1
            if j == h-1:
                if maxht > maxh:
                    maxh = maxht
                    maxhind = i
                    maxhlast = j-1
                    maxhstart = j-maxh
                maxht = 0
        elif s[j][i] == "#":
            if maxht > maxh:
                maxh = maxht
                maxhind = i
                maxhlast = j-1
                maxhstart = j-maxh
            maxht = 0 

ansh = maxh
print(ansh)

for i in range(maxhstart,maxhlast+1):
    
    while s[i][maxhind] == ".":
        ansht += 1 
        if 1 <= maxhind <= w-2:
            maxhind += 1
        else:
            break
    while s[i][maxhind] == ".":
        ansht += 1
        if 1 <= maxhind <= w-2:
            maxhind -= 1
        else:
            break
    if ansht > anshtmax:
        anshtmax = ansht 
    ansht = 0

ansh += anshtmax-2
print(ansh)

ans = answ
if answ < ansh:
    ans = ansh

print(ans)