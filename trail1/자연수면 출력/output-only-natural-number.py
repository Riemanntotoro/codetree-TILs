lst = list(map(int, input().split()))
A, B = lst[0], lst[1]
if A > 0:
    for _ in range(B):
        print(A, end="")
else:
    print(0)