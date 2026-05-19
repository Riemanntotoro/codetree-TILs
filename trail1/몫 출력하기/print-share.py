cnt = 0
while True:
    N = int(input())
    if N % 2:
        continue
    print(N // 2)
    cnt += 1
    if cnt == 3:
        break
