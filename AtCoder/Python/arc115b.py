n = int(input())

c = [list(map(int, input().split())) for _ in range(n)]

a = [0 for _ in range(n)]
b = [0 for _ in range(n)]

mine = 1000000001
ei = -1
ej = -1

for i in range(n):
    for j in range(n):
        if mine > c[i][j]:
            mine = c[i][j]
            ei = i
            ej = j

diffam = [[c[i][j]-c[i][ej] if j != ej else 0 for j in range(n)] for i in range(n)]
diffbm = [[c[i][j]-c[ei][j] if i != ei else 0 for j in range(n)] for i in range(n)]

for i in range(1, n):
    for j in range(n):
        if diffam[i-1][j] != diffam[i][j]:
            print("No")
            exit()

for i in range(n):
    for j in range(1, n):
        if diffbm[i][j-1] != diffbm[i][j]:
            print("No")
            exit()

print("Yes")
b = c[ei]
a = [c[i][0]-b[0] for i in range(n)]

print(" ".join(list(map(str, a))))
print(" ".join(list(map(str, b))))