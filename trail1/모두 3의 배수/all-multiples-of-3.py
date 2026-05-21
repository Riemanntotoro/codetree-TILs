flag = True
for _ in range(5):
    N = int(input())
    if N % 3 != 0:
        flag = False
print(1 if flag==True else 0)