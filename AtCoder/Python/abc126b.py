s = input()

sf = int(s[:2])
sb = int(s[2:4])

ans = ""

if 1 <= sf <= 12:

    if 1 <= sb <= 12:
        ans = "AMBIGUOUS"
    else:
        ans = "MMYY"

else:

    if 1 <= sb <= 12:
        ans = "YYMM"
    else:
        ans = "NA"

print(ans)