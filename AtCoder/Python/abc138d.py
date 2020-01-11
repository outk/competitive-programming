def fun(a: int, t: list, anls: list, ppxx: list):
    for k in range(len(t[a])):
        anls[t[a][k]] += ppxx[1]

def main():
    n, q = map(int, input().split())
    ansls = [0]*n
    tree = [[]]*n
    ans = ""

    for i in range(n-1):
        ab = list(map(int, input().split()))
        tree[ab[0]-1].append(ab[1]-1)

    for i in range(q):
        px = list(map(int, input().split()))
        ansls[px[0]-1] += px[1]
        if len(tree[tree[px[0]-1][]]) > 0:
            fun(px[0]-1, tree, ansls, px)           

    for i in range(n-1):
        ans += str(ansls[i]) + " "

    ans += str(ansls[n-1])
    print(ans)

if __name__ == "__main__":
    main()