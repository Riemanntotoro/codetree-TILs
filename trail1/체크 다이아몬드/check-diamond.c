#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for (int i=1; i<=2*N-1; i++) {
        if (i<N) {
            for (int j=0; j<N-i; j++) {printf(" ");}
            for (int k=0; k<i; k++) {printf("* ");}
        }
        else if (i>N) {
            for (int j=0; j<i-N; j++) {printf(" ");}
            for (int k=0; k<2*N-i; k++) {printf("* ");}
        }
        else {
            for (int k=0; k<N; k++) {printf("* ");}
        }
        printf("\n");
    }
    return 0;
}