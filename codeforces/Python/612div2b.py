from collections import deque
import bisect

n,k = map(int, input().split())
cards = []
for _ in range(n):
    s = input()
    card = ""
    for i in range(k):
        if s[i] == "E":
            card += "1"
        elif s[i] == "S":
            card += "2"
        else:
            card += "3"
    cards.append(int(card))

cards.sort()

ans = 0

dq = deque([])

for i in range(n-2):
    dq.append(str(cards[i]))
    j = i+1
    while j < n-1:
        dq.append(str(cards[j]))
        tmps = ""
        for kk in range(k):
            if dq[0][kk] == dq[1][kk]:
                tmps += dq[0][kk]
            else:
                if dq[0][kk] != "1" and dq[1][kk] != "1":
                    tmps += "1"
                elif dq[0][kk] != "2" and dq[1][kk] != "2":
                    tmps += "2"
                else:
                    tmps += "3"
        ind = bisect.bisect_left(cards, int(tmps))
        if ind < n and 0 <= ind:
            if cards[ind] == int(tmps):
                ans += 1
        d = dq.pop()
        j += 1
    d = dq.pop()

print(ans)