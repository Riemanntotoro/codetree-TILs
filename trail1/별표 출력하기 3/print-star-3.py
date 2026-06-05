N = int(input())
for i in range(N, 0, -1):
    for j in range(2*(N-i)):
        print(end=" ")
    for k in range(2*i-1):
        print("*",end=" ")
    print()