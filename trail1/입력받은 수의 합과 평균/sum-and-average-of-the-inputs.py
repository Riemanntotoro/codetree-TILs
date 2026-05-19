N = int(input())
ssum = 0
for _ in range(N):
    a = int(input())
    ssum += a
print(ssum, f"{ssum / N:.1f}")