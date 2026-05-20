lst = list(map(int, input().split()))
flag = False
A, B = lst[0], lst[1]
for i in range(A, B+1):
    if 1920 % i == 0 and 2880 % i == 0:
        flag = True
        break
print(1 if flag==True else 0) 