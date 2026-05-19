lst = list(map(int, input().split()))
A, B = lst[0], lst[1]
ssum = 0
for i in range(A, B+1):
    if i % 6 == 0 and i % 8 != 0:
        ssum += i
print(ssum)