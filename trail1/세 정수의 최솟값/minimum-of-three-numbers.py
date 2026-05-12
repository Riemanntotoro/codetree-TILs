lst = list(map(int, input().split()))
a, b, c = lst[0], lst[1], lst[2]
min_val = a
if b < min_val:
    min_val = b
if c < min_val:
    min_val = c
print(min_val)