#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int size = 2*N+1;
    char board[size][size];
    for (int i=0; i<size; i++) {
        for (int j=0; j<size; j++) {
            if (i % 2 == 1 && j % 2 == 1) {board[i][j] = ' ';}
            else {board[i][j] = '*';}
        }
    }
    for (int i=0; i<size; i++) {
        for (int j=0; j<size; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
    return 0;
}