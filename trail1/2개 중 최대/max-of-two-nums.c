#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    int val = A>B ? A : B;
    printf("%d", val);
    return 0;
}