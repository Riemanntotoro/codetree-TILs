N = int(input())
board = [[0 for _ in range(N)] for _ in range(N)]
for i in range(N):
    for j in range(N):
        board[i][j] = 11 + 2*i + 2*j
for i in range(N):
    for j in range(N):
        print(board[i][j], end=" ")
    print()
        