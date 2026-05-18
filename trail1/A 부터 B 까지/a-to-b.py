lst = list(map(int, input().split()))
A, B = lst[0], lst[1]
i = A
while i <= B:
    print(i, end=" ")
    if i % 2 == 1:
        i *= 2
    else:
        i += 3