#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        for (int j=N-i; j>=1; j--) {
            printf("*");
        }
        for (int k=0; k<2*i; k++) {
            printf(" ");
        }
        for (int j=N-i; j>=1; j--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}