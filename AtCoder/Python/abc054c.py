n,m = map(int, input().split())
ls = [tuple(map(int, input().split())) for _ in range(m)]
neighborls = []
for i in range(1,n+1):
    neighbors = []
    for j in range(1, m+1):
        if (i,j) in ls or (j,i) in ls:
            neighbors.append(j)
    neighborls.append(neighbors)

ans = 0

def main():
    visitedls = []
    dfs(1, visitedls)
    print(ans)
    
        
def dfs(a, visitedls):
    global ans
    visitedls.append(a)
    if len(visitedls) == n:
        ans += 1
    else:
        for i in neighborls[a-1]:
            if i not in visitedls:
                dfs(i, visitedls)
    visitedls.remove(a)

if __name__ == "__main__":
    main()