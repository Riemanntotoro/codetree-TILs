A = int(input())
lst = list(map(int, input().split()))
B, C, D, E = lst[0], lst[1], lst[2], lst[3]
print(1 if A > B else 0)
print(1 if A > C else 0)
print(1 if A > D else 0)
print(1 if A > E else 0)