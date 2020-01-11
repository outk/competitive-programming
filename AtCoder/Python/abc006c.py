def main():
    n,m = map(int, input().split())
    a,b,c = -1,-1,-1
    if m%2 == 0:
        for ci in range((m//4)+1):
            ai = (m-4*ci)//2
            if ai >= 0:
                if ai+ci == n:
                    a = ai
                    b = 0
                    c = ci
                    break
            else:
                break
    else:
        n = n-1
        m = m-3
        for ci in range((m//4)+1):
            ai = (m-4*ci)//2
            if ai >= 0:
                if ai+ci == n:
                    a = ai
                    b = 1
                    c = ci
                    break
            else:
                break
        
    print(a,b,c)

if __name__ == "__main__":
    main()