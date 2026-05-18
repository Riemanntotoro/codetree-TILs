lst = list(map(int, input().split()))
A, B = lst[0], lst[1]
ssum = 0
cnt = 0
for i in range(A, B+1):
    if not i % 5 or not i % 7:
        ssum += i
        cnt += 1
print(f"{ssum} {ssum/cnt:.1f}")