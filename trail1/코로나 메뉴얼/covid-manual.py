cnt = 0
for i in range(3):
    lst = list(input().split())
    T = int(lst[1])
    if (lst[0] == 'Y' and T >= 37):
        cnt += 1
print("E" if cnt >= 2 else "N")