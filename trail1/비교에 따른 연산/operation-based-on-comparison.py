lst = list(map(int, input().split()))
a, b = lst[0], lst[1]
if a > b:
    print(a * b)
else:
    print(b // a)