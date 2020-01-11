def init_dict():
    global dic
    dic = {
        "a":0,"b":0,"c":0,"d":0,"e":0,"f":0,"g":0,"h":0,"i":0,"j":0,"k":0,"l":0,"m":0,"n":0,"o":0,"p":0,"q":0,"r":0,"s":0,"t":0,"u":0,"v":0,"w":0,"x":0,"y":0,"z":0
    }

def countchar(st: str):
    global dic
    global anls
    cp = dic.copy()
    for i in range(10):
        cp[st[i]] += 1
    anls.append(cp)

def search(ls:list):
    global ans
    for i in range(len(ls)-1):
        if ls[i] == ls[len(ls)-1]:
            ans += 1

def main():
    global dic
    global anls
    global ans
    n = int(input())
    dic = {
        "a":0,"b":0,"c":0,"d":0,"e":0,"f":0,"g":0,"h":0,"i":0,"j":0,"k":0,"l":0,"m":0,"n":0,"o":0,"p":0,"q":0,"r":0,"s":0,"t":0,"u":0,"v":0,"w":0,"x":0,"y":0,"z":0
    }
    anls = []
    ans = 0

    for i in range(n):
        s = input()
        init_dict()
        countchar(s)
        search(anls)
    
    print(ans)

if __name__ == "__main__":
    main()