#include <stdio.h>

int main() {
    int B, A;
    scanf("%d %d", &B, &A);
    int i = B;
    while (i >= A) {
        printf("%d ", i);
        i -= 2;
    }
    return 0;
}