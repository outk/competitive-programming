a = input()
answer = 0

a = a.replace("B", "-")
a = a.replace("D", "-")
a = a.replace("E", "-")
a = a.replace("F", "-")
a = a.replace("H", "-")
a = a.replace("I", "-")
a = a.replace("J", "-")
a = a.replace("K", "-")
a = a.replace("L", "-")
a = a.replace("M", "-")
a = a.replace("N", "-")
a = a.replace("O", "-")
a = a.replace("P", "-")
a = a.replace("Q", "-")
a = a.replace("R", "-")
a = a.replace("S", "-")
a = a.replace("U", "-")
a = a.replace("V", "-")
a = a.replace("W", "-")
a = a.replace("X", "-")
a = a.replace("Y", "-")
a = a.replace("Z", "-")

strs = int(a.count("-")) + 1
a = a.split("-")

for i in range(strs):
    if len(a[i]) > answer:
        answer = len(a[i])

print(answer)
