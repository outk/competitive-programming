import sys

n = int(input())
B = input()
B = B.split()
a = []

for i in range(n):
    a.append(0)
    if int(B[i]) > i+1:
        print(-1)
        sys.exit()
        
for i in


for i in range(n):
    print(a[i])

