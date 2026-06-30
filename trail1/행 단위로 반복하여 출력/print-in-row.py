N = int(input())
board = [[0 for _ in range(N)] for _ in range(N)]
for i in range(N):
    for j in range(N):
        board[i][j] = j+1

for i in range(N):
    for j in range(N):
        print(board[i][j], end="")
    print()
        