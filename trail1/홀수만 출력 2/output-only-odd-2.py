arr = list(map(int, input().split()))
B, A = arr[0], arr[1]
for i in range(B, A-1, -2):
    print(i, end=" ")