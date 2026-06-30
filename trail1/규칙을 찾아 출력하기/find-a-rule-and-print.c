#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    char board[N][N];
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            if (i==0 || i==N-1 || j==0 || j==N-1) {board[i][j] = '*';}
            else if (i > j) {board[i][j] = '*';}
            else {board[i][j] = ' ';}
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