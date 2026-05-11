lst = list(map(int, input().split()))
A, B = lst[0], lst[1]
arr = [(A >= B), (A > B), (B >= A), (B > A), (A == B), (A != B)]
result = [1 if i else 0 for i in arr]
print(*result, sep="\n")