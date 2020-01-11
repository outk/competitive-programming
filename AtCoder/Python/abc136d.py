s = input()
a = ""

ans = [0]*len(s)

ls = []

rflag = 0
lflag = 1

for i in range(1,len(s)):
    if s[i] == "L":
        ans[i-1] += lflag
        ans[i] += rflag
        rflag, lflag = 0, 0
    else:
        rflag, lflag = lflag, rflag
        lflag += 1

rflag = 1
lflag = 0

for i in range(1,len(s)):
    if s[len(s)-i-1] == "R":
        ans[len(s)-i-1] += lflag
        ans[len(s)-i] += rflag
        rflag, lflag = 0, 0
    else:
        rflag, lflag = lflag, rflag
        rflag += 1

for i in range(len(s)):
    a += str(ans[i]) + " "

print(a)