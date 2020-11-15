import sys

readline = sys.stdin.readline

def main():
    n, w = map(int, readline().split())
    stp = [tuple(map(int, readline().split())) for _ in range(n)]
    
    plusls = [0 for _ in range(200001)]
    minusls = [0 for _ in range(200001)]

    for s, t, p in stp:
        plusls[s] += p
        minusls[t] += p

    demandls = [0 for _ in range(len(plusls))]
    demandls[0] = plusls[0] - minusls[0]

    for i in range(1, len(demandls)):
         demandls[i] = demandls[i-1] + plusls[i] - minusls[i]

    if max(demandls) > w:
        print("No")
    else:
        print("Yes")
if __name__ == "__main__":
    main()