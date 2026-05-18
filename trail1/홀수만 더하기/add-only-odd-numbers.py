N = int(input())
ssum = 0
for _ in range(N):
    a = int(input())
    if a % 3 == 0 and a % 2 == 1:
        ssum += a
print(ssum)