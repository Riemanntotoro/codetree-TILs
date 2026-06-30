N = int(input())
board = [[' ' for _ in range(N)] for _ in range(N)]
for i in range(N):
    for j in range(N):
        if i == 0:
            board[i][j] = '*'
        if j % 2 == 1 and j >= i:
            board[i][j] = '*'

for i in range(N):
    for j in range(N):
        print(board[i][j], end=' ')
    print()