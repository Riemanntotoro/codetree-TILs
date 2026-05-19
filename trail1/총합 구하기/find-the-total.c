#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    int ssum = 0;
    for (int i=A; i<=B; i++) {
        if (i % 6 == 0 && i % 8 != 0) {ssum += i;}
    }
    printf("%d", ssum);
    return 0;
}