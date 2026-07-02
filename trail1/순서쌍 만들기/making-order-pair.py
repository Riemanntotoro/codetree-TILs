N = int(input())
for j in range(N, 0, -1):
    for i in range(N, 0, -1):
        print(f"({j},{i})", end=" ")
    print()