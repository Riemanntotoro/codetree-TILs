#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for (int i=1; i<2*N; i++) {
        if (i <= N) {
            for (int j=0; j<2*(i-1); j++) {
                printf(" ");
            }
            for (int k=0; k<2*(N-i) + 1; k++) {
                printf("* ");
            }
        }
        else {
            for (int j=0; j<2*(2*N-i-1); j++) {
                printf(" ");
            }
            for (int k=0; k<2*(i-N) + 1; k++) {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}