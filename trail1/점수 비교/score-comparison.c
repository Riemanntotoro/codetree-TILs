#include <stdio.h>

int main() {
    int AM, AE, BM, BE;
    scanf("%d %d %d %d", &AM, &AE, &BM, &BE);
    int val = (AM > BM) && (AE > BE) ? 1 : 0;
    printf("%d", val);
    return 0;
}