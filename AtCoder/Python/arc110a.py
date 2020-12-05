import sys

readline = sys.stdin.readline

def main():
    n = int(readline())

    ans = 1

    dic = dict()

    for i in range(2, 31):
        isprime = True
        for j in range(2, i):
            if i%j == 0 and i/j > 0:
                isprime = False
                break
        if isprime:
            dic[i] = 0

    for i in range(2, n+1):
        d = dict()
        p = i
        while p > 1:
            for k in dic.keys():
                if p%k == 0 and p/k > 0:
                    if k not in d.keys():
                        d[k] = 1
                    else:
                        d[k] += 1
                    p /= k
        for dk in d.keys():
            if dic[dk] < d[dk]:
                dic[dk] = d[dk]

    for kk in dic.keys():
        for i in range(dic[kk]):
            ans *= kk

    print(ans + 1)


if __name__ == "__main__":
    for i in range(28):
        main()