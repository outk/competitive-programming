x = input()
n = len(x)

ans = 0 

for i in range(1, 10**(n+2)//2):
    if i*(10**len(str(i))) + i <= int(x):
        ans += 1
    else:
        break

print(ans)
    