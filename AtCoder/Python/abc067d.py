import sys
input = sys.stdin.readline

n = int(input())
neighbors = [[]]*n
for _ in range(n-1):
    a,b = map(int, input().split())
    neighbors[a-1].append(b-1)
    neighbors[b-1].append(a-1)
visiteda = [False]*n
visitedb = [False]*n
path = []
als = [0]*n
bls = [0]*n

def dfsa(a):
    global visiteda, path
    if visiteda[a] == False:
        visiteda[a] = True
        path.append(a)
        for nxt in neighbors[a]:
            dfsa(nxt)
            del path[-1]
        als[a] = len(path)

def dfsb(a):
    global visitedb, path
    if visitedb[a] == False:
        visitedb[a] = True
        path.append(a)
        print(path)
        for nxt in neighbors[a]:
            dfsb(nxt)
            del path[-1]
        bls[a] = len(path)
        

def main():
    dfsa(0)
    dfsb(n-1)
    ascore = 0
    bscore = 0
    for i in range(n):
        if als[i] <= bls[i]:
            ascore += 1
        else:
            bscore += 1
    print(als, bls)
    if ascore > bscore:
        print("Fennec")
    else:
        print("Snuke")

if __name__ == "__main__":
    main()