#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    int val = (B > A && B < C) ? 1 : 0;
    printf("%d", val);
    return 0;
}