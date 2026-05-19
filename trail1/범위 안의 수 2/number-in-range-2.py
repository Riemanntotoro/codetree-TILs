cnt = 0
ssum = 0
for _ in range(10):
    a = int(input())
    if a>=0 and a<=200:
        ssum += a
        cnt += 1
print(ssum, f"{ssum/cnt:.1f}")