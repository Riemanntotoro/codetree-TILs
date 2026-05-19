lst = list(map(int, input().split()))
A, B = lst[0], lst[1]
prod = 1
for i in range(1, B+1):
    if i % A == 0:
        prod *= i
print(prod)