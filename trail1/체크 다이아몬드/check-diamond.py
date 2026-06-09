N = int(input())

for i in range(1, 2*N):
    if i < N:
        for j in range(N-i):
            print(" ", end="")
        for k in range(i):
            print("*", end=" ")
    elif i > N:
        for j in range(i-N):
            print(" ", end="")
        for k in range(2*N-i):
            print("*", end=" ")
    else:
        for k in range(N):
            print("*", end=" ")
    print()