lst = list(map(int, input().split()))
A, B, C = lst[0], lst[1], lst[2]
print(1 if B > A and B < C else 0)