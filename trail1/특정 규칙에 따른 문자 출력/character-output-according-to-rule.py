N = int(input())
for i in range(1, 2*N):
    if i <= N:
        for j in range(2*(N-i)):
            print(" ", end="")
        for k in range(i):
            print("@", end=" ")
    else:
        for j in range(2*N-i):
            print("@", end=" ")
    print()