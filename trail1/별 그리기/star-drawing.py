N = int(input())
for i in range(1, 2*N):
    if i <= N:
        for j in range(N-i):
            print(" ", end="")
        for k in range(2*i-1):
            print("*", end="")
    else:
        for j in range(i-N):
            print(" ", end="")
        for k in range(2*(2*N-i)-1):
            print("*", end="")
    print()