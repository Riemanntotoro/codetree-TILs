#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    int cnt = 0;
    int ssum = 0;
    for (int i=A; i<=B; i++) {
        if (i % 5 == 0 || i % 7 == 0) {
            ssum += i;
            cnt += 1;
        }
    }
    printf("%d %.1lf", ssum, (double)ssum/cnt);
    return 0;
}