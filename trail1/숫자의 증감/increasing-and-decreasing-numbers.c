#include <stdio.h>

int main() {
    int N;
    char C;
    scanf("%c %d", &C, &N);
    if (C == 'A') {
        for (int i=1; i<=N; i++) {
            printf("%d ", i);
        }
    }
    if (C == 'D') {
        for (int i=N; i>0; i--) {
            printf("%d ", i);
        }
    }
    return 0;
}