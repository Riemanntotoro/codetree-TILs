lst = list(map(int, input().split()))
A, B = lst[0], lst[1]
if A % 2 == 0:
    A += 1
if B % 2 == 0:
    B -= 1

for i in range(A, B+1, 2):
    print(i, end=" ")