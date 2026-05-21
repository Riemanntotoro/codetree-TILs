#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for(int k=0; k<2; k++) {
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}