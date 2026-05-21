N = int(input())
flag = True
for i in range(2, N):
    if N % i == 0:
        flag = False
        break
print("P" if flag==True else "C")