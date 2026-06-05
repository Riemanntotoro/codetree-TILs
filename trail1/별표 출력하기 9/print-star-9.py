N = int(input())
for i in range(N-1, -1, -1):
    for j in range(2*i):
        print(" ", end="")
    for k in range(2 *(N-i)-1):
        print("*", end=" ")
    print()

