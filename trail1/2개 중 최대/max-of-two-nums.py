lst = list(map(int, input().split()))
A, B = lst[0], lst[1]
val = A if A > B else B
print(val)