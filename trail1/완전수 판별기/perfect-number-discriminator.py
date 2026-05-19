N = int(input())
ssum = 0
for i in range(1, N):
    if N % i == 0:
        ssum += i
print("P" if ssum == N else "N")