def main():
    n,y = map(int, input().split())
    n1000 = y/1000
    n5000 = 0
    n10000 = 0
    a,b,c = -1, -1, -1
    flag = False
    if n <= n1000:
        for bi in range((y//5000)+1):
            for ci in range((y//10000)+1):
                if n1000-5*bi-10*ci >= 0:
                    if n1000-4*bi-9*ci == n:
                        c = n1000-5*bi-10*ci
                        b = bi
                        a = ci
                        flag = True
                        break
                else:
                    break
            if flag:
                break
    print(int(a),int(b),int(c))
        


if __name__ == "__main__":
    main()