lst = list(map(int, input().split()))
A, B = lst[0], lst[1]
ssum = 0
for i in range(A, B+1):
    ssum += i
print(ssum)