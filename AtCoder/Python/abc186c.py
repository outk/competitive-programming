n = int(input())

ans = n

for i in range(1, n+1):
    if i%10 == 7:
        ans -= 1
    elif (i%100)//10 == 7:
        ans -= 1
    elif (i%1000)//100 == 7:
        ans -= 1
    elif (i%10000)//1000 == 7:
        ans -= 1
    elif (i%100000)//10000 == 7:
        ans -= 1
    elif i%8 == 7:
        ans -= 1
    elif (i%(8**2))//8 == 7:
        ans -= 1
    elif (i%(8**3))//(8**2) == 7:
        ans -= 1
    elif (i%(8**4))//(8**3) == 7:
        ans -= 1
    elif (i%(8**5))//(8**4) == 7:
        ans -= 1
    elif (i%(8**6))//(8**5) == 7:
        ans -= 1

print(ans)