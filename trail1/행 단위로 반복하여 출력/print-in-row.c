#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int board[N][N];
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            board[i][j] = j+1;
        }
    }
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            printf("%d", board[i][j]);
        }
        printf("\n");
    }
    return 0;
}