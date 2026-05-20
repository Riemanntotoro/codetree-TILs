lst = list(map(int, input().split()))
a, b, c = lst[0], lst[1], lst[2]
flag = False
for i in range(a, b+1):
    if i % c == 0:
        flag = True
        break
print("YES" if flag==True else "NO")