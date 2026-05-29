N = int(input())
cnt = N
for i in range(1, 2*N):
    if i > cnt:
        for j in range(2*N - i):
            print("*", end=" ")
    else:    
        for j in range(i):
            print("*", end=" ")
    print()