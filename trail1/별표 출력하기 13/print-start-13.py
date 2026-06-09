N = int(input())
for i in range(1, 2*N+1):
    if i <= N:
        if i % 2 == 1:
            for j in range(N-i//2):
                print("*", end=" ")
        else:
            for j in range(i//2):
                print("*", end=" ")
    else:
        l = 2* N - i + 1
        if l % 2 == 1:
            for j in range(N-l//2):
                print("*", end=" ")
        else:
            for j in range(l//2):
                print("*", end=" ")
    print()