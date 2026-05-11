lst = list(map(int, input().split()))
a, b = lst[0], lst[1]
val1 = 1 if a < b else 0
val2 = 1 if a == b else 0
print(val1, val2)