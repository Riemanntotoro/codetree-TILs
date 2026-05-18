lst = list(map(int, input().split()))
A, B = lst[0], lst[1]
ssum = 0
if A > B:
    for i in range(B, A+1):
        if i % 5 == 0:
            ssum += i
else:
    for i in range(A, B+1):
        if i % 5 == 0:
            ssum += i
print(ssum)