lst = list(map(int, input().split()))
N, M = lst[0], lst[1]
for i in range(N):
    for j in range(M):
        print("*", end=" ")
    print()