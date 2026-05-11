lst = list(map(int, input().split()))
A, B = lst[0], lst[1]
print(1 if A>=B else 0)
print(1 if A>B else 0)
print(1 if B>=A else 0)
print(1 if B>A else 0)