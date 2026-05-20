lst = list(map(int, input().split()))
a, b, c = lst[0], lst[1], lst[2]
flag = True
for i in range(a, b):
    if i % c == 0:
        flag = False
        break
print("YES" if flag==True else "NO")