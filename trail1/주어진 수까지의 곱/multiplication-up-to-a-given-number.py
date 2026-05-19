lst = list(map(int, input().split()))
A, B = lst[0], lst[1]
prod = 1
for i in range(A, B+1):
    prod *= i
print(prod)