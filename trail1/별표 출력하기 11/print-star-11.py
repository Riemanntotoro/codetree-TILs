N = int(input())
size = 2 * N + 1
board = [['*' for _ in range(size)] for _ in range(size)]
for i in range(size):
    for j in range(size):
        if i % 2 == 1 and j % 2 == 1:
            board[i][j] = ' '

for i in range(size):
    for j in range(size):
        print(board[i][j], end=' ')
    print()