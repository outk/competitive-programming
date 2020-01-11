from math import factorial

def main():
    x, y = map(int, input().split())
    inf = 10e9 + 7

    ans = 0
    ue = 0
    yoko = 0
    conbination = 0

    if (x+y)%3 == 0:
        if x <= y:
            if x >= y/2.0:
                while x != y/2.0:
                    yoko += 1
                    x -= 2
                    y -= 1
                ue = int(x)
        else:
            if y >= x/2.0: 
                while y != x/2.0:
                    ue += 1
                    x -= 1
                    y -= 2
                yoko = int(y)

        a = int((factorial(int(ue)+int(yoko))%inf) / (factorial(int(ue))%inf) / (factorial(int(yoko))%inf))
        ans = a % inf
        # print(ue, yoko, a)

    print(ans)

if __name__ == "__main__":
    main()