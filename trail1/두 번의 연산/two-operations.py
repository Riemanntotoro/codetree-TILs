A = int(input())
if A % 2:
    A += 3
if not A % 3:
    A //= 3
print(A)