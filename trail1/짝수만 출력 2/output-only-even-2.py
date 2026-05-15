lst = list(map(int, input().split()))
B, A = lst[0], lst[1]
i = B
while i >= A:
    print(i, end=" ")
    i -= 2