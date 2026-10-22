N = int(input())
for i in range(N):
    for j in range(N):
        val = (N*i+j+1)%9 if (N*i+j+1)%9 != 0 else 9
        print(val, end="")
    print()