ssum = 0
cnt = 0
while True:
    n = int(input())
    if n >= 30 or n < 20:
        print(f"{ssum / cnt:.2f}")
        break
    ssum += n
    cnt += 1 