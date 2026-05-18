#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    int ssum = 0;
    for (int i=A; i<=B; i++) {
        ssum += i;
    }
    printf("%d", ssum);
    return 0;
}