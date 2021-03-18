import sys

readline = sys.stdin.readline


def main():
    t = int(readline())

    for tt in range(t):
        n = int(readline())

        c = list(map(int, readline().split()))

        codd = [c[2*i] for i in range((n+1)//2)]
        ceven = [c[2*i+1] for i in range(n//2)]

        # print(codd, ceven)

        coddpresum = [0 for _ in range(len(codd))]
        cevenpresum = [0 for _ in range(len(ceven))]
        coddpresum[0] = codd[0]
        cevenpresum[0] = ceven[0]

        for i in range(1, len(codd)):
            coddpresum[i] = coddpresum[i-1] + codd[i]
        for i in range(1, len(ceven)):
            cevenpresum[i] = cevenpresum[i-1] + ceven[i] 

        # print(coddpresum, cevenpresum)

        optcoddcost = n*codd[0]
        optcevencost = n*ceven[0]

        mincost = optcoddcost + optcevencost

        coddmin = codd[0]
        # for i in range(1, len(codd)):
        #     if coddmin > codd[i]:
        #         coddmin = codd[i]
        cevenmin = ceven[0]
        # for i in range(1, len(ceven)):
        #     if cevenmin > ceven[i]:
        #         cevenmin = ceven[i]

        for nn in range(3, n+1):
            if nn % 2:
                if coddmin > codd[nn//2]:
                    coddmin = codd[nn//2]
            else:
                if cevenmin > ceven[(nn-1)//2]:
                    cevenmin = ceven[(nn-1)//2]

            if mincost > coddpresum[(nn-1)//2] + cevenpresum[nn//2-1] + (n-(nn+1)//2)*coddmin + (n-nn//2)*cevenmin:
                mincost = coddpresum[(nn-1)//2] + cevenpresum[nn//2-1] + (n-(nn+1)//2)*coddmin + (n-nn//2)*cevenmin     

            # print(tt, nn, mincost, coddpresum[(nn-1)//2], cevenpresum[nn//2-1], (n-(nn+1)//2)*coddmin, (n-nn//2)*cevenmin  )
        print(mincost)


if __name__ == "__main__":
    main()