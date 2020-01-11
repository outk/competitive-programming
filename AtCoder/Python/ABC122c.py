n,q = map(int,input().split())
s = input()
for i in range(q):
    answeri = 0
    li,ri = map(int,input().split())
    si = s[li-1:ri]
    answeri = int(si.count("AC"))
    print(answeri)
