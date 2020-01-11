def main():
    n = int(input())
    lis = list(map(int, input().split()))
    m = 0
    minas = 0
    pulus = 0
    zero = 0
    minele = 100001
    maxele = -100001

    anlis = [""]*(n)

    for i in range(n):
        if lis[i] > 0:
            pulus += 1
        elif lis[i] < 0:
            minas += 1
        else:
            zero += 1
        
        if minele > lis[i]:
            minele = lis[i]
        if maxele < lis[i]:
            maxele = lis[i]

    for i in range(n):
        if minas >= pulus and minas > 0 and pulus > 0:
            m = maxele - minele
            lis.remove(maxele)
            lis.remove(minele)
            lis.append(m)
            anlis[i] = str(maxele)+" "+str(minele)
            maxele = m
            minas -= 1
        elif minas < pulus and minas > 0 and pulus > 0:
            m = minele - maxele
            lis.remove(maxele)
            lis.remove(minele)
            lis.append(m)
            anlis[i] = str(minele)+" "+str(maxele)
            minele = m
            pulus -= 1
        elif minas > 0 and pulus == 0:
            m = -minele
            lis.remove(minele)
            lis.append(m)
            anlis[i] = "0"+" "+str(minele)
            minas -= 1
            pulus += 1
            maxele = m
            minele = min(lis)
        elif pulus > 0 and minas == 0:
            m = -maxele
            lis.remove(maxele)
            lis.append(m)
            anlis[i] = "0"+" "+str(maxele)
            minas += 1
            pulus -= 1
            minele = m
            maxele = max(lis)

    print(abs(m))
    for i in range(n-1):
        print(anlis[i])

if __name__ == "__main__":
    main()