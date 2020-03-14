n = int(input())

ls = [97 for _ in range(n)]

def f(lst, ind):
    if ind > 0 and ind < n:
        if max(lst[:ind]) + 1 >= lst[ind]:
            f(lst, ind+1)
        while max(lst[:ind]) + 1 >= lst[ind]:
            ans = ""
            for i in range(n):
                ans += chr(lst[i])
            print(ans)
            if lst[ind] + 1 > max(lst[:ind]) + 1:
                lst[ind] = 97
                lst[ind-1] += 1
                break
            else:
                lst[ind] += 1
        f(lst, ind-1)

if __name__ == "__main__":
    f(ls, n-1)
