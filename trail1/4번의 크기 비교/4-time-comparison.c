#include <stdio.h>

int main() {
    int A, B, C, D, E;
    scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
    printf("%d\n%d\n%d\n%d\n", (A>B), (A>C), (A>D), (A>E));
    return 0;
}