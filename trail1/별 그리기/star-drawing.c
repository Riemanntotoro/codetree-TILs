#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for (int i=1; i<=2*N-1; i++) {
        if (i <= N) {
            for (int j=0; j<N-i; j++) {
                printf(" ");
            }
            for (int k=0; k<2*i-1; k++) {
                printf("*");
            }
        }
        else {
            for (int j=0; j<i-N; j++) {
                printf(" ");
            }
            for (int k=0; k<2*(2*N-i)-1; k++) {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}