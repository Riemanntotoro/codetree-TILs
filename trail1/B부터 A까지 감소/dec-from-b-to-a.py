arr = list(map(int, input().split()))
A, B = arr[0], arr[1]
for i in range(B, A-1, -1):
    print(i, end=" ")