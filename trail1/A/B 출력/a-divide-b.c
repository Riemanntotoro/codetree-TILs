#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    printf("%d.", A/B);
    int rem = A % B;
    for (int i=0; i<20; i++) {
        rem *= 10;
        printf("%d", rem/B);
        rem %= B;
    }
    return 0;
}