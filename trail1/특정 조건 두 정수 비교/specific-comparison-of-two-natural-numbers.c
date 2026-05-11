#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int val1 = (a<b) ? 1 : 0;
    int val2 = (a==b) ? 1 : 0;
    printf("%d %d", val1, val2);
    return 0;
}