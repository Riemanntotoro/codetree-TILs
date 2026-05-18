lst = list(input().split())
C = lst[0]
N = int(lst[1])
if C == "A":
    print(*[i for i in range(1, N+1)])
else:
    print(*[i for i in range(N, 0, -1)])