lst3 = 0
lst5 = 0
for _ in range(10):
    i = int(input())
    if i % 3 == 0:
        lst3 += 1
    if i % 5 == 0:
        lst5 += 1

print(lst3, lst5)