h,w = map(int,input().split())
s = list(list(input())for i in range(h))
cntng = 0
for i in range(h):
    cntng+= s[i].count("#")


start = (0,0) 
goal = (h-1,w-1)
vec = ((1,0),(0,1),(-1,0),(0,-1))

stack = [start]
move = 0

while stack:
    next = []
    move+=1
    for y,x in stack:
        for ny,nx in vec:
            ty,tx = y+ny,x+nx
            
            if ty>h-1 or tx>w-1 or ty<0 or tx<0:continue
            if s[ty][tx] == ".":
                s[ty][tx] = move
                next.append((ty,tx))
    stack = next
         
    stack = next
    if goal in stack:
        break
if s[h-1][w-1]== ".":
    print(-1)
    exit(0)
ans = max(0,h*w - (move+1)-cntng)
print(ans)
        

