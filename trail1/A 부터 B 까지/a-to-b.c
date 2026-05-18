#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    int i=A;
    while (i<=B) {
        printf("%d ", i);
        if (i % 2 == 1) {i *= 2;}
        else {i += 3;}
    }
    return 0;
}