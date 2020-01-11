from itertools import product

def main():
    n = int(input())
    a = []
    ls = []
    ans = 0
    for _ in range(n):
        ai = int(input())
        a.append(ai)
        ls.append([tuple(map(int, input().split())) for i in range(ai)])
    ptns = list(product([0,1], repeat=n))
    for ptn in ptns:
        flag = 0
        lsls = list(ptn)
        for j in range(n):
            if ptn[j] == 1:
                for i in range(a[j]):
                    if ls[j][i][1] == 1 and lsls[ls[j][i][0]-1] == 1:
                        lsls[ls[j][i][0]-1] *= ls[j][i][1]
                    elif ls[j][i][1] == 0 and lsls[ls[j][i][0]-1] == 0:
                        lsls[ls[j][i][0]-1] *= ls[j][i][1]
                    else:
                        flag = 1
        if flag == 0:
            if list(ptn) == lsls:
                if ans < sum(ptn):
                    ans = sum(ptn)
    print(ans)

if __name__ == "__main__":
    main()