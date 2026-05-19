#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    int prod = 1;
    for (int i=A; i<=B; i++) {prod *= i;}
    printf("%d", prod);
    return 0;
}