lst = list(map(int, input().split()))
A, B = lst[0], lst[1]
score = 0
if A >= 90:
    if B >= 95:
        print(100000)
    elif B >= 90:
        print(50000)
    else:
        print(0)
else:
    print(0)