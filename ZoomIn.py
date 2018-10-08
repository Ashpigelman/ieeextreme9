cwidth = int(input())
cheight = int(input())
charcount = int(input())
chars = {}
for i in range(charcount):
    ch = input()
    rows = []
    for r in range(cheight):
        rows.append(input())
    chars[ch] = rows
for i in range(int(input())):
    mystr = input()
    for r in range(cheight):
        for s in mystr:
            print(chars[s][r], end="")
        print()
