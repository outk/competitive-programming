n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
c = list(map(int, input().split()))

ans = 0

for i in range(n-1):
    ans += b[a[i]-1]
    if a[i+1] == a[i] + 1:
        ans += c[a[i]-1]

ans += b[a[n-1]-1]

print(ans)




# abc140d -
n,k = map(int, input().split())
s = input()

ans = 0
flag = 0

for i in range(n-1):
    if s[i] == s[i+1]:
        ans += 1

for i in range(n-1):
    if s[i] != s[i+1]:
        flag += 1

if k > flag//2:
    ans = n-1
elif flag > 1:
    ans += 2*k
else:
    ans += 1

print(ans)



# abc140e -
def func(a int, n int, list list):


def main():
    n = int(input())
    p = list(map(int, input().split()))

    for i in range(n-1):
        func(i)

if __name__ == "__main__":
    main()
