arr = list(map(int, input().split()))
N, A = arr[0], arr[1]
i = 1
while i <= N:
    if i % A == 0:
        print(1)
    else:
        print(0)
    i += 1