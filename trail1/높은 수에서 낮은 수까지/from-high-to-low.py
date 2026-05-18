lst = list(map(int, input().split()))
B, A = max(lst), min(lst)
for i in range(B, A-1, -1):
    print(i, end=" ")