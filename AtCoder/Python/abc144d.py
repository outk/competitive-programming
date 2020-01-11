import math

def main():
    a, b, x = map(float, input().split())

    if x <= a*a*b*0.5:
        y = 2*x/(a*b)
        p = y/((b**2 + y**2)**0.5)
        ans = math.degrees(math.acos(p))
    elif x < a*a*b:
        k = (2*a*x - a*a*a*b)/(2*a*a*b -2*x)
        ans = math.degrees(math.atan(b/(a+k)))
    else:
        ans = 0
    print(ans)

if __name__ == "__main__":
    main()