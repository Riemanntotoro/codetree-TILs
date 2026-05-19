while True:
    lst = list(input().split())
    a, b, c = int(lst[0]), int(lst[1]), lst[2]
    print(a * b)
    if c == 'C':
        break