def main():
    h, w, a, b = map(int, input().split())
    mtx = [[0]*w]*h
    ans = ""
    flag = 0
    
    for i in range(w):
        for j in range(b):
            mtx[i][j] = 1

    for i in range(h):
        if 

    for i in range(h):
        if sum(mtx[i]) != a:
            ans = "No"
            break

    if ans != "No":
        for i in range(h):
            for j in range(w):
                ans += str(mtx[i][j]) + " "
            print(ans)
    else:
        print(ans)
        

if __name__ == "__main__":
    main()