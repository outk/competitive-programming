n = int(input())

lis = []

sortsecond0 = lambda val: val[0]
sortsecond1 = lambda val: val[1]

for i in range(n):
    city, point = input().split()
    point = int(point)
    lis.append([city, point, i])

lis.sort(key=sortsecond1, reverse=True)
lis.sort(key=sortsecond0)

for i in range(n):
    print(lis[i][2]+1)
