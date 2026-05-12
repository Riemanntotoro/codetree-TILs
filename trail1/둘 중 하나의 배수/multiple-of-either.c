#include <stdio.h>

int main() {
    int A;
    scanf("%d", &A);
    int res = A % 3 == 0 || A % 5 == 0 ? 1 : 0;
    printf("%d", res);
    return 0;
}