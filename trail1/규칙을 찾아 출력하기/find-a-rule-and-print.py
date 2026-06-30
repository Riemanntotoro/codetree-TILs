N = int(input())
board = [[' ' for _ in range(N)] for _ in range(N)]
for i in range(N):
    for j in range(N):
        if i==0 or i==N-1 or j==0 or j==N-1:
            board[i][j] = '*'
        elif i > j:
            board[i][j] = '*'
        else:
            board[i][j] = ' '

for i in range(N):
    for j in range(N):
        print(board[i][j], end=" ")
    print()