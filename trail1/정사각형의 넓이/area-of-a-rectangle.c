#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    printf("%d\n", N*N);
    if (N<5) {printf("tiny\n");}
    return 0;
}