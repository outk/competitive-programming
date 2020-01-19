h = int(input())
w = int(input())
n = int(input())

if h > w:
    if n%h == 0:
        print(int(n/h))
    else:
        print(int(n/h) + 1)
else:
    if n%w == 0:
        print(int(n/w))
    else:
        print(int(n/w) + 1)