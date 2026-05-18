def check(i):
    if i >= 90:
        return "A"
    elif i >= 80:
        return "B"
    elif i >= 70:
        return "C"
    elif i >= 60:
        return "D"
    else:
        return "F"

N = int(input())
for i in range(N, 101):
    print(check(i), end=" ")