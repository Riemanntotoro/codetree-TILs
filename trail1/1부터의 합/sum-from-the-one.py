N = int(input())
ssum = 0
mark = 0
for i in range(1, 101):
    ssum += i
    if ssum >= N:
        mark = i
        break
print(mark)