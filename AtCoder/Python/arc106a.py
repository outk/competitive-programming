n = int(input())

a = 1

tmpn = n 

while tmpn > 0:
    tmpn = n - 3**a
    if tmpn%5 == 0 and tmpn/5 > 0:
        b = 1
        while True:
            if tmpn < pow(5, b):
                break
            if tmpn == pow(5, b):
                print(a, b)
                exit(0)
            b += 1
    a += 1

print(-1)