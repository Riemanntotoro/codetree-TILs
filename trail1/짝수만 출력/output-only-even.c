#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    int i = A;
    while (i <= B) {
        printf("%d ", i);
        i += 2;
    }
    return 0;
}