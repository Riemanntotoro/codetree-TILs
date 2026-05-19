N = int(input())
cnt, i = 0, 1
while N > 1:
    N //= i
    cnt += 1
    i += 1
print(cnt)