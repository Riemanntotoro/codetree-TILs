S = int(input())
Y = int(input())

if S == 0 and Y >= 19:
    print("MAN")
elif S == 1 and Y >= 19:
    print("WOMAN")
elif S == 1 and Y < 19:
    print("GIRL")
else:
    print("BOY")