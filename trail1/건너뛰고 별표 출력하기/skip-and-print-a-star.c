#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for (int i=1; i<=N; i++) {
        for (int j=0; j<i; j++) {
            printf("*");
        }
        printf("\n\n");
    }
    for (int i=N-1; i>=1; i--) {
        for (int j=0; j<i; j++) {
            printf("*");
        }
        printf("\n\n");
    }
    return 0;
}