N = int(input())
for i in range(N):
    for j in range(N-i, 0, -1):
        print("*", end="")
    for k in range(2*i):
        print(" ", end="")
    for l in range(N-i, 0, -1):
        print("*", end="")
    print()