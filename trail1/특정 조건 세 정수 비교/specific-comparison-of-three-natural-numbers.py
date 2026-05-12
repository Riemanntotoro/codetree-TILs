lst = list(map(int, input().split()))
val = lst[0]
for i in lst:
    if i < val:
        val = i
print(1 if val == lst[0] else 0, 1 if lst[0]==lst[1] and lst[1]==lst[2] else 0)