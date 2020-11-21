t = int(input())

for _ in range(t):
    n = int(input())

    if n == 1:
        print(0)
        continue

    if n == 2:
        print(1)
        continue

    if n == 3:
        print(2)
        continue

    if n%2 == 0 and n/2 > 0:
        print(2)
        continue

    print(3)
    