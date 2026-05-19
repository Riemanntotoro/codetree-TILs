#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    int prod = 1;
    for (int i=0; i<B; i++) {
        prod *= A;
    }
    printf("%d", prod);
    return 0;
}