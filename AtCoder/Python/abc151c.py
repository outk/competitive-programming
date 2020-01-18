n,m = map(int, input().split())
acls = [False]*n
acs = 0
was = 0
for _ in range(m):
    p,s = input().split()
    p = int(p)
    if acls[p-1] == False:
        if s == "AC":
            acs += 1
            acls[p-1] = True
        else:
            was += 1
print(acs, was)