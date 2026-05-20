N = int(input())
flag = False
for i in range(2, N):
    if N % i == 0:
        flag = True
        break
print("C" if flag==True else "N")