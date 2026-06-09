#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for (int i=1; i<=2*N; i++) {
        if (i <= N) {
            if (i % 2 == 1) {for (int j=0; j<N-i/2; j++) {printf("* ");}}
            else {for (int k=0; k<i/2; k++) {printf("* ");}}
        }
        else {
            int l = 2*N - i + 1;
            if (l % 2 == 1) {for (int j=0; j<N-l/2; j++) {printf("* ");}}
            else {for (int k=0; k<l/2; k++) {printf("* ");}}
        }
        printf("\n");
    }
    return 0;
}