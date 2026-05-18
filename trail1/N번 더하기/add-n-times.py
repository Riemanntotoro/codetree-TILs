lst = list(map(int, input().split()))
A, N = lst[0], lst[1]
for _ in range(N):
    A += N
    print(A)