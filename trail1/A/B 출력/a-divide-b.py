lst = list(map(int, input().split()))
A, B = lst[0], lst[1]

print(A//B, end="")
print(".", end="")
rem = A % B
for _ in range(20):
    rem *= 10
    print(rem//B, end="")
    rem %= B
