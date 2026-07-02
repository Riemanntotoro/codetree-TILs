#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for (int i=N; i>0; i--) {
        for (int j=N; j>0; j--) {
            printf("(%d,%d) ", i, j);
        }
        printf("\n");
    }
    return 0;
}