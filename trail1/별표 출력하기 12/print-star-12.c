#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    char board[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            board[i][j] = ' ';
        }
    }

    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            if (i==0) {board[i][j] = '*';}
            if (j % 2 == 1 && j >= i) {board[i][j] = '*';}
        }
    }
    
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
    return 0;
}